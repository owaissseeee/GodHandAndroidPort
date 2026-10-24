#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "event_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_event
{
// Function: debugSetPlayModeEdit0__9cEventEnv
// Address: 0x7ad700 - 0x7ad890
void debugSetPlayModeEdit0__9cEventEnv_0x7ad700(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("debugSetPlayModeEdit0__9cEventEnv_0x7ad700");
#endif

    switch (ctx->pc) {
        case 0x7ad750u: goto label_7ad750;
        case 0x7ad760u: goto label_7ad760;
        case 0x7ad788u: goto label_7ad788;
        case 0x7ad7a4u: goto label_7ad7a4;
        case 0x7ad7b8u: goto label_7ad7b8;
        default: break;
    }

    ctx->pc = 0x7ad700u;

    // 0x7ad700: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x7ad700u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x7ad704: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x7ad704u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
    // 0x7ad708: 0x7fb60030  sq          $s6, 0x30($sp)
    ctx->pc = 0x7ad708u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 22));
    // 0x7ad70c: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x7ad70cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7ad710: 0x7fb00090  sq          $s0, 0x90($sp)
    ctx->pc = 0x7ad710u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 16));
    // 0x7ad714: 0x80b02d  daddu       $s6, $a0, $zero
    ctx->pc = 0x7ad714u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7ad718: 0x7fb10080  sq          $s1, 0x80($sp)
    ctx->pc = 0x7ad718u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 17));
    // 0x7ad71c: 0x7fb20070  sq          $s2, 0x70($sp)
    ctx->pc = 0x7ad71cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 18));
    // 0x7ad720: 0x7fb30060  sq          $s3, 0x60($sp)
    ctx->pc = 0x7ad720u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 19));
    // 0x7ad724: 0x7fb50040  sq          $s5, 0x40($sp)
    ctx->pc = 0x7ad724u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 21));
    // 0x7ad728: 0x7fb70020  sq          $s7, 0x20($sp)
    ctx->pc = 0x7ad728u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 23));
    // 0x7ad72c: 0x7fbe0010  sq          $fp, 0x10($sp)
    ctx->pc = 0x7ad72cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 30));
    // 0x7ad730: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x7ad730u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x7ad734: 0xaec0003c  sw          $zero, 0x3C($s6)
    ctx->pc = 0x7ad734u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 60), GPR_U32(ctx, 0));
    // 0x7ad738: 0x8ec30008  lw          $v1, 0x8($s6)
    ctx->pc = 0x7ad738u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 8)));
    // 0x7ad73c: 0x2462ffff  addiu       $v0, $v1, -0x1
    ctx->pc = 0x7ad73cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x7ad740: 0x18600047  blez        $v1, . + 4 + (0x47 << 2)
    ctx->pc = 0x7AD740u;
    {
        const bool branch_taken_0x7ad740 = (GPR_S64(ctx, 3) <= 0);
        ctx->pc = 0x7AD744u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7AD740u;
        // 0x7ad744: 0xaec20040  sw          $v0, 0x40($s6) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 22), 64), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7ad740) {
            ctx->pc = 0x7AD860u;
            goto label_7ad860;
        }
    }
    ctx->pc = 0x7AD748u;
    // 0x7ad748: 0x3c02007b  lui         $v0, 0x7B
    ctx->pc = 0x7ad748u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)123 << 16));
    // 0x7ad74c: 0x0  nop
    ctx->pc = 0x7ad74cu;
    // NOP
label_7ad750:
    // 0x7ad750: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x7ad750u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7ad754: 0x24445248  addiu       $a0, $v0, 0x5248
    ctx->pc = 0x7ad754u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 21064));
    // 0x7ad758: 0xc1eb3b8  jal         func_7ACEE0
    ctx->pc = 0x7AD758u;
    SET_GPR_U32(ctx, 31, 0x7AD760u);
    ctx->pc = 0x7AD75Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7AD758u;
    // 0x7ad75c: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7ACEE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7ACEE0u, 0x7AD758u, 0x7AD760u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7AD760u;
label_7ad760:
    // 0x7ad760: 0x14b900  sll         $s7, $s4, 4
    ctx->pc = 0x7ad760u;
    SET_GPR_S32(ctx, 23, (int32_t)SLL32(GPR_U32(ctx, 20), 4));
    // 0x7ad764: 0x3c04007b  lui         $a0, 0x7B
    ctx->pc = 0x7ad764u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)123 << 16));
    // 0x7ad768: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x7ad768u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7ad76c: 0x24844f80  addiu       $a0, $a0, 0x4F80
    ctx->pc = 0x7ad76cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 20352));
    // 0x7ad770: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x7ad770u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x7B4F84u));
    // 0x7ad774: 0x18600016  blez        $v1, . + 4 + (0x16 << 2)
    ctx->pc = 0x7AD774u;
    {
        const bool branch_taken_0x7ad774 = (GPR_S64(ctx, 3) <= 0);
        ctx->pc = 0x7AD778u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7AD774u;
        // 0x7ad778: 0x269e0001  addiu       $fp, $s4, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7ad774) {
            ctx->pc = 0x7AD7D0u;
            goto label_7ad7d0;
        }
    }
    ctx->pc = 0x7AD77Cu;
    // 0x7ad77c: 0x3c02007b  lui         $v0, 0x7B
    ctx->pc = 0x7ad77cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)123 << 16));
    // 0x7ad780: 0x24554f80  addiu       $s5, $v0, 0x4F80
    ctx->pc = 0x7ad780u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 2), 20352));
    // 0x7ad784: 0x0  nop
    ctx->pc = 0x7ad784u;
    // NOP
