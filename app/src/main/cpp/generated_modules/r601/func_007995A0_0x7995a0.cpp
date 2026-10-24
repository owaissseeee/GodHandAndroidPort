#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "r601_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_r601
{
// Function: func_007995A0
// Address: 0x7995a0 - 0x799788
void func_007995A0_0x7995a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_007995A0_0x7995a0");
#endif

    switch (ctx->pc) {
        case 0x7995f8u: goto label_7995f8;
        case 0x799604u: goto label_799604;
        case 0x799614u: goto label_799614;
        case 0x799624u: goto label_799624;
        case 0x799630u: goto label_799630;
        case 0x79963cu: goto label_79963c;
        case 0x799644u: goto label_799644;
        case 0x799654u: goto label_799654;
        case 0x799674u: goto label_799674;
        case 0x799694u: goto label_799694;
        case 0x79969cu: goto label_79969c;
        case 0x7996a4u: goto label_7996a4;
        case 0x7996b4u: goto label_7996b4;
        case 0x7996c4u: goto label_7996c4;
        case 0x799748u: goto label_799748;
        case 0x799754u: goto label_799754;
        default: break;
    }

    ctx->pc = 0x7995a0u;

    // 0x7995a0: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x7995a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
    // 0x7995a4: 0x7fb000b0  sq          $s0, 0xB0($sp)
    ctx->pc = 0x7995a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 16));
    // 0x7995a8: 0x7fb100a0  sq          $s1, 0xA0($sp)
    ctx->pc = 0x7995a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 17));
    // 0x7995ac: 0x3c10003c  lui         $s0, 0x3C
    ctx->pc = 0x7995acu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)60 << 16));
    // 0x7995b0: 0x7fb20090  sq          $s2, 0x90($sp)
    ctx->pc = 0x7995b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 18));
    // 0x7995b4: 0x3c110060  lui         $s1, 0x60
    ctx->pc = 0x7995b4u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)96 << 16));
    // 0x7995b8: 0x7fb30080  sq          $s3, 0x80($sp)
    ctx->pc = 0x7995b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 19));
    // 0x7995bc: 0x27b20010  addiu       $s2, $sp, 0x10
    ctx->pc = 0x7995bcu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x7995c0: 0x7fb40070  sq          $s4, 0x70($sp)
    ctx->pc = 0x7995c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 20));
    // 0x7995c4: 0x3c13007a  lui         $s3, 0x7A
    ctx->pc = 0x7995c4u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)122 << 16));
    // 0x7995c8: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x7995c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
    // 0x7995cc: 0x3c140060  lui         $s4, 0x60
    ctx->pc = 0x7995ccu;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)96 << 16));
    // 0x7995d0: 0x7fb60050  sq          $s6, 0x50($sp)
    ctx->pc = 0x7995d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 22));
    // 0x7995d4: 0x3c15005d  lui         $s5, 0x5D
    ctx->pc = 0x7995d4u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)93 << 16));
    // 0x7995d8: 0x7fb70040  sq          $s7, 0x40($sp)
    ctx->pc = 0x7995d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 23));
    // 0x7995dc: 0x3c16007a  lui         $s6, 0x7A
    ctx->pc = 0x7995dcu;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)122 << 16));
    // 0x7995e0: 0x7fbe0030  sq          $fp, 0x30($sp)
    ctx->pc = 0x7995e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 30));
    // 0x7995e4: 0x3c17007a  lui         $s7, 0x7A
    ctx->pc = 0x7995e4u;
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)122 << 16));
    // 0x7995e8: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x7995e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x7995ec: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x7995ECu;
    {
        const bool branch_taken_0x7995ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x7995F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7995ECu;
        // 0x7995f0: 0x3c1e005f  lui         $fp, 0x5F (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)95 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7995ec) {
            ctx->pc = 0x799604u;
            goto label_799604;
        }
    }
    ctx->pc = 0x7995F4u;
    // 0x7995f4: 0x0  nop
    ctx->pc = 0x7995f4u;
    // NOP
