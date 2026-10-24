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

// Function: func_001DB9B8
// Address: 0x1db9b8 - 0x1dbcf8
void func_001DB9B8_0x1db9b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_001DB9B8_0x1db9b8");
#endif

    switch (ctx->pc) {
        case 0x1dba04u: goto label_1dba04;
        case 0x1dba60u: goto label_1dba60;
        case 0x1dba88u: goto label_1dba88;
        case 0x1dbb18u: goto label_1dbb18;
        case 0x1dbb24u: goto label_1dbb24;
        case 0x1dbb30u: goto label_1dbb30;
        case 0x1dbb3cu: goto label_1dbb3c;
        case 0x1dbb88u: goto label_1dbb88;
        case 0x1dbb98u: goto label_1dbb98;
        case 0x1dbba8u: goto label_1dbba8;
        case 0x1dbbb8u: goto label_1dbbb8;
        case 0x1dbbc8u: goto label_1dbbc8;
        case 0x1dbbd8u: goto label_1dbbd8;
        case 0x1dbbe8u: goto label_1dbbe8;
        case 0x1dbbf8u: goto label_1dbbf8;
        case 0x1dbc04u: goto label_1dbc04;
        case 0x1dbc10u: goto label_1dbc10;
        case 0x1dbc1cu: goto label_1dbc1c;
        case 0x1dbc28u: goto label_1dbc28;
        case 0x1dbc34u: goto label_1dbc34;
        case 0x1dbc40u: goto label_1dbc40;
        case 0x1dbc4cu: goto label_1dbc4c;
        case 0x1dbc58u: goto label_1dbc58;
        case 0x1dbc68u: goto label_1dbc68;
        case 0x1dbc74u: goto label_1dbc74;
        case 0x1dbc80u: goto label_1dbc80;
        case 0x1dbc8cu: goto label_1dbc8c;
        case 0x1dbc98u: goto label_1dbc98;
        default: break;
    }

    ctx->pc = 0x1db9b8u;

    // 0x1db9b8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1db9b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1db9bc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1db9bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1db9c0: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x1db9c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x1db9c4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1db9c4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1db9c8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1db9c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1db9cc: 0x92233025  lbu         $v1, 0x3025($s1)
    ctx->pc = 0x1db9ccu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 12325)));
    // 0x1db9d0: 0x2c620005  sltiu       $v0, $v1, 0x5
    ctx->pc = 0x1db9d0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
    // 0x1db9d4: 0x104000c2  beqz        $v0, . + 4 + (0xC2 << 2)
    ctx->pc = 0x1DB9D4u;
    {
        const bool branch_taken_0x1db9d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DB9D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DB9D4u;
        // 0x1db9d8: 0x3c020043  lui         $v0, 0x43 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)67 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1db9d4) {
            ctx->pc = 0x1DBCE0u;
            goto label_1dbce0;
        }
    }
    ctx->pc = 0x1DB9DCu;
    // 0x1db9dc: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1db9dcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1db9e0: 0x2442b400  addiu       $v0, $v0, -0x4C00
    ctx->pc = 0x1db9e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294947840));
    // 0x1db9e4: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1db9e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1db9e8: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x1db9e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1db9ec: 0x800008  jr          $a0
    ctx->pc = 0x1DB9ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1DB9F4u: goto label_1db9f4;
            case 0x1DBA0Cu: goto label_1dba0c;
            case 0x1DBAA0u: goto label_1dbaa0;
            case 0x1DBB50u: goto label_1dbb50;
            case 0x1DBCB0u: goto label_1dbcb0;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DB9ECu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x1DB9F4u;
label_1db9f4:
    // 0x1db9f4: 0x3c040060  lui         $a0, 0x60
    ctx->pc = 0x1db9f4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
    // 0x1db9f8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1db9f8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1db9fc: 0xc0b42ae  jal         func_2D0AB8
    ctx->pc = 0x1DB9FCu;
    SET_GPR_U32(ctx, 31, 0x1DBA04u);
    ctx->pc = 0x1DBA00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DB9FCu;
    // 0x1dba00: 0x2484ee00  addiu       $a0, $a0, -0x1200 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962688));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D0AB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D0AB8u, 0x1DB9FCu, 0x1DBA04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DBA04u;
