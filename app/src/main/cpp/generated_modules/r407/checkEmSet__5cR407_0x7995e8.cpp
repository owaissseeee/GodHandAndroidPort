#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "r407_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_r407
{
// Function: checkEmSet__5cR407
// Address: 0x7995e8 - 0x799730
void checkEmSet__5cR407_0x7995e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("checkEmSet__5cR407_0x7995e8");
#endif

    switch (ctx->pc) {
        case 0x799650u: goto label_799650;
        case 0x799658u: goto label_799658;
        case 0x799668u: goto label_799668;
        case 0x79967cu: goto label_79967c;
        case 0x799690u: goto label_799690;
        case 0x7996a4u: goto label_7996a4;
        case 0x7996c8u: goto label_7996c8;
        case 0x7996e4u: goto label_7996e4;
        case 0x7996fcu: goto label_7996fc;
        case 0x799708u: goto label_799708;
        default: break;
    }

    ctx->pc = 0x7995e8u;

    // 0x7995e8: 0x27bdff20  addiu       $sp, $sp, -0xE0
    ctx->pc = 0x7995e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967072));
    // 0x7995ec: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x7995ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x7995f0: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x7995f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x7995f4: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x7995f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x7995f8: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x7995f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x7995fc: 0x7fb100c0  sq          $s1, 0xC0($sp)
    ctx->pc = 0x7995fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 17));
    // 0x799600: 0x7fb200b0  sq          $s2, 0xB0($sp)
    ctx->pc = 0x799600u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 18));
    // 0x799604: 0x3c11003c  lui         $s1, 0x3C
    ctx->pc = 0x799604u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)60 << 16));
    // 0x799608: 0x7fb300a0  sq          $s3, 0xA0($sp)
    ctx->pc = 0x799608u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 19));
    // 0x79960c: 0x27b20040  addiu       $s2, $sp, 0x40
    ctx->pc = 0x79960cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x799610: 0x7fb40090  sq          $s4, 0x90($sp)
    ctx->pc = 0x799610u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 20));
    // 0x799614: 0x27b30030  addiu       $s3, $sp, 0x30
    ctx->pc = 0x799614u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x799618: 0x7fb50080  sq          $s5, 0x80($sp)
    ctx->pc = 0x799618u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 21));
    // 0x79961c: 0x27b40020  addiu       $s4, $sp, 0x20
    ctx->pc = 0x79961cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x799620: 0x7fb60070  sq          $s6, 0x70($sp)
    ctx->pc = 0x799620u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 22));
    // 0x799624: 0x27b50010  addiu       $s5, $sp, 0x10
    ctx->pc = 0x799624u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x799628: 0x7fb000d0  sq          $s0, 0xD0($sp)
    ctx->pc = 0x799628u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 16));
    // 0x79962c: 0x24160001  addiu       $s6, $zero, 0x1
    ctx->pc = 0x79962cu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x799630: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x799630u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x799634: 0xa3a20010  sb          $v0, 0x10($sp)
    ctx->pc = 0x799634u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 16), (uint8_t)GPR_U32(ctx, 2));
    // 0x799638: 0xa3a30020  sb          $v1, 0x20($sp)
    ctx->pc = 0x799638u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 32), (uint8_t)GPR_U32(ctx, 3));
    // 0x79963c: 0xa3a40030  sb          $a0, 0x30($sp)
    ctx->pc = 0x79963cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 48), (uint8_t)GPR_U32(ctx, 4));
    // 0x799640: 0xa3a50040  sb          $a1, 0x40($sp)
    ctx->pc = 0x799640u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 64), (uint8_t)GPR_U32(ctx, 5));
    // 0x799644: 0xa3a00000  sb          $zero, 0x0($sp)
    ctx->pc = 0x799644u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x799648: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x799648u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79964c: 0x0  nop
    ctx->pc = 0x79964cu;
    // NOP
label_799650:
    // 0x799650: 0xc0a572a  jal         func_295CA8
    ctx->pc = 0x799650u;
    SET_GPR_U32(ctx, 31, 0x799658u);
    ctx->pc = 0x799654u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799650u;
    // 0x799654: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295CA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295CA8u, 0x799650u, 0x799658u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799658u;
label_799658:
    // 0x799658: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x799658u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x79965c: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x79965cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799660: 0xc0a572a  jal         func_295CA8
    ctx->pc = 0x799660u;
    SET_GPR_U32(ctx, 31, 0x799668u);
    ctx->pc = 0x799664u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799660u;
    // 0x799664: 0x2c2800a  movz        $s0, $s6, $v0 (Delay Slot)
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 22));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295CA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295CA8u, 0x799660u, 0x799668u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799668u;
label_799668:
    // 0x799668: 0x26030001  addiu       $v1, $s0, 0x1
    ctx->pc = 0x799668u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x79966c: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x79966cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x799670: 0x62800a  movz        $s0, $v1, $v0
    ctx->pc = 0x799670u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 3));
    // 0x799674: 0xc0a572a  jal         func_295CA8
    ctx->pc = 0x799674u;
    SET_GPR_U32(ctx, 31, 0x79967Cu);
    ctx->pc = 0x799678u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799674u;
    // 0x799678: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295CA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295CA8u, 0x799674u, 0x79967Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79967Cu;
label_79967c:
    // 0x79967c: 0x26030001  addiu       $v1, $s0, 0x1
    ctx->pc = 0x79967cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x799680: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x799680u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x799684: 0x62800a  movz        $s0, $v1, $v0
    ctx->pc = 0x799684u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 3));
    // 0x799688: 0xc0a572a  jal         func_295CA8
    ctx->pc = 0x799688u;
    SET_GPR_U32(ctx, 31, 0x799690u);
    ctx->pc = 0x79968Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799688u;
    // 0x79968c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295CA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295CA8u, 0x799688u, 0x799690u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799690u;
