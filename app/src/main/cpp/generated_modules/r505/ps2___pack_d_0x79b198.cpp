#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "r505_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_r505
{
// Function: __pack_d
// Address: 0x79b198 - 0x79b2c8
void ps2___pack_d_0x79b198(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2___pack_d_0x79b198");
#endif

    ctx->pc = 0x79b198u;

    // 0x79b198: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x79b198u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x79b19c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x79b19cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79b1a0: 0x8c880004  lw          $t0, 0x4($a0)
    ctx->pc = 0x79b1a0u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x79b1a4: 0x2c620002  sltiu       $v0, $v1, 0x2
    ctx->pc = 0x79b1a4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x79b1a8: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x79B1A8u;
    {
        const bool branch_taken_0x79b1a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x79B1ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79B1A8u;
        // 0x79b1ac: 0xdc850010  ld          $a1, 0x10($a0) (Delay Slot)
        SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 4), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79b1a8) {
            ctx->pc = 0x79B1C4u;
            goto label_79b1c4;
        }
    }
    ctx->pc = 0x79B1B0u;
    // 0x79b1b0: 0x34028000  ori         $v0, $zero, 0x8000
    ctx->pc = 0x79b1b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x79b1b4: 0x2113c  dsll32      $v0, $v0, 4
    ctx->pc = 0x79b1b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 4));
    // 0x79b1b8: 0x240707ff  addiu       $a3, $zero, 0x7FF
    ctx->pc = 0x79b1b8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2047));
    // 0x79b1bc: 0x1000002a  b           . + 4 + (0x2A << 2)
    ctx->pc = 0x79B1BCu;
    {
        const bool branch_taken_0x79b1bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x79B1C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79B1BCu;
        // 0x79b1c0: 0xa22825  or          $a1, $a1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79b1bc) {
            ctx->pc = 0x79B268u;
            goto label_79b268;
        }
    }
    ctx->pc = 0x79B1C4u;
label_79b1c4:
    // 0x79b1c4: 0x38620004  xori        $v0, $v1, 0x4
    ctx->pc = 0x79b1c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)4);
    // 0x79b1c8: 0x50400016  beql        $v0, $zero, . + 4 + (0x16 << 2)
    ctx->pc = 0x79B1C8u;
    {
        const bool branch_taken_0x79b1c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x79b1c8) {
            ctx->pc = 0x79B1CCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x79B1C8u;
            // 0x79b1cc: 0x240707ff  addiu       $a3, $zero, 0x7FF (Delay Slot)
            SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2047));
            ctx->in_delay_slot = false;
            ctx->pc = 0x79B224u;
            goto label_79b224;
        }
    }
    ctx->pc = 0x79B1D0u;
    // 0x79b1d0: 0x38620002  xori        $v0, $v1, 0x2
    ctx->pc = 0x79b1d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)2);
    // 0x79b1d4: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x79B1D4u;
    {
        const bool branch_taken_0x79b1d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x79b1d4) {
            ctx->pc = 0x79B1E4u;
            goto label_79b1e4;
        }
    }
    ctx->pc = 0x79B1DCu;
    // 0x79b1dc: 0x10000022  b           . + 4 + (0x22 << 2)
    ctx->pc = 0x79B1DCu;
    {
        const bool branch_taken_0x79b1dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x79B1E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79B1DCu;
        // 0x79b1e0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79b1dc) {
            ctx->pc = 0x79B268u;
            goto label_79b268;
        }
    }
    ctx->pc = 0x79B1E4u;
label_79b1e4:
    // 0x79b1e4: 0x10a00020  beqz        $a1, . + 4 + (0x20 << 2)
    ctx->pc = 0x79B1E4u;
    {
        const bool branch_taken_0x79b1e4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x79b1e4) {
            ctx->pc = 0x79B268u;
            goto label_79b268;
        }
    }
    ctx->pc = 0x79B1ECu;
    // 0x79b1ec: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x79b1ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x79b1f0: 0x2862fc02  slti        $v0, $v1, -0x3FE
    ctx->pc = 0x79b1f0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)4294966274) ? 1 : 0);
    // 0x79b1f4: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x79B1F4u;
    {
        const bool branch_taken_0x79b1f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x79B1F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79B1F4u;
        // 0x79b1f8: 0x2402fc02  addiu       $v0, $zero, -0x3FE (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966274));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79b1f4) {
            ctx->pc = 0x79B214u;
            goto label_79b214;
        }
    }
    ctx->pc = 0x79B1FCu;
    // 0x79b1fc: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x79b1fcu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x79b200: 0x28430039  slti        $v1, $v0, 0x39
    ctx->pc = 0x79b200u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)57) ? 1 : 0);
    // 0x79b204: 0x14600017  bnez        $v1, . + 4 + (0x17 << 2)
    ctx->pc = 0x79B204u;
    {
        const bool branch_taken_0x79b204 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x79B208u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79B204u;
        // 0x79b208: 0x452816  dsrlv       $a1, $a1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) >> (GPR_U32(ctx, 2) & 0x3F));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79b204) {
            ctx->pc = 0x79B264u;
            goto label_79b264;
        }
    }
    ctx->pc = 0x79B20Cu;
    // 0x79b20c: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x79B20Cu;
    {
        const bool branch_taken_0x79b20c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x79B210u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79B20Cu;
        // 0x79b210: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79b20c) {
            ctx->pc = 0x79B264u;
            goto label_79b264;
        }
    }
    ctx->pc = 0x79B214u;
