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
// Function: R601Init__Fv
// Address: 0x799220 - 0x7994e0
void R601Init__Fv_0x799220(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("R601Init__Fv_0x799220");
#endif

    switch (ctx->pc) {
        case 0x799254u: goto label_799254;
        case 0x799260u: goto label_799260;
        case 0x79927cu: goto label_79927c;
        case 0x7992b0u: goto label_7992b0;
        case 0x7992c0u: goto label_7992c0;
        case 0x7992d8u: goto label_7992d8;
        case 0x7992e8u: goto label_7992e8;
        case 0x7992fcu: goto label_7992fc;
        case 0x799328u: goto label_799328;
        case 0x799338u: goto label_799338;
        case 0x79935cu: goto label_79935c;
        case 0x799370u: goto label_799370;
        case 0x7993acu: goto label_7993ac;
        case 0x7993d4u: goto label_7993d4;
        case 0x7993e0u: goto label_7993e0;
        case 0x7993f8u: goto label_7993f8;
        case 0x799418u: goto label_799418;
        case 0x799428u: goto label_799428;
        case 0x799440u: goto label_799440;
        case 0x799450u: goto label_799450;
        case 0x799478u: goto label_799478;
        case 0x799488u: goto label_799488;
        case 0x7994a4u: goto label_7994a4;
        case 0x7994b4u: goto label_7994b4;
        default: break;
    }

    ctx->pc = 0x799220u;

    // 0x799220: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x799220u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
    // 0x799224: 0x24040018  addiu       $a0, $zero, 0x18
    ctx->pc = 0x799224u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x799228: 0x7fb000b0  sq          $s0, 0xB0($sp)
    ctx->pc = 0x799228u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 16));
    // 0x79922c: 0x7fb100a0  sq          $s1, 0xA0($sp)
    ctx->pc = 0x79922cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 17));
    // 0x799230: 0x7fb20090  sq          $s2, 0x90($sp)
    ctx->pc = 0x799230u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 18));
    // 0x799234: 0x7fb30080  sq          $s3, 0x80($sp)
    ctx->pc = 0x799234u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 19));
    // 0x799238: 0x7fb40070  sq          $s4, 0x70($sp)
    ctx->pc = 0x799238u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 20));
    // 0x79923c: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x79923cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
    // 0x799240: 0x7fb60050  sq          $s6, 0x50($sp)
    ctx->pc = 0x799240u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 22));
    // 0x799244: 0x7fb70040  sq          $s7, 0x40($sp)
    ctx->pc = 0x799244u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 23));
    // 0x799248: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x799248u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x79924c: 0xc1e6460  jal         func_799180
    ctx->pc = 0x79924Cu;
    SET_GPR_U32(ctx, 31, 0x799254u);
    ctx->pc = 0x799250u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79924Cu;
    // 0x799250: 0x3c10007a  lui         $s0, 0x7A (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)122 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x799180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x799180u, 0x79924Cu, 0x799254u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799254u;
label_799254:
    // 0x799254: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x799254u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799258: 0xc1e653c  jal         func_7994F0
    ctx->pc = 0x799258u;
    SET_GPR_U32(ctx, 31, 0x799260u);
    ctx->pc = 0x79925Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799258u;
    // 0x79925c: 0xae02bb80  sw          $v0, -0x4480($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 4294949760), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7994F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7994F0u, 0x799258u, 0x799260u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799260u;
label_799260:
    // 0x799260: 0x3c040058  lui         $a0, 0x58
    ctx->pc = 0x799260u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)88 << 16));
    // 0x799264: 0x3c060075  lui         $a2, 0x75
    ctx->pc = 0x799264u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)117 << 16));
    // 0x799268: 0x24840d20  addiu       $a0, $a0, 0xD20
    ctx->pc = 0x799268u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 3360));
    // 0x79926c: 0x24c64220  addiu       $a2, $a2, 0x4220
    ctx->pc = 0x79926cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 16928));
    // 0x799270: 0x24050350  addiu       $a1, $zero, 0x350
    ctx->pc = 0x799270u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 848));
    // 0x799274: 0xc07fa28  jal         func_1FE8A0
    ctx->pc = 0x799274u;
    SET_GPR_U32(ctx, 31, 0x79927Cu);
    ctx->pc = 0x799278u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799274u;
    // 0x799278: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FE8A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FE8A0u, 0x799274u, 0x79927Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79927Cu;