label_799690:
    // 0x799690: 0x26030001  addiu       $v1, $s0, 0x1
    ctx->pc = 0x799690u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x799694: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x799694u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x799698: 0x62800a  movz        $s0, $v1, $v0
    ctx->pc = 0x799698u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 3));
    // 0x79969c: 0xc0a572a  jal         func_295CA8
    ctx->pc = 0x79969Cu;
    SET_GPR_U32(ctx, 31, 0x7996A4u);
    ctx->pc = 0x7996A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79969Cu;
    // 0x7996a0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295CA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295CA8u, 0x79969Cu, 0x7996A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7996A4u;
label_7996a4:
    // 0x7996a4: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x7996a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x7996a8: 0x26030001  addiu       $v1, $s0, 0x1
    ctx->pc = 0x7996a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x7996ac: 0x62800a  movz        $s0, $v1, $v0
    ctx->pc = 0x7996acu;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 3));
    // 0x7996b0: 0x2e100003  sltiu       $s0, $s0, 0x3
    ctx->pc = 0x7996b0u;
    SET_GPR_U64(ctx, 16, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
    // 0x7996b4: 0x12000006  beqz        $s0, . + 4 + (0x6 << 2)
    ctx->pc = 0x7996B4u;
    {
        const bool branch_taken_0x7996b4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x7996B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7996B4u;
        // 0x7996b8: 0x8e222f84  lw          $v0, 0x2F84($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12164)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7996b4) {
            ctx->pc = 0x7996D0u;
            goto label_7996d0;
        }
    }
    ctx->pc = 0x7996BCu;
    // 0x7996bc: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x7996bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x7996c0: 0xc0b56a8  jal         func_2D5AA0
    ctx->pc = 0x7996C0u;
    SET_GPR_U32(ctx, 31, 0x7996C8u);
    ctx->pc = 0x7996C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7996C0u;
    // 0x7996c4: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5AA0u, 0x7996C0u, 0x7996C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7996C8u;
label_7996c8:
    // 0x7996c8: 0x1000ffe1  b           . + 4 + (-0x1F << 2)
    ctx->pc = 0x7996C8u;
    {
        const bool branch_taken_0x7996c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x7996CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7996C8u;
        // 0x7996cc: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7996c8) {
            ctx->pc = 0x799650u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_799650;
        }
    }
    ctx->pc = 0x7996D0u;
label_7996d0:
    // 0x7996d0: 0x8e242f84  lw          $a0, 0x2F84($s1)
    ctx->pc = 0x7996d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12164)));
    // 0x7996d4: 0x3c05007a  lui         $a1, 0x7A
    ctx->pc = 0x7996d4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)122 << 16));
    // 0x7996d8: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x7996d8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x7996dc: 0xc0b0e24  jal         func_2C3890
    ctx->pc = 0x7996DCu;
    SET_GPR_U32(ctx, 31, 0x7996E4u);
    ctx->pc = 0x7996E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7996DCu;
    // 0x7996e0: 0x24a59270  addiu       $a1, $a1, -0x6D90 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294939248));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C3890u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C3890u, 0x7996DCu, 0x7996E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7996E4u;
label_7996e4:
    // 0x7996e4: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x7996e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x7996e8: 0x3c040058  lui         $a0, 0x58
    ctx->pc = 0x7996e8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)88 << 16));
    // 0x7996ec: 0xa3a30050  sb          $v1, 0x50($sp)
    ctx->pc = 0x7996ecu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 80), (uint8_t)GPR_U32(ctx, 3));
    // 0x7996f0: 0x24846ab0  addiu       $a0, $a0, 0x6AB0
    ctx->pc = 0x7996f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 27312));
    // 0x7996f4: 0xc0a54b4  jal         func_2952D0
    ctx->pc = 0x7996F4u;
    SET_GPR_U32(ctx, 31, 0x7996FCu);
    ctx->pc = 0x7996F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7996F4u;
    // 0x7996f8: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2952D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2952D0u, 0x7996F4u, 0x7996FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7996FCu;
label_7996fc:
    // 0x7996fc: 0x8e232f84  lw          $v1, 0x2F84($s1)
    ctx->pc = 0x7996fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12164)));
    // 0x799700: 0xc0b5692  jal         func_2D5A48
    ctx->pc = 0x799700u;
    SET_GPR_U32(ctx, 31, 0x799708u);
    ctx->pc = 0x799704u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799700u;
    // 0x799704: 0x8c640020  lw          $a0, 0x20($v1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5A48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5A48u, 0x799700u, 0x799708u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799708u;
label_799708:
    // 0x799708: 0x7bb000d0  lq          $s0, 0xD0($sp)
    ctx->pc = 0x799708u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x79970c: 0x7bb100c0  lq          $s1, 0xC0($sp)
    ctx->pc = 0x79970cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x799710: 0x7bb200b0  lq          $s2, 0xB0($sp)
    ctx->pc = 0x799710u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x799714: 0x7bb300a0  lq          $s3, 0xA0($sp)
    ctx->pc = 0x799714u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x799718: 0x7bb40090  lq          $s4, 0x90($sp)
    ctx->pc = 0x799718u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x79971c: 0x7bb50080  lq          $s5, 0x80($sp)
    ctx->pc = 0x79971cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x799720: 0x7bb60070  lq          $s6, 0x70($sp)
    ctx->pc = 0x799720u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x799724: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x799724u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x799728: 0x3e00008  jr          $ra
    ctx->pc = 0x799728u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x79972Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799728u;
        // 0x79972c: 0x27bd00e0  addiu       $sp, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x799728u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x799730u;
}
} // namespace gh_r407
