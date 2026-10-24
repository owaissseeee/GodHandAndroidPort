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

// Function: func_002DB0D0
// Address: 0x2db0d0 - 0x2db2b0
void func_002DB0D0_0x2db0d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_002DB0D0_0x2db0d0");
#endif

    switch (ctx->pc) {
        case 0x2db128u: goto label_2db128;
        case 0x2db190u: goto label_2db190;
        case 0x2db1b8u: goto label_2db1b8;
        case 0x2db218u: goto label_2db218;
        case 0x2db240u: goto label_2db240;
        default: break;
    }

    ctx->pc = 0x2db0d0u;

    // 0x2db0d0: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x2db0d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x2db0d4: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x2db0d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
    // 0x2db0d8: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x2db0d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
    // 0x2db0dc: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x2db0dcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2db0e0: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x2db0e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
    // 0x2db0e4: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x2db0e4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2db0e8: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x2db0e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x2db0ec: 0x7fb40020  sq          $s4, 0x20($sp)
    ctx->pc = 0x2db0ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 20));
    // 0x2db0f0: 0x7fb50010  sq          $s5, 0x10($sp)
    ctx->pc = 0x2db0f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 21));
    // 0x2db0f4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2db0f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2db0f8: 0xe7b50078  swc1        $f21, 0x78($sp)
    ctx->pc = 0x2db0f8u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 120), bits); }
    // 0x2db0fc: 0x16200015  bnez        $s1, . + 4 + (0x15 << 2)
    ctx->pc = 0x2DB0FCu;
    {
        const bool branch_taken_0x2db0fc = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x2DB100u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DB0FCu;
        // 0x2db100: 0xe7b40070  swc1        $f20, 0x70($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2db0fc) {
            ctx->pc = 0x2DB154u;
            goto label_2db154;
        }
    }
    ctx->pc = 0x2DB104u;
    // 0x2db104: 0x3c020075  lui         $v0, 0x75
    ctx->pc = 0x2db104u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)117 << 16));
    // 0x2db108: 0x8c434c30  lw          $v1, 0x4C30($v0)
    ctx->pc = 0x2db108u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x754C30u));
    // 0x2db10c: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x2db10cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x2db110: 0x8c700004  lw          $s0, 0x4($v1)
    ctx->pc = 0x2db110u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x2db114: 0x5202005a  beql        $s0, $v0, . + 4 + (0x5A << 2)
    ctx->pc = 0x2DB114u;
    {
        const bool branch_taken_0x2db114 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x2db114) {
            ctx->pc = 0x2DB118u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2DB114u;
            // 0x2db118: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2DB280u;
            goto label_2db280;
        }
    }
    ctx->pc = 0x2DB11Cu;
    // 0x2db11c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2db11cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2db120: 0x3c05e000  lui         $a1, 0xE000
    ctx->pc = 0x2db120u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)57344 << 16));
    // 0x2db124: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x2db124u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2db128:
    // 0x2db128: 0x946202fe  lhu         $v0, 0x2FE($v1)
    ctx->pc = 0x2db128u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 766)));
    // 0x2db12c: 0x14520005  bne         $v0, $s2, . + 4 + (0x5 << 2)
    ctx->pc = 0x2DB12Cu;
    {
        const bool branch_taken_0x2db12c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 18));
        ctx->pc = 0x2DB130u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DB12Cu;
        // 0x2db130: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2db12c) {
            ctx->pc = 0x2DB144u;
            goto label_2db144;
        }
    }
    ctx->pc = 0x2DB134u;
    // 0x2db134: 0x8c620250  lw          $v0, 0x250($v1)
    ctx->pc = 0x2db134u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 592)));
    // 0x2db138: 0x451024  and         $v0, $v0, $a1
    ctx->pc = 0x2db138u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 5));
    // 0x2db13c: 0x10400050  beqz        $v0, . + 4 + (0x50 << 2)
    ctx->pc = 0x2DB13Cu;
    {
        const bool branch_taken_0x2db13c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DB140u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DB13Cu;
        // 0x2db140: 0x60102d  daddu       $v0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2db13c) {
            ctx->pc = 0x2DB280u;
            goto label_2db280;
        }
    }
    ctx->pc = 0x2DB144u;