label_7ad788:
    // 0x7ad788: 0x138600  sll         $s0, $s3, 24
    ctx->pc = 0x7ad788u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 19), 24));
    // 0x7ad78c: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x7ad78cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7ad790: 0x108603  sra         $s0, $s0, 24
    ctx->pc = 0x7ad790u;
    SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 16), 24));
    // 0x7ad794: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x7ad794u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7ad798: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x7ad798u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7ad79c: 0xc1ea620  jal         func_7A9880
    ctx->pc = 0x7AD79Cu;
    SET_GPR_U32(ctx, 31, 0x7AD7A4u);
    ctx->pc = 0x7AD7A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7AD79Cu;
    // 0x7ad7a0: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7A9880u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7A9880u, 0x7AD79Cu, 0x7AD7A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7AD7A4u;
label_7ad7a4:
    // 0x7ad7a4: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x7ad7a4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7ad7a8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x7ad7a8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7ad7ac: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x7ad7acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7ad7b0: 0xc1ea644  jal         func_7A9910
    ctx->pc = 0x7AD7B0u;
    SET_GPR_U32(ctx, 31, 0x7AD7B8u);
    ctx->pc = 0x7AD7B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7AD7B0u;
    // 0x7ad7b4: 0x280302d  daddu       $a2, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7A9910u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7A9910u, 0x7AD7B0u, 0x7AD7B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7AD7B8u;
label_7ad7b8:
    // 0x7ad7b8: 0x2228821  addu        $s1, $s1, $v0
    ctx->pc = 0x7ad7b8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x7ad7bc: 0x8ea30004  lw          $v1, 0x4($s5)
    ctx->pc = 0x7ad7bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
    // 0x7ad7c0: 0x251102b  sltu        $v0, $s2, $s1
    ctx->pc = 0x7ad7c0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
    // 0x7ad7c4: 0x263182a  slt         $v1, $s3, $v1
    ctx->pc = 0x7ad7c4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x7ad7c8: 0x1460ffef  bnez        $v1, . + 4 + (-0x11 << 2)
    ctx->pc = 0x7AD7C8u;
    {
        const bool branch_taken_0x7ad7c8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x7AD7CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7AD7C8u;
        // 0x7ad7cc: 0x222900b  movn        $s2, $s1, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 18, GPR_VEC(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7ad7c8) {
            ctx->pc = 0x7AD788u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_7ad788;
        }
    }
    ctx->pc = 0x7AD7D0u;
label_7ad7d0:
    // 0x7ad7d0: 0x8ec20004  lw          $v0, 0x4($s6)
    ctx->pc = 0x7ad7d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4)));
    // 0x7ad7d4: 0x6400006  bltz        $s2, . + 4 + (0x6 << 2)
    ctx->pc = 0x7AD7D4u;
    {
        const bool branch_taken_0x7ad7d4 = (GPR_S64(ctx, 18) < 0);
        ctx->pc = 0x7AD7D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7AD7D4u;
        // 0x7ad7d8: 0x2e22021  addu        $a0, $s7, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7ad7d4) {
            ctx->pc = 0x7AD7F0u;
            goto label_7ad7f0;
        }
    }
    ctx->pc = 0x7AD7DCu;
    // 0x7ad7dc: 0x44920000  mtc1        $s2, $f0
    ctx->pc = 0x7ad7dcu;
    { uint32_t bits = GPR_U32(ctx, 18); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x7ad7e0: 0x0  nop
    ctx->pc = 0x7ad7e0u;
    // NOP
    // 0x7ad7e4: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x7ad7e4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x7ad7e8: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x7AD7E8u;
    {
        const bool branch_taken_0x7ad7e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x7AD7ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7AD7E8u;
        // 0x7ad7ec: 0xe4800008  swc1        $f0, 0x8($a0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x7ad7e8) {
            ctx->pc = 0x7AD810u;
            goto label_7ad810;
        }
    }
    ctx->pc = 0x7AD7F0u;