label_1dba04:
    // 0x1dba04: 0x100000a5  b           . + 4 + (0xA5 << 2)
    ctx->pc = 0x1DBA04u;
    {
        const bool branch_taken_0x1dba04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DBA08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DBA04u;
        // 0x1dba08: 0x92223025  lbu         $v0, 0x3025($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 12325)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dba04) {
            ctx->pc = 0x1DBC9Cu;
            goto label_1dbc9c;
        }
    }
    ctx->pc = 0x1DBA0Cu;
label_1dba0c:
    // 0x1dba0c: 0x8e223028  lw          $v0, 0x3028($s1)
    ctx->pc = 0x1dba0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12328)));
    // 0x1dba10: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1DBA10u;
    {
        const bool branch_taken_0x1dba10 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1DBA14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DBA10u;
        // 0x1dba14: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dba10) {
            ctx->pc = 0x1DBA20u;
            goto label_1dba20;
        }
    }
    ctx->pc = 0x1DBA18u;
    // 0x1dba18: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1DBA18u;
    {
        const bool branch_taken_0x1dba18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DBA1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DBA18u;
        // 0x1dba1c: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dba18) {
            ctx->pc = 0x1DBA28u;
            goto label_1dba28;
        }
    }
    ctx->pc = 0x1DBA20u;
label_1dba20:
    // 0x1dba20: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x1dba20u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dba24: 0xae223028  sw          $v0, 0x3028($s1)
    ctx->pc = 0x1dba24u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12328), GPR_U32(ctx, 2));
label_1dba28:
    // 0x1dba28: 0x306200ff  andi        $v0, $v1, 0xFF
    ctx->pc = 0x1dba28u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1dba2c: 0x104000ac  beqz        $v0, . + 4 + (0xAC << 2)
    ctx->pc = 0x1DBA2Cu;
    {
        const bool branch_taken_0x1dba2c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DBA30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DBA2Cu;
        // 0x1dba30: 0x3c100060  lui         $s0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dba2c) {
            ctx->pc = 0x1DBCE0u;
            goto label_1dbce0;
        }
    }
    ctx->pc = 0x1DBA34u;
    // 0x1dba34: 0x8e223004  lw          $v0, 0x3004($s1)
    ctx->pc = 0x1dba34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12292)));
    // 0x1dba38: 0x2610ee00  addiu       $s0, $s0, -0x1200
    ctx->pc = 0x1dba38u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294962688));
    // 0x1dba3c: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x1dba3cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1dba40: 0x8c470000  lw          $a3, 0x0($v0)
    ctx->pc = 0x1dba40u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1dba44: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1dba44u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dba48: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1dba48u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dba4c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1dba4cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dba50: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1dba50u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dba54: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1dba54u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dba58: 0xc0b2e92  jal         func_2CBA48
    ctx->pc = 0x1DBA58u;
    SET_GPR_U32(ctx, 31, 0x1DBA60u);
    ctx->pc = 0x1DBA5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DBA58u;
    // 0x1dba5c: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CBA48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CBA48u, 0x1DBA58u, 0x1DBA60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DBA60u;
label_1dba60:
    // 0x1dba60: 0x8e233008  lw          $v1, 0x3008($s1)
    ctx->pc = 0x1dba60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12296)));
    // 0x1dba64: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1dba64u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dba68: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x1dba68u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1dba6c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1dba6cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dba70: 0x8c670000  lw          $a3, 0x0($v1)
    ctx->pc = 0x1dba70u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1dba74: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1dba74u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dba78: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1dba78u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dba7c: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1dba7cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dba80: 0xc0b2e92  jal         func_2CBA48
    ctx->pc = 0x1DBA80u;
    SET_GPR_U32(ctx, 31, 0x1DBA88u);
    ctx->pc = 0x1DBA84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DBA80u;
    // 0x1dba84: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CBA48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CBA48u, 0x1DBA80u, 0x1DBA88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DBA88u;
label_1dba88:
    // 0x1dba88: 0x92233025  lbu         $v1, 0x3025($s1)
    ctx->pc = 0x1dba88u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 12325)));
    // 0x1dba8c: 0x2402000f  addiu       $v0, $zero, 0xF
    ctx->pc = 0x1dba8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x1dba90: 0xae22302c  sw          $v0, 0x302C($s1)
    ctx->pc = 0x1dba90u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12332), GPR_U32(ctx, 2));
    // 0x1dba94: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1dba94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1dba98: 0x10000091  b           . + 4 + (0x91 << 2)
    ctx->pc = 0x1DBA98u;
    {
        const bool branch_taken_0x1dba98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DBA9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DBA98u;
        // 0x1dba9c: 0xa2233025  sb          $v1, 0x3025($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 12325), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dba98) {
            ctx->pc = 0x1DBCE0u;
            goto label_1dbce0;
        }
    }
    ctx->pc = 0x1DBAA0u;
