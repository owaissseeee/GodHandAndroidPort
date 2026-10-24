#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "r500_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_r500
{
// Function: QuoitsEventEnemy__5cR500
// Address: 0x799578 - 0x799878
void QuoitsEventEnemy__5cR500_0x799578(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("QuoitsEventEnemy__5cR500_0x799578");
#endif

    switch (ctx->pc) {
        case 0x7995e8u: goto label_7995e8;
        case 0x799600u: goto label_799600;
        case 0x79960cu: goto label_79960c;
        case 0x799618u: goto label_799618;
        case 0x799624u: goto label_799624;
        case 0x799630u: goto label_799630;
        case 0x79963cu: goto label_79963c;
        case 0x79964cu: goto label_79964c;
        case 0x79965cu: goto label_79965c;
        case 0x799668u: goto label_799668;
        case 0x799678u: goto label_799678;
        case 0x799680u: goto label_799680;
        case 0x799688u: goto label_799688;
        case 0x799690u: goto label_799690;
        case 0x799698u: goto label_799698;
        case 0x7996b4u: goto label_7996b4;
        case 0x7996c8u: goto label_7996c8;
        case 0x7996dcu: goto label_7996dc;
        case 0x7996f0u: goto label_7996f0;
        case 0x79970cu: goto label_79970c;
        case 0x799714u: goto label_799714;
        case 0x79972cu: goto label_79972c;
        case 0x799730u: goto label_799730;
        case 0x799748u: goto label_799748;
        case 0x799758u: goto label_799758;
        case 0x79976cu: goto label_79976c;
        case 0x79977cu: goto label_79977c;
        case 0x7997a4u: goto label_7997a4;
        case 0x7997a8u: goto label_7997a8;
        case 0x7997c0u: goto label_7997c0;
        case 0x7997d0u: goto label_7997d0;
        case 0x7997e0u: goto label_7997e0;
        case 0x799808u: goto label_799808;
        case 0x799838u: goto label_799838;
        case 0x799844u: goto label_799844;
        default: break;
    }

    ctx->pc = 0x799578u;

    // 0x799578: 0x27bdff30  addiu       $sp, $sp, -0xD0
    ctx->pc = 0x799578u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967088));
    // 0x79957c: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x79957cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x799580: 0x7fb000b0  sq          $s0, 0xB0($sp)
    ctx->pc = 0x799580u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 16));
    // 0x799584: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x799584u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x799588: 0x7fb100a0  sq          $s1, 0xA0($sp)
    ctx->pc = 0x799588u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 17));
    // 0x79958c: 0x24040005  addiu       $a0, $zero, 0x5
    ctx->pc = 0x79958cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x799590: 0xe7b400c0  swc1        $f20, 0xC0($sp)
    ctx->pc = 0x799590u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 192), bits); }
    // 0x799594: 0x27b10010  addiu       $s1, $sp, 0x10
    ctx->pc = 0x799594u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x799598: 0x7fb20090  sq          $s2, 0x90($sp)
    ctx->pc = 0x799598u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 18));
    // 0x79959c: 0x27b00020  addiu       $s0, $sp, 0x20
    ctx->pc = 0x79959cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x7995a0: 0x7fb30080  sq          $s3, 0x80($sp)
    ctx->pc = 0x7995a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 19));
    // 0x7995a4: 0x200902d  daddu       $s2, $s0, $zero
    ctx->pc = 0x7995a4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7995a8: 0x7fb40070  sq          $s4, 0x70($sp)
    ctx->pc = 0x7995a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 20));
    // 0x7995ac: 0x220982d  daddu       $s3, $s1, $zero
    ctx->pc = 0x7995acu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7995b0: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x7995b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
    // 0x7995b4: 0x3c14005f  lui         $s4, 0x5F
    ctx->pc = 0x7995b4u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)95 << 16));
    // 0x7995b8: 0x7fb60050  sq          $s6, 0x50($sp)
    ctx->pc = 0x7995b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 22));
    // 0x7995bc: 0x3c15003c  lui         $s5, 0x3C
    ctx->pc = 0x7995bcu;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)60 << 16));
    // 0x7995c0: 0x7fb70040  sq          $s7, 0x40($sp)
    ctx->pc = 0x7995c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 23));
    // 0x7995c4: 0x3c160060  lui         $s6, 0x60
    ctx->pc = 0x7995c4u;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)96 << 16));
    // 0x7995c8: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x7995c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x7995cc: 0x3c178000  lui         $s7, 0x8000
    ctx->pc = 0x7995ccu;
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)32768 << 16));
    // 0x7995d0: 0xa3a20000  sb          $v0, 0x0($sp)
    ctx->pc = 0x7995d0u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x7995d4: 0xa3a30010  sb          $v1, 0x10($sp)
    ctx->pc = 0x7995d4u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 16), (uint8_t)GPR_U32(ctx, 3));
    // 0x7995d8: 0xa3a40020  sb          $a0, 0x20($sp)
    ctx->pc = 0x7995d8u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 32), (uint8_t)GPR_U32(ctx, 4));
    // 0x7995dc: 0x3c014000  lui         $at, 0x4000
    ctx->pc = 0x7995dcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16384 << 16));
    // 0x7995e0: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x7995e0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x7995e4: 0x8e838658  lw          $v1, -0x79A8($s4)
    ctx->pc = 0x7995e4u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5E8658u));
