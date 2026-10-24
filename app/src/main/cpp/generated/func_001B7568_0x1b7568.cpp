#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include <ps2_recompiled_functions.h>
#include <ps2_recompiled_stubs.h>

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: func_001B7568
// Address: 0x1b7568 - 0x1b7680
void func_001B7568_0x1b7568(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_001B7568_0x1b7568");
#endif

    ctx->pc = 0x1b7568u;

    // 0x1b7568: 0x84a30046  lh          $v1, 0x46($a1)
    ctx->pc = 0x1b7568u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 70)));
    // 0x1b756c: 0x28620030  slti        $v0, $v1, 0x30
    ctx->pc = 0x1b756cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)48) ? 1 : 0);
    // 0x1b7570: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1B7570u;
    {
        const bool branch_taken_0x1b7570 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B7574u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B7570u;
        // 0x1b7574: 0x2862002e  slti        $v0, $v1, 0x2E (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)46) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b7570) {
            ctx->pc = 0x1B758Cu;
            goto label_1b758c;
        }
    }
    ctx->pc = 0x1B7578u;
    // 0x1b7578: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1B7578u;
    {
        const bool branch_taken_0x1b7578 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B757Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B7578u;
        // 0x1b757c: 0x2462fff9  addiu       $v0, $v1, -0x7 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967289));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b7578) {
            ctx->pc = 0x1B7590u;
            goto label_1b7590;
        }
    }
    ctx->pc = 0x1B7580u;
    // 0x1b7580: 0x8c8205b4  lw          $v0, 0x5B4($a0)
    ctx->pc = 0x1b7580u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1460)));
    // 0x1b7584: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x1b7584u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x1b7588: 0xac8205b4  sw          $v0, 0x5B4($a0)
    ctx->pc = 0x1b7588u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 1460), GPR_U32(ctx, 2));
label_1b758c:
    // 0x1b758c: 0x2462fff9  addiu       $v0, $v1, -0x7
    ctx->pc = 0x1b758cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967289));