label_79927c:
    // 0x79927c: 0x3c04005f  lui         $a0, 0x5F
    ctx->pc = 0x79927cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)95 << 16));
    // 0x799280: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x799280u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x799284: 0x8c838658  lw          $v1, -0x79A8($a0)
    ctx->pc = 0x799284u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5E8658u));
    // 0x799288: 0x8c630004  lw          $v1, 0x4($v1)
    ctx->pc = 0x799288u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x79928c: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x79928cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x799290: 0x1040002e  beqz        $v0, . + 4 + (0x2E << 2)
    ctx->pc = 0x799290u;
    {
        const bool branch_taken_0x799290 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x799294u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799290u;
        // 0x799294: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799290) {
            ctx->pc = 0x79934Cu;
            goto label_79934c;
        }
    }
    ctx->pc = 0x799298u;
    // 0x799298: 0x3c13005d  lui         $s3, 0x5D
    ctx->pc = 0x799298u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)93 << 16));
    // 0x79929c: 0x3c12007a  lui         $s2, 0x7A
    ctx->pc = 0x79929cu;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)122 << 16));
    // 0x7992a0: 0x3c15003c  lui         $s5, 0x3C
    ctx->pc = 0x7992a0u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)60 << 16));
    // 0x7992a4: 0x3c140058  lui         $s4, 0x58
    ctx->pc = 0x7992a4u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)88 << 16));
    // 0x7992a8: 0x3c17007a  lui         $s7, 0x7A
    ctx->pc = 0x7992a8u;
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)122 << 16));
    // 0x7992ac: 0x26020002  addiu       $v0, $s0, 0x2
    ctx->pc = 0x7992acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 2));
label_7992b0:
    // 0x7992b0: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x7992b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7992b4: 0xa3a20000  sb          $v0, 0x0($sp)
    ctx->pc = 0x7992b4u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x7992b8: 0xc0a56ce  jal         func_295B38
    ctx->pc = 0x7992B8u;
    SET_GPR_U32(ctx, 31, 0x7992C0u);
    ctx->pc = 0x7992BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7992B8u;
    // 0x7992bc: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295B38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295B38u, 0x7992B8u, 0x7992C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7992C0u;
label_7992c0:
    // 0x7992c0: 0x2a030003  slti        $v1, $s0, 0x3
    ctx->pc = 0x7992c0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x7992c4: 0x1460fffa  bnez        $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x7992C4u;
    {
        const bool branch_taken_0x7992c4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x7992C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7992C4u;
        // 0x7992c8: 0x26020002  addiu       $v0, $s0, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7992c4) {
            ctx->pc = 0x7992B0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_7992b0;
        }
    }
    ctx->pc = 0x7992CCu;
    // 0x7992cc: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x7992ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x7992d0: 0xc1e6bb2  jal         func_79AEC8
    ctx->pc = 0x7992D0u;
    SET_GPR_U32(ctx, 31, 0x7992D8u);
    ctx->pc = 0x7992D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7992D0u;
    // 0x7992d4: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x79AEC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x79AEC8u, 0x7992D0u, 0x7992D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7992D8u;
label_7992d8:
    // 0x7992d8: 0x2645ba20  addiu       $a1, $s2, -0x45E0
    ctx->pc = 0x7992d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 4294949408));
    // 0x7992dc: 0x2664ae50  addiu       $a0, $s3, -0x51B0
    ctx->pc = 0x7992dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 4294946384));
    // 0x7992e0: 0xc04ccb4  jal         func_1332D0
    ctx->pc = 0x7992E0u;
    SET_GPR_U32(ctx, 31, 0x7992E8u);
    ctx->pc = 0x7992E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7992E0u;
    // 0x7992e4: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1332D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1332D0u, 0x7992E0u, 0x7992E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7992E8u;
label_7992e8:
    // 0x7992e8: 0x8ea42f84  lw          $a0, 0x2F84($s5)
    ctx->pc = 0x7992e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 12164)));
    // 0x7992ec: 0x3c05007a  lui         $a1, 0x7A
    ctx->pc = 0x7992ecu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)122 << 16));
    // 0x7992f0: 0x24a594f8  addiu       $a1, $a1, -0x6B08
    ctx->pc = 0x7992f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294939896));
    // 0x7992f4: 0xc0b0e24  jal         func_2C3890
    ctx->pc = 0x7992F4u;
    SET_GPR_U32(ctx, 31, 0x7992FCu);
    ctx->pc = 0x7992F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7992F4u;
    // 0x7992f8: 0x2406ffff  addiu       $a2, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C3890u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C3890u, 0x7992F4u, 0x7992FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7992FCu;