label_7995e8:
    // 0x7995e8: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x7995e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x7995ec: 0x571024  and         $v0, $v0, $s7
    ctx->pc = 0x7995ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 23));
    // 0x7995f0: 0x14400018  bnez        $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x7995F0u;
    {
        const bool branch_taken_0x7995f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x7995F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7995F0u;
        // 0x7995f4: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7995f0) {
            ctx->pc = 0x799654u;
            goto label_799654;
        }
    }
    ctx->pc = 0x7995F8u;
    // 0x7995f8: 0xc0a56e0  jal         func_295B80
    ctx->pc = 0x7995F8u;
    SET_GPR_U32(ctx, 31, 0x799600u);
    ctx->pc = 0x7995FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7995F8u;
    // 0x7995fc: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x295B80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295B80u, 0x7995F8u, 0x799600u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799600u;
label_799600:
    // 0x799600: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x799600u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799604: 0xc0a5704  jal         func_295C10
    ctx->pc = 0x799604u;
    SET_GPR_U32(ctx, 31, 0x79960Cu);
    ctx->pc = 0x799608u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799604u;
    // 0x799608: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295C10u, 0x799604u, 0x79960Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79960Cu;
label_79960c:
    // 0x79960c: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x79960cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x799610: 0xc0a56e0  jal         func_295B80
    ctx->pc = 0x799610u;
    SET_GPR_U32(ctx, 31, 0x799618u);
    ctx->pc = 0x799614u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799610u;
    // 0x799614: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295B80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295B80u, 0x799610u, 0x799618u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799618u;
label_799618:
    // 0x799618: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x799618u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x79961c: 0xc0a5704  jal         func_295C10
    ctx->pc = 0x79961Cu;
    SET_GPR_U32(ctx, 31, 0x799624u);
    ctx->pc = 0x799620u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79961Cu;
    // 0x799620: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295C10u, 0x79961Cu, 0x799624u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799624u;
label_799624:
    // 0x799624: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x799624u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799628: 0xc0a56e0  jal         func_295B80
    ctx->pc = 0x799628u;
    SET_GPR_U32(ctx, 31, 0x799630u);
    ctx->pc = 0x79962Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799628u;
    // 0x79962c: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x295B80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295B80u, 0x799628u, 0x799630u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799630u;