label_1b7590:
    // 0x1b7590: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x1b7590u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x1b7594: 0x1440002a  bnez        $v0, . + 4 + (0x2A << 2)
    ctx->pc = 0x1B7594u;
    {
        const bool branch_taken_0x1b7594 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B7598u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B7594u;
        // 0x1b7598: 0x2462fff8  addiu       $v0, $v1, -0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967288));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b7594) {
            ctx->pc = 0x1B7640u;
            goto label_1b7640;
        }
    }
    ctx->pc = 0x1B759Cu;
    // 0x1b759c: 0x24020015  addiu       $v0, $zero, 0x15
    ctx->pc = 0x1b759cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
    // 0x1b75a0: 0x10620026  beq         $v1, $v0, . + 4 + (0x26 << 2)
    ctx->pc = 0x1B75A0u;
    {
        const bool branch_taken_0x1b75a0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1B75A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B75A0u;
        // 0x1b75a4: 0x24020013  addiu       $v0, $zero, 0x13 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b75a0) {
            ctx->pc = 0x1B763Cu;
            goto label_1b763c;
        }
    }
    ctx->pc = 0x1B75A8u;
    // 0x1b75a8: 0x10620024  beq         $v1, $v0, . + 4 + (0x24 << 2)
    ctx->pc = 0x1B75A8u;
    {
        const bool branch_taken_0x1b75a8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1B75ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B75A8u;
        // 0x1b75ac: 0x24020018  addiu       $v0, $zero, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b75a8) {
            ctx->pc = 0x1B763Cu;
            goto label_1b763c;
        }
    }
    ctx->pc = 0x1B75B0u;
    // 0x1b75b0: 0x10620022  beq         $v1, $v0, . + 4 + (0x22 << 2)
    ctx->pc = 0x1B75B0u;
    {
        const bool branch_taken_0x1b75b0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1B75B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B75B0u;
        // 0x1b75b4: 0x2402001c  addiu       $v0, $zero, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b75b0) {
            ctx->pc = 0x1B763Cu;
            goto label_1b763c;
        }
    }
    ctx->pc = 0x1B75B8u;
    // 0x1b75b8: 0x10620020  beq         $v1, $v0, . + 4 + (0x20 << 2)
    ctx->pc = 0x1B75B8u;
    {
        const bool branch_taken_0x1b75b8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1B75BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B75B8u;
        // 0x1b75bc: 0x24020021  addiu       $v0, $zero, 0x21 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 33));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b75b8) {
            ctx->pc = 0x1B763Cu;
            goto label_1b763c;
        }
    }
    ctx->pc = 0x1B75C0u;
    // 0x1b75c0: 0x1062001e  beq         $v1, $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x1B75C0u;
    {
        const bool branch_taken_0x1b75c0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1B75C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B75C0u;
        // 0x1b75c4: 0x24020022  addiu       $v0, $zero, 0x22 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 34));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b75c0) {
            ctx->pc = 0x1B763Cu;
            goto label_1b763c;
        }
    }
    ctx->pc = 0x1B75C8u;
    // 0x1b75c8: 0x1062001c  beq         $v1, $v0, . + 4 + (0x1C << 2)
    ctx->pc = 0x1B75C8u;
    {
        const bool branch_taken_0x1b75c8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1B75CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B75C8u;
        // 0x1b75cc: 0x24020029  addiu       $v0, $zero, 0x29 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 41));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b75c8) {
            ctx->pc = 0x1B763Cu;
            goto label_1b763c;
        }
    }
    ctx->pc = 0x1B75D0u;
    // 0x1b75d0: 0x1062001a  beq         $v1, $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x1B75D0u;
    {
        const bool branch_taken_0x1b75d0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1B75D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B75D0u;
        // 0x1b75d4: 0x2402002a  addiu       $v0, $zero, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 42));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b75d0) {
            ctx->pc = 0x1B763Cu;
            goto label_1b763c;
        }
    }
    ctx->pc = 0x1B75D8u;
    // 0x1b75d8: 0x10620018  beq         $v1, $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x1B75D8u;
    {
        const bool branch_taken_0x1b75d8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1B75DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B75D8u;
        // 0x1b75dc: 0x2402002b  addiu       $v0, $zero, 0x2B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 43));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b75d8) {
            ctx->pc = 0x1B763Cu;
            goto label_1b763c;
        }
    }
    ctx->pc = 0x1B75E0u;
    // 0x1b75e0: 0x10620016  beq         $v1, $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x1B75E0u;
    {
        const bool branch_taken_0x1b75e0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1B75E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B75E0u;
        // 0x1b75e4: 0x24020031  addiu       $v0, $zero, 0x31 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 49));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b75e0) {
            ctx->pc = 0x1B763Cu;
            goto label_1b763c;
        }
    }
    ctx->pc = 0x1B75E8u;
    // 0x1b75e8: 0x10620015  beq         $v1, $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x1B75E8u;
    {
        const bool branch_taken_0x1b75e8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1B75ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B75E8u;
        // 0x1b75ec: 0x2462fff8  addiu       $v0, $v1, -0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967288));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b75e8) {
            ctx->pc = 0x1B7640u;
            goto label_1b7640;
        }
    }
    ctx->pc = 0x1B75F0u;
    // 0x1b75f0: 0x8ca20034  lw          $v0, 0x34($a1)
    ctx->pc = 0x1b75f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 52)));
    // 0x1b75f4: 0x50400012  beql        $v0, $zero, . + 4 + (0x12 << 2)
    ctx->pc = 0x1B75F4u;
    {
        const bool branch_taken_0x1b75f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b75f4) {
            ctx->pc = 0x1B75F8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B75F4u;
            // 0x1b75f8: 0x2462fff8  addiu       $v0, $v1, -0x8 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967288));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B7640u;
            goto label_1b7640;
        }
    }
    ctx->pc = 0x1B75FCu;
    // 0x1b75fc: 0x944602fe  lhu         $a2, 0x2FE($v0)
    ctx->pc = 0x1b75fcu;
    SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 766)));
    // 0x1b7600: 0x28c20100  slti        $v0, $a2, 0x100
    ctx->pc = 0x1b7600u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)256) ? 1 : 0);
    // 0x1b7604: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1B7604u;
    {
        const bool branch_taken_0x1b7604 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B7608u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B7604u;
        // 0x1b7608: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b7604) {
            ctx->pc = 0x1B7614u;
            goto label_1b7614;
        }
    }
    ctx->pc = 0x1B760Cu;
    // 0x1b760c: 0x28c201ff  slti        $v0, $a2, 0x1FF
    ctx->pc = 0x1b760cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)511) ? 1 : 0);
    // 0x1b7610: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x1b7610u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1b7614:
    // 0x1b7614: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1b7614u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b7618: 0x14e20009  bne         $a3, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1B7618u;
    {
        const bool branch_taken_0x1b7618 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 2));
        ctx->pc = 0x1B761Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B7618u;
        // 0x1b761c: 0x2462fff8  addiu       $v0, $v1, -0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967288));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b7618) {
            ctx->pc = 0x1B7640u;
            goto label_1b7640;
        }
    }
    ctx->pc = 0x1B7620u;
    // 0x1b7620: 0x8ca2004c  lw          $v0, 0x4C($a1)
    ctx->pc = 0x1b7620u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 76)));
    // 0x1b7624: 0x2842000b  slti        $v0, $v0, 0xB
    ctx->pc = 0x1b7624u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)11) ? 1 : 0);
    // 0x1b7628: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1B7628u;
    {
        const bool branch_taken_0x1b7628 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B762Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B7628u;
        // 0x1b762c: 0x2462fff8  addiu       $v0, $v1, -0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967288));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b7628) {
            ctx->pc = 0x1B7640u;
            goto label_1b7640;
        }
    }
    ctx->pc = 0x1B7630u;
    // 0x1b7630: 0x8c8205b4  lw          $v0, 0x5B4($a0)
    ctx->pc = 0x1b7630u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1460)));
    // 0x1b7634: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x1b7634u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
    // 0x1b7638: 0xac8205b4  sw          $v0, 0x5B4($a0)
    ctx->pc = 0x1b7638u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 1460), GPR_U32(ctx, 2));