label_7992fc:
    // 0x7992fc: 0x2403000f  addiu       $v1, $zero, 0xF
    ctx->pc = 0x7992fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x799300: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x799300u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x799304: 0x24040011  addiu       $a0, $zero, 0x11
    ctx->pc = 0x799304u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    // 0x799308: 0x24050012  addiu       $a1, $zero, 0x12
    ctx->pc = 0x799308u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    // 0x79930c: 0xa3a30010  sb          $v1, 0x10($sp)
    ctx->pc = 0x79930cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 16), (uint8_t)GPR_U32(ctx, 3));
    // 0x799310: 0x27b00010  addiu       $s0, $sp, 0x10
    ctx->pc = 0x799310u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x799314: 0xa3a20018  sb          $v0, 0x18($sp)
    ctx->pc = 0x799314u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 24), (uint8_t)GPR_U32(ctx, 2));
    // 0x799318: 0xa3a40020  sb          $a0, 0x20($sp)
    ctx->pc = 0x799318u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 32), (uint8_t)GPR_U32(ctx, 4));
    // 0x79931c: 0xa3a50028  sb          $a1, 0x28($sp)
    ctx->pc = 0x79931cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 40), (uint8_t)GPR_U32(ctx, 5));
    // 0x799320: 0x92050000  lbu         $a1, 0x0($s0)
    ctx->pc = 0x799320u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x799324: 0x0  nop
    ctx->pc = 0x799324u;
    // NOP
label_799328:
    // 0x799328: 0x26846ab0  addiu       $a0, $s4, 0x6AB0
    ctx->pc = 0x799328u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 27312));
    // 0x79932c: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x79932cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x799330: 0xc0a54b4  jal         func_2952D0
    ctx->pc = 0x799330u;
    SET_GPR_U32(ctx, 31, 0x799338u);
    ctx->pc = 0x799334u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799330u;
    // 0x799334: 0x26100008  addiu       $s0, $s0, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2952D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2952D0u, 0x799330u, 0x799338u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799338u;
label_799338:
    // 0x799338: 0x2e230004  sltiu       $v1, $s1, 0x4
    ctx->pc = 0x799338u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
    // 0x79933c: 0x5460fffa  bnel        $v1, $zero, . + 4 + (-0x6 << 2)
    ctx->pc = 0x79933Cu;
    {
        const bool branch_taken_0x79933c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x79933c) {
            ctx->pc = 0x799340u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x79933Cu;
            // 0x799340: 0x92050000  lbu         $a1, 0x0($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x799328u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_799328;
        }
    }
    ctx->pc = 0x799344u;
    // 0x799344: 0x10000058  b           . + 4 + (0x58 << 2)
    ctx->pc = 0x799344u;
    {
        const bool branch_taken_0x799344 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x799348u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799344u;
        // 0x799348: 0x8ea42f84  lw          $a0, 0x2F84($s5) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 12164)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799344) {
            ctx->pc = 0x7994A8u;
            goto label_7994a8;
        }
    }
    ctx->pc = 0x79934Cu;
label_79934c:
    // 0x79934c: 0x460002c  bltz        $v1, . + 4 + (0x2C << 2)
    ctx->pc = 0x79934Cu;
    {
        const bool branch_taken_0x79934c = (GPR_S64(ctx, 3) < 0);
        ctx->pc = 0x799350u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79934Cu;
        // 0x799350: 0x3c13005d  lui         $s3, 0x5D (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)93 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79934c) {
            ctx->pc = 0x799400u;
            goto label_799400;
        }
    }
    ctx->pc = 0x799354u;
    // 0x799354: 0xc1e67c0  jal         func_799F00
    ctx->pc = 0x799354u;
    SET_GPR_U32(ctx, 31, 0x79935Cu);
    ctx->pc = 0x799358u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799354u;
    // 0x799358: 0x3c10003c  lui         $s0, 0x3C (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)60 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x799F00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x799F00u, 0x799354u, 0x79935Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79935Cu;
label_79935c:
    // 0x79935c: 0x8e042f84  lw          $a0, 0x2F84($s0)
    ctx->pc = 0x79935cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12164)));
    // 0x799360: 0x3c05007a  lui         $a1, 0x7A
    ctx->pc = 0x799360u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)122 << 16));
    // 0x799364: 0x24a5a890  addiu       $a1, $a1, -0x5770
    ctx->pc = 0x799364u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294944912));
    // 0x799368: 0xc0b0e24  jal         func_2C3890
    ctx->pc = 0x799368u;
    SET_GPR_U32(ctx, 31, 0x799370u);
    ctx->pc = 0x79936Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799368u;
    // 0x79936c: 0x2406ffff  addiu       $a2, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C3890u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C3890u, 0x799368u, 0x799370u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799370u;