label_799630:
    // 0x799630: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x799630u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799634: 0xc0a5704  jal         func_295C10
    ctx->pc = 0x799634u;
    SET_GPR_U32(ctx, 31, 0x79963Cu);
    ctx->pc = 0x799638u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799634u;
    // 0x799638: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295C10u, 0x799634u, 0x79963Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79963Cu;
label_79963c:
    // 0x79963c: 0x8ea22f84  lw          $v0, 0x2F84($s5)
    ctx->pc = 0x79963cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 12164)));
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
    // 0x79964c: 0x1000ffe6  b           . + 4 + (-0x1A << 2)
    ctx->pc = 0x79964Cu;
    {
        const bool branch_taken_0x79964c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x799650u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79964Cu;
        // 0x799650: 0x8e838658  lw          $v1, -0x79A8($s4) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4294936152)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79964c) {
            ctx->pc = 0x7995E8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_7995e8;
        }
    }
    ctx->pc = 0x799654u;
label_799654:
    // 0x799654: 0xc0a5704  jal         func_295C10
    ctx->pc = 0x799654u;
    SET_GPR_U32(ctx, 31, 0x79965Cu);
    ctx->pc = 0x799658u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799654u;
    // 0x799658: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295C10u, 0x799654u, 0x79965Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79965Cu;
label_79965c:
    // 0x79965c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x79965cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799660: 0xc0a5704  jal         func_295C10
    ctx->pc = 0x799660u;
    SET_GPR_U32(ctx, 31, 0x799668u);
    ctx->pc = 0x799664u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799660u;
    // 0x799664: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295C10u, 0x799660u, 0x799668u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799668u;
label_799668:
    // 0x799668: 0x3c124000  lui         $s2, 0x4000
    ctx->pc = 0x799668u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)16384 << 16));
    // 0x79966c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x79966cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799670: 0xc0a5704  jal         func_295C10
    ctx->pc = 0x799670u;
    SET_GPR_U32(ctx, 31, 0x799678u);
    ctx->pc = 0x799674u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799670u;
    // 0x799674: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295C10u, 0x799670u, 0x799678u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799678u;
label_799678:
    // 0x799678: 0xc0a573a  jal         func_295CE8
    ctx->pc = 0x799678u;
    SET_GPR_U32(ctx, 31, 0x799680u);
    ctx->pc = 0x79967Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799678u;
    // 0x79967c: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295CE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295CE8u, 0x799678u, 0x799680u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799680u;
label_799680:
    // 0x799680: 0xc0a573a  jal         func_295CE8
    ctx->pc = 0x799680u;
    SET_GPR_U32(ctx, 31, 0x799688u);
    ctx->pc = 0x799684u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799680u;
    // 0x799684: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295CE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295CE8u, 0x799680u, 0x799688u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799688u;
label_799688:
    // 0x799688: 0xc0a573a  jal         func_295CE8
    ctx->pc = 0x799688u;
    SET_GPR_U32(ctx, 31, 0x799690u);
    ctx->pc = 0x79968Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799688u;
    // 0x79968c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295CE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295CE8u, 0x799688u, 0x799690u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799690u;
label_799690:
    // 0x799690: 0x8e838658  lw          $v1, -0x79A8($s4)
    ctx->pc = 0x799690u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4294936152)));
    // 0x799694: 0x0  nop
    ctx->pc = 0x799694u;
    // NOP
label_799698:
    // 0x799698: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x799698u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x79969c: 0x521024  and         $v0, $v0, $s2
    ctx->pc = 0x79969cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 18));
    // 0x7996a0: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x7996A0u;
    {
        const bool branch_taken_0x7996a0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x7996A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7996A0u;
        // 0x7996a4: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7996a0) {
            ctx->pc = 0x7996D0u;
            goto label_7996d0;
        }
    }
    ctx->pc = 0x7996A8u;
    // 0x7996a8: 0x26c4ea60  addiu       $a0, $s6, -0x15A0
    ctx->pc = 0x7996a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 22), 4294961760));
    // 0x7996ac: 0xc0b0aa6  jal         func_2C2A98
    ctx->pc = 0x7996ACu;
    SET_GPR_U32(ctx, 31, 0x7996B4u);
    ctx->pc = 0x7996B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7996ACu;
    // 0x7996b0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C2A98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C2A98u, 0x7996ACu, 0x7996B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7996B4u;
