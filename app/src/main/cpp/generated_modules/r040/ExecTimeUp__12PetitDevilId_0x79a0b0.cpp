#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "r040_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_r040
{
// Function: ExecTimeUp__12PetitDevilId
// Address: 0x79a0b0 - 0x79a208
void ExecTimeUp__12PetitDevilId_0x79a0b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ExecTimeUp__12PetitDevilId_0x79a0b0");
#endif

    switch (ctx->pc) {
        case 0x79a144u: goto label_79a144;
        case 0x79a154u: goto label_79a154;
        case 0x79a1e4u: goto label_79a1e4;
        default: break;
    }

    ctx->pc = 0x79a0b0u;

    // 0x79a0b0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x79a0b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x79a0b4: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x79a0b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x79a0b8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x79a0b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x79a0bc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x79a0bcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79a0c0: 0x9e020000  lwu         $v0, 0x0($s0)
    ctx->pc = 0x79a0c0u;
    SET_GPR_ZE32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x79a0c4: 0x210fb  dsra        $v0, $v0, 3
    ctx->pc = 0x79a0c4u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> 3);
    // 0x79a0c8: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x79a0c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x79a0cc: 0x1040004a  beqz        $v0, . + 4 + (0x4A << 2)
    ctx->pc = 0x79A0CCu;
    {
        const bool branch_taken_0x79a0cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x79A0D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A0CCu;
        // 0x79a0d0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a0cc) {
            ctx->pc = 0x79A1F8u;
            goto label_79a1f8;
        }
    }
    ctx->pc = 0x79A0D4u;
    // 0x79a0d4: 0x8e030ed0  lw          $v1, 0xED0($s0)
    ctx->pc = 0x79a0d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3792)));
    // 0x79a0d8: 0x10620022  beq         $v1, $v0, . + 4 + (0x22 << 2)
    ctx->pc = 0x79A0D8u;
    {
        const bool branch_taken_0x79a0d8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x79A0DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A0D8u;
        // 0x79a0dc: 0x28620002  slti        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a0d8) {
            ctx->pc = 0x79A164u;
            goto label_79a164;
        }
    }
    ctx->pc = 0x79A0E0u;
    // 0x79a0e0: 0x50400046  beql        $v0, $zero, . + 4 + (0x46 << 2)
    ctx->pc = 0x79A0E0u;
    {
        const bool branch_taken_0x79a0e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x79a0e0) {
            ctx->pc = 0x79A0E4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x79A0E0u;
            // 0x79a0e4: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x79A1FCu;
            goto label_79a1fc;
        }
    }
    ctx->pc = 0x79A0E8u;
    // 0x79a0e8: 0x54600044  bnel        $v1, $zero, . + 4 + (0x44 << 2)
    ctx->pc = 0x79A0E8u;
    {
        const bool branch_taken_0x79a0e8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x79a0e8) {
            ctx->pc = 0x79A0ECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x79A0E8u;
            // 0x79a0ec: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x79A1FCu;
            goto label_79a1fc;
        }
    }
    ctx->pc = 0x79A0F0u;
    // 0x79a0f0: 0x2406ff00  addiu       $a2, $zero, -0x100
    ctx->pc = 0x79a0f0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967040));
    // 0x79a0f4: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x79a0f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x79a0f8: 0xe63024  and         $a2, $a3, $a2
    ctx->pc = 0x79a0f8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 7) & GPR_U64(ctx, 6));
    // 0x79a0fc: 0x344200ff  ori         $v0, $v0, 0xFF
    ctx->pc = 0x79a0fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)255);
    // 0x79a100: 0x34c60080  ori         $a2, $a2, 0x80
    ctx->pc = 0x79a100u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)128);
    // 0x79a104: 0x3c03ff00  lui         $v1, 0xFF00
    ctx->pc = 0x79a104u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65280 << 16));
    // 0x79a108: 0xc23024  and         $a2, $a2, $v0
    ctx->pc = 0x79a108u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 2));
    // 0x79a10c: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x79a10cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x79a110: 0x34c68000  ori         $a2, $a2, 0x8000
    ctx->pc = 0x79a110u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)32768);
    // 0x79a114: 0x3c020080  lui         $v0, 0x80
    ctx->pc = 0x79a114u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)128 << 16));
    // 0x79a118: 0xc33024  and         $a2, $a2, $v1
    ctx->pc = 0x79a118u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 3));
    // 0x79a11c: 0x3c0400ff  lui         $a0, 0xFF
    ctx->pc = 0x79a11cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)255 << 16));
    // 0x79a120: 0xc23025  or          $a2, $a2, $v0
    ctx->pc = 0x79a120u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 2));
    // 0x79a124: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x79a124u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x79a128: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x79a128u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x79a12c: 0xc43024  and         $a2, $a2, $a0
    ctx->pc = 0x79a12cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 4));
    // 0x79a130: 0xc23025  or          $a2, $a2, $v0
    ctx->pc = 0x79a130u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 2));
    // 0x79a134: 0x260409e8  addiu       $a0, $s0, 0x9E8
    ctx->pc = 0x79a134u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 2536));
    // 0x79a138: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x79a138u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79a13c: 0xc0b5a36  jal         func_2D68D8
    ctx->pc = 0x79A13Cu;
    SET_GPR_U32(ctx, 31, 0x79A144u);
    ctx->pc = 0x79A140u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A13Cu;
    // 0x79a140: 0x2407000f  addiu       $a3, $zero, 0xF (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D68D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D68D8u, 0x79A13Cu, 0x79A144u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A144u;