label_799370:
    // 0x799370: 0x200a82d  daddu       $s5, $s0, $zero
    ctx->pc = 0x799370u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799374: 0x4400008  bltz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x799374u;
    {
        const bool branch_taken_0x799374 = (GPR_S64(ctx, 2) < 0);
        ctx->pc = 0x799378u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799374u;
        // 0x799378: 0x8e042f84  lw          $a0, 0x2F84($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12164)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799374) {
            ctx->pc = 0x799398u;
            goto label_799398;
        }
    }
    ctx->pc = 0x79937Cu;
    // 0x79937c: 0x24030058  addiu       $v1, $zero, 0x58
    ctx->pc = 0x79937cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 88));
    // 0x799380: 0x8c84001c  lw          $a0, 0x1C($a0)
    ctx->pc = 0x799380u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 28)));
    // 0x799384: 0x431818  mult        $v1, $v0, $v1
    ctx->pc = 0x799384u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x799388: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x799388u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x79938c: 0x90620050  lbu         $v0, 0x50($v1)
    ctx->pc = 0x79938cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 80)));
    // 0x799390: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x799390u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x799394: 0xa0620050  sb          $v0, 0x50($v1)
    ctx->pc = 0x799394u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 80), (uint8_t)GPR_U32(ctx, 2));
label_799398:
    // 0x799398: 0x8ea42f84  lw          $a0, 0x2F84($s5)
    ctx->pc = 0x799398u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 12164)));
    // 0x79939c: 0x3c05007a  lui         $a1, 0x7A
    ctx->pc = 0x79939cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)122 << 16));
    // 0x7993a0: 0x24a59788  addiu       $a1, $a1, -0x6878
    ctx->pc = 0x7993a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294940552));
    // 0x7993a4: 0xc0b0e24  jal         func_2C3890
    ctx->pc = 0x7993A4u;
    SET_GPR_U32(ctx, 31, 0x7993ACu);
    ctx->pc = 0x7993A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7993A4u;
    // 0x7993a8: 0x2406ffff  addiu       $a2, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C3890u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C3890u, 0x7993A4u, 0x7993ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7993ACu;
label_7993ac:
    // 0x7993ac: 0x3c16007a  lui         $s6, 0x7A
    ctx->pc = 0x7993acu;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)122 << 16));
    // 0x7993b0: 0x3c040060  lui         $a0, 0x60
    ctx->pc = 0x7993b0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
    // 0x7993b4: 0x3c07007a  lui         $a3, 0x7A
    ctx->pc = 0x7993b4u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)122 << 16));
    // 0x7993b8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x7993b8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7993bc: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x7993bcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x7993c0: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x7993c0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7993c4: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x7993c4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7993c8: 0x24e7a030  addiu       $a3, $a3, -0x5FD0
    ctx->pc = 0x7993c8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294942768));
    // 0x7993cc: 0xc0b09e4  jal         func_2C2790
    ctx->pc = 0x7993CCu;
    SET_GPR_U32(ctx, 31, 0x7993D4u);
    ctx->pc = 0x7993D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7993CCu;
    // 0x7993d0: 0x2484ea60  addiu       $a0, $a0, -0x15A0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294961760));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C2790u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C2790u, 0x7993CCu, 0x7993D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7993D4u;
label_7993d4:
    // 0x7993d4: 0x3c17007a  lui         $s7, 0x7A
    ctx->pc = 0x7993d4u;
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)122 << 16));
    // 0x7993d8: 0xc1e6bb2  jal         func_79AEC8
    ctx->pc = 0x7993D8u;
    SET_GPR_U32(ctx, 31, 0x7993E0u);
    ctx->pc = 0x7993DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7993D8u;
    // 0x7993dc: 0x24040003  addiu       $a0, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x79AEC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x79AEC8u, 0x7993D8u, 0x7993E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7993E0u;