label_7995f8:
    // 0x7995f8: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x7995f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x7995fc: 0xc0b56a8  jal         func_2D5AA0
    ctx->pc = 0x7995FCu;
    SET_GPR_U32(ctx, 31, 0x799604u);
    ctx->pc = 0x799600u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7995FCu;
    // 0x799600: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5AA0u, 0x7995FCu, 0x799604u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799604u;
label_799604:
    // 0x799604: 0x2624ea60  addiu       $a0, $s1, -0x15A0
    ctx->pc = 0x799604u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 4294961760));
    // 0x799608: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x799608u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x79960c: 0xc0b0aa6  jal         func_2C2A98
    ctx->pc = 0x79960Cu;
    SET_GPR_U32(ctx, 31, 0x799614u);
    ctx->pc = 0x799610u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79960Cu;
    // 0x799610: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C2A98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C2A98u, 0x79960Cu, 0x799614u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799614u;
label_799614:
    // 0x799614: 0x1040fff8  beqz        $v0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x799614u;
    {
        const bool branch_taken_0x799614 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x799618u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799614u;
        // 0x799618: 0x8e022f84  lw          $v0, 0x2F84($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12164)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799614) {
            ctx->pc = 0x7995F8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_7995f8;
        }
    }
    ctx->pc = 0x79961Cu;
    // 0x79961c: 0xc0b0fa2  jal         func_2C3E88
    ctx->pc = 0x79961Cu;
    SET_GPR_U32(ctx, 31, 0x799624u);
    ctx->pc = 0x799620u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79961Cu;
    // 0x799620: 0x8e042f84  lw          $a0, 0x2F84($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12164)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C3E88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C3E88u, 0x79961Cu, 0x799624u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799624u;
label_799624:
    // 0x799624: 0x8e042f84  lw          $a0, 0x2F84($s0)
    ctx->pc = 0x799624u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12164)));
    // 0x799628: 0xc0b0e6c  jal         func_2C39B0
    ctx->pc = 0x799628u;
    SET_GPR_U32(ctx, 31, 0x799630u);
    ctx->pc = 0x79962Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799628u;
    // 0x79962c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C39B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C39B0u, 0x799628u, 0x799630u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799630u;
label_799630:
    // 0x799630: 0x8e042f84  lw          $a0, 0x2F84($s0)
    ctx->pc = 0x799630u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12164)));
    // 0x799634: 0xc0b0fb6  jal         func_2C3ED8
    ctx->pc = 0x799634u;
    SET_GPR_U32(ctx, 31, 0x79963Cu);
    ctx->pc = 0x799638u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799634u;
    // 0x799638: 0x2665ba30  addiu       $a1, $s3, -0x45D0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 4294949424));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C3ED8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C3ED8u, 0x799634u, 0x79963Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79963Cu;
label_79963c:
    // 0x79963c: 0xc1e6bb2  jal         func_79AEC8
    ctx->pc = 0x79963Cu;
    SET_GPR_U32(ctx, 31, 0x799644u);
    ctx->pc = 0x799640u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79963Cu;
    // 0x799640: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x79AEC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x79AEC8u, 0x79963Cu, 0x799644u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799644u;
label_799644:
    // 0x799644: 0x8e022f84  lw          $v0, 0x2F84($s0)
    ctx->pc = 0x799644u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12164)));
    // 0x799648: 0x24050014  addiu       $a1, $zero, 0x14
    ctx->pc = 0x799648u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x79964c: 0xc0b56a8  jal         func_2D5AA0
    ctx->pc = 0x79964Cu;
    SET_GPR_U32(ctx, 31, 0x799654u);
    ctx->pc = 0x799650u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79964Cu;
    // 0x799650: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5AA0u, 0x79964Cu, 0x799654u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799654u;
label_799654:
    // 0x799654: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x799654u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799658: 0x2684ee00  addiu       $a0, $s4, -0x1200
    ctx->pc = 0x799658u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 4294962688));
    // 0x79965c: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x79965cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x799660: 0x24060090  addiu       $a2, $zero, 0x90
    ctx->pc = 0x799660u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 144));
    // 0x799664: 0x2407ffff  addiu       $a3, $zero, -0x1
    ctx->pc = 0x799664u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x799668: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x799668u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x79966c: 0xc0b2e28  jal         func_2CB8A0
    ctx->pc = 0x79966Cu;
    SET_GPR_U32(ctx, 31, 0x799674u);
    ctx->pc = 0x799670u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79966Cu;
    // 0x799670: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CB8A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CB8A0u, 0x79966Cu, 0x799674u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799674u;