label_2db144:
    // 0x2db144: 0x5604fff8  bnel        $s0, $a0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x2DB144u;
    {
        const bool branch_taken_0x2db144 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 4));
        if (branch_taken_0x2db144) {
            ctx->pc = 0x2DB148u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2DB144u;
            // 0x2db148: 0x8e030000  lw          $v1, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2DB128u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2db128;
        }
    }
    ctx->pc = 0x2DB14Cu;
    // 0x2db14c: 0x1000004c  b           . + 4 + (0x4C << 2)
    ctx->pc = 0x2DB14Cu;
    {
        const bool branch_taken_0x2db14c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DB150u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DB14Cu;
        // 0x2db150: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2db14c) {
            ctx->pc = 0x2DB280u;
            goto label_2db280;
        }
    }
    ctx->pc = 0x2DB154u;
label_2db154:
    // 0x2db154: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2db154u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2db158: 0x0  nop
    ctx->pc = 0x2db158u;
    // NOP
    // 0x2db15c: 0x460c0036  c.le.s      $f0, $f12
    ctx->pc = 0x2db15cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[12])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2db160: 0x0  nop
    ctx->pc = 0x2db160u;
    // NOP
    // 0x2db164: 0x45000020  bc1f        . + 4 + (0x20 << 2)
    ctx->pc = 0x2DB164u;
    {
        const bool branch_taken_0x2db164 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2DB168u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DB164u;
        // 0x2db168: 0x3c020075  lui         $v0, 0x75 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)117 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2db164) {
            ctx->pc = 0x2DB1E8u;
            goto label_2db1e8;
        }
    }
    ctx->pc = 0x2DB16Cu;
    // 0x2db16c: 0x46006506  mov.s       $f20, $f12
    ctx->pc = 0x2db16cu;
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    // 0x2db170: 0x8c434c30  lw          $v1, 0x4C30($v0)
    ctx->pc = 0x2db170u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 19504)));
    // 0x2db174: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x2db174u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2db178: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x2db178u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x2db17c: 0x8c700004  lw          $s0, 0x4($v1)
    ctx->pc = 0x2db17cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x2db180: 0x1202003e  beq         $s0, $v0, . + 4 + (0x3E << 2)
    ctx->pc = 0x2DB180u;
    {
        const bool branch_taken_0x2db180 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x2DB184u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DB180u;
        // 0x2db184: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2db180) {
            ctx->pc = 0x2DB27Cu;
            goto label_2db27c;
        }
    }
    ctx->pc = 0x2DB188u;
    // 0x2db188: 0x3c14e000  lui         $s4, 0xE000
    ctx->pc = 0x2db188u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)57344 << 16));
    // 0x2db18c: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x2db18cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2db190:
    // 0x2db190: 0x946202fe  lhu         $v0, 0x2FE($v1)
    ctx->pc = 0x2db190u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 766)));
    // 0x2db194: 0x5452000e  bnel        $v0, $s2, . + 4 + (0xE << 2)
    ctx->pc = 0x2DB194u;
    {
        const bool branch_taken_0x2db194 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 18));
        if (branch_taken_0x2db194) {
            ctx->pc = 0x2DB198u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2DB194u;
            // 0x2db198: 0x8ea34c30  lw          $v1, 0x4C30($s5) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 19504)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2DB1D0u;
            goto label_2db1d0;
        }
    }
    ctx->pc = 0x2DB19Cu;
    // 0x2db19c: 0x8c620250  lw          $v0, 0x250($v1)
    ctx->pc = 0x2db19cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 592)));
    // 0x2db1a0: 0x541024  and         $v0, $v0, $s4
    ctx->pc = 0x2db1a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 20));
    // 0x2db1a4: 0x5440000a  bnel        $v0, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x2DB1A4u;
    {
        const bool branch_taken_0x2db1a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2db1a4) {
            ctx->pc = 0x2DB1A8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2DB1A4u;
            // 0x2db1a8: 0x8ea34c30  lw          $v1, 0x4C30($s5) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 19504)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2DB1D0u;
            goto label_2db1d0;
        }
    }
    ctx->pc = 0x2DB1ACu;
    // 0x2db1ac: 0x8c6500f0  lw          $a1, 0xF0($v1)
    ctx->pc = 0x2db1acu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 240)));
    // 0x2db1b0: 0xc07df92  jal         func_1F7E48
    ctx->pc = 0x2DB1B0u;
    SET_GPR_U32(ctx, 31, 0x2DB1B8u);
    ctx->pc = 0x2DB1B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DB1B0u;
    // 0x2db1b4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7E48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F7E48u, 0x2DB1B0u, 0x2DB1B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DB1B8u;