label_7996b4:
    // 0x7996b4: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x7996B4u;
    {
        const bool branch_taken_0x7996b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x7996B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7996B4u;
        // 0x7996b8: 0x8ea22f84  lw          $v0, 0x2F84($s5) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 12164)));
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
    // 0x7996c8: 0x1000fff3  b           . + 4 + (-0xD << 2)
    ctx->pc = 0x7996C8u;
    {
        const bool branch_taken_0x7996c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x7996CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7996C8u;
        // 0x7996cc: 0x8e838658  lw          $v1, -0x79A8($s4) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4294936152)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7996c8) {
            ctx->pc = 0x799698u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_799698;
        }
    }
    ctx->pc = 0x7996D0u;
label_7996d0:
    // 0x7996d0: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x7996d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x7996d4: 0xc0b0a7e  jal         func_2C29F8
    ctx->pc = 0x7996D4u;
    SET_GPR_U32(ctx, 31, 0x7996DCu);
    ctx->pc = 0x7996D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7996D4u;
    // 0x7996d8: 0x26c4ea60  addiu       $a0, $s6, -0x15A0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 22), 4294961760));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C29F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C29F8u, 0x7996D4u, 0x7996DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7996DCu;
label_7996dc:
    // 0x7996dc: 0x3c014974  lui         $at, 0x4974
    ctx->pc = 0x7996dcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)18804 << 16));
    // 0x7996e0: 0x342123fe  ori         $at, $at, 0x23FE
    ctx->pc = 0x7996e0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)9214);
    // 0x7996e4: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x7996e4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x7996e8: 0xc0a56ae  jal         func_295AB8
    ctx->pc = 0x7996E8u;
    SET_GPR_U32(ctx, 31, 0x7996F0u);
    ctx->pc = 0x7996ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7996E8u;
    // 0x7996ec: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295AB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295AB8u, 0x7996E8u, 0x7996F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7996F0u;
label_7996f0:
    // 0x7996f0: 0x3c124000  lui         $s2, 0x4000
    ctx->pc = 0x7996f0u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)16384 << 16));
    // 0x7996f4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x7996f4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7996f8: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x7996f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7996fc: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x7996fcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x799700: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x799700u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799704: 0xc0a57e0  jal         func_295F80
    ctx->pc = 0x799704u;
    SET_GPR_U32(ctx, 31, 0x79970Cu);
    ctx->pc = 0x799708u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799704u;
    // 0x799708: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x295F80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295F80u, 0x799704u, 0x79970Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79970Cu;
label_79970c:
    // 0x79970c: 0xc0a56ae  jal         func_295AB8
    ctx->pc = 0x79970Cu;
    SET_GPR_U32(ctx, 31, 0x799714u);
    ctx->pc = 0x799710u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79970Cu;
    // 0x799710: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295AB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295AB8u, 0x79970Cu, 0x799714u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799714u;
label_799714:
    // 0x799714: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x799714u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799718: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x799718u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x79971c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x79971cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799720: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x799720u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x799724: 0xc0a57e0  jal         func_295F80
    ctx->pc = 0x799724u;
    SET_GPR_U32(ctx, 31, 0x79972Cu);
    ctx->pc = 0x799728u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799724u;
    // 0x799728: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295F80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295F80u, 0x799724u, 0x79972Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79972Cu;
label_79972c:
    // 0x79972c: 0x8e838658  lw          $v1, -0x79A8($s4)
    ctx->pc = 0x79972cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4294936152)));
