#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "r501_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_r501
{
// Function: __pack_d
// Address: 0x79cb08 - 0x79cc38
void ps2___pack_d_0x79cb08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2___pack_d_0x79cb08");
#endif

    ctx->pc = 0x79cb08u;

    // 0x79cb08: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x79cb08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x79cb0c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x79cb0cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79cb10: 0x8c880004  lw          $t0, 0x4($a0)
    ctx->pc = 0x79cb10u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x79cb14: 0x2c620002  sltiu       $v0, $v1, 0x2
    ctx->pc = 0x79cb14u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x79cb18: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x79CB18u;
    {
        const bool branch_taken_0x79cb18 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x79CB1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79CB18u;
        // 0x79cb1c: 0xdc850010  ld          $a1, 0x10($a0) (Delay Slot)
        SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 4), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79cb18) {
            ctx->pc = 0x79CB34u;
            goto label_79cb34;
        }
    }
    ctx->pc = 0x79CB20u;
    // 0x79cb20: 0x34028000  ori         $v0, $zero, 0x8000
    ctx->pc = 0x79cb20u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x79cb24: 0x2113c  dsll32      $v0, $v0, 4
    ctx->pc = 0x79cb24u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 4));
    // 0x79cb28: 0x240707ff  addiu       $a3, $zero, 0x7FF
    ctx->pc = 0x79cb28u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2047));
    // 0x79cb2c: 0x1000002a  b           . + 4 + (0x2A << 2)
    ctx->pc = 0x79CB2Cu;
    {
        const bool branch_taken_0x79cb2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x79CB30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79CB2Cu;
        // 0x79cb30: 0xa22825  or          $a1, $a1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79cb2c) {
            ctx->pc = 0x79CBD8u;
            goto label_79cbd8;
        }
    }
    ctx->pc = 0x79CB34u;
label_79cb34:
    // 0x79cb34: 0x38620004  xori        $v0, $v1, 0x4
    ctx->pc = 0x79cb34u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)4);
    // 0x79cb38: 0x50400016  beql        $v0, $zero, . + 4 + (0x16 << 2)
    ctx->pc = 0x79CB38u;
    {
        const bool branch_taken_0x79cb38 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x79cb38) {
            ctx->pc = 0x79CB3Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x79CB38u;
            // 0x79cb3c: 0x240707ff  addiu       $a3, $zero, 0x7FF (Delay Slot)
            SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2047));
            ctx->in_delay_slot = false;
            ctx->pc = 0x79CB94u;
            goto label_79cb94;
        }
    }
    ctx->pc = 0x79CB40u;
    // 0x79cb40: 0x38620002  xori        $v0, $v1, 0x2
    ctx->pc = 0x79cb40u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)2);
    // 0x79cb44: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x79CB44u;
    {
        const bool branch_taken_0x79cb44 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x79cb44) {
            ctx->pc = 0x79CB54u;
            goto label_79cb54;
        }
    }
    ctx->pc = 0x79CB4Cu;
    // 0x79cb4c: 0x10000022  b           . + 4 + (0x22 << 2)
    ctx->pc = 0x79CB4Cu;
    {
        const bool branch_taken_0x79cb4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x79CB50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79CB4Cu;
        // 0x79cb50: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79cb4c) {
            ctx->pc = 0x79CBD8u;
            goto label_79cbd8;
        }
    }
    ctx->pc = 0x79CB54u;