label_1dbaa0:
    // 0x1dbaa0: 0xc620302c  lwc1        $f0, 0x302C($s1)
    ctx->pc = 0x1dbaa0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 12332)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1dbaa4: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1dbaa4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1dbaa8: 0x3c014170  lui         $at, 0x4170
    ctx->pc = 0x1dbaa8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16752 << 16));
    // 0x1dbaac: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x1dbaacu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1dbab0: 0x8e253004  lw          $a1, 0x3004($s1)
    ctx->pc = 0x1dbab0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12292)));
    // 0x1dbab4: 0x3c040057  lui         $a0, 0x57
    ctx->pc = 0x1dbab4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
    // 0x1dbab8: 0xc48181c0  lwc1        $f1, -0x7E40($a0)
    ctx->pc = 0x1dbab8u;
    { uint32_t bits = FAST_READ32(0x5681C0u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1dbabc: 0x46001001  sub.s       $f0, $f2, $f0
    ctx->pc = 0x1dbabcu;
    ctx->f[0] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
    // 0x1dbac0: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x1dbac0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1dbac4: 0x248481c0  addiu       $a0, $a0, -0x7E40
    ctx->pc = 0x1dbac4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294934976));
    // 0x1dbac8: 0x8c4300f0  lw          $v1, 0xF0($v0)
    ctx->pc = 0x1dbac8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 240)));
    // 0x1dbacc: 0x0  nop
    ctx->pc = 0x1dbaccu;
    // NOP
    // 0x1dbad0: 0x0  nop
    ctx->pc = 0x1dbad0u;
    // NOP
    // 0x1dbad4: 0x46020003  div.s       $f0, $f0, $f2
    ctx->pc = 0x1dbad4u;
    ctx->f[0] = ps2FpuDivide(ctx->fcr31, ctx->f[0], ctx->f[2]);
    // 0x1dbad8: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x1dbad8u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x1dbadc: 0x46010040  add.s       $f1, $f0, $f1
    ctx->pc = 0x1dbadcu;
    ctx->f[1] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1dbae0: 0xe4610000  swc1        $f1, 0x0($v1)
    ctx->pc = 0x1dbae0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x1dbae4: 0x8e223008  lw          $v0, 0x3008($s1)
    ctx->pc = 0x1dbae4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12296)));
    // 0x1dbae8: 0xc4810010  lwc1        $f1, 0x10($a0)
    ctx->pc = 0x1dbae8u;
    { uint32_t bits = FAST_READ32(0x5681D0u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1dbaec: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1dbaecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1dbaf0: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1dbaf0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1dbaf4: 0x8c6200f0  lw          $v0, 0xF0($v1)
    ctx->pc = 0x1dbaf4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 240)));
    // 0x1dbaf8: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x1dbaf8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x1dbafc: 0x8e22302c  lw          $v0, 0x302C($s1)
    ctx->pc = 0x1dbafcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12332)));
    // 0x1dbb00: 0x14400011  bnez        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x1DBB00u;
    {
        const bool branch_taken_0x1dbb00 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1DBB04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DBB00u;
        // 0x1dbb04: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dbb00) {
            ctx->pc = 0x1DBB48u;
            goto label_1dbb48;
        }
    }
    ctx->pc = 0x1DBB08u;
    // 0x1dbb08: 0x263025b0  addiu       $s0, $s1, 0x25B0
    ctx->pc = 0x1dbb08u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 9648));
    // 0x1dbb0c: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x1dbb0cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1dbb10: 0xc077cd6  jal         func_1DF358
    ctx->pc = 0x1DBB10u;
    SET_GPR_U32(ctx, 31, 0x1DBB18u);
    ctx->pc = 0x1DBB14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DBB10u;
    // 0x1dbb14: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DF358u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DF358u, 0x1DBB10u, 0x1DBB18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DBB18u;
label_1dbb18:
    // 0x1dbb18: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1dbb18u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dbb1c: 0xc077c66  jal         func_1DF198
    ctx->pc = 0x1DBB1Cu;
    SET_GPR_U32(ctx, 31, 0x1DBB24u);
    ctx->pc = 0x1DBB20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DBB1Cu;
    // 0x1dbb20: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DF198u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DF198u, 0x1DBB1Cu, 0x1DBB24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DBB24u;