label_2db1b8:
    // 0x2db1b8: 0x46140034  c.lt.s      $f0, $f20
    ctx->pc = 0x2db1b8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2db1bc: 0x0  nop
    ctx->pc = 0x2db1bcu;
    // NOP
    // 0x2db1c0: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x2DB1C0u;
    {
        const bool branch_taken_0x2db1c0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2DB1C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DB1C0u;
        // 0x2db1c4: 0x8ea34c30  lw          $v1, 0x4C30($s5) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 19504)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2db1c0) {
            ctx->pc = 0x2DB1D0u;
            goto label_2db1d0;
        }
    }
    ctx->pc = 0x2DB1C8u;
    // 0x2db1c8: 0x8e130000  lw          $s3, 0x0($s0)
    ctx->pc = 0x2db1c8u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2db1cc: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x2db1ccu;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
label_2db1d0:
    // 0x2db1d0: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x2db1d0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x2db1d4: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x2db1d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x2db1d8: 0x5602ffed  bnel        $s0, $v0, . + 4 + (-0x13 << 2)
    ctx->pc = 0x2DB1D8u;
    {
        const bool branch_taken_0x2db1d8 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x2db1d8) {
            ctx->pc = 0x2DB1DCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2DB1D8u;
            // 0x2db1dc: 0x8e030000  lw          $v1, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2DB190u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2db190;
        }
    }
    ctx->pc = 0x2DB1E0u;
    // 0x2db1e0: 0x10000027  b           . + 4 + (0x27 << 2)
    ctx->pc = 0x2DB1E0u;
    {
        const bool branch_taken_0x2db1e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DB1E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DB1E0u;
        // 0x2db1e4: 0x260102d  daddu       $v0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2db1e0) {
            ctx->pc = 0x2DB280u;
            goto label_2db280;
        }
    }
    ctx->pc = 0x2DB1E8u;
label_2db1e8:
    // 0x2db1e8: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x2db1e8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
    // 0x2db1ec: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x2db1ecu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x2db1f0: 0x8c434c30  lw          $v1, 0x4C30($v0)
    ctx->pc = 0x2db1f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 19504)));
    // 0x2db1f4: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x2db1f4u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2db1f8: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x2db1f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x2db1fc: 0x8c700004  lw          $s0, 0x4($v1)
    ctx->pc = 0x2db1fcu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x2db200: 0x1202001e  beq         $s0, $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x2DB200u;
    {
        const bool branch_taken_0x2db200 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x2DB204u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DB200u;
        // 0x2db204: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2db200) {
            ctx->pc = 0x2DB27Cu;
            goto label_2db27c;
        }
    }
    ctx->pc = 0x2DB208u;
    // 0x2db208: 0x46000546  mov.s       $f21, $f0
    ctx->pc = 0x2db208u;
    ctx->f[21] = FPU_MOV_S(ctx->f[0]);
    // 0x2db20c: 0x3c14e000  lui         $s4, 0xE000
    ctx->pc = 0x2db20cu;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)57344 << 16));
    // 0x2db210: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x2db210u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2db214: 0x0  nop
    ctx->pc = 0x2db214u;
    // NOP
