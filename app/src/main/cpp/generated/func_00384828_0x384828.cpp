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

// Function: func_00384828
// Address: 0x384828 - 0x384980
void func_00384828_0x384828(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00384828_0x384828");
#endif

    switch (ctx->pc) {
        case 0x384878u: goto label_384878;
        case 0x384894u: goto label_384894;
        case 0x3848b0u: goto label_3848b0;
        case 0x3848e0u: goto label_3848e0;
        case 0x3848fcu: goto label_3848fc;
        case 0x38491cu: goto label_38491c;
        case 0x384944u: goto label_384944;
        case 0x384960u: goto label_384960;
        default: break;
    }

    ctx->pc = 0x384828u;

    // 0x384828: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x384828u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x38482c: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x38482cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
    // 0x384830: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x384830u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x384834: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x384834u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x384838: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x384838u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x38483c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x38483cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x384840: 0x90a20003  lbu         $v0, 0x3($a1)
    ctx->pc = 0x384840u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 3)));
    // 0x384844: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x384844u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x384848: 0x1040001b  beqz        $v0, . + 4 + (0x1B << 2)
    ctx->pc = 0x384848u;
    {
        const bool branch_taken_0x384848 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x38484Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x384848u;
        // 0x38484c: 0x80982d  daddu       $s3, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x384848) {
            ctx->pc = 0x3848B8u;
            goto label_3848b8;
        }
    }
    ctx->pc = 0x384850u;
    // 0x384850: 0x24b000cc  addiu       $s0, $a1, 0xCC
    ctx->pc = 0x384850u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 5), 204));
    // 0x384854: 0x8cb200cc  lw          $s2, 0xCC($a1)
    ctx->pc = 0x384854u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 204)));
    // 0x384858: 0x8e080008  lw          $t0, 0x8($s0)
    ctx->pc = 0x384858u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x38485c: 0x3c070046  lui         $a3, 0x46
    ctx->pc = 0x38485cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)70 << 16));
    // 0x384860: 0x24e7cbc8  addiu       $a3, $a3, -0x3438
    ctx->pc = 0x384860u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294953928));
    // 0x384864: 0x24040020  addiu       $a0, $zero, 0x20
    ctx->pc = 0x384864u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x384868: 0x2405000f  addiu       $a1, $zero, 0xF
    ctx->pc = 0x384868u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x38486c: 0x24060008  addiu       $a2, $zero, 0x8
    ctx->pc = 0x38486cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x384870: 0xc0b837a  jal         func_2E0DE8
    ctx->pc = 0x384870u;
    SET_GPR_U32(ctx, 31, 0x384878u);
    ctx->pc = 0x384874u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x384870u;
    // 0x384874: 0x8e110004  lw          $s1, 0x4($s0) (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E0DE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E0DE8u, 0x384870u, 0x384878u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x384878u;
label_384878:
    // 0x384878: 0x8e08000c  lw          $t0, 0xC($s0)
    ctx->pc = 0x384878u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x38487c: 0x3c070046  lui         $a3, 0x46
    ctx->pc = 0x38487cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)70 << 16));
    // 0x384880: 0x24e7cbd8  addiu       $a3, $a3, -0x3428
    ctx->pc = 0x384880u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294953944));
    // 0x384884: 0x24040020  addiu       $a0, $zero, 0x20
    ctx->pc = 0x384884u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x384888: 0x24050010  addiu       $a1, $zero, 0x10
    ctx->pc = 0x384888u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x38488c: 0xc0b837a  jal         func_2E0DE8
    ctx->pc = 0x38488Cu;
    SET_GPR_U32(ctx, 31, 0x384894u);
    ctx->pc = 0x384890u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38488Cu;
    // 0x384890: 0x24060008  addiu       $a2, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E0DE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E0DE8u, 0x38488Cu, 0x384894u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x384894u;
label_384894:
    // 0x384894: 0x3c070046  lui         $a3, 0x46
    ctx->pc = 0x384894u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)70 << 16));
    // 0x384898: 0x8e080010  lw          $t0, 0x10($s0)
    ctx->pc = 0x384898u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x38489c: 0x24e7cbe8  addiu       $a3, $a3, -0x3418
    ctx->pc = 0x38489cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294953960));
    // 0x3848a0: 0x24040020  addiu       $a0, $zero, 0x20
    ctx->pc = 0x3848a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x3848a4: 0x24050011  addiu       $a1, $zero, 0x11
    ctx->pc = 0x3848a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    // 0x3848a8: 0xc0b837a  jal         func_2E0DE8
    ctx->pc = 0x3848A8u;
    SET_GPR_U32(ctx, 31, 0x3848B0u);
    ctx->pc = 0x3848ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3848A8u;
    // 0x3848ac: 0x24060008  addiu       $a2, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E0DE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E0DE8u, 0x3848A8u, 0x3848B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3848B0u;
label_3848b0:
    // 0x3848b0: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x3848B0u;
    {
        const bool branch_taken_0x3848b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3848B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3848B0u;
        // 0x3848b4: 0x3a0382d  daddu       $a3, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3848b0) {
            ctx->pc = 0x384900u;
            goto label_384900;
        }
    }
    ctx->pc = 0x3848B8u;