label_799674:
    // 0x799674: 0x3c09ffff  lui         $t1, 0xFFFF
    ctx->pc = 0x799674u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)65535 << 16));
    // 0x799678: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x799678u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x79967c: 0x3529ffff  ori         $t1, $t1, 0xFFFF
    ctx->pc = 0x79967cu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)65535);
    // 0x799680: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x799680u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799684: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x799684u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x799688: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x799688u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79968c: 0xc0c194a  jal         func_306528
    ctx->pc = 0x79968Cu;
    SET_GPR_U32(ctx, 31, 0x799694u);
    ctx->pc = 0x799690u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79968Cu;
    // 0x799690: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x306528u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x306528u, 0x79968Cu, 0x799694u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799694u;
label_799694:
    // 0x799694: 0xc0b101e  jal         func_2C4078
    ctx->pc = 0x799694u;
    SET_GPR_U32(ctx, 31, 0x79969Cu);
    ctx->pc = 0x799698u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799694u;
    // 0x799698: 0x8e042f84  lw          $a0, 0x2F84($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12164)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C4078u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C4078u, 0x799694u, 0x79969Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79969Cu;
label_79969c:
    // 0x79969c: 0xc0b0f04  jal         func_2C3C10
    ctx->pc = 0x79969Cu;
    SET_GPR_U32(ctx, 31, 0x7996A4u);
    ctx->pc = 0x7996A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79969Cu;
    // 0x7996a0: 0x8e042f84  lw          $a0, 0x2F84($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12164)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C3C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C3C10u, 0x79969Cu, 0x7996A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7996A4u;
label_7996a4:
    // 0x7996a4: 0x26a4ae50  addiu       $a0, $s5, -0x51B0
    ctx->pc = 0x7996a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 4294946384));
    // 0x7996a8: 0x26c5ba20  addiu       $a1, $s6, -0x45E0
    ctx->pc = 0x7996a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 22), 4294949408));
    // 0x7996ac: 0xc04ccb4  jal         func_1332D0
    ctx->pc = 0x7996ACu;
    SET_GPR_U32(ctx, 31, 0x7996B4u);
    ctx->pc = 0x7996B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7996ACu;
    // 0x7996b0: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1332D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1332D0u, 0x7996ACu, 0x7996B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7996B4u;
label_7996b4:
    // 0x7996b4: 0x8e042f84  lw          $a0, 0x2F84($s0)
    ctx->pc = 0x7996b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12164)));
    // 0x7996b8: 0x26e594f8  addiu       $a1, $s7, -0x6B08
    ctx->pc = 0x7996b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 23), 4294939896));
    // 0x7996bc: 0xc0b0e24  jal         func_2C3890
    ctx->pc = 0x7996BCu;
    SET_GPR_U32(ctx, 31, 0x7996C4u);
    ctx->pc = 0x7996C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7996BCu;
    // 0x7996c0: 0x2406ffff  addiu       $a2, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C3890u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C3890u, 0x7996BCu, 0x7996C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7996C4u;
