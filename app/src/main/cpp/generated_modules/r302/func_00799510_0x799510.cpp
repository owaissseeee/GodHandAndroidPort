#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "r302_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_r302
{
// Function: func_00799510
// Address: 0x799510 - 0x799630
void func_00799510_0x799510(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00799510_0x799510");
#endif

    switch (ctx->pc) {
        case 0x799568u: goto label_799568;
        case 0x799578u: goto label_799578;
        case 0x799584u: goto label_799584;
        case 0x799590u: goto label_799590;
        case 0x7995a0u: goto label_7995a0;
        case 0x7995a8u: goto label_7995a8;
        case 0x7995ccu: goto label_7995cc;
        case 0x7995e0u: goto label_7995e0;
        case 0x7995f0u: goto label_7995f0;
        case 0x799600u: goto label_799600;
        case 0x79960cu: goto label_79960c;
        default: break;
    }

    ctx->pc = 0x799510u;

    // 0x799510: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x799510u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x799514: 0x3c02005f  lui         $v0, 0x5F
    ctx->pc = 0x799514u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)95 << 16));
    // 0x799518: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x799518u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
    // 0x79951c: 0x3c044000  lui         $a0, 0x4000
    ctx->pc = 0x79951cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16384 << 16));
    // 0x799520: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x799520u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x799524: 0x3c10003c  lui         $s0, 0x3C
    ctx->pc = 0x799524u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)60 << 16));
    // 0x799528: 0x7fb40020  sq          $s4, 0x20($sp)
    ctx->pc = 0x799528u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 20));
    // 0x79952c: 0x3c13007a  lui         $s3, 0x7A
    ctx->pc = 0x79952cu;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)122 << 16));
    // 0x799530: 0x7fb50010  sq          $s5, 0x10($sp)
    ctx->pc = 0x799530u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 21));
    // 0x799534: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x799534u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
    // 0x799538: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x799538u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79953c: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x79953cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
    // 0x799540: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x799540u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x799544: 0x8c438658  lw          $v1, -0x79A8($v0)
    ctx->pc = 0x799544u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5E8658u));
    // 0x799548: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x799548u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x79954c: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x79954cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x799550: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x799550u;
    {
        const bool branch_taken_0x799550 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x799554u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799550u;
        // 0x799554: 0x3c14007a  lui         $s4, 0x7A (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)122 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799550) {
            ctx->pc = 0x799584u;
            goto label_799584;
        }
    }
    ctx->pc = 0x799558u;
    // 0x799558: 0x8e042f84  lw          $a0, 0x2F84($s0)
    ctx->pc = 0x799558u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12164)));
    // 0x79955c: 0x26659708  addiu       $a1, $s3, -0x68F8
    ctx->pc = 0x79955cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 4294940424));
    // 0x799560: 0xc0b0e24  jal         func_2C3890
    ctx->pc = 0x799560u;
    SET_GPR_U32(ctx, 31, 0x799568u);
    ctx->pc = 0x799564u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799560u;
    // 0x799564: 0x2406ffff  addiu       $a2, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C3890u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C3890u, 0x799560u, 0x799568u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799568u;
label_799568:
    // 0x799568: 0x8e042f84  lw          $a0, 0x2F84($s0)
    ctx->pc = 0x799568u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12164)));
    // 0x79956c: 0x268593f8  addiu       $a1, $s4, -0x6C08
    ctx->pc = 0x79956cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 4294939640));
    // 0x799570: 0xc0b0e24  jal         func_2C3890
    ctx->pc = 0x799570u;
    SET_GPR_U32(ctx, 31, 0x799578u);
    ctx->pc = 0x799574u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799570u;
    // 0x799574: 0x2406ffff  addiu       $a2, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C3890u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C3890u, 0x799570u, 0x799578u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799578u;
label_799578:
    // 0x799578: 0x8e032f84  lw          $v1, 0x2F84($s0)
    ctx->pc = 0x799578u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12164)));
    // 0x79957c: 0xc0b5692  jal         func_2D5A48
    ctx->pc = 0x79957Cu;
    SET_GPR_U32(ctx, 31, 0x799584u);
    ctx->pc = 0x799580u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79957Cu;
    // 0x799580: 0x8c640020  lw          $a0, 0x20($v1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5A48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5A48u, 0x79957Cu, 0x799584u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799584u;
label_799584:
    // 0x799584: 0x3c110058  lui         $s1, 0x58
    ctx->pc = 0x799584u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)88 << 16));
    // 0x799588: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x799588u;
    {
        const bool branch_taken_0x799588 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x79958Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799588u;
        // 0x79958c: 0x3c12003c  lui         $s2, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)60 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799588) {
            ctx->pc = 0x7995A0u;
            goto label_7995a0;
        }
    }
    ctx->pc = 0x799590u;
label_799590:
    // 0x799590: 0x8e022f84  lw          $v0, 0x2F84($s0)
    ctx->pc = 0x799590u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12164)));
    // 0x799594: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x799594u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x799598: 0xc0b56a8  jal         func_2D5AA0
    ctx->pc = 0x799598u;
    SET_GPR_U32(ctx, 31, 0x7995A0u);
    ctx->pc = 0x79959Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799598u;
    // 0x79959c: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5AA0u, 0x799598u, 0x7995A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7995A0u;
