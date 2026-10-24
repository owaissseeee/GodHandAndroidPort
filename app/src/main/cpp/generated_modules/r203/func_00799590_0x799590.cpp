#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "r203_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_r203
{
// Function: func_00799590
// Address: 0x799590 - 0x7996a0
void func_00799590_0x799590(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00799590_0x799590");
#endif

    switch (ctx->pc) {
        case 0x7995b8u: goto label_7995b8;
        case 0x7995d0u: goto label_7995d0;
        case 0x7995e4u: goto label_7995e4;
        case 0x799600u: goto label_799600;
        case 0x79961cu: goto label_79961c;
        case 0x799628u: goto label_799628;
        case 0x799638u: goto label_799638;
        case 0x799640u: goto label_799640;
        case 0x79964cu: goto label_79964c;
        case 0x799654u: goto label_799654;
        case 0x79966cu: goto label_79966c;
        case 0x79967cu: goto label_79967c;
        case 0x799688u: goto label_799688;
        default: break;
    }

    ctx->pc = 0x799590u;

    // 0x799590: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x799590u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x799594: 0x3c02005f  lui         $v0, 0x5F
    ctx->pc = 0x799594u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)95 << 16));
    // 0x799598: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x799598u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
    // 0x79959c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x79959cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7995a0: 0x24508658  addiu       $s0, $v0, -0x79A8
    ctx->pc = 0x7995a0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294936152));
    // 0x7995a4: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x7995a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
    // 0x7995a8: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x7995a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
    // 0x7995ac: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x7995acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x7995b0: 0xc0afc42  jal         func_2BF108
    ctx->pc = 0x7995B0u;
    SET_GPR_U32(ctx, 31, 0x7995B8u);
    ctx->pc = 0x7995B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7995B0u;
    // 0x7995b4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BF108u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BF108u, 0x7995B0u, 0x7995B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7995B8u;
label_7995b8:
    // 0x7995b8: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x7995b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x7995bc: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x7995BCu;
    {
        const bool branch_taken_0x7995bc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x7995C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7995BCu;
        // 0x7995c0: 0x3c02003c  lui         $v0, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7995bc) {
            ctx->pc = 0x7995D8u;
            goto label_7995d8;
        }
    }
    ctx->pc = 0x7995C4u;
    // 0x7995c4: 0x8c432f84  lw          $v1, 0x2F84($v0)
    ctx->pc = 0x7995c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12164)));
    // 0x7995c8: 0xc0b5692  jal         func_2D5A48
    ctx->pc = 0x7995C8u;
    SET_GPR_U32(ctx, 31, 0x7995D0u);
    ctx->pc = 0x7995CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7995C8u;
    // 0x7995cc: 0x8c640020  lw          $a0, 0x20($v1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5A48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5A48u, 0x7995C8u, 0x7995D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7995D0u;
label_7995d0:
    // 0x7995d0: 0x1000002e  b           . + 4 + (0x2E << 2)
    ctx->pc = 0x7995D0u;
    {
        const bool branch_taken_0x7995d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x7995D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7995D0u;
        // 0x7995d4: 0x7bb00060  lq          $s0, 0x60($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7995d0) {
            ctx->pc = 0x79968Cu;
            goto label_79968c;
        }
    }
    ctx->pc = 0x7995D8u;
label_7995d8:
    // 0x7995d8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x7995d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7995dc: 0xc0afc42  jal         func_2BF108
    ctx->pc = 0x7995DCu;
    SET_GPR_U32(ctx, 31, 0x7995E4u);
    ctx->pc = 0x7995E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7995DCu;
    // 0x7995e0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BF108u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BF108u, 0x7995DCu, 0x7995E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7995E4u;
label_7995e4:
    // 0x7995e4: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x7995e4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x7995e8: 0xac500000  sw          $s0, 0x0($v0)
    ctx->pc = 0x7995e8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 16));
    // 0x7995ec: 0x3c11003c  lui         $s1, 0x3C
    ctx->pc = 0x7995ecu;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)60 << 16));
    // 0x7995f0: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x7995f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x7995f4: 0x8e222f84  lw          $v0, 0x2F84($s1)
    ctx->pc = 0x7995f4u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3C2F84u));
    // 0x7995f8: 0xc0b56a8  jal         func_2D5AA0
    ctx->pc = 0x7995F8u;
    SET_GPR_U32(ctx, 31, 0x799600u);
    ctx->pc = 0x7995FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7995F8u;
    // 0x7995fc: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5AA0u, 0x7995F8u, 0x799600u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799600u;