label_79cb54:
    // 0x79cb54: 0x10a00020  beqz        $a1, . + 4 + (0x20 << 2)
    ctx->pc = 0x79CB54u;
    {
        const bool branch_taken_0x79cb54 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x79cb54) {
            ctx->pc = 0x79CBD8u;
            goto label_79cbd8;
        }
    }
    ctx->pc = 0x79CB5Cu;
    // 0x79cb5c: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x79cb5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x79cb60: 0x2862fc02  slti        $v0, $v1, -0x3FE
    ctx->pc = 0x79cb60u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)4294966274) ? 1 : 0);
    // 0x79cb64: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x79CB64u;
    {
        const bool branch_taken_0x79cb64 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x79CB68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79CB64u;
        // 0x79cb68: 0x2402fc02  addiu       $v0, $zero, -0x3FE (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966274));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79cb64) {
            ctx->pc = 0x79CB84u;
            goto label_79cb84;
        }
    }
    ctx->pc = 0x79CB6Cu;
    // 0x79cb6c: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x79cb6cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x79cb70: 0x28430039  slti        $v1, $v0, 0x39
    ctx->pc = 0x79cb70u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)57) ? 1 : 0);
    // 0x79cb74: 0x14600017  bnez        $v1, . + 4 + (0x17 << 2)
    ctx->pc = 0x79CB74u;
    {
        const bool branch_taken_0x79cb74 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x79CB78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79CB74u;
        // 0x79cb78: 0x452816  dsrlv       $a1, $a1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) >> (GPR_U32(ctx, 2) & 0x3F));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79cb74) {
            ctx->pc = 0x79CBD4u;
            goto label_79cbd4;
        }
    }
    ctx->pc = 0x79CB7Cu;
    // 0x79cb7c: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x79CB7Cu;
    {
        const bool branch_taken_0x79cb7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x79CB80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79CB7Cu;
        // 0x79cb80: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79cb7c) {
            ctx->pc = 0x79CBD4u;
            goto label_79cbd4;
        }
    }
    ctx->pc = 0x79CB84u;
label_79cb84:
    // 0x79cb84: 0x28620400  slti        $v0, $v1, 0x400
    ctx->pc = 0x79cb84u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)1024) ? 1 : 0);
    // 0x79cb88: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x79CB88u;
    {
        const bool branch_taken_0x79cb88 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x79CB8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79CB88u;
        // 0x79cb8c: 0x246703ff  addiu       $a3, $v1, 0x3FF (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), 1023));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79cb88) {
            ctx->pc = 0x79CB9Cu;
            goto label_79cb9c;
        }
    }
    ctx->pc = 0x79CB90u;
    // 0x79cb90: 0x240707ff  addiu       $a3, $zero, 0x7FF
    ctx->pc = 0x79cb90u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2047));
label_79cb94:
    // 0x79cb94: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x79CB94u;
    {
        const bool branch_taken_0x79cb94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x79CB98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79CB94u;
        // 0x79cb98: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79cb94) {
            ctx->pc = 0x79CBD8u;
            goto label_79cbd8;
        }
    }
    ctx->pc = 0x79CB9Cu;
label_79cb9c:
    // 0x79cb9c: 0x24020080  addiu       $v0, $zero, 0x80
    ctx->pc = 0x79cb9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x79cba0: 0x30a300ff  andi        $v1, $a1, 0xFF
    ctx->pc = 0x79cba0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x79cba4: 0x54620004  bnel        $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x79CBA4u;
    {
        const bool branch_taken_0x79cba4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x79cba4) {
            ctx->pc = 0x79CBA8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x79CBA4u;
            // 0x79cba8: 0x64a5007f  daddiu      $a1, $a1, 0x7F (Delay Slot)
            SET_GPR_S64(ctx, 5, (int64_t)GPR_S64(ctx, 5) + (int64_t)(int32_t)127);
            ctx->in_delay_slot = false;
            ctx->pc = 0x79CBB8u;
            goto label_79cbb8;
        }
    }
    ctx->pc = 0x79CBACu;
    // 0x79cbac: 0x30a30100  andi        $v1, $a1, 0x100
    ctx->pc = 0x79cbacu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)256);
    // 0x79cbb0: 0x64a20080  daddiu      $v0, $a1, 0x80
    ctx->pc = 0x79cbb0u;
    SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 5) + (int64_t)(int32_t)128);
    // 0x79cbb4: 0x43280b  movn        $a1, $v0, $v1
    ctx->pc = 0x79cbb4u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 2));