label_7995a0:
    // 0x7995a0: 0xc0b0f90  jal         func_2C3E40
    ctx->pc = 0x7995A0u;
    SET_GPR_U32(ctx, 31, 0x7995A8u);
    ctx->pc = 0x7995A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7995A0u;
    // 0x7995a4: 0x8e042f84  lw          $a0, 0x2F84($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12164)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C3E40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C3E40u, 0x7995A0u, 0x7995A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7995A8u;
label_7995a8:
    // 0x7995a8: 0x1040fff9  beqz        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x7995A8u;
    {
        const bool branch_taken_0x7995a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x7995ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7995A8u;
        // 0x7995ac: 0x8ea38658  lw          $v1, -0x79A8($s5) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4294936152)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7995a8) {
            ctx->pc = 0x799590u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_799590;
        }
    }
    ctx->pc = 0x7995B0u;
    // 0x7995b0: 0x3c064000  lui         $a2, 0x4000
    ctx->pc = 0x7995b0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)16384 << 16));
    // 0x7995b4: 0x26246af0  addiu       $a0, $s1, 0x6AF0
    ctx->pc = 0x7995b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 27376));
    // 0x7995b8: 0x24050013  addiu       $a1, $zero, 0x13
    ctx->pc = 0x7995b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
    // 0x7995bc: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x7995bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x7995c0: 0x461025  or          $v0, $v0, $a2
    ctx->pc = 0x7995c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    // 0x7995c4: 0xc0a58dc  jal         func_296370
    ctx->pc = 0x7995C4u;
    SET_GPR_U32(ctx, 31, 0x7995CCu);
    ctx->pc = 0x7995C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7995C4u;
    // 0x7995c8: 0xac620004  sw          $v0, 0x4($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296370u, 0x7995C4u, 0x7995CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7995CCu;
label_7995cc:
    // 0x7995cc: 0x8e44264c  lw          $a0, 0x264C($s2)
    ctx->pc = 0x7995ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 9804)));
    // 0x7995d0: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x7995d0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7995d4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x7995d4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7995d8: 0xc0b016c  jal         func_2C05B0
    ctx->pc = 0x7995D8u;
    SET_GPR_U32(ctx, 31, 0x7995E0u);
    ctx->pc = 0x7995DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7995D8u;
    // 0x7995dc: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C05B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C05B0u, 0x7995D8u, 0x7995E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7995E0u;
label_7995e0:
    // 0x7995e0: 0x8e042f84  lw          $a0, 0x2F84($s0)
    ctx->pc = 0x7995e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12164)));
    // 0x7995e4: 0x26659708  addiu       $a1, $s3, -0x68F8
    ctx->pc = 0x7995e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 4294940424));
    // 0x7995e8: 0xc0b0e24  jal         func_2C3890
    ctx->pc = 0x7995E8u;
    SET_GPR_U32(ctx, 31, 0x7995F0u);
    ctx->pc = 0x7995ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7995E8u;
    // 0x7995ec: 0x2406ffff  addiu       $a2, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C3890u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C3890u, 0x7995E8u, 0x7995F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7995F0u;
label_7995f0:
    // 0x7995f0: 0x8e042f84  lw          $a0, 0x2F84($s0)
    ctx->pc = 0x7995f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12164)));
    // 0x7995f4: 0x268593f8  addiu       $a1, $s4, -0x6C08
    ctx->pc = 0x7995f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 4294939640));
    // 0x7995f8: 0xc0b0e24  jal         func_2C3890
    ctx->pc = 0x7995F8u;
    SET_GPR_U32(ctx, 31, 0x799600u);
    ctx->pc = 0x7995FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7995F8u;
    // 0x7995fc: 0x2406ffff  addiu       $a2, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C3890u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C3890u, 0x7995F8u, 0x799600u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799600u;
label_799600:
    // 0x799600: 0x8e032f84  lw          $v1, 0x2F84($s0)
    ctx->pc = 0x799600u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12164)));
    // 0x799604: 0xc0b5692  jal         func_2D5A48
    ctx->pc = 0x799604u;
    SET_GPR_U32(ctx, 31, 0x79960Cu);
    ctx->pc = 0x799608u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799604u;
    // 0x799608: 0x8c640020  lw          $a0, 0x20($v1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5A48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5A48u, 0x799604u, 0x79960Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79960Cu;
label_79960c:
    // 0x79960c: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x79960cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x799610: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x799610u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x799614: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x799614u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x799618: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x799618u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x79961c: 0x7bb40020  lq          $s4, 0x20($sp)
    ctx->pc = 0x79961cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x799620: 0x7bb50010  lq          $s5, 0x10($sp)
    ctx->pc = 0x799620u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x799624: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x799624u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x799628: 0x3e00008  jr          $ra
    ctx->pc = 0x799628u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x79962Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799628u;
        // 0x79962c: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x799628u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x799630u;
}
} // namespace gh_r302