label_799730:
    // 0x799730: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x799730u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x799734: 0x521024  and         $v0, $v0, $s2
    ctx->pc = 0x799734u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 18));
    // 0x799738: 0x1440000e  bnez        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x799738u;
    {
        const bool branch_taken_0x799738 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x799738) {
            ctx->pc = 0x799774u;
            goto label_799774;
        }
    }
    ctx->pc = 0x799740u;
    // 0x799740: 0xc0a572a  jal         func_295CA8
    ctx->pc = 0x799740u;
    SET_GPR_U32(ctx, 31, 0x799748u);
    ctx->pc = 0x799744u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799740u;
    // 0x799744: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295CA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295CA8u, 0x799740u, 0x799748u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799748u;
label_799748:
    // 0x799748: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x799748u;
    {
        const bool branch_taken_0x799748 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x79974Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799748u;
        // 0x79974c: 0x8ea22f84  lw          $v0, 0x2F84($s5) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 12164)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799748) {
            ctx->pc = 0x799760u;
            goto label_799760;
        }
    }
    ctx->pc = 0x799750u;
    // 0x799750: 0xc0a572a  jal         func_295CA8
    ctx->pc = 0x799750u;
    SET_GPR_U32(ctx, 31, 0x799758u);
    ctx->pc = 0x799754u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799750u;
    // 0x799754: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295CA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295CA8u, 0x799750u, 0x799758u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799758u;
label_799758:
    // 0x799758: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x799758u;
    {
        const bool branch_taken_0x799758 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x79975Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799758u;
        // 0x79975c: 0x8ea22f84  lw          $v0, 0x2F84($s5) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 12164)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799758) {
            ctx->pc = 0x799774u;
            goto label_799774;
        }
    }
    ctx->pc = 0x799760u;
label_799760:
    // 0x799760: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x799760u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x799764: 0xc0b56a8  jal         func_2D5AA0
    ctx->pc = 0x799764u;
    SET_GPR_U32(ctx, 31, 0x79976Cu);
    ctx->pc = 0x799768u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799764u;
    // 0x799768: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5AA0u, 0x799764u, 0x79976Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79976Cu;
label_79976c:
    // 0x79976c: 0x1000fff0  b           . + 4 + (-0x10 << 2)
    ctx->pc = 0x79976Cu;
    {
        const bool branch_taken_0x79976c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x799770u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79976Cu;
        // 0x799770: 0x8e838658  lw          $v1, -0x79A8($s4) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4294936152)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79976c) {
            ctx->pc = 0x799730u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_799730;
        }
    }
    ctx->pc = 0x799774u;
label_799774:
    // 0x799774: 0xc0a56ae  jal         func_295AB8
    ctx->pc = 0x799774u;
    SET_GPR_U32(ctx, 31, 0x79977Cu);
    ctx->pc = 0x799778u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799774u;
    // 0x799778: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295AB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295AB8u, 0x799774u, 0x79977Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79977Cu;
label_79977c:
    // 0x79977c: 0x3c134000  lui         $s3, 0x4000
    ctx->pc = 0x79977cu;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)16384 << 16));
    // 0x799780: 0x3c014974  lui         $at, 0x4974
    ctx->pc = 0x799780u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)18804 << 16));
    // 0x799784: 0x342123fe  ori         $at, $at, 0x23FE
    ctx->pc = 0x799784u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)9214);
    // 0x799788: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x799788u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x79978c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x79978cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799790: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x799790u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x799794: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x799794u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x799798: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x799798u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79979c: 0xc0a57e0  jal         func_295F80
    ctx->pc = 0x79979Cu;
    SET_GPR_U32(ctx, 31, 0x7997A4u);
    ctx->pc = 0x7997A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79979Cu;
    // 0x7997a0: 0x3c122000  lui         $s2, 0x2000 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)8192 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295F80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295F80u, 0x79979Cu, 0x7997A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7997A4u;