label_79b214:
    // 0x79b214: 0x28620400  slti        $v0, $v1, 0x400
    ctx->pc = 0x79b214u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)1024) ? 1 : 0);
    // 0x79b218: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x79B218u;
    {
        const bool branch_taken_0x79b218 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x79B21Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79B218u;
        // 0x79b21c: 0x246703ff  addiu       $a3, $v1, 0x3FF (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), 1023));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79b218) {
            ctx->pc = 0x79B22Cu;
            goto label_79b22c;
        }
    }
    ctx->pc = 0x79B220u;
    // 0x79b220: 0x240707ff  addiu       $a3, $zero, 0x7FF
    ctx->pc = 0x79b220u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2047));
label_79b224:
    // 0x79b224: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x79B224u;
    {
        const bool branch_taken_0x79b224 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x79B228u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79B224u;
        // 0x79b228: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79b224) {
            ctx->pc = 0x79B268u;
            goto label_79b268;
        }
    }
    ctx->pc = 0x79B22Cu;
label_79b22c:
    // 0x79b22c: 0x24020080  addiu       $v0, $zero, 0x80
    ctx->pc = 0x79b22cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x79b230: 0x30a300ff  andi        $v1, $a1, 0xFF
    ctx->pc = 0x79b230u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x79b234: 0x54620004  bnel        $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x79B234u;
    {
        const bool branch_taken_0x79b234 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x79b234) {
            ctx->pc = 0x79B238u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x79B234u;
            // 0x79b238: 0x64a5007f  daddiu      $a1, $a1, 0x7F (Delay Slot)
            SET_GPR_S64(ctx, 5, (int64_t)GPR_S64(ctx, 5) + (int64_t)(int32_t)127);
            ctx->in_delay_slot = false;
            ctx->pc = 0x79B248u;
            goto label_79b248;
        }
    }
    ctx->pc = 0x79B23Cu;
    // 0x79b23c: 0x30a30100  andi        $v1, $a1, 0x100
    ctx->pc = 0x79b23cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)256);
    // 0x79b240: 0x64a20080  daddiu      $v0, $a1, 0x80
    ctx->pc = 0x79b240u;
    SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 5) + (int64_t)(int32_t)128);
    // 0x79b244: 0x43280b  movn        $a1, $v0, $v1
    ctx->pc = 0x79b244u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 2));
label_79b248:
    // 0x79b248: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x79b248u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x79b24c: 0x210fa  dsrl        $v0, $v0, 3
    ctx->pc = 0x79b24cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> 3);
    // 0x79b250: 0x45102b  sltu        $v0, $v0, $a1
    ctx->pc = 0x79b250u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x79b254: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x79B254u;
    {
        const bool branch_taken_0x79b254 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x79b254) {
            ctx->pc = 0x79B258u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x79B254u;
            // 0x79b258: 0x52a3a  dsrl        $a1, $a1, 8 (Delay Slot)
            SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) >> 8);
            ctx->in_delay_slot = false;
            ctx->pc = 0x79B268u;
            goto label_79b268;
        }
    }
    ctx->pc = 0x79B25Cu;
    // 0x79b25c: 0x5287a  dsrl        $a1, $a1, 1
    ctx->pc = 0x79b25cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) >> 1);
    // 0x79b260: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x79b260u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
label_79b264:
    // 0x79b264: 0x52a3a  dsrl        $a1, $a1, 8
    ctx->pc = 0x79b264u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) >> 8);
label_79b268:
    // 0x79b268: 0x3403fff0  ori         $v1, $zero, 0xFFF0
    ctx->pc = 0x79b268u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65520);
    // 0x79b26c: 0x31c3c  dsll32      $v1, $v1, 16
    ctx->pc = 0x79b26cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 16));
    // 0x79b270: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x79b270u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x79b274: 0x2133a  dsrl        $v0, $v0, 12
    ctx->pc = 0x79b274u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> 12);
    // 0x79b278: 0xa21024  and         $v0, $a1, $v0
    ctx->pc = 0x79b278u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
    // 0x79b27c: 0xc33024  and         $a2, $a2, $v1
    ctx->pc = 0x79b27cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 3));
    // 0x79b280: 0xc23025  or          $a2, $a2, $v0
    ctx->pc = 0x79b280u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 2));
    // 0x79b284: 0x30e307ff  andi        $v1, $a3, 0x7FF
    ctx->pc = 0x79b284u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)2047);
    // 0x79b288: 0x3c02800f  lui         $v0, 0x800F
    ctx->pc = 0x79b288u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32783 << 16));
    // 0x79b28c: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x79b28cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x79b290: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x79b290u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x79b294: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x79b294u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x79b298: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x79b298u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x79b29c: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x79b29cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x79b2a0: 0x31d3c  dsll32      $v1, $v1, 20
    ctx->pc = 0x79b2a0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 20));
    // 0x79b2a4: 0xc23024  and         $a2, $a2, $v0
    ctx->pc = 0x79b2a4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 2));
    // 0x79b2a8: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x79b2a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x79b2ac: 0x4207a  dsrl        $a0, $a0, 1
    ctx->pc = 0x79b2acu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> 1);
    // 0x79b2b0: 0xc33025  or          $a2, $a2, $v1
    ctx->pc = 0x79b2b0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 3));
    // 0x79b2b4: 0x817fc  dsll32      $v0, $t0, 31
    ctx->pc = 0x79b2b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 8) << (32 + 31));
    // 0x79b2b8: 0xc43024  and         $a2, $a2, $a0
    ctx->pc = 0x79b2b8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 4));
    // 0x79b2bc: 0x3e00008  jr          $ra
    ctx->pc = 0x79B2BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x79B2C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79B2BCu;
        // 0x79b2c0: 0xc21025  or          $v0, $a2, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79B2BCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x79B2C4u;
    // 0x79b2c4: 0x0  nop
    ctx->pc = 0x79b2c4u;
    // NOP
    ctx->pc = 0x79b2c8u;
}
} // namespace gh_r505