label_1dbb24:
    // 0x1dbb24: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1dbb24u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dbb28: 0xc077c9e  jal         func_1DF278
    ctx->pc = 0x1DBB28u;
    SET_GPR_U32(ctx, 31, 0x1DBB30u);
    ctx->pc = 0x1DBB2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DBB28u;
    // 0x1dbb2c: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DF278u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DF278u, 0x1DBB28u, 0x1DBB30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DBB30u;
label_1dbb30:
    // 0x1dbb30: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1dbb30u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dbb34: 0xc077d0a  jal         func_1DF428
    ctx->pc = 0x1DBB34u;
    SET_GPR_U32(ctx, 31, 0x1DBB3Cu);
    ctx->pc = 0x1DBB38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DBB34u;
    // 0x1dbb38: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DF428u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DF428u, 0x1DBB34u, 0x1DBB3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DBB3Cu;
label_1dbb3c:
    // 0x1dbb3c: 0x92223025  lbu         $v0, 0x3025($s1)
    ctx->pc = 0x1dbb3cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 12325)));
    // 0x1dbb40: 0x10000057  b           . + 4 + (0x57 << 2)
    ctx->pc = 0x1DBB40u;
    {
        const bool branch_taken_0x1dbb40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DBB44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DBB40u;
        // 0x1dbb44: 0x24030014  addiu       $v1, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dbb40) {
            ctx->pc = 0x1DBCA0u;
            goto label_1dbca0;
        }
    }
    ctx->pc = 0x1DBB48u;
label_1dbb48:
    // 0x1dbb48: 0x10000065  b           . + 4 + (0x65 << 2)
    ctx->pc = 0x1DBB48u;
    {
        const bool branch_taken_0x1dbb48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DBB4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DBB48u;
        // 0x1dbb4c: 0xae22302c  sw          $v0, 0x302C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 12332), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dbb48) {
            ctx->pc = 0x1DBCE0u;
            goto label_1dbce0;
        }
    }
    ctx->pc = 0x1DBB50u;
label_1dbb50:
    // 0x1dbb50: 0x8e223028  lw          $v0, 0x3028($s1)
    ctx->pc = 0x1dbb50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12328)));
    // 0x1dbb54: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1DBB54u;
    {
        const bool branch_taken_0x1dbb54 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1DBB58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DBB54u;
        // 0x1dbb58: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dbb54) {
            ctx->pc = 0x1DBB64u;
            goto label_1dbb64;
        }
    }
    ctx->pc = 0x1DBB5Cu;
    // 0x1dbb5c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1DBB5Cu;
    {
        const bool branch_taken_0x1dbb5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DBB60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DBB5Cu;
        // 0x1dbb60: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dbb5c) {
            ctx->pc = 0x1DBB6Cu;
            goto label_1dbb6c;
        }
    }
    ctx->pc = 0x1DBB64u;
label_1dbb64:
    // 0x1dbb64: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x1dbb64u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dbb68: 0xae223028  sw          $v0, 0x3028($s1)
    ctx->pc = 0x1dbb68u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12328), GPR_U32(ctx, 2));
label_1dbb6c:
    // 0x1dbb6c: 0x306200ff  andi        $v0, $v1, 0xFF
    ctx->pc = 0x1dbb6cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1dbb70: 0x1040005b  beqz        $v0, . + 4 + (0x5B << 2)
    ctx->pc = 0x1DBB70u;
    {
        const bool branch_taken_0x1dbb70 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DBB74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DBB70u;
        // 0x1dbb74: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dbb70) {
            ctx->pc = 0x1DBCE0u;
            goto label_1dbce0;
        }
    }
    ctx->pc = 0x1DBB78u;
    // 0x1dbb78: 0xae203034  sw          $zero, 0x3034($s1)
    ctx->pc = 0x1dbb78u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12340), GPR_U32(ctx, 0));
    // 0x1dbb7c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1dbb7cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dbb80: 0xc077592  jal         func_1DD648
    ctx->pc = 0x1DBB80u;
    SET_GPR_U32(ctx, 31, 0x1DBB88u);
    ctx->pc = 0x1DBB84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DBB80u;
    // 0x1dbb84: 0x24060032  addiu       $a2, $zero, 0x32 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 50));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DD648u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DD648u, 0x1DBB80u, 0x1DBB88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DBB88u;