label_7993e0:
    // 0x7993e0: 0x3c04005d  lui         $a0, 0x5D
    ctx->pc = 0x7993e0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)93 << 16));
    // 0x7993e4: 0x3c05007a  lui         $a1, 0x7A
    ctx->pc = 0x7993e4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)122 << 16));
    // 0x7993e8: 0x2484ae50  addiu       $a0, $a0, -0x51B0
    ctx->pc = 0x7993e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294946384));
    // 0x7993ec: 0x24a5ba20  addiu       $a1, $a1, -0x45E0
    ctx->pc = 0x7993ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294949408));
    // 0x7993f0: 0xc04ccb4  jal         func_1332D0
    ctx->pc = 0x7993F0u;
    SET_GPR_U32(ctx, 31, 0x7993F8u);
    ctx->pc = 0x7993F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7993F0u;
    // 0x7993f4: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1332D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1332D0u, 0x7993F0u, 0x7993F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7993F8u;
label_7993f8:
    // 0x7993f8: 0x10000027  b           . + 4 + (0x27 << 2)
    ctx->pc = 0x7993F8u;
    {
        const bool branch_taken_0x7993f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x7993FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7993F8u;
        // 0x7993fc: 0x8ea42f84  lw          $a0, 0x2F84($s5) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 12164)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7993f8) {
            ctx->pc = 0x799498u;
            goto label_799498;
        }
    }
    ctx->pc = 0x799400u;
label_799400:
    // 0x799400: 0x3c12007a  lui         $s2, 0x7A
    ctx->pc = 0x799400u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)122 << 16));
    // 0x799404: 0x3c15003c  lui         $s5, 0x3C
    ctx->pc = 0x799404u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)60 << 16));
    // 0x799408: 0x3c140058  lui         $s4, 0x58
    ctx->pc = 0x799408u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)88 << 16));
    // 0x79940c: 0x3c16007a  lui         $s6, 0x7A
    ctx->pc = 0x79940cu;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)122 << 16));
    // 0x799410: 0x3c17007a  lui         $s7, 0x7A
    ctx->pc = 0x799410u;
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)122 << 16));
    // 0x799414: 0x26020002  addiu       $v0, $s0, 0x2
    ctx->pc = 0x799414u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 2));
label_799418:
    // 0x799418: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x799418u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79941c: 0xa3a20000  sb          $v0, 0x0($sp)
    ctx->pc = 0x79941cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x799420: 0xc0a56ce  jal         func_295B38
    ctx->pc = 0x799420u;
    SET_GPR_U32(ctx, 31, 0x799428u);
    ctx->pc = 0x799424u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799420u;
    // 0x799424: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295B38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295B38u, 0x799420u, 0x799428u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799428u;
label_799428:
    // 0x799428: 0x2a030003  slti        $v1, $s0, 0x3
    ctx->pc = 0x799428u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x79942c: 0x1460fffa  bnez        $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x79942Cu;
    {
        const bool branch_taken_0x79942c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x799430u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79942Cu;
        // 0x799430: 0x26020002  addiu       $v0, $s0, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79942c) {
            ctx->pc = 0x799418u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_799418;
        }
    }
    ctx->pc = 0x799434u;
    // 0x799434: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x799434u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x799438: 0xc1e6bb2  jal         func_79AEC8
    ctx->pc = 0x799438u;
    SET_GPR_U32(ctx, 31, 0x799440u);
    ctx->pc = 0x79943Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799438u;
    // 0x79943c: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x79AEC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x79AEC8u, 0x799438u, 0x799440u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799440u;
label_799440:
    // 0x799440: 0x2664ae50  addiu       $a0, $s3, -0x51B0
    ctx->pc = 0x799440u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 4294946384));
    // 0x799444: 0x2645ba20  addiu       $a1, $s2, -0x45E0
    ctx->pc = 0x799444u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 4294949408));
    // 0x799448: 0xc04ccb4  jal         func_1332D0
    ctx->pc = 0x799448u;
    SET_GPR_U32(ctx, 31, 0x799450u);
    ctx->pc = 0x79944Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799448u;
    // 0x79944c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1332D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1332D0u, 0x799448u, 0x799450u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799450u;