label_7997a4:
    // 0x7997a4: 0x8e838658  lw          $v1, -0x79A8($s4)
    ctx->pc = 0x7997a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4294936152)));
label_7997a8:
    // 0x7997a8: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x7997a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x7997ac: 0x531024  and         $v0, $v0, $s3
    ctx->pc = 0x7997acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 19));
    // 0x7997b0: 0x14400012  bnez        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x7997B0u;
    {
        const bool branch_taken_0x7997b0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x7997B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7997B0u;
        // 0x7997b4: 0x8ea22f84  lw          $v0, 0x2F84($s5) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 12164)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7997b0) {
            ctx->pc = 0x7997FCu;
            goto label_7997fc;
        }
    }
    ctx->pc = 0x7997B8u;
    // 0x7997b8: 0xc0a572a  jal         func_295CA8
    ctx->pc = 0x7997B8u;
    SET_GPR_U32(ctx, 31, 0x7997C0u);
    ctx->pc = 0x7997BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7997B8u;
    // 0x7997bc: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295CA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295CA8u, 0x7997B8u, 0x7997C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7997C0u;
label_7997c0:
    // 0x7997c0: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x7997C0u;
    {
        const bool branch_taken_0x7997c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x7997C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7997C0u;
        // 0x7997c4: 0x8ea22f84  lw          $v0, 0x2F84($s5) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 12164)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7997c0) {
            ctx->pc = 0x7997FCu;
            goto label_7997fc;
        }
    }
    ctx->pc = 0x7997C8u;
    // 0x7997c8: 0xc0a572a  jal         func_295CA8
    ctx->pc = 0x7997C8u;
    SET_GPR_U32(ctx, 31, 0x7997D0u);
    ctx->pc = 0x7997CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7997C8u;
    // 0x7997cc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295CA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295CA8u, 0x7997C8u, 0x7997D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7997D0u;
label_7997d0:
    // 0x7997d0: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x7997D0u;
    {
        const bool branch_taken_0x7997d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x7997D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7997D0u;
        // 0x7997d4: 0x8ea22f84  lw          $v0, 0x2F84($s5) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 12164)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7997d0) {
            ctx->pc = 0x7997FCu;
            goto label_7997fc;
        }
    }
    ctx->pc = 0x7997D8u;
    // 0x7997d8: 0xc0a572a  jal         func_295CA8
    ctx->pc = 0x7997D8u;
    SET_GPR_U32(ctx, 31, 0x7997E0u);
    ctx->pc = 0x7997DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7997D8u;
    // 0x7997dc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295CA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295CA8u, 0x7997D8u, 0x7997E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7997E0u;
label_7997e0:
    // 0x7997e0: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x7997E0u;
    {
        const bool branch_taken_0x7997e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x7997E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7997E0u;
        // 0x7997e4: 0x8e838658  lw          $v1, -0x79A8($s4) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4294936152)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7997e0) {
            ctx->pc = 0x7997F8u;
            goto label_7997f8;
        }
    }
    ctx->pc = 0x7997E8u;
    // 0x7997e8: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x7997e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x7997ec: 0x521025  or          $v0, $v0, $s2
    ctx->pc = 0x7997ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 18));
    // 0x7997f0: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x7997F0u;
    {
        const bool branch_taken_0x7997f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x7997F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7997F0u;
        // 0x7997f4: 0xac620004  sw          $v0, 0x4($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7997f0) {
            ctx->pc = 0x799810u;
            goto label_799810;
        }
    }
    ctx->pc = 0x7997F8u;
label_7997f8:
    // 0x7997f8: 0x8ea22f84  lw          $v0, 0x2F84($s5)
    ctx->pc = 0x7997f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 12164)));