label_1b763c:
    // 0x1b763c: 0x2462fff8  addiu       $v0, $v1, -0x8
    ctx->pc = 0x1b763cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967288));
label_1b7640:
    // 0x1b7640: 0x2c420004  sltiu       $v0, $v0, 0x4
    ctx->pc = 0x1b7640u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
    // 0x1b7644: 0x54400009  bnel        $v0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x1B7644u;
    {
        const bool branch_taken_0x1b7644 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b7644) {
            ctx->pc = 0x1B7648u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B7644u;
            // 0x1b7648: 0x8c8205b4  lw          $v0, 0x5B4($a0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1460)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B766Cu;
            goto label_1b766c;
        }
    }
    ctx->pc = 0x1B764Cu;
    // 0x1b764c: 0x2402001c  addiu       $v0, $zero, 0x1C
    ctx->pc = 0x1b764cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
    // 0x1b7650: 0x10620005  beq         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1B7650u;
    {
        const bool branch_taken_0x1b7650 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1B7654u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B7650u;
        // 0x1b7654: 0x24020030  addiu       $v0, $zero, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b7650) {
            ctx->pc = 0x1B7668u;
            goto label_1b7668;
        }
    }
    ctx->pc = 0x1B7658u;
    // 0x1b7658: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1B7658u;
    {
        const bool branch_taken_0x1b7658 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1B765Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B7658u;
        // 0x1b765c: 0x24020052  addiu       $v0, $zero, 0x52 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 82));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b7658) {
            ctx->pc = 0x1B7668u;
            goto label_1b7668;
        }
    }
    ctx->pc = 0x1B7660u;
    // 0x1b7660: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1B7660u;
    {
        const bool branch_taken_0x1b7660 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1b7660) {
            ctx->pc = 0x1B7674u;
            goto label_1b7674;
        }
    }
    ctx->pc = 0x1B7668u;
label_1b7668:
    // 0x1b7668: 0x8c8205b4  lw          $v0, 0x5B4($a0)
    ctx->pc = 0x1b7668u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1460)));
label_1b766c:
    // 0x1b766c: 0x34420004  ori         $v0, $v0, 0x4
    ctx->pc = 0x1b766cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4);
    // 0x1b7670: 0xac8205b4  sw          $v0, 0x5B4($a0)
    ctx->pc = 0x1b7670u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 1460), GPR_U32(ctx, 2));
label_1b7674:
    // 0x1b7674: 0x3e00008  jr          $ra
    ctx->pc = 0x1B7674u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B7674u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B767Cu;
    // 0x1b767c: 0x0  nop
    ctx->pc = 0x1b767cu;
    // NOP
    ctx->pc = 0x1b7680u;
}