label_1dbb88:
    // 0x1dbb88: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1dbb88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dbb8c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1dbb8cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1dbb90: 0xc077592  jal         func_1DD648
    ctx->pc = 0x1DBB90u;
    SET_GPR_U32(ctx, 31, 0x1DBB98u);
    ctx->pc = 0x1DBB94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DBB90u;
    // 0x1dbb94: 0x24060014  addiu       $a2, $zero, 0x14 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DD648u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DD648u, 0x1DBB90u, 0x1DBB98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DBB98u;
label_1dbb98:
    // 0x1dbb98: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1dbb98u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dbb9c: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x1dbb9cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1dbba0: 0xc077592  jal         func_1DD648
    ctx->pc = 0x1DBBA0u;
    SET_GPR_U32(ctx, 31, 0x1DBBA8u);
    ctx->pc = 0x1DBBA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DBBA0u;
    // 0x1dbba4: 0x2406000f  addiu       $a2, $zero, 0xF (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DD648u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DD648u, 0x1DBBA0u, 0x1DBBA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DBBA8u;
label_1dbba8:
    // 0x1dbba8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1dbba8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dbbac: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x1dbbacu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1dbbb0: 0xc077592  jal         func_1DD648
    ctx->pc = 0x1DBBB0u;
    SET_GPR_U32(ctx, 31, 0x1DBBB8u);
    ctx->pc = 0x1DBBB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DBBB0u;
    // 0x1dbbb4: 0x2406000a  addiu       $a2, $zero, 0xA (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DD648u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DD648u, 0x1DBBB0u, 0x1DBBB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DBBB8u;
label_1dbbb8:
    // 0x1dbbb8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1dbbb8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dbbbc: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x1dbbbcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1dbbc0: 0xc077592  jal         func_1DD648
    ctx->pc = 0x1DBBC0u;
    SET_GPR_U32(ctx, 31, 0x1DBBC8u);
    ctx->pc = 0x1DBBC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DBBC0u;
    // 0x1dbbc4: 0x24060008  addiu       $a2, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DD648u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DD648u, 0x1DBBC0u, 0x1DBBC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DBBC8u;
label_1dbbc8:
    // 0x1dbbc8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1dbbc8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dbbcc: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x1dbbccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1dbbd0: 0xc077592  jal         func_1DD648
    ctx->pc = 0x1DBBD0u;
    SET_GPR_U32(ctx, 31, 0x1DBBD8u);
    ctx->pc = 0x1DBBD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DBBD0u;
    // 0x1dbbd4: 0x24060008  addiu       $a2, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DD648u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DD648u, 0x1DBBD0u, 0x1DBBD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DBBD8u;
label_1dbbd8:
    // 0x1dbbd8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1dbbd8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dbbdc: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x1dbbdcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x1dbbe0: 0xc077592  jal         func_1DD648
    ctx->pc = 0x1DBBE0u;
    SET_GPR_U32(ctx, 31, 0x1DBBE8u);
    ctx->pc = 0x1DBBE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DBBE0u;
    // 0x1dbbe4: 0x24060003  addiu       $a2, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DD648u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DD648u, 0x1DBBE0u, 0x1DBBE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DBBE8u;
label_1dbbe8:
    // 0x1dbbe8: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x1dbbe8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1dbbec: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1dbbecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dbbf0: 0xc077592  jal         func_1DD648
    ctx->pc = 0x1DBBF0u;
    SET_GPR_U32(ctx, 31, 0x1DBBF8u);
    ctx->pc = 0x1DBBF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DBBF0u;
    // 0x1dbbf4: 0x24050007  addiu       $a1, $zero, 0x7 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DD648u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DD648u, 0x1DBBF0u, 0x1DBBF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DBBF8u;
label_1dbbf8:
    // 0x1dbbf8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1dbbf8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dbbfc: 0xc077568  jal         func_1DD5A0
    ctx->pc = 0x1DBBFCu;
    SET_GPR_U32(ctx, 31, 0x1DBC04u);
    ctx->pc = 0x1DBC00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DBBFCu;
    // 0x1dbc00: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DD5A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DD5A0u, 0x1DBBFCu, 0x1DBC04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DBC04u;
