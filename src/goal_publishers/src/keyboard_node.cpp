#include <rclcpp/rclcpp.hpp>
#include <std_msgs/msg/string.hpp>

#include <iostream>

class KeyboardNode : public rclcpp::Node
{
public:
    KeyboardNode()
    : Node("keyboard_node")
    {
        publisher_ = this->create_publisher<std_msgs::msg::String>(
            "trajectory_type", 10);

        RCLCPP_INFO(this->get_logger(),
                    "Keyboard control:");
        RCLCPP_INFO(this->get_logger(),
                    "  1 = line");
        RCLCPP_INFO(this->get_logger(),
                    "  2 = circle");
        RCLCPP_INFO(this->get_logger(),
                    "  3 = vertical");

        keyboard_thread_ = std::thread(
            &KeyboardNode::keyboard_loop, this);
    }

    ~KeyboardNode()
    {
        if (keyboard_thread_.joinable()) {
            keyboard_thread_.join();
        }
    }

private:
    void keyboard_loop()
    {
        char key;

        while (rclcpp::ok()) {
            std::cin >> key;

            std_msgs::msg::String msg;

            if (key == '1') {
                msg.data = "line";
            }
            else if (key == '2') {
                msg.data = "circle";
            }
            else if (key == '3') {
                msg.data = "vertical";
            }
            else {
                RCLCPP_WARN( this->get_logger(), "Unknown input: '%c'. Please enter 1, 2, or 3.", key);
                continue;
            }

            publisher_->publish(msg);

            RCLCPP_INFO(
                this->get_logger(),
                "Selected trajectory: %s",
                msg.data.c_str());
        }
    }

    rclcpp::Publisher<std_msgs::msg::String>::SharedPtr publisher_;
    std::thread keyboard_thread_;
};

int main(int argc, char * argv[])
{
    rclcpp::init(argc, argv);

    auto node = std::make_shared<KeyboardNode>();

    rclcpp::spin(node);

    rclcpp::shutdown();

    return 0;
}