label_7997fc:
    // 0x7997fc: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x7997fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x799800: 0xc0b56a8  jal         func_2D5AA0
    ctx->pc = 0x799800u;
    SET_GPR_U32(ctx, 31, 0x799808u);
    ctx->pc = 0x799804u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799800u;
    // 0x799804: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5AA0u, 0x799800u, 0x799808u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799808u;
label_799808:
    // 0x799808: 0x1000ffe7  b           . + 4 + (-0x19 << 2)
    ctx->pc = 0x799808u;
    {
        const bool branch_taken_0x799808 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x79980Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799808u;
        // 0x79980c: 0x8e838658  lw          $v1, -0x79A8($s4) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4294936152)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799808) {
            ctx->pc = 0x7997A8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_7997a8;
        }
    }
    ctx->pc = 0x799810u;
label_799810:
    // 0x799810: 0x8e828658  lw          $v0, -0x79A8($s4)
    ctx->pc = 0x799810u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4294936152)));
    // 0x799814: 0x3c042000  lui         $a0, 0x2000
    ctx->pc = 0x799814u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)8192 << 16));
    // 0x799818: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x799818u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x79981c: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x79981cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x799820: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x799820u;
    {
        const bool branch_taken_0x799820 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x799824u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x799820u;
        // 0x799824: 0x3c05007a  lui         $a1, 0x7A (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)122 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x799820) {
            ctx->pc = 0x799838u;
            goto label_799838;
        }
    }
    ctx->pc = 0x799828u;
    // 0x799828: 0x8ea42f84  lw          $a0, 0x2F84($s5)
    ctx->pc = 0x799828u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 12164)));
    // 0x79982c: 0x24a59878  addiu       $a1, $a1, -0x6788
    ctx->pc = 0x79982cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294940792));
    // 0x799830: 0xc0b0e24  jal         func_2C3890
    ctx->pc = 0x799830u;
    SET_GPR_U32(ctx, 31, 0x799838u);
    ctx->pc = 0x799834u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x799830u;
    // 0x799834: 0x2406ffff  addiu       $a2, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C3890u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C3890u, 0x799830u, 0x799838u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799838u;
label_799838:
    // 0x799838: 0x8ea22f84  lw          $v0, 0x2F84($s5)
    ctx->pc = 0x799838u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 12164)));
    // 0x79983c: 0xc0b5692  jal         func_2D5A48
    ctx->pc = 0x79983Cu;
    SET_GPR_U32(ctx, 31, 0x799844u);
    ctx->pc = 0x799840u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79983Cu;
    // 0x799840: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5A48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5A48u, 0x79983Cu, 0x799844u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x799844u;
label_799844:
    // 0x799844: 0x7bb000b0  lq          $s0, 0xB0($sp)
    ctx->pc = 0x799844u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x799848: 0x7bb100a0  lq          $s1, 0xA0($sp)
    ctx->pc = 0x799848u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x79984c: 0x7bb20090  lq          $s2, 0x90($sp)
    ctx->pc = 0x79984cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x799850: 0x7bb30080  lq          $s3, 0x80($sp)
    ctx->pc = 0x799850u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x799854: 0x7bb40070  lq          $s4, 0x70($sp)
    ctx->pc = 0x799854u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x799858: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x799858u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x79985c: 0x7bb60050  lq          $s6, 0x50($sp)
    ctx->pc = 0x79985cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x799860: 0x7bb70040  lq          $s7, 0x40($sp)
    ctx->pc = 0x799860u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x799864: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x799864u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x799868: 0xc7b400c0  lwc1        $f20, 0xC0($sp)
    ctx->pc = 0x799868u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x79986c: 0x3e00008  jr          $ra
    ctx->pc = 0x79986Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x799870u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79986Cu;
        // 0x799870: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79986Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x799874u;
    // 0x799874: 0x0  nop
    ctx->pc = 0x799874u;
    // NOP
    ctx->pc = 0x799878u;
}
} // namespace gh_r500