label_79cbb8:
    // 0x79cbb8: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x79cbb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x79cbbc: 0x210fa  dsrl        $v0, $v0, 3
    ctx->pc = 0x79cbbcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> 3);
    // 0x79cbc0: 0x45102b  sltu        $v0, $v0, $a1
    ctx->pc = 0x79cbc0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x79cbc4: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x79CBC4u;
    {
        const bool branch_taken_0x79cbc4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x79cbc4) {
            ctx->pc = 0x79CBC8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x79CBC4u;
            // 0x79cbc8: 0x52a3a  dsrl        $a1, $a1, 8 (Delay Slot)
            SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) >> 8);
            ctx->in_delay_slot = false;
            ctx->pc = 0x79CBD8u;
            goto label_79cbd8;
        }
    }
    ctx->pc = 0x79CBCCu;
    // 0x79cbcc: 0x5287a  dsrl        $a1, $a1, 1
    ctx->pc = 0x79cbccu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) >> 1);
    // 0x79cbd0: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x79cbd0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
label_79cbd4:
    // 0x79cbd4: 0x52a3a  dsrl        $a1, $a1, 8
    ctx->pc = 0x79cbd4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) >> 8);
label_79cbd8:
    // 0x79cbd8: 0x3403fff0  ori         $v1, $zero, 0xFFF0
    ctx->pc = 0x79cbd8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65520);
    // 0x79cbdc: 0x31c3c  dsll32      $v1, $v1, 16
    ctx->pc = 0x79cbdcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 16));
    // 0x79cbe0: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x79cbe0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x79cbe4: 0x2133a  dsrl        $v0, $v0, 12
    ctx->pc = 0x79cbe4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> 12);
    // 0x79cbe8: 0xa21024  and         $v0, $a1, $v0
    ctx->pc = 0x79cbe8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
    // 0x79cbec: 0xc33024  and         $a2, $a2, $v1
    ctx->pc = 0x79cbecu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 3));
    // 0x79cbf0: 0xc23025  or          $a2, $a2, $v0
    ctx->pc = 0x79cbf0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 2));
    // 0x79cbf4: 0x30e307ff  andi        $v1, $a3, 0x7FF
    ctx->pc = 0x79cbf4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)2047);
    // 0x79cbf8: 0x3c02800f  lui         $v0, 0x800F
    ctx->pc = 0x79cbf8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32783 << 16));
    // 0x79cbfc: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x79cbfcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x79cc00: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x79cc00u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x79cc04: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x79cc04u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x79cc08: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x79cc08u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x79cc0c: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x79cc0cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x79cc10: 0x31d3c  dsll32      $v1, $v1, 20
    ctx->pc = 0x79cc10u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 20));
    // 0x79cc14: 0xc23024  and         $a2, $a2, $v0
    ctx->pc = 0x79cc14u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 2));
    // 0x79cc18: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x79cc18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x79cc1c: 0x4207a  dsrl        $a0, $a0, 1
    ctx->pc = 0x79cc1cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> 1);
    // 0x79cc20: 0xc33025  or          $a2, $a2, $v1
    ctx->pc = 0x79cc20u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 3));
    // 0x79cc24: 0x817fc  dsll32      $v0, $t0, 31
    ctx->pc = 0x79cc24u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 8) << (32 + 31));
    // 0x79cc28: 0xc43024  and         $a2, $a2, $a0
    ctx->pc = 0x79cc28u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 4));
    // 0x79cc2c: 0x3e00008  jr          $ra
    ctx->pc = 0x79CC2Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x79CC30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79CC2Cu;
        // 0x79cc30: 0xc21025  or          $v0, $a2, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79CC2Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x79CC34u;
    // 0x79cc34: 0x0  nop
    ctx->pc = 0x79cc34u;
    // NOP
    ctx->pc = 0x79cc38u;
}
} // namespace gh_r501