label_799450:
    // 0x799450: 0x2402000f  addiu       $v0, $zero, 0xF
    ctx->pc = 0x799450u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x799454: 0x24030010  addiu       $v1, $zero, 0x10
    ctx->pc = 0x799454u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x799458: 0x24040011  addiu       $a0, $zero, 0x11
    ctx->pc = 0x799458u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    // 0x79945c: 0x24050012  addiu       $a1, $zero, 0x12
    ctx->pc = 0x79945cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    // 0x799460: 0xa3a20000  sb          $v0, 0x0($sp)
    ctx->pc = 0x799460u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x799464: 0x3a0802d  daddu       $s0, $sp, $zero
    ctx->pc = 0x799464u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799468: 0xa3a30008  sb          $v1, 0x8($sp)
    ctx->pc = 0x799468u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 8), (uint8_t)GPR_U32(ctx, 3));
    // 0x79946c: 0xa3a40010  sb          $a0, 0x10($sp)
    ctx->pc = 0x79946cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 16), (uint8_t)GPR_U32(ctx, 4));
    // 0x799470: 0xa3a50018  sb          $a1, 0x18($sp)
    ctx->pc = 0x799470u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 24), (uint8_t)GPR_U32(ctx, 5));
    // 0x799474: 0x92050000  lbu         $a1, 0x0($s0)
    ctx->pc = 0x799474u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
label_799478:
    // 0x799478: 0x26846ab0  addiu       $a0, $s4, 0x6AB0
    ctx->pc = 0x799478u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 27312));
    // 0x79947c: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x79947cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x799480: 0xc0a54b4  jal         func_2952D0
    ctx->pc = 0x799480u;
    SET_GPR_U32(ctx, 31, 0x799488u);
    ctx->pc = 0x799484u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799480u;
    // 0x799484: 0x26100008  addiu       $s0, $s0, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2952D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2952D0u, 0x799480u, 0x799488u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799488u;
label_799488:
    // 0x799488: 0x2e230004  sltiu       $v1, $s1, 0x4
    ctx->pc = 0x799488u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
    // 0x79948c: 0x5460fffa  bnel        $v1, $zero, . + 4 + (-0x6 << 2)
    ctx->pc = 0x79948Cu;
    {
        const bool branch_taken_0x79948c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x79948c) {
            ctx->pc = 0x799490u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x79948Cu;
            // 0x799490: 0x92050000  lbu         $a1, 0x0($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x799478u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_799478;
        }
    }
    ctx->pc = 0x799494u;
    // 0x799494: 0x8ea42f84  lw          $a0, 0x2F84($s5)
    ctx->pc = 0x799494u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 12164)));
label_799498:
    // 0x799498: 0x26c595a0  addiu       $a1, $s6, -0x6A60
    ctx->pc = 0x799498u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 22), 4294940064));
    // 0x79949c: 0xc0b0e24  jal         func_2C3890
    ctx->pc = 0x79949Cu;
    SET_GPR_U32(ctx, 31, 0x7994A4u);
    ctx->pc = 0x7994A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79949Cu;
    // 0x7994a0: 0x2406ffff  addiu       $a2, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C3890u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C3890u, 0x79949Cu, 0x7994A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7994A4u;
label_7994a4:
    // 0x7994a4: 0x8ea42f84  lw          $a0, 0x2F84($s5)
    ctx->pc = 0x7994a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 12164)));
label_7994a8:
    // 0x7994a8: 0x26e594e8  addiu       $a1, $s7, -0x6B18
    ctx->pc = 0x7994a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 23), 4294939880));
    // 0x7994ac: 0xc0b1370  jal         func_2C4DC0
    ctx->pc = 0x7994ACu;
    SET_GPR_U32(ctx, 31, 0x7994B4u);
    ctx->pc = 0x7994B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7994ACu;
    // 0x7994b0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C4DC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C4DC0u, 0x7994ACu, 0x7994B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7994B4u;
label_7994b4:
    // 0x7994b4: 0x7bb000b0  lq          $s0, 0xB0($sp)
    ctx->pc = 0x7994b4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x7994b8: 0x7bb100a0  lq          $s1, 0xA0($sp)
    ctx->pc = 0x7994b8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x7994bc: 0x7bb20090  lq          $s2, 0x90($sp)
    ctx->pc = 0x7994bcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x7994c0: 0x7bb30080  lq          $s3, 0x80($sp)
    ctx->pc = 0x7994c0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x7994c4: 0x7bb40070  lq          $s4, 0x70($sp)
    ctx->pc = 0x7994c4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x7994c8: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x7994c8u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x7994cc: 0x7bb60050  lq          $s6, 0x50($sp)
    ctx->pc = 0x7994ccu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x7994d0: 0x7bb70040  lq          $s7, 0x40($sp)
    ctx->pc = 0x7994d0u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x7994d4: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x7994d4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x7994d8: 0x3e00008  jr          $ra
    ctx->pc = 0x7994D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x7994DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7994D8u;
        // 0x7994dc: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x7994D8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x7994E0u;
}
} // namespace gh_r601