label_1dbc04:
    // 0x1dbc04: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1dbc04u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dbc08: 0xc077822  jal         func_1DE088
    ctx->pc = 0x1DBC08u;
    SET_GPR_U32(ctx, 31, 0x1DBC10u);
    ctx->pc = 0x1DBC0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DBC08u;
    // 0x1dbc0c: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DE088u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DE088u, 0x1DBC08u, 0x1DBC10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DBC10u;
label_1dbc10:
    // 0x1dbc10: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1dbc10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dbc14: 0xc07785c  jal         func_1DE170
    ctx->pc = 0x1DBC14u;
    SET_GPR_U32(ctx, 31, 0x1DBC1Cu);
    ctx->pc = 0x1DBC18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DBC14u;
    // 0x1dbc18: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DE170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DE170u, 0x1DBC14u, 0x1DBC1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DBC1Cu;
label_1dbc1c:
    // 0x1dbc1c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1dbc1cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dbc20: 0xc077896  jal         func_1DE258
    ctx->pc = 0x1DBC20u;
    SET_GPR_U32(ctx, 31, 0x1DBC28u);
    ctx->pc = 0x1DBC24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DBC20u;
    // 0x1dbc24: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DE258u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DE258u, 0x1DBC20u, 0x1DBC28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DBC28u;
label_1dbc28:
    // 0x1dbc28: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1dbc28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dbc2c: 0xc0778d0  jal         func_1DE340
    ctx->pc = 0x1DBC2Cu;
    SET_GPR_U32(ctx, 31, 0x1DBC34u);
    ctx->pc = 0x1DBC30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DBC2Cu;
    // 0x1dbc30: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DE340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DE340u, 0x1DBC2Cu, 0x1DBC34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DBC34u;
label_1dbc34:
    // 0x1dbc34: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1dbc34u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dbc38: 0xc07790a  jal         func_1DE428
    ctx->pc = 0x1DBC38u;
    SET_GPR_U32(ctx, 31, 0x1DBC40u);
    ctx->pc = 0x1DBC3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DBC38u;
    // 0x1dbc3c: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DE428u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DE428u, 0x1DBC38u, 0x1DBC40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DBC40u;
label_1dbc40:
    // 0x1dbc40: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1dbc40u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dbc44: 0xc07793e  jal         func_1DE4F8
    ctx->pc = 0x1DBC44u;
    SET_GPR_U32(ctx, 31, 0x1DBC4Cu);
    ctx->pc = 0x1DBC48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DBC44u;
    // 0x1dbc48: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DE4F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DE4F8u, 0x1DBC44u, 0x1DBC4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DBC4Cu;
label_1dbc4c:
    // 0x1dbc4c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1dbc4cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dbc50: 0xc0779f2  jal         func_1DE7C8
    ctx->pc = 0x1DBC50u;
    SET_GPR_U32(ctx, 31, 0x1DBC58u);
    ctx->pc = 0x1DBC54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DBC50u;
    // 0x1dbc54: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DE7C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DE7C8u, 0x1DBC50u, 0x1DBC58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DBC58u;
label_1dbc58:
    // 0x1dbc58: 0xae203034  sw          $zero, 0x3034($s1)
    ctx->pc = 0x1dbc58u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12340), GPR_U32(ctx, 0));
    // 0x1dbc5c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1dbc5cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dbc60: 0xc077486  jal         func_1DD218
    ctx->pc = 0x1DBC60u;
    SET_GPR_U32(ctx, 31, 0x1DBC68u);
    ctx->pc = 0x1DBC64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DBC60u;
    // 0x1dbc64: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DD218u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DD218u, 0x1DBC60u, 0x1DBC68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DBC68u;
label_1dbc68:
    // 0x1dbc68: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1dbc68u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dbc6c: 0xc0775dc  jal         func_1DD770
    ctx->pc = 0x1DBC6Cu;
    SET_GPR_U32(ctx, 31, 0x1DBC74u);
    ctx->pc = 0x1DBC70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DBC6Cu;
    // 0x1dbc70: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DD770u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DD770u, 0x1DBC6Cu, 0x1DBC74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DBC74u;
label_1dbc74:
    // 0x1dbc74: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1dbc74u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dbc78: 0xc077610  jal         func_1DD840
    ctx->pc = 0x1DBC78u;
    SET_GPR_U32(ctx, 31, 0x1DBC80u);
    ctx->pc = 0x1DBC7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DBC78u;
    // 0x1dbc7c: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DD840u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DD840u, 0x1DBC78u, 0x1DBC80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DBC80u;