label_799600:
    // 0x799600: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x799600u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x799604: 0xa3b00010  sb          $s0, 0x10($sp)
    ctx->pc = 0x799604u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 16), (uint8_t)GPR_U32(ctx, 16));
    // 0x799608: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x799608u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79960c: 0xa3a20020  sb          $v0, 0x20($sp)
    ctx->pc = 0x79960cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 32), (uint8_t)GPR_U32(ctx, 2));
    // 0x799610: 0xa3a00000  sb          $zero, 0x0($sp)
    ctx->pc = 0x799610u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x799614: 0xc0a578e  jal         func_295E38
    ctx->pc = 0x799614u;
    SET_GPR_U32(ctx, 31, 0x79961Cu);
    ctx->pc = 0x799618u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799614u;
    // 0x799618: 0x240503c4  addiu       $a1, $zero, 0x3C4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 964));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295E38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295E38u, 0x799614u, 0x79961Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79961Cu;
label_79961c:
    // 0x79961c: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x79961cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x799620: 0xc0a578e  jal         func_295E38
    ctx->pc = 0x799620u;
    SET_GPR_U32(ctx, 31, 0x799628u);
    ctx->pc = 0x799624u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799620u;
    // 0x799624: 0x240503c3  addiu       $a1, $zero, 0x3C3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 963));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295E38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295E38u, 0x799620u, 0x799628u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799628u;
label_799628:
    // 0x799628: 0x27b00020  addiu       $s0, $sp, 0x20
    ctx->pc = 0x799628u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x79962c: 0x240503c2  addiu       $a1, $zero, 0x3C2
    ctx->pc = 0x79962cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 962));
    // 0x799630: 0xc0a578e  jal         func_295E38
    ctx->pc = 0x799630u;
    SET_GPR_U32(ctx, 31, 0x799638u);
    ctx->pc = 0x799634u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799630u;
    // 0x799634: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295E38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295E38u, 0x799630u, 0x799638u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799638u;
label_799638:
    // 0x799638: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x799638u;
    {
        const bool branch_taken_0x799638 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x79963Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799638u;
        // 0x79963c: 0x3c12007a  lui         $s2, 0x7A (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)122 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799638) {
            ctx->pc = 0x79964Cu;
            goto label_79964c;
        }
    }
    ctx->pc = 0x799640u;
label_799640:
    // 0x799640: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x799640u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x799644: 0xc0b56a8  jal         func_2D5AA0
    ctx->pc = 0x799644u;
    SET_GPR_U32(ctx, 31, 0x79964Cu);
    ctx->pc = 0x799648u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799644u;
    // 0x799648: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5AA0u, 0x799644u, 0x79964Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79964Cu;
label_79964c:
    // 0x79964c: 0xc0a572a  jal         func_295CA8
    ctx->pc = 0x79964Cu;
    SET_GPR_U32(ctx, 31, 0x799654u);
    ctx->pc = 0x799650u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79964Cu;
    // 0x799650: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295CA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295CA8u, 0x79964Cu, 0x799654u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799654u;
label_799654:
    // 0x799654: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x799654u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x799658: 0x1443fff9  bne         $v0, $v1, . + 4 + (-0x7 << 2)
    ctx->pc = 0x799658u;
    {
        const bool branch_taken_0x799658 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x79965Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799658u;
        // 0x79965c: 0x8e222f84  lw          $v0, 0x2F84($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12164)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799658) {
            ctx->pc = 0x799640u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_799640;
        }
    }
    ctx->pc = 0x799660u;
    // 0x799660: 0x2405001e  addiu       $a1, $zero, 0x1E
    ctx->pc = 0x799660u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x799664: 0xc0b56a8  jal         func_2D5AA0
    ctx->pc = 0x799664u;
    SET_GPR_U32(ctx, 31, 0x79966Cu);
    ctx->pc = 0x799668u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799664u;
    // 0x799668: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5AA0u, 0x799664u, 0x79966Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79966Cu;
label_79966c:
    // 0x79966c: 0x8e242f84  lw          $a0, 0x2F84($s1)
    ctx->pc = 0x79966cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12164)));
    // 0x799670: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x799670u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x799674: 0xc0b0e24  jal         func_2C3890
    ctx->pc = 0x799674u;
    SET_GPR_U32(ctx, 31, 0x79967Cu);
    ctx->pc = 0x799678u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799674u;
    // 0x799678: 0x264594a0  addiu       $a1, $s2, -0x6B60 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 4294939808));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C3890u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C3890u, 0x799674u, 0x79967Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79967Cu;
label_79967c:
    // 0x79967c: 0x8e232f84  lw          $v1, 0x2F84($s1)
    ctx->pc = 0x79967cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12164)));
    // 0x799680: 0xc0b5692  jal         func_2D5A48
    ctx->pc = 0x799680u;
    SET_GPR_U32(ctx, 31, 0x799688u);
    ctx->pc = 0x799684u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799680u;
    // 0x799684: 0x8c640020  lw          $a0, 0x20($v1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5A48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5A48u, 0x799680u, 0x799688u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799688u;
label_799688:
    // 0x799688: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x799688u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_79968c:
    // 0x79968c: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x79968cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x799690: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x799690u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x799694: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x799694u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x799698: 0x3e00008  jr          $ra
    ctx->pc = 0x799698u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x79969Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799698u;
        // 0x79969c: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x799698u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x7996A0u;
}
} // namespace gh_r203
