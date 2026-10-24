#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "r102_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_r102
{
// Function: func_00799F38
// Address: 0x799f38 - 0x79a078
void func_00799F38_0x799f38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00799F38_0x799f38");
#endif

    switch (ctx->pc) {
        case 0x799f98u: goto label_799f98;
        case 0x799fa8u: goto label_799fa8;
        case 0x799fd8u: goto label_799fd8;
        case 0x799ff0u: goto label_799ff0;
        case 0x79a004u: goto label_79a004;
        case 0x79a010u: goto label_79a010;
        case 0x79a018u: goto label_79a018;
        case 0x79a028u: goto label_79a028;
        case 0x79a050u: goto label_79a050;
        case 0x79a05cu: goto label_79a05c;
        default: break;
    }

    ctx->pc = 0x799f38u;

    // 0x799f38: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x799f38u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x799f3c: 0x3c030800  lui         $v1, 0x800
    ctx->pc = 0x799f3cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2048 << 16));
    // 0x799f40: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x799f40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x799f44: 0x3c10005f  lui         $s0, 0x5F
    ctx->pc = 0x799f44u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)95 << 16));
    // 0x799f48: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x799f48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x799f4c: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x799f4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x799f50: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x799f50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x799f54: 0x8e028658  lw          $v0, -0x79A8($s0)
    ctx->pc = 0x799f54u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5E8658u));
    // 0x799f58: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x799f58u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x799f5c: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x799f5cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x799f60: 0x14600033  bnez        $v1, . + 4 + (0x33 << 2)
    ctx->pc = 0x799F60u;
    {
        const bool branch_taken_0x799f60 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x799F64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799F60u;
        // 0x799f64: 0x26128658  addiu       $s2, $s0, -0x79A8 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 16), 4294936152));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799f60) {
            ctx->pc = 0x79A030u;
            goto label_79a030;
        }
    }
    ctx->pc = 0x799F68u;
    // 0x799f68: 0x3c020200  lui         $v0, 0x200
    ctx->pc = 0x799f68u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)512 << 16));
    // 0x799f6c: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x799f6cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x799f70: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x799F70u;
    {
        const bool branch_taken_0x799f70 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x799F74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799F70u;
        // 0x799f74: 0x3c11003c  lui         $s1, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)60 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799f70) {
            ctx->pc = 0x799FA0u;
            goto label_799fa0;
        }
    }
    ctx->pc = 0x799F78u;
    // 0x799f78: 0x3c10003c  lui         $s0, 0x3C
    ctx->pc = 0x799f78u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)60 << 16));
    // 0x799f7c: 0x24051000  addiu       $a1, $zero, 0x1000
    ctx->pc = 0x799f7cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4096));
    // 0x799f80: 0x8e042f84  lw          $a0, 0x2F84($s0)
    ctx->pc = 0x799f80u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x3C2F84u));
    // 0x799f84: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x799f84u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799f88: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x799f88u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799f8c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x799f8cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799f90: 0xc0b1032  jal         func_2C40C8
    ctx->pc = 0x799F90u;
    SET_GPR_U32(ctx, 31, 0x799F98u);
    ctx->pc = 0x799F94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799F90u;
    // 0x799f94: 0x24090001  addiu       $t1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C40C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C40C8u, 0x799F90u, 0x799F98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799F98u;
label_799f98:
    // 0x799f98: 0x1000002e  b           . + 4 + (0x2E << 2)
    ctx->pc = 0x799F98u;
    {
        const bool branch_taken_0x799f98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x799F9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799F98u;
        // 0x799f9c: 0x8e022f84  lw          $v0, 0x2F84($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12164)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799f98) {
            ctx->pc = 0x79A054u;
            goto label_79a054;
        }
    }
    ctx->pc = 0x799FA0u;
label_799fa0:
    // 0x799fa0: 0xc0b10e4  jal         func_2C4390
    ctx->pc = 0x799FA0u;
    SET_GPR_U32(ctx, 31, 0x799FA8u);
    ctx->pc = 0x799FA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799FA0u;
    // 0x799fa4: 0x8e242f84  lw          $a0, 0x2F84($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12164)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C4390u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C4390u, 0x799FA0u, 0x799FA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799FA8u;
label_799fa8:
    // 0x799fa8: 0x3c02003c  lui         $v0, 0x3C
    ctx->pc = 0x799fa8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
    // 0x799fac: 0x3c070400  lui         $a3, 0x400
    ctx->pc = 0x799facu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)1024 << 16));
    // 0x799fb0: 0x8c46d6e8  lw          $a2, -0x2918($v0)
    ctx->pc = 0x799fb0u;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x3BD6E8u));
    // 0x799fb4: 0x3c040058  lui         $a0, 0x58
    ctx->pc = 0x799fb4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)88 << 16));
    // 0x799fb8: 0x2405001c  addiu       $a1, $zero, 0x1C
    ctx->pc = 0x799fb8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
    // 0x799fbc: 0x24846af0  addiu       $a0, $a0, 0x6AF0
    ctx->pc = 0x799fbcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 27376));
    // 0x799fc0: 0xa0c01a14  sb          $zero, 0x1A14($a2)
    ctx->pc = 0x799fc0u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 6676), (uint8_t)GPR_U32(ctx, 0));
    // 0x799fc4: 0x8e038658  lw          $v1, -0x79A8($s0)
    ctx->pc = 0x799fc4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294936152)));
    // 0x799fc8: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x799fc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x799fcc: 0x471025  or          $v0, $v0, $a3
    ctx->pc = 0x799fccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 7));
    // 0x799fd0: 0xc0a58dc  jal         func_296370
    ctx->pc = 0x799FD0u;
    SET_GPR_U32(ctx, 31, 0x799FD8u);
    ctx->pc = 0x799FD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799FD0u;
    // 0x799fd4: 0xac620004  sw          $v0, 0x4($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296370u, 0x799FD0u, 0x799FD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799FD8u;