label_1dbc80:
    // 0x1dbc80: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1dbc80u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dbc84: 0xc077644  jal         func_1DD910
    ctx->pc = 0x1DBC84u;
    SET_GPR_U32(ctx, 31, 0x1DBC8Cu);
    ctx->pc = 0x1DBC88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DBC84u;
    // 0x1dbc88: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DD910u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DD910u, 0x1DBC84u, 0x1DBC8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DBC8Cu;
label_1dbc8c:
    // 0x1dbc8c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1dbc8cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dbc90: 0xc077678  jal         func_1DD9E0
    ctx->pc = 0x1DBC90u;
    SET_GPR_U32(ctx, 31, 0x1DBC98u);
    ctx->pc = 0x1DBC94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DBC90u;
    // 0x1dbc94: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DD9E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DD9E0u, 0x1DBC90u, 0x1DBC98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DBC98u;
label_1dbc98:
    // 0x1dbc98: 0x92223025  lbu         $v0, 0x3025($s1)
    ctx->pc = 0x1dbc98u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 12325)));
label_1dbc9c:
    // 0x1dbc9c: 0x2403001e  addiu       $v1, $zero, 0x1E
    ctx->pc = 0x1dbc9cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
label_1dbca0:
    // 0x1dbca0: 0xae233028  sw          $v1, 0x3028($s1)
    ctx->pc = 0x1dbca0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12328), GPR_U32(ctx, 3));
    // 0x1dbca4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1dbca4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1dbca8: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x1DBCA8u;
    {
        const bool branch_taken_0x1dbca8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DBCACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DBCA8u;
        // 0x1dbcac: 0xa2223025  sb          $v0, 0x3025($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 12325), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dbca8) {
            ctx->pc = 0x1DBCE0u;
            goto label_1dbce0;
        }
    }
    ctx->pc = 0x1DBCB0u;
label_1dbcb0:
    // 0x1dbcb0: 0x8e223028  lw          $v0, 0x3028($s1)
    ctx->pc = 0x1dbcb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12328)));
    // 0x1dbcb4: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1DBCB4u;
    {
        const bool branch_taken_0x1dbcb4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1DBCB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DBCB4u;
        // 0x1dbcb8: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dbcb4) {
            ctx->pc = 0x1DBCC4u;
            goto label_1dbcc4;
        }
    }
    ctx->pc = 0x1DBCBCu;
    // 0x1dbcbc: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1DBCBCu;
    {
        const bool branch_taken_0x1dbcbc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DBCC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DBCBCu;
        // 0x1dbcc0: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dbcbc) {
            ctx->pc = 0x1DBCCCu;
            goto label_1dbccc;
        }
    }
    ctx->pc = 0x1DBCC4u;
label_1dbcc4:
    // 0x1dbcc4: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x1dbcc4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dbcc8: 0xae223028  sw          $v0, 0x3028($s1)
    ctx->pc = 0x1dbcc8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12328), GPR_U32(ctx, 2));
label_1dbccc:
    // 0x1dbccc: 0x306200ff  andi        $v0, $v1, 0xFF
    ctx->pc = 0x1dbcccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1dbcd0: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1DBCD0u;
    {
        const bool branch_taken_0x1dbcd0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DBCD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DBCD0u;
        // 0x1dbcd4: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dbcd0) {
            ctx->pc = 0x1DBCE4u;
            goto label_1dbce4;
        }
    }
    ctx->pc = 0x1DBCD8u;
    // 0x1dbcd8: 0xa2203025  sb          $zero, 0x3025($s1)
    ctx->pc = 0x1dbcd8u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 12325), (uint8_t)GPR_U32(ctx, 0));
    // 0x1dbcdc: 0xa2203024  sb          $zero, 0x3024($s1)
    ctx->pc = 0x1dbcdcu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 12324), (uint8_t)GPR_U32(ctx, 0));
label_1dbce0:
    // 0x1dbce0: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x1dbce0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1dbce4:
    // 0x1dbce4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1dbce4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1dbce8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1dbce8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1dbcec: 0x3e00008  jr          $ra
    ctx->pc = 0x1DBCECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DBCF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DBCECu;
        // 0x1dbcf0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DBCECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DBCF4u;
    // 0x1dbcf4: 0x0  nop
    ctx->pc = 0x1dbcf4u;
    // NOP
    ctx->pc = 0x1dbcf8u;
}