label_2db218:
    // 0x2db218: 0x946202fe  lhu         $v0, 0x2FE($v1)
    ctx->pc = 0x2db218u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 766)));
    // 0x2db21c: 0x54520013  bnel        $v0, $s2, . + 4 + (0x13 << 2)
    ctx->pc = 0x2DB21Cu;
    {
        const bool branch_taken_0x2db21c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 18));
        if (branch_taken_0x2db21c) {
            ctx->pc = 0x2DB220u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2DB21Cu;
            // 0x2db220: 0x8ea34c30  lw          $v1, 0x4C30($s5) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 19504)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2DB26Cu;
            goto label_2db26c;
        }
    }
    ctx->pc = 0x2DB224u;
    // 0x2db224: 0x8c620250  lw          $v0, 0x250($v1)
    ctx->pc = 0x2db224u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 592)));
    // 0x2db228: 0x541024  and         $v0, $v0, $s4
    ctx->pc = 0x2db228u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 20));
    // 0x2db22c: 0x5440000f  bnel        $v0, $zero, . + 4 + (0xF << 2)
    ctx->pc = 0x2DB22Cu;
    {
        const bool branch_taken_0x2db22c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2db22c) {
            ctx->pc = 0x2DB230u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2DB22Cu;
            // 0x2db230: 0x8ea34c30  lw          $v1, 0x4C30($s5) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 19504)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2DB26Cu;
            goto label_2db26c;
        }
    }
    ctx->pc = 0x2DB234u;
    // 0x2db234: 0x8c6500f0  lw          $a1, 0xF0($v1)
    ctx->pc = 0x2db234u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 240)));
    // 0x2db238: 0xc07df92  jal         func_1F7E48
    ctx->pc = 0x2DB238u;
    SET_GPR_U32(ctx, 31, 0x2DB240u);
    ctx->pc = 0x2DB23Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DB238u;
    // 0x2db23c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7E48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F7E48u, 0x2DB238u, 0x2DB240u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DB240u;
label_2db240:
    // 0x2db240: 0x4615a034  c.lt.s      $f20, $f21
    ctx->pc = 0x2db240u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[21])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2db244: 0x0  nop
    ctx->pc = 0x2db244u;
    // NOP
    // 0x2db248: 0x45030006  bc1tl       . + 4 + (0x6 << 2)
    ctx->pc = 0x2DB248u;
    {
        const bool branch_taken_0x2db248 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2db248) {
            ctx->pc = 0x2DB24Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2DB248u;
            // 0x2db24c: 0x8e130000  lw          $s3, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2DB264u;
            goto label_2db264;
        }
    }
    ctx->pc = 0x2DB250u;
    // 0x2db250: 0x46140034  c.lt.s      $f0, $f20
    ctx->pc = 0x2db250u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2db254: 0x0  nop
    ctx->pc = 0x2db254u;
    // NOP
    // 0x2db258: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x2DB258u;
    {
        const bool branch_taken_0x2db258 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2DB25Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DB258u;
        // 0x2db25c: 0x8ea34c30  lw          $v1, 0x4C30($s5) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 19504)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2db258) {
            ctx->pc = 0x2DB26Cu;
            goto label_2db26c;
        }
    }
    ctx->pc = 0x2DB260u;
    // 0x2db260: 0x8e130000  lw          $s3, 0x0($s0)
    ctx->pc = 0x2db260u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2db264:
    // 0x2db264: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x2db264u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x2db268: 0x8ea34c30  lw          $v1, 0x4C30($s5)
    ctx->pc = 0x2db268u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 19504)));
label_2db26c:
    // 0x2db26c: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x2db26cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x2db270: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x2db270u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x2db274: 0x5602ffe8  bnel        $s0, $v0, . + 4 + (-0x18 << 2)
    ctx->pc = 0x2DB274u;
    {
        const bool branch_taken_0x2db274 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x2db274) {
            ctx->pc = 0x2DB278u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2DB274u;
            // 0x2db278: 0x8e030000  lw          $v1, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2DB218u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2db218;
        }
    }
    ctx->pc = 0x2DB27Cu;
label_2db27c:
    // 0x2db27c: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x2db27cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2db280:
    // 0x2db280: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x2db280u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2db284: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x2db284u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2db288: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x2db288u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2db28c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x2db28cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2db290: 0x7bb40020  lq          $s4, 0x20($sp)
    ctx->pc = 0x2db290u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2db294: 0x7bb50010  lq          $s5, 0x10($sp)
    ctx->pc = 0x2db294u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2db298: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2db298u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2db29c: 0xc7b50078  lwc1        $f21, 0x78($sp)
    ctx->pc = 0x2db29cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x2db2a0: 0xc7b40070  lwc1        $f20, 0x70($sp)
    ctx->pc = 0x2db2a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2db2a4: 0x3e00008  jr          $ra
    ctx->pc = 0x2DB2A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2DB2A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DB2A4u;
        // 0x2db2a8: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2DB2A4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2DB2ACu;
    // 0x2db2ac: 0x0  nop
    ctx->pc = 0x2db2acu;
    // NOP
    ctx->pc = 0x2db2b0u;
}