label_799fd8:
    // 0x799fd8: 0x24020011  addiu       $v0, $zero, 0x11
    ctx->pc = 0x799fd8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    // 0x799fdc: 0x3c100058  lui         $s0, 0x58
    ctx->pc = 0x799fdcu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)88 << 16));
    // 0x799fe0: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x799fe0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799fe4: 0xa3a20000  sb          $v0, 0x0($sp)
    ctx->pc = 0x799fe4u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x799fe8: 0xc0a56ae  jal         func_295AB8
    ctx->pc = 0x799FE8u;
    SET_GPR_U32(ctx, 31, 0x799FF0u);
    ctx->pc = 0x799FECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799FE8u;
    // 0x799fec: 0x261064f0  addiu       $s0, $s0, 0x64F0 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 25840));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295AB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295AB8u, 0x799FE8u, 0x799FF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799FF0u;
label_799ff0:
    // 0x799ff0: 0x24060905  addiu       $a2, $zero, 0x905
    ctx->pc = 0x799ff0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2309));
    // 0x799ff4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x799ff4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799ff8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x799ff8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799ffc: 0xc0a48fa  jal         func_2923E8
    ctx->pc = 0x799FFCu;
    SET_GPR_U32(ctx, 31, 0x79A004u);
    ctx->pc = 0x79A000u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799FFCu;
    // 0x79a000: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2923E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2923E8u, 0x799FFCu, 0x79A004u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A004u;
label_79a004:
    // 0x79a004: 0x24050011  addiu       $a1, $zero, 0x11
    ctx->pc = 0x79a004u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    // 0x79a008: 0xc0afbfa  jal         func_2BEFE8
    ctx->pc = 0x79A008u;
    SET_GPR_U32(ctx, 31, 0x79A010u);
    ctx->pc = 0x79A00Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A008u;
    // 0x79a00c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BEFE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BEFE8u, 0x79A008u, 0x79A010u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A010u;
label_79a010:
    // 0x79a010: 0xc0a56ce  jal         func_295B38
    ctx->pc = 0x79A010u;
    SET_GPR_U32(ctx, 31, 0x79A018u);
    ctx->pc = 0x79A014u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A010u;
    // 0x79a014: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295B38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295B38u, 0x79A010u, 0x79A018u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A018u;
label_79a018:
    // 0x79a018: 0x3c040060  lui         $a0, 0x60
    ctx->pc = 0x79a018u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
    // 0x79a01c: 0x2405001a  addiu       $a1, $zero, 0x1A
    ctx->pc = 0x79a01cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 26));
    // 0x79a020: 0xc0b0a0e  jal         func_2C2838
    ctx->pc = 0x79A020u;
    SET_GPR_U32(ctx, 31, 0x79A028u);
    ctx->pc = 0x79A024u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A020u;
    // 0x79a024: 0x2484ea60  addiu       $a0, $a0, -0x15A0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294961760));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C2838u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C2838u, 0x79A020u, 0x79A028u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A028u;
label_79a028:
    // 0x79a028: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x79A028u;
    {
        const bool branch_taken_0x79a028 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x79A02Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A028u;
        // 0x79a02c: 0x220802d  daddu       $s0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79a028) {
            ctx->pc = 0x79A050u;
            goto label_79a050;
        }
    }
    ctx->pc = 0x79A030u;
label_79a030:
    // 0x79a030: 0x3c10003c  lui         $s0, 0x3C
    ctx->pc = 0x79a030u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)60 << 16));
    // 0x79a034: 0x24051001  addiu       $a1, $zero, 0x1001
    ctx->pc = 0x79a034u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4097));
    // 0x79a038: 0x8e042f84  lw          $a0, 0x2F84($s0)
    ctx->pc = 0x79a038u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x3C2F84u));
    // 0x79a03c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x79a03cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79a040: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x79a040u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79a044: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x79a044u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79a048: 0xc0b1032  jal         func_2C40C8
    ctx->pc = 0x79A048u;
    SET_GPR_U32(ctx, 31, 0x79A050u);
    ctx->pc = 0x79A04Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A048u;
    // 0x79a04c: 0x24090001  addiu       $t1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C40C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C40C8u, 0x79A048u, 0x79A050u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A050u;
label_79a050:
    // 0x79a050: 0x8e022f84  lw          $v0, 0x2F84($s0)
    ctx->pc = 0x79a050u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12164)));
label_79a054:
    // 0x79a054: 0xc0b5692  jal         func_2D5A48
    ctx->pc = 0x79A054u;
    SET_GPR_U32(ctx, 31, 0x79A05Cu);
    ctx->pc = 0x79A058u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79A054u;
    // 0x79a058: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5A48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5A48u, 0x79A054u, 0x79A05Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79A05Cu;
label_79a05c:
    // 0x79a05c: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x79a05cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x79a060: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x79a060u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x79a064: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x79a064u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x79a068: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x79a068u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x79a06c: 0x3e00008  jr          $ra
    ctx->pc = 0x79A06Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x79A070u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79A06Cu;
        // 0x79a070: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79A06Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x79A074u;
    // 0x79a074: 0x0  nop
    ctx->pc = 0x79a074u;
    // NOP
    ctx->pc = 0x79a078u;
}
} // namespace gh_r102