label_3848b8:
    // 0x3848b8: 0x24b0006c  addiu       $s0, $a1, 0x6C
    ctx->pc = 0x3848b8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 5), 108));
    // 0x3848bc: 0x8cb2006c  lw          $s2, 0x6C($a1)
    ctx->pc = 0x3848bcu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 108)));
    // 0x3848c0: 0x8e080008  lw          $t0, 0x8($s0)
    ctx->pc = 0x3848c0u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x3848c4: 0x3c070046  lui         $a3, 0x46
    ctx->pc = 0x3848c4u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)70 << 16));
    // 0x3848c8: 0x24e7cc18  addiu       $a3, $a3, -0x33E8
    ctx->pc = 0x3848c8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294954008));
    // 0x3848cc: 0x24040020  addiu       $a0, $zero, 0x20
    ctx->pc = 0x3848ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x3848d0: 0x2405000f  addiu       $a1, $zero, 0xF
    ctx->pc = 0x3848d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x3848d4: 0x24060008  addiu       $a2, $zero, 0x8
    ctx->pc = 0x3848d4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x3848d8: 0xc0b837a  jal         func_2E0DE8
    ctx->pc = 0x3848D8u;
    SET_GPR_U32(ctx, 31, 0x3848E0u);
    ctx->pc = 0x3848DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3848D8u;
    // 0x3848dc: 0x8e110004  lw          $s1, 0x4($s0) (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E0DE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E0DE8u, 0x3848D8u, 0x3848E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3848E0u;
label_3848e0:
    // 0x3848e0: 0x3c070046  lui         $a3, 0x46
    ctx->pc = 0x3848e0u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)70 << 16));
    // 0x3848e4: 0x8e08000c  lw          $t0, 0xC($s0)
    ctx->pc = 0x3848e4u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x3848e8: 0x24e7cc28  addiu       $a3, $a3, -0x33D8
    ctx->pc = 0x3848e8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294954024));
    // 0x3848ec: 0x24040020  addiu       $a0, $zero, 0x20
    ctx->pc = 0x3848ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x3848f0: 0x24050010  addiu       $a1, $zero, 0x10
    ctx->pc = 0x3848f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x3848f4: 0xc0b837a  jal         func_2E0DE8
    ctx->pc = 0x3848F4u;
    SET_GPR_U32(ctx, 31, 0x3848FCu);
    ctx->pc = 0x3848F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3848F4u;
    // 0x3848f8: 0x24060008  addiu       $a2, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E0DE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E0DE8u, 0x3848F4u, 0x3848FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3848FCu;
label_3848fc:
    // 0x3848fc: 0x3a0382d  daddu       $a3, $sp, $zero
    ctx->pc = 0x3848fcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_384900:
    // 0x384900: 0x37a80004  ori         $t0, $sp, 0x4
    ctx->pc = 0x384900u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 29) | (uint64_t)(uint16_t)4);
    // 0x384904: 0x37a90008  ori         $t1, $sp, 0x8
    ctx->pc = 0x384904u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 29) | (uint64_t)(uint16_t)8);
    // 0x384908: 0x37aa000c  ori         $t2, $sp, 0xC
    ctx->pc = 0x384908u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 29) | (uint64_t)(uint16_t)12);
    // 0x38490c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x38490cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x384910: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x384910u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x384914: 0xc0e01c8  jal         func_380720
    ctx->pc = 0x384914u;
    SET_GPR_U32(ctx, 31, 0x38491Cu);
    ctx->pc = 0x384918u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x384914u;
    // 0x384918: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x380720u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x380720u, 0x384914u, 0x38491Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x38491Cu;
label_38491c:
    // 0x38491c: 0x8fa80000  lw          $t0, 0x0($sp)
    ctx->pc = 0x38491cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x384920: 0x3c070046  lui         $a3, 0x46
    ctx->pc = 0x384920u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)70 << 16));
    // 0x384924: 0x8fa90004  lw          $t1, 0x4($sp)
    ctx->pc = 0x384924u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x384928: 0x24e7cc60  addiu       $a3, $a3, -0x33A0
    ctx->pc = 0x384928u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294954080));
    // 0x38492c: 0x8faa0008  lw          $t2, 0x8($sp)
    ctx->pc = 0x38492cu;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x384930: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x384930u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x384934: 0x8fab000c  lw          $t3, 0xC($sp)
    ctx->pc = 0x384934u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
    // 0x384938: 0x24050010  addiu       $a1, $zero, 0x10
    ctx->pc = 0x384938u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x38493c: 0xc0b837a  jal         func_2E0DE8
    ctx->pc = 0x38493Cu;
    SET_GPR_U32(ctx, 31, 0x384944u);
    ctx->pc = 0x384940u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x38493Cu;
    // 0x384940: 0x24060008  addiu       $a2, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E0DE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E0DE8u, 0x38493Cu, 0x384944u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x384944u;
label_384944:
    // 0x384944: 0x3c070046  lui         $a3, 0x46
    ctx->pc = 0x384944u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)70 << 16));
    // 0x384948: 0x220402d  daddu       $t0, $s1, $zero
    ctx->pc = 0x384948u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x38494c: 0x24e7cca0  addiu       $a3, $a3, -0x3360
    ctx->pc = 0x38494cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294954144));
    // 0x384950: 0x24040020  addiu       $a0, $zero, 0x20
    ctx->pc = 0x384950u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x384954: 0x2405000e  addiu       $a1, $zero, 0xE
    ctx->pc = 0x384954u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x384958: 0xc0b837a  jal         func_2E0DE8
    ctx->pc = 0x384958u;
    SET_GPR_U32(ctx, 31, 0x384960u);
    ctx->pc = 0x38495Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x384958u;
    // 0x38495c: 0x24060008  addiu       $a2, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E0DE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E0DE8u, 0x384958u, 0x384960u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x384960u;
label_384960:
    // 0x384960: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x384960u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x384964: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x384964u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x384968: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x384968u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x38496c: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x38496cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x384970: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x384970u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x384974: 0x3e00008  jr          $ra
    ctx->pc = 0x384974u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x384978u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x384974u;
        // 0x384978: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x384974u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x38497Cu;
    // 0x38497c: 0x0  nop
    ctx->pc = 0x38497cu;
    // NOP
    ctx->pc = 0x384980u;
}