label_7ad7f0:
    // 0x7ad7f0: 0x121842  srl         $v1, $s2, 1
    ctx->pc = 0x7ad7f0u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 18), 1));
    // 0x7ad7f4: 0x32420001  andi        $v0, $s2, 0x1
    ctx->pc = 0x7ad7f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)1);
    // 0x7ad7f8: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x7ad7f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x7ad7fc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x7ad7fcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x7ad800: 0x0  nop
    ctx->pc = 0x7ad800u;
    // NOP
    // 0x7ad804: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x7ad804u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x7ad808: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x7ad808u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
    // 0x7ad80c: 0xe4800008  swc1        $f0, 0x8($a0)
    ctx->pc = 0x7ad80cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
label_7ad810:
    // 0x7ad810: 0x8ec20008  lw          $v0, 0x8($s6)
    ctx->pc = 0x7ad810u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 8)));
    // 0x7ad814: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x7ad814u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x7ad818: 0x5282000d  beql        $s4, $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x7AD818u;
    {
        const bool branch_taken_0x7ad818 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 2));
        if (branch_taken_0x7ad818) {
            ctx->pc = 0x7AD81Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x7AD818u;
            // 0x7ad81c: 0x8ec20008  lw          $v0, 0x8($s6) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x7AD850u;
            goto label_7ad850;
        }
    }
    ctx->pc = 0x7AD820u;
    // 0x7ad820: 0x8ec20004  lw          $v0, 0x4($s6)
    ctx->pc = 0x7ad820u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4)));
    // 0x7ad824: 0x2e21021  addu        $v0, $s7, $v0
    ctx->pc = 0x7ad824u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 2)));
    // 0x7ad828: 0xc440000c  lwc1        $f0, 0xC($v0)
    ctx->pc = 0x7ad828u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x7ad82c: 0xe440001c  swc1        $f0, 0x1C($v0)
    ctx->pc = 0x7ad82cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 28), bits); }
    // 0x7ad830: 0x8ec30004  lw          $v1, 0x4($s6)
    ctx->pc = 0x7ad830u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4)));
    // 0x7ad834: 0x2e31821  addu        $v1, $s7, $v1
    ctx->pc = 0x7ad834u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 3)));
    // 0x7ad838: 0x24620010  addiu       $v0, $v1, 0x10
    ctx->pc = 0x7ad838u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x7ad83c: 0xc4610008  lwc1        $f1, 0x8($v1)
    ctx->pc = 0x7ad83cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x7ad840: 0xc440000c  lwc1        $f0, 0xC($v0)
    ctx->pc = 0x7ad840u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x7ad844: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x7ad844u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x7ad848: 0xe440000c  swc1        $f0, 0xC($v0)
    ctx->pc = 0x7ad848u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
    // 0x7ad84c: 0x8ec20008  lw          $v0, 0x8($s6)
    ctx->pc = 0x7ad84cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 8)));
label_7ad850:
    // 0x7ad850: 0x3c0a02d  daddu       $s4, $fp, $zero
    ctx->pc = 0x7ad850u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7ad854: 0x282102a  slt         $v0, $s4, $v0
    ctx->pc = 0x7ad854u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x7ad858: 0x1440ffbd  bnez        $v0, . + 4 + (-0x43 << 2)
    ctx->pc = 0x7AD858u;
    {
        const bool branch_taken_0x7ad858 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x7AD85Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7AD858u;
        // 0x7ad85c: 0x3c02007b  lui         $v0, 0x7B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)123 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7ad858) {
            ctx->pc = 0x7AD750u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_7ad750;
        }
    }
    ctx->pc = 0x7AD860u;
label_7ad860:
    // 0x7ad860: 0x7bb00090  lq          $s0, 0x90($sp)
    ctx->pc = 0x7ad860u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x7ad864: 0x7bb10080  lq          $s1, 0x80($sp)
    ctx->pc = 0x7ad864u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x7ad868: 0x7bb20070  lq          $s2, 0x70($sp)
    ctx->pc = 0x7ad868u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x7ad86c: 0x7bb30060  lq          $s3, 0x60($sp)
    ctx->pc = 0x7ad86cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x7ad870: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x7ad870u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x7ad874: 0x7bb50040  lq          $s5, 0x40($sp)
    ctx->pc = 0x7ad874u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x7ad878: 0x7bb60030  lq          $s6, 0x30($sp)
    ctx->pc = 0x7ad878u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x7ad87c: 0x7bb70020  lq          $s7, 0x20($sp)
    ctx->pc = 0x7ad87cu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x7ad880: 0x7bbe0010  lq          $fp, 0x10($sp)
    ctx->pc = 0x7ad880u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x7ad884: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x7ad884u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x7ad888: 0x3e00008  jr          $ra
    ctx->pc = 0x7AD888u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x7AD88Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7AD888u;
        // 0x7ad88c: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x7AD888u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x7AD890u;
}
} // namespace gh_event