label_79a144:
    // 0x79a144: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x79a144u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79a148: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x79a148u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x79a14c: 0xc1e65ac  jal         func_7996B0
    ctx->pc = 0x79A14Cu;
    SET_GPR_U32(ctx, 31, 0x79A154u);
    ctx->pc = 0x79A150u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A14Cu;
    // 0x79a150: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7996B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7996B0u, 0x79A14Cu, 0x79A154u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A154u;
label_79a154:
    // 0x79a154: 0x8e020ed0  lw          $v0, 0xED0($s0)
    ctx->pc = 0x79a154u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3792)));
    // 0x79a158: 0x2403000f  addiu       $v1, $zero, 0xF
    ctx->pc = 0x79a158u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x79a15c: 0x10000022  b           . + 4 + (0x22 << 2)
    ctx->pc = 0x79A15Cu;
    {
        const bool branch_taken_0x79a15c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x79A160u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A15Cu;
        // 0x79a160: 0xae030ed4  sw          $v1, 0xED4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 3796), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a15c) {
            ctx->pc = 0x79A1E8u;
            goto label_79a1e8;
        }
    }
    ctx->pc = 0x79A164u;
label_79a164:
    // 0x79a164: 0x8e020ed4  lw          $v0, 0xED4($s0)
    ctx->pc = 0x79a164u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3796)));
    // 0x79a168: 0x14400022  bnez        $v0, . + 4 + (0x22 << 2)
    ctx->pc = 0x79A168u;
    {
        const bool branch_taken_0x79a168 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x79A16Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A168u;
        // 0x79a16c: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a168) {
            ctx->pc = 0x79A1F4u;
            goto label_79a1f4;
        }
    }
    ctx->pc = 0x79A170u;
    // 0x79a170: 0x2405ff00  addiu       $a1, $zero, -0x100
    ctx->pc = 0x79a170u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967040));
    // 0x79a174: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x79a174u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x79a178: 0xc53024  and         $a2, $a2, $a1
    ctx->pc = 0x79a178u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 5));
    // 0x79a17c: 0x344200ff  ori         $v0, $v0, 0xFF
    ctx->pc = 0x79a17cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)255);
    // 0x79a180: 0x1052824  and         $a1, $t0, $a1
    ctx->pc = 0x79a180u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 8) & GPR_U64(ctx, 5));
    // 0x79a184: 0x34c60080  ori         $a2, $a2, 0x80
    ctx->pc = 0x79a184u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)128);
    // 0x79a188: 0x34a50080  ori         $a1, $a1, 0x80
    ctx->pc = 0x79a188u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)128);
    // 0x79a18c: 0xc23024  and         $a2, $a2, $v0
    ctx->pc = 0x79a18cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 2));
    // 0x79a190: 0xa22824  and         $a1, $a1, $v0
    ctx->pc = 0x79a190u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
    // 0x79a194: 0x3c03ff00  lui         $v1, 0xFF00
    ctx->pc = 0x79a194u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65280 << 16));
    // 0x79a198: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x79a198u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x79a19c: 0x34a58000  ori         $a1, $a1, 0x8000
    ctx->pc = 0x79a19cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)32768);
    // 0x79a1a0: 0x34c68000  ori         $a2, $a2, 0x8000
    ctx->pc = 0x79a1a0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)32768);
    // 0x79a1a4: 0x3c040080  lui         $a0, 0x80
    ctx->pc = 0x79a1a4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)128 << 16));
    // 0x79a1a8: 0xc33024  and         $a2, $a2, $v1
    ctx->pc = 0x79a1a8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 3));
    // 0x79a1ac: 0xa32824  and         $a1, $a1, $v1
    ctx->pc = 0x79a1acu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
    // 0x79a1b0: 0x3c0200ff  lui         $v0, 0xFF
    ctx->pc = 0x79a1b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)255 << 16));
    // 0x79a1b4: 0xc43025  or          $a2, $a2, $a0
    ctx->pc = 0x79a1b4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 4));
    // 0x79a1b8: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x79a1b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x79a1bc: 0xa42825  or          $a1, $a1, $a0
    ctx->pc = 0x79a1bcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 4));
    // 0x79a1c0: 0xc23024  and         $a2, $a2, $v0
    ctx->pc = 0x79a1c0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 2));
    // 0x79a1c4: 0xa22824  and         $a1, $a1, $v0
    ctx->pc = 0x79a1c4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
    // 0x79a1c8: 0x3c024d00  lui         $v0, 0x4D00
    ctx->pc = 0x79a1c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)19712 << 16));
    // 0x79a1cc: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x79a1ccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x79a1d0: 0xc23025  or          $a2, $a2, $v0
    ctx->pc = 0x79a1d0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 2));
    // 0x79a1d4: 0xa32825  or          $a1, $a1, $v1
    ctx->pc = 0x79a1d4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 3));
    // 0x79a1d8: 0x260409e8  addiu       $a0, $s0, 0x9E8
    ctx->pc = 0x79a1d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 2536));
    // 0x79a1dc: 0xc0b5a44  jal         func_2D6910
    ctx->pc = 0x79A1DCu;
    SET_GPR_U32(ctx, 31, 0x79A1E4u);
    ctx->pc = 0x79A1E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A1DCu;
    // 0x79a1e0: 0x24070005  addiu       $a3, $zero, 0x5 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D6910u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D6910u, 0x79A1DCu, 0x79A1E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A1E4u;
label_79a1e4:
    // 0x79a1e4: 0x8e020ed0  lw          $v0, 0xED0($s0)
    ctx->pc = 0x79a1e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3792)));
label_79a1e8:
    // 0x79a1e8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x79a1e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x79a1ec: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x79A1ECu;
    {
        const bool branch_taken_0x79a1ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x79A1F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A1ECu;
        // 0x79a1f0: 0xae020ed0  sw          $v0, 0xED0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 3792), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a1ec) {
            ctx->pc = 0x79A1F8u;
            goto label_79a1f8;
        }
    }
    ctx->pc = 0x79A1F4u;
label_79a1f4:
    // 0x79a1f4: 0xae020ed4  sw          $v0, 0xED4($s0)
    ctx->pc = 0x79a1f4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 3796), GPR_U32(ctx, 2));
label_79a1f8:
    // 0x79a1f8: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x79a1f8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_79a1fc:
    // 0x79a1fc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x79a1fcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x79a200: 0x3e00008  jr          $ra
    ctx->pc = 0x79A200u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x79A204u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A200u;
        // 0x79a204: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79A200u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x79A208u;
}
} // namespace gh_r040