label_7996c4:
    // 0x7996c4: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x7996c4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x7996c8: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x7996c8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x7996cc: 0x3c044000  lui         $a0, 0x4000
    ctx->pc = 0x7996ccu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16384 << 16));
    // 0x7996d0: 0x3c01c237  lui         $at, 0xC237
    ctx->pc = 0x7996d0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49719 << 16));
    // 0x7996d4: 0x3421ae14  ori         $at, $at, 0xAE14
    ctx->pc = 0x7996d4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)44564);
    // 0x7996d8: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x7996d8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x7996dc: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x7996dcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7996e0: 0x3c01c319  lui         $at, 0xC319
    ctx->pc = 0x7996e0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49945 << 16));
    // 0x7996e4: 0x34211c29  ori         $at, $at, 0x1C29
    ctx->pc = 0x7996e4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)7209);
    // 0x7996e8: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x7996e8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x7996ec: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x7996ecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7996f0: 0x3c014181  lui         $at, 0x4181
    ctx->pc = 0x7996f0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16769 << 16));
    // 0x7996f4: 0x3421eb85  ori         $at, $at, 0xEB85
    ctx->pc = 0x7996f4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)60293);
    // 0x7996f8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x7996f8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x7996fc: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x7996fcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799700: 0x3c013f78  lui         $at, 0x3F78
    ctx->pc = 0x799700u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16248 << 16));
    // 0x799704: 0x342151ec  ori         $at, $at, 0x51EC
    ctx->pc = 0x799704u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)20972);
    // 0x799708: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x799708u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x79970c: 0xe7a30000  swc1        $f3, 0x0($sp)
    ctx->pc = 0x79970cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x799710: 0xe7a10004  swc1        $f1, 0x4($sp)
    ctx->pc = 0x799710u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x799714: 0xe7a00008  swc1        $f0, 0x8($sp)
    ctx->pc = 0x799714u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x799718: 0xe7a4000c  swc1        $f4, 0xC($sp)
    ctx->pc = 0x799718u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x79971c: 0xafa00010  sw          $zero, 0x10($sp)
    ctx->pc = 0x79971cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 0));
    // 0x799720: 0xe6420004  swc1        $f2, 0x4($s2)
    ctx->pc = 0x799720u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 4), bits); }
    // 0x799724: 0xafa00018  sw          $zero, 0x18($sp)
    ctx->pc = 0x799724u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 0));
    // 0x799728: 0xe644000c  swc1        $f4, 0xC($s2)
    ctx->pc = 0x799728u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 12), bits); }
    // 0x79972c: 0x8fc38658  lw          $v1, -0x79A8($fp)
    ctx->pc = 0x79972cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4294936152)));
    // 0x799730: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x799730u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x799734: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x799734u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x799738: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x799738u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
    // 0x79973c: 0x3c02003c  lui         $v0, 0x3C
    ctx->pc = 0x79973cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
    // 0x799740: 0xc0b016c  jal         func_2C05B0
    ctx->pc = 0x799740u;
    SET_GPR_U32(ctx, 31, 0x799748u);
    ctx->pc = 0x799744u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799740u;
    // 0x799744: 0x8c44264c  lw          $a0, 0x264C($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 9804)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C05B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C05B0u, 0x799740u, 0x799748u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799748u;
label_799748:
    // 0x799748: 0x8e022f84  lw          $v0, 0x2F84($s0)
    ctx->pc = 0x799748u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12164)));
    // 0x79974c: 0xc0b5692  jal         func_2D5A48
    ctx->pc = 0x79974Cu;
    SET_GPR_U32(ctx, 31, 0x799754u);
    ctx->pc = 0x799750u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79974Cu;
    // 0x799750: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5A48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5A48u, 0x79974Cu, 0x799754u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799754u;
label_799754:
    // 0x799754: 0x7bb000b0  lq          $s0, 0xB0($sp)
    ctx->pc = 0x799754u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x799758: 0x7bb100a0  lq          $s1, 0xA0($sp)
    ctx->pc = 0x799758u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x79975c: 0x7bb20090  lq          $s2, 0x90($sp)
    ctx->pc = 0x79975cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x799760: 0x7bb30080  lq          $s3, 0x80($sp)
    ctx->pc = 0x799760u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x799764: 0x7bb40070  lq          $s4, 0x70($sp)
    ctx->pc = 0x799764u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x799768: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x799768u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x79976c: 0x7bb60050  lq          $s6, 0x50($sp)
    ctx->pc = 0x79976cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x799770: 0x7bb70040  lq          $s7, 0x40($sp)
    ctx->pc = 0x799770u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x799774: 0x7bbe0030  lq          $fp, 0x30($sp)
    ctx->pc = 0x799774u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x799778: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x799778u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x79977c: 0x3e00008  jr          $ra
    ctx->pc = 0x79977Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x799780u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79977Cu;
        // 0x799780: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79977Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x799784u;
    // 0x799784: 0x0  nop
    ctx->pc = 0x799784u;
    // NOP
    ctx->pc = 0x799788u;
}
} // namespace gh_r601
