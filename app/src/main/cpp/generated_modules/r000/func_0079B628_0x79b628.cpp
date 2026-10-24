#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "r000_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_r000
{
// Function: func_0079B628
// Address: 0x79b628 - 0x79bba8
void func_0079B628_0x79b628(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0079B628_0x79b628");
#endif

    switch (ctx->pc) {
        case 0x79b67cu: goto label_79b67c;
        case 0x79b6a0u: goto label_79b6a0;
        case 0x79b6bcu: goto label_79b6bc;
        case 0x79b6e0u: goto label_79b6e0;
        case 0x79b6f0u: goto label_79b6f0;
        case 0x79b704u: goto label_79b704;
        case 0x79b714u: goto label_79b714;
        case 0x79b720u: goto label_79b720;
        case 0x79b734u: goto label_79b734;
        case 0x79b77cu: goto label_79b77c;
        case 0x79b788u: goto label_79b788;
        case 0x79b79cu: goto label_79b79c;
        case 0x79b7acu: goto label_79b7ac;
        case 0x79b7b8u: goto label_79b7b8;
        case 0x79b7ccu: goto label_79b7cc;
        case 0x79b814u: goto label_79b814;
        case 0x79b820u: goto label_79b820;
        case 0x79b834u: goto label_79b834;
        case 0x79b844u: goto label_79b844;
        case 0x79b850u: goto label_79b850;
        case 0x79b864u: goto label_79b864;
        case 0x79b8acu: goto label_79b8ac;
        case 0x79b8b8u: goto label_79b8b8;
        case 0x79b8ccu: goto label_79b8cc;
        case 0x79b8dcu: goto label_79b8dc;
        case 0x79b8e8u: goto label_79b8e8;
        case 0x79b8fcu: goto label_79b8fc;
        case 0x79b944u: goto label_79b944;
        case 0x79b950u: goto label_79b950;
        case 0x79b964u: goto label_79b964;
        case 0x79b974u: goto label_79b974;
        case 0x79b980u: goto label_79b980;
        case 0x79b994u: goto label_79b994;
        case 0x79b9dcu: goto label_79b9dc;
        case 0x79b9e8u: goto label_79b9e8;
        case 0x79b9fcu: goto label_79b9fc;
        case 0x79ba0cu: goto label_79ba0c;
        case 0x79ba18u: goto label_79ba18;
        case 0x79ba2cu: goto label_79ba2c;
        case 0x79ba74u: goto label_79ba74;
        case 0x79ba80u: goto label_79ba80;
        case 0x79ba94u: goto label_79ba94;
        case 0x79baa4u: goto label_79baa4;
        case 0x79bab0u: goto label_79bab0;
        case 0x79bac4u: goto label_79bac4;
        case 0x79bb00u: goto label_79bb00;
        case 0x79bb18u: goto label_79bb18;
        case 0x79bb28u: goto label_79bb28;
        case 0x79bb34u: goto label_79bb34;
        case 0x79bb54u: goto label_79bb54;
        case 0x79bb68u: goto label_79bb68;
        case 0x79bb74u: goto label_79bb74;
        default: break;
    }

    ctx->pc = 0x79b628u;

    // 0x79b628: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x79b628u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x79b62c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x79b62cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79b630: 0x7fb00090  sq          $s0, 0x90($sp)
    ctx->pc = 0x79b630u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 16));
    // 0x79b634: 0x3c10003c  lui         $s0, 0x3C
    ctx->pc = 0x79b634u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)60 << 16));
    // 0x79b638: 0x7fb10080  sq          $s1, 0x80($sp)
    ctx->pc = 0x79b638u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 17));
    // 0x79b63c: 0x8e042f84  lw          $a0, 0x2F84($s0)
    ctx->pc = 0x79b63cu;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x3C2F84u));
    // 0x79b640: 0x3c110060  lui         $s1, 0x60
    ctx->pc = 0x79b640u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)96 << 16));
    // 0x79b644: 0x7fb20070  sq          $s2, 0x70($sp)
    ctx->pc = 0x79b644u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 18));
    // 0x79b648: 0x7fb30060  sq          $s3, 0x60($sp)
    ctx->pc = 0x79b648u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 19));
    // 0x79b64c: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x79b64cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
    // 0x79b650: 0x7fb50040  sq          $s5, 0x40($sp)
    ctx->pc = 0x79b650u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 21));
    // 0x79b654: 0x200a02d  daddu       $s4, $s0, $zero
    ctx->pc = 0x79b654u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79b658: 0x7fb60030  sq          $s6, 0x30($sp)
    ctx->pc = 0x79b658u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 22));
    // 0x79b65c: 0x280a82d  daddu       $s5, $s4, $zero
    ctx->pc = 0x79b65cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79b660: 0x7fb70020  sq          $s7, 0x20($sp)
    ctx->pc = 0x79b660u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 23));
    // 0x79b664: 0x220b02d  daddu       $s6, $s1, $zero
    ctx->pc = 0x79b664u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79b668: 0x7fbe0010  sq          $fp, 0x10($sp)
    ctx->pc = 0x79b668u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 30));
    // 0x79b66c: 0x3417ffff  ori         $s7, $zero, 0xFFFF
    ctx->pc = 0x79b66cu;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x79b670: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x79b670u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x79b674: 0xc0b0e6c  jal         func_2C39B0
    ctx->pc = 0x79B674u;
    SET_GPR_U32(ctx, 31, 0x79B67Cu);
    ctx->pc = 0x79B678u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79B674u;
    // 0x79b678: 0x3c1e3000  lui         $fp, 0x3000 (Delay Slot)
    SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)12288 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C39B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C39B0u, 0x79B674u, 0x79B67Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79B67Cu;
label_79b67c:
    // 0x79b67c: 0x2407ffff  addiu       $a3, $zero, -0x1
    ctx->pc = 0x79b67cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x79b680: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x79b680u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x79b684: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x79b684u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79b688: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x79b688u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79b68c: 0x24060032  addiu       $a2, $zero, 0x32
    ctx->pc = 0x79b68cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 50));
    // 0x79b690: 0x2624ee00  addiu       $a0, $s1, -0x1200
    ctx->pc = 0x79b690u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 4294962688));
    // 0x79b694: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x79b694u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x79b698: 0xc0b2e28  jal         func_2CB8A0
    ctx->pc = 0x79B698u;
    SET_GPR_U32(ctx, 31, 0x79B6A0u);
    ctx->pc = 0x79B69Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79B698u;
    // 0x79b69c: 0x3c11003c  lui         $s1, 0x3C (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)60 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CB8A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CB8A0u, 0x79B698u, 0x79B6A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79B6A0u;
label_79b6a0:
    // 0x79b6a0: 0x220982d  daddu       $s3, $s1, $zero
    ctx->pc = 0x79b6a0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79b6a4: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x79b6a4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79b6a8: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x79b6a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x79b6ac: 0x8e022f84  lw          $v0, 0x2F84($s0)
    ctx->pc = 0x79b6acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12164)));
    // 0x79b6b0: 0x24100035  addiu       $s0, $zero, 0x35
    ctx->pc = 0x79b6b0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 53));
    // 0x79b6b4: 0xc0b56a8  jal         func_2D5AA0
    ctx->pc = 0x79B6B4u;
    SET_GPR_U32(ctx, 31, 0x79B6BCu);
    ctx->pc = 0x79B6B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79B6B4u;
    // 0x79b6b8: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5AA0u, 0x79B6B4u, 0x79B6BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79B6BCu;
label_79b6bc:
    // 0x79b6bc: 0x8e24d6e8  lw          $a0, -0x2918($s1)
    ctx->pc = 0x79b6bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294956776)));
    // 0x79b6c0: 0x24051022  addiu       $a1, $zero, 0x1022
    ctx->pc = 0x79b6c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4130));
    // 0x79b6c4: 0x3c014380  lui         $at, 0x4380
    ctx->pc = 0x79b6c4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17280 << 16));
    // 0x79b6c8: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x79b6c8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x79b6cc: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x79b6ccu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79b6d0: 0x3c0143be  lui         $at, 0x43BE
    ctx->pc = 0x79b6d0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17342 << 16));
    // 0x79b6d4: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x79b6d4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x79b6d8: 0xc04fc8e  jal         func_13F238
    ctx->pc = 0x79B6D8u;
    SET_GPR_U32(ctx, 31, 0x79B6E0u);
    ctx->pc = 0x79B6DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79B6D8u;
    // 0x79b6dc: 0x24841520  addiu       $a0, $a0, 0x1520 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 5408));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13F238u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13F238u, 0x79B6D8u, 0x79B6E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79B6E0u;
label_79b6e0:
    // 0x79b6e0: 0x3c020074  lui         $v0, 0x74
    ctx->pc = 0x79b6e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)116 << 16));
    // 0x79b6e4: 0x245174a0  addiu       $s1, $v0, 0x74A0
    ctx->pc = 0x79b6e4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 29856));
    // 0x79b6e8: 0xde2201a0  ld          $v0, 0x1A0($s1)
    ctx->pc = 0x79b6e8u;
    SET_GPR_U64(ctx, 2, FAST_READ64(0x747640u));
    // 0x79b6ec: 0x0  nop
    ctx->pc = 0x79b6ecu;
    // NOP
label_79b6f0:
    // 0x79b6f0: 0x5e1024  and         $v0, $v0, $fp
    ctx->pc = 0x79b6f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 30));
    // 0x79b6f4: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x79B6F4u;
    {
        const bool branch_taken_0x79b6f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x79B6F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79B6F4u;
        // 0x79b6f8: 0x26c4ee00  addiu       $a0, $s6, -0x1200 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 22), 4294962688));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79b6f4) {
            ctx->pc = 0x79B720u;
            goto label_79b720;
        }
    }
    ctx->pc = 0x79B6FCu;
    // 0x79b6fc: 0xc0b2ee8  jal         func_2CBBA0
    ctx->pc = 0x79B6FCu;
    SET_GPR_U32(ctx, 31, 0x79B704u);
    ctx->pc = 0x79B700u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79B6FCu;
    // 0x79b700: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CBBA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CBBA0u, 0x79B6FCu, 0x79B704u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79B704u;
label_79b704:
    // 0x79b704: 0x8e62d6e8  lw          $v0, -0x2918($s3)
    ctx->pc = 0x79b704u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294956776)));
    // 0x79b708: 0xac5715bc  sw          $s7, 0x15BC($v0)
    ctx->pc = 0x79b708u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 5564), GPR_U32(ctx, 23));
    // 0x79b70c: 0xc0b0f04  jal         func_2C3C10
    ctx->pc = 0x79B70Cu;
    SET_GPR_U32(ctx, 31, 0x79B714u);
    ctx->pc = 0x79B710u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79B70Cu;
    // 0x79b710: 0x8ea42f84  lw          $a0, 0x2F84($s5) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 12164)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C3C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C3C10u, 0x79B70Cu, 0x79B714u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79B714u;
label_79b714:
    // 0x79b714: 0x8ea22f84  lw          $v0, 0x2F84($s5)
    ctx->pc = 0x79b714u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 12164)));
    // 0x79b718: 0xc0b5692  jal         func_2D5A48
    ctx->pc = 0x79B718u;
    SET_GPR_U32(ctx, 31, 0x79B720u);
    ctx->pc = 0x79B71Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79B718u;
    // 0x79b71c: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5A48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5A48u, 0x79B718u, 0x79B720u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79B720u;
label_79b720:
    // 0x79b720: 0x8e822f84  lw          $v0, 0x2F84($s4)
    ctx->pc = 0x79b720u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 12164)));
    // 0x79b724: 0x2610ffff  addiu       $s0, $s0, -0x1
    ctx->pc = 0x79b724u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x79b728: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x79b728u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x79b72c: 0xc0b56a8  jal         func_2D5AA0
    ctx->pc = 0x79B72Cu;
    SET_GPR_U32(ctx, 31, 0x79B734u);
    ctx->pc = 0x79B730u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79B72Cu;
    // 0x79b730: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5AA0u, 0x79B72Cu, 0x79B734u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79B734u;
label_79b734:
    // 0x79b734: 0x5600ffee  bnel        $s0, $zero, . + 4 + (-0x12 << 2)
    ctx->pc = 0x79B734u;
    {
        const bool branch_taken_0x79b734 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x79b734) {
            ctx->pc = 0x79B738u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x79B734u;
            // 0x79b738: 0xde2201a0  ld          $v0, 0x1A0($s1) (Delay Slot)
            SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 17), 416)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x79B6F0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_79b6f0;
        }
    }
    ctx->pc = 0x79B73Cu;
    // 0x79b73c: 0x8e63d6e8  lw          $v1, -0x2918($s3)
    ctx->pc = 0x79b73cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294956776)));
    // 0x79b740: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x79b740u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x79b744: 0x3c014380  lui         $at, 0x4380
    ctx->pc = 0x79b744u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17280 << 16));
    // 0x79b748: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x79b748u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x79b74c: 0x24051023  addiu       $a1, $zero, 0x1023
    ctx->pc = 0x79b74cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4131));
    // 0x79b750: 0xac6215bc  sw          $v0, 0x15BC($v1)
    ctx->pc = 0x79b750u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 5564), GPR_U32(ctx, 2));
    // 0x79b754: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x79b754u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79b758: 0x3c0143be  lui         $at, 0x43BE
    ctx->pc = 0x79b758u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17342 << 16));
    // 0x79b75c: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x79b75cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x79b760: 0x241000d4  addiu       $s0, $zero, 0xD4
    ctx->pc = 0x79b760u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 212));
    // 0x79b764: 0x8e64d6e8  lw          $a0, -0x2918($s3)
    ctx->pc = 0x79b764u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294956776)));
    // 0x79b768: 0x3c1e3000  lui         $fp, 0x3000
    ctx->pc = 0x79b768u;
    SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)12288 << 16));
    // 0x79b76c: 0x3417ffff  ori         $s7, $zero, 0xFFFF
    ctx->pc = 0x79b76cu;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x79b770: 0x3c11003c  lui         $s1, 0x3C
    ctx->pc = 0x79b770u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)60 << 16));
    // 0x79b774: 0xc04fc8e  jal         func_13F238
    ctx->pc = 0x79B774u;
    SET_GPR_U32(ctx, 31, 0x79B77Cu);
    ctx->pc = 0x79B778u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79B774u;
    // 0x79b778: 0x24841520  addiu       $a0, $a0, 0x1520 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 5408));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13F238u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13F238u, 0x79B774u, 0x79B77Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79B77Cu;
label_79b77c:
    // 0x79b77c: 0x3c020074  lui         $v0, 0x74
    ctx->pc = 0x79b77cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)116 << 16));
    // 0x79b780: 0x245574a0  addiu       $s5, $v0, 0x74A0
    ctx->pc = 0x79b780u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 2), 29856));
    // 0x79b784: 0xdea201a0  ld          $v0, 0x1A0($s5)
    ctx->pc = 0x79b784u;
    SET_GPR_U64(ctx, 2, FAST_READ64(0x747640u));
label_79b788:
    // 0x79b788: 0x5e1024  and         $v0, $v0, $fp
    ctx->pc = 0x79b788u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 30));
    // 0x79b78c: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x79B78Cu;
    {
        const bool branch_taken_0x79b78c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x79B790u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79B78Cu;
        // 0x79b790: 0x26c4ee00  addiu       $a0, $s6, -0x1200 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 22), 4294962688));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79b78c) {
            ctx->pc = 0x79B7B8u;
            goto label_79b7b8;
        }
    }
    ctx->pc = 0x79B794u;
    // 0x79b794: 0xc0b2ee8  jal         func_2CBBA0
    ctx->pc = 0x79B794u;
    SET_GPR_U32(ctx, 31, 0x79B79Cu);
    ctx->pc = 0x79B798u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79B794u;
    // 0x79b798: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CBBA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CBBA0u, 0x79B794u, 0x79B79Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79B79Cu;
label_79b79c:
    // 0x79b79c: 0x8e62d6e8  lw          $v0, -0x2918($s3)
    ctx->pc = 0x79b79cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294956776)));
    // 0x79b7a0: 0xac5715bc  sw          $s7, 0x15BC($v0)
    ctx->pc = 0x79b7a0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 5564), GPR_U32(ctx, 23));
    // 0x79b7a4: 0xc0b0f04  jal         func_2C3C10
    ctx->pc = 0x79B7A4u;
    SET_GPR_U32(ctx, 31, 0x79B7ACu);
    ctx->pc = 0x79B7A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79B7A4u;
    // 0x79b7a8: 0x8e242f84  lw          $a0, 0x2F84($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12164)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C3C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C3C10u, 0x79B7A4u, 0x79B7ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79B7ACu;
label_79b7ac:
    // 0x79b7ac: 0x8e222f84  lw          $v0, 0x2F84($s1)
    ctx->pc = 0x79b7acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12164)));
    // 0x79b7b0: 0xc0b5692  jal         func_2D5A48
    ctx->pc = 0x79B7B0u;
    SET_GPR_U32(ctx, 31, 0x79B7B8u);
    ctx->pc = 0x79B7B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79B7B0u;
    // 0x79b7b4: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5A48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5A48u, 0x79B7B0u, 0x79B7B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79B7B8u;
label_79b7b8:
    // 0x79b7b8: 0x8e822f84  lw          $v0, 0x2F84($s4)
    ctx->pc = 0x79b7b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 12164)));
    // 0x79b7bc: 0x2610ffff  addiu       $s0, $s0, -0x1
    ctx->pc = 0x79b7bcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x79b7c0: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x79b7c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x79b7c4: 0xc0b56a8  jal         func_2D5AA0
    ctx->pc = 0x79B7C4u;
    SET_GPR_U32(ctx, 31, 0x79B7CCu);
    ctx->pc = 0x79B7C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79B7C4u;
    // 0x79b7c8: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5AA0u, 0x79B7C4u, 0x79B7CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79B7CCu;
label_79b7cc:
    // 0x79b7cc: 0x5600ffee  bnel        $s0, $zero, . + 4 + (-0x12 << 2)
    ctx->pc = 0x79B7CCu;
    {
        const bool branch_taken_0x79b7cc = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x79b7cc) {
            ctx->pc = 0x79B7D0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x79B7CCu;
            // 0x79b7d0: 0xdea201a0  ld          $v0, 0x1A0($s5) (Delay Slot)
            SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 21), 416)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x79B788u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_79b788;
        }
    }
    ctx->pc = 0x79B7D4u;
    // 0x79b7d4: 0x8e63d6e8  lw          $v1, -0x2918($s3)
    ctx->pc = 0x79b7d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294956776)));
    // 0x79b7d8: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x79b7d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x79b7dc: 0x3c014380  lui         $at, 0x4380
    ctx->pc = 0x79b7dcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17280 << 16));
    // 0x79b7e0: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x79b7e0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x79b7e4: 0x24051024  addiu       $a1, $zero, 0x1024
    ctx->pc = 0x79b7e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4132));
    // 0x79b7e8: 0xac6215bc  sw          $v0, 0x15BC($v1)
    ctx->pc = 0x79b7e8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 5564), GPR_U32(ctx, 2));
    // 0x79b7ec: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x79b7ecu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79b7f0: 0x3c0143be  lui         $at, 0x43BE
    ctx->pc = 0x79b7f0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17342 << 16));
    // 0x79b7f4: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x79b7f4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x79b7f8: 0x241000f4  addiu       $s0, $zero, 0xF4
    ctx->pc = 0x79b7f8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 244));
    // 0x79b7fc: 0x8e64d6e8  lw          $a0, -0x2918($s3)
    ctx->pc = 0x79b7fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294956776)));
    // 0x79b800: 0x3c1e3000  lui         $fp, 0x3000
    ctx->pc = 0x79b800u;
    SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)12288 << 16));
    // 0x79b804: 0x3417ffff  ori         $s7, $zero, 0xFFFF
    ctx->pc = 0x79b804u;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x79b808: 0x3c11003c  lui         $s1, 0x3C
    ctx->pc = 0x79b808u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)60 << 16));
    // 0x79b80c: 0xc04fc8e  jal         func_13F238
    ctx->pc = 0x79B80Cu;
    SET_GPR_U32(ctx, 31, 0x79B814u);
    ctx->pc = 0x79B810u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79B80Cu;
    // 0x79b810: 0x24841520  addiu       $a0, $a0, 0x1520 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 5408));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13F238u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13F238u, 0x79B80Cu, 0x79B814u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79B814u;
label_79b814:
    // 0x79b814: 0x3c020074  lui         $v0, 0x74
    ctx->pc = 0x79b814u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)116 << 16));
    // 0x79b818: 0x245574a0  addiu       $s5, $v0, 0x74A0
    ctx->pc = 0x79b818u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 2), 29856));
    // 0x79b81c: 0xdea201a0  ld          $v0, 0x1A0($s5)
    ctx->pc = 0x79b81cu;
    SET_GPR_U64(ctx, 2, FAST_READ64(0x747640u));
label_79b820:
    // 0x79b820: 0x5e1024  and         $v0, $v0, $fp
    ctx->pc = 0x79b820u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 30));
    // 0x79b824: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x79B824u;
    {
        const bool branch_taken_0x79b824 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x79B828u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79B824u;
        // 0x79b828: 0x26c4ee00  addiu       $a0, $s6, -0x1200 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 22), 4294962688));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79b824) {
            ctx->pc = 0x79B850u;
            goto label_79b850;
        }
    }
    ctx->pc = 0x79B82Cu;
    // 0x79b82c: 0xc0b2ee8  jal         func_2CBBA0
    ctx->pc = 0x79B82Cu;
    SET_GPR_U32(ctx, 31, 0x79B834u);
    ctx->pc = 0x79B830u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79B82Cu;
    // 0x79b830: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CBBA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CBBA0u, 0x79B82Cu, 0x79B834u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79B834u;
label_79b834:
    // 0x79b834: 0x8e62d6e8  lw          $v0, -0x2918($s3)
    ctx->pc = 0x79b834u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294956776)));
    // 0x79b838: 0xac5715bc  sw          $s7, 0x15BC($v0)
    ctx->pc = 0x79b838u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 5564), GPR_U32(ctx, 23));
    // 0x79b83c: 0xc0b0f04  jal         func_2C3C10
    ctx->pc = 0x79B83Cu;
    SET_GPR_U32(ctx, 31, 0x79B844u);
    ctx->pc = 0x79B840u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79B83Cu;
    // 0x79b840: 0x8e242f84  lw          $a0, 0x2F84($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12164)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C3C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C3C10u, 0x79B83Cu, 0x79B844u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79B844u;
label_79b844:
    // 0x79b844: 0x8e222f84  lw          $v0, 0x2F84($s1)
    ctx->pc = 0x79b844u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12164)));
    // 0x79b848: 0xc0b5692  jal         func_2D5A48
    ctx->pc = 0x79B848u;
    SET_GPR_U32(ctx, 31, 0x79B850u);
    ctx->pc = 0x79B84Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79B848u;
    // 0x79b84c: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5A48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5A48u, 0x79B848u, 0x79B850u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79B850u;
label_79b850:
    // 0x79b850: 0x8e822f84  lw          $v0, 0x2F84($s4)
    ctx->pc = 0x79b850u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 12164)));
    // 0x79b854: 0x2610ffff  addiu       $s0, $s0, -0x1
    ctx->pc = 0x79b854u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x79b858: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x79b858u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x79b85c: 0xc0b56a8  jal         func_2D5AA0
    ctx->pc = 0x79B85Cu;
    SET_GPR_U32(ctx, 31, 0x79B864u);
    ctx->pc = 0x79B860u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79B85Cu;
    // 0x79b860: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5AA0u, 0x79B85Cu, 0x79B864u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79B864u;
label_79b864:
    // 0x79b864: 0x5600ffee  bnel        $s0, $zero, . + 4 + (-0x12 << 2)
    ctx->pc = 0x79B864u;
    {
        const bool branch_taken_0x79b864 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x79b864) {
            ctx->pc = 0x79B868u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x79B864u;
            // 0x79b868: 0xdea201a0  ld          $v0, 0x1A0($s5) (Delay Slot)
            SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 21), 416)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x79B820u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_79b820;
        }
    }
    ctx->pc = 0x79B86Cu;
    // 0x79b86c: 0x8e63d6e8  lw          $v1, -0x2918($s3)
    ctx->pc = 0x79b86cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294956776)));
    // 0x79b870: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x79b870u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x79b874: 0x3c014380  lui         $at, 0x4380
    ctx->pc = 0x79b874u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17280 << 16));
    // 0x79b878: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x79b878u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x79b87c: 0x24051025  addiu       $a1, $zero, 0x1025
    ctx->pc = 0x79b87cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4133));
    // 0x79b880: 0xac6215bc  sw          $v0, 0x15BC($v1)
    ctx->pc = 0x79b880u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 5564), GPR_U32(ctx, 2));
    // 0x79b884: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x79b884u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79b888: 0x3c0143be  lui         $at, 0x43BE
    ctx->pc = 0x79b888u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17342 << 16));
    // 0x79b88c: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x79b88cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x79b890: 0x24100104  addiu       $s0, $zero, 0x104
    ctx->pc = 0x79b890u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 260));
    // 0x79b894: 0x8e64d6e8  lw          $a0, -0x2918($s3)
    ctx->pc = 0x79b894u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294956776)));
    // 0x79b898: 0x3c1e3000  lui         $fp, 0x3000
    ctx->pc = 0x79b898u;
    SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)12288 << 16));
    // 0x79b89c: 0x3417ffff  ori         $s7, $zero, 0xFFFF
    ctx->pc = 0x79b89cu;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x79b8a0: 0x3c11003c  lui         $s1, 0x3C
    ctx->pc = 0x79b8a0u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)60 << 16));
    // 0x79b8a4: 0xc04fc8e  jal         func_13F238
    ctx->pc = 0x79B8A4u;
    SET_GPR_U32(ctx, 31, 0x79B8ACu);
    ctx->pc = 0x79B8A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79B8A4u;
    // 0x79b8a8: 0x24841520  addiu       $a0, $a0, 0x1520 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 5408));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13F238u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13F238u, 0x79B8A4u, 0x79B8ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79B8ACu;
label_79b8ac:
    // 0x79b8ac: 0x3c020074  lui         $v0, 0x74
    ctx->pc = 0x79b8acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)116 << 16));
    // 0x79b8b0: 0x245574a0  addiu       $s5, $v0, 0x74A0
    ctx->pc = 0x79b8b0u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 2), 29856));
    // 0x79b8b4: 0xdea201a0  ld          $v0, 0x1A0($s5)
    ctx->pc = 0x79b8b4u;
    SET_GPR_U64(ctx, 2, FAST_READ64(0x747640u));
label_79b8b8:
    // 0x79b8b8: 0x5e1024  and         $v0, $v0, $fp
    ctx->pc = 0x79b8b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 30));
    // 0x79b8bc: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x79B8BCu;
    {
        const bool branch_taken_0x79b8bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x79B8C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79B8BCu;
        // 0x79b8c0: 0x26c4ee00  addiu       $a0, $s6, -0x1200 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 22), 4294962688));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79b8bc) {
            ctx->pc = 0x79B8E8u;
            goto label_79b8e8;
        }
    }
    ctx->pc = 0x79B8C4u;
    // 0x79b8c4: 0xc0b2ee8  jal         func_2CBBA0
    ctx->pc = 0x79B8C4u;
    SET_GPR_U32(ctx, 31, 0x79B8CCu);
    ctx->pc = 0x79B8C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79B8C4u;
    // 0x79b8c8: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CBBA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CBBA0u, 0x79B8C4u, 0x79B8CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79B8CCu;
label_79b8cc:
    // 0x79b8cc: 0x8e62d6e8  lw          $v0, -0x2918($s3)
    ctx->pc = 0x79b8ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294956776)));
    // 0x79b8d0: 0xac5715bc  sw          $s7, 0x15BC($v0)
    ctx->pc = 0x79b8d0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 5564), GPR_U32(ctx, 23));
    // 0x79b8d4: 0xc0b0f04  jal         func_2C3C10
    ctx->pc = 0x79B8D4u;
    SET_GPR_U32(ctx, 31, 0x79B8DCu);
    ctx->pc = 0x79B8D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79B8D4u;
    // 0x79b8d8: 0x8e242f84  lw          $a0, 0x2F84($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12164)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C3C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C3C10u, 0x79B8D4u, 0x79B8DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79B8DCu;
label_79b8dc:
    // 0x79b8dc: 0x8e222f84  lw          $v0, 0x2F84($s1)
    ctx->pc = 0x79b8dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12164)));
    // 0x79b8e0: 0xc0b5692  jal         func_2D5A48
    ctx->pc = 0x79B8E0u;
    SET_GPR_U32(ctx, 31, 0x79B8E8u);
    ctx->pc = 0x79B8E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79B8E0u;
    // 0x79b8e4: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5A48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5A48u, 0x79B8E0u, 0x79B8E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79B8E8u;
label_79b8e8:
    // 0x79b8e8: 0x8e822f84  lw          $v0, 0x2F84($s4)
    ctx->pc = 0x79b8e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 12164)));
    // 0x79b8ec: 0x2610ffff  addiu       $s0, $s0, -0x1
    ctx->pc = 0x79b8ecu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x79b8f0: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x79b8f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x79b8f4: 0xc0b56a8  jal         func_2D5AA0
    ctx->pc = 0x79B8F4u;
    SET_GPR_U32(ctx, 31, 0x79B8FCu);
    ctx->pc = 0x79B8F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79B8F4u;
    // 0x79b8f8: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5AA0u, 0x79B8F4u, 0x79B8FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79B8FCu;
label_79b8fc:
    // 0x79b8fc: 0x5600ffee  bnel        $s0, $zero, . + 4 + (-0x12 << 2)
    ctx->pc = 0x79B8FCu;
    {
        const bool branch_taken_0x79b8fc = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x79b8fc) {
            ctx->pc = 0x79B900u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x79B8FCu;
            // 0x79b900: 0xdea201a0  ld          $v0, 0x1A0($s5) (Delay Slot)
            SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 21), 416)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x79B8B8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_79b8b8;
        }
    }
    ctx->pc = 0x79B904u;
    // 0x79b904: 0x8e63d6e8  lw          $v1, -0x2918($s3)
    ctx->pc = 0x79b904u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294956776)));
    // 0x79b908: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x79b908u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x79b90c: 0x3c014380  lui         $at, 0x4380
    ctx->pc = 0x79b90cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17280 << 16));
    // 0x79b910: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x79b910u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x79b914: 0x24051026  addiu       $a1, $zero, 0x1026
    ctx->pc = 0x79b914u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4134));
    // 0x79b918: 0xac6215bc  sw          $v0, 0x15BC($v1)
    ctx->pc = 0x79b918u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 5564), GPR_U32(ctx, 2));
    // 0x79b91c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x79b91cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79b920: 0x3c0143be  lui         $at, 0x43BE
    ctx->pc = 0x79b920u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17342 << 16));
    // 0x79b924: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x79b924u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x79b928: 0x241000df  addiu       $s0, $zero, 0xDF
    ctx->pc = 0x79b928u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 223));
    // 0x79b92c: 0x8e64d6e8  lw          $a0, -0x2918($s3)
    ctx->pc = 0x79b92cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294956776)));
    // 0x79b930: 0x3c1e3000  lui         $fp, 0x3000
    ctx->pc = 0x79b930u;
    SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)12288 << 16));
    // 0x79b934: 0x3417ffff  ori         $s7, $zero, 0xFFFF
    ctx->pc = 0x79b934u;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x79b938: 0x3c11003c  lui         $s1, 0x3C
    ctx->pc = 0x79b938u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)60 << 16));
    // 0x79b93c: 0xc04fc8e  jal         func_13F238
    ctx->pc = 0x79B93Cu;
    SET_GPR_U32(ctx, 31, 0x79B944u);
    ctx->pc = 0x79B940u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79B93Cu;
    // 0x79b940: 0x24841520  addiu       $a0, $a0, 0x1520 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 5408));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13F238u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13F238u, 0x79B93Cu, 0x79B944u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79B944u;
label_79b944:
    // 0x79b944: 0x3c020074  lui         $v0, 0x74
    ctx->pc = 0x79b944u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)116 << 16));
    // 0x79b948: 0x245574a0  addiu       $s5, $v0, 0x74A0
    ctx->pc = 0x79b948u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 2), 29856));
    // 0x79b94c: 0xdea201a0  ld          $v0, 0x1A0($s5)
    ctx->pc = 0x79b94cu;
    SET_GPR_U64(ctx, 2, FAST_READ64(0x747640u));
label_79b950:
    // 0x79b950: 0x5e1024  and         $v0, $v0, $fp
    ctx->pc = 0x79b950u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 30));
    // 0x79b954: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x79B954u;
    {
        const bool branch_taken_0x79b954 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x79B958u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79B954u;
        // 0x79b958: 0x26c4ee00  addiu       $a0, $s6, -0x1200 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 22), 4294962688));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79b954) {
            ctx->pc = 0x79B980u;
            goto label_79b980;
        }
    }
    ctx->pc = 0x79B95Cu;
    // 0x79b95c: 0xc0b2ee8  jal         func_2CBBA0
    ctx->pc = 0x79B95Cu;
    SET_GPR_U32(ctx, 31, 0x79B964u);
    ctx->pc = 0x79B960u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79B95Cu;
    // 0x79b960: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CBBA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CBBA0u, 0x79B95Cu, 0x79B964u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79B964u;
label_79b964:
    // 0x79b964: 0x8e62d6e8  lw          $v0, -0x2918($s3)
    ctx->pc = 0x79b964u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294956776)));
    // 0x79b968: 0xac5715bc  sw          $s7, 0x15BC($v0)
    ctx->pc = 0x79b968u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 5564), GPR_U32(ctx, 23));
    // 0x79b96c: 0xc0b0f04  jal         func_2C3C10
    ctx->pc = 0x79B96Cu;
    SET_GPR_U32(ctx, 31, 0x79B974u);
    ctx->pc = 0x79B970u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79B96Cu;
    // 0x79b970: 0x8e242f84  lw          $a0, 0x2F84($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12164)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C3C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C3C10u, 0x79B96Cu, 0x79B974u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79B974u;
label_79b974:
    // 0x79b974: 0x8e222f84  lw          $v0, 0x2F84($s1)
    ctx->pc = 0x79b974u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12164)));
    // 0x79b978: 0xc0b5692  jal         func_2D5A48
    ctx->pc = 0x79B978u;
    SET_GPR_U32(ctx, 31, 0x79B980u);
    ctx->pc = 0x79B97Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79B978u;
    // 0x79b97c: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5A48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5A48u, 0x79B978u, 0x79B980u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79B980u;
label_79b980:
    // 0x79b980: 0x8e822f84  lw          $v0, 0x2F84($s4)
    ctx->pc = 0x79b980u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 12164)));
    // 0x79b984: 0x2610ffff  addiu       $s0, $s0, -0x1
    ctx->pc = 0x79b984u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x79b988: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x79b988u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x79b98c: 0xc0b56a8  jal         func_2D5AA0
    ctx->pc = 0x79B98Cu;
    SET_GPR_U32(ctx, 31, 0x79B994u);
    ctx->pc = 0x79B990u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79B98Cu;
    // 0x79b990: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5AA0u, 0x79B98Cu, 0x79B994u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79B994u;
label_79b994:
    // 0x79b994: 0x5600ffee  bnel        $s0, $zero, . + 4 + (-0x12 << 2)
    ctx->pc = 0x79B994u;
    {
        const bool branch_taken_0x79b994 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x79b994) {
            ctx->pc = 0x79B998u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x79B994u;
            // 0x79b998: 0xdea201a0  ld          $v0, 0x1A0($s5) (Delay Slot)
            SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 21), 416)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x79B950u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_79b950;
        }
    }
    ctx->pc = 0x79B99Cu;
    // 0x79b99c: 0x8e63d6e8  lw          $v1, -0x2918($s3)
    ctx->pc = 0x79b99cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294956776)));
    // 0x79b9a0: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x79b9a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x79b9a4: 0x3c014380  lui         $at, 0x4380
    ctx->pc = 0x79b9a4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17280 << 16));
    // 0x79b9a8: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x79b9a8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x79b9ac: 0x24051027  addiu       $a1, $zero, 0x1027
    ctx->pc = 0x79b9acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4135));
    // 0x79b9b0: 0xac6215bc  sw          $v0, 0x15BC($v1)
    ctx->pc = 0x79b9b0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 5564), GPR_U32(ctx, 2));
    // 0x79b9b4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x79b9b4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79b9b8: 0x3c0143be  lui         $at, 0x43BE
    ctx->pc = 0x79b9b8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17342 << 16));
    // 0x79b9bc: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x79b9bcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x79b9c0: 0x24100146  addiu       $s0, $zero, 0x146
    ctx->pc = 0x79b9c0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 326));
    // 0x79b9c4: 0x8e64d6e8  lw          $a0, -0x2918($s3)
    ctx->pc = 0x79b9c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294956776)));
    // 0x79b9c8: 0x3c1e3000  lui         $fp, 0x3000
    ctx->pc = 0x79b9c8u;
    SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)12288 << 16));
    // 0x79b9cc: 0x3417ffff  ori         $s7, $zero, 0xFFFF
    ctx->pc = 0x79b9ccu;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x79b9d0: 0x3c11003c  lui         $s1, 0x3C
    ctx->pc = 0x79b9d0u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)60 << 16));
    // 0x79b9d4: 0xc04fc8e  jal         func_13F238
    ctx->pc = 0x79B9D4u;
    SET_GPR_U32(ctx, 31, 0x79B9DCu);
    ctx->pc = 0x79B9D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79B9D4u;
    // 0x79b9d8: 0x24841520  addiu       $a0, $a0, 0x1520 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 5408));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13F238u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13F238u, 0x79B9D4u, 0x79B9DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79B9DCu;
label_79b9dc:
    // 0x79b9dc: 0x3c020074  lui         $v0, 0x74
    ctx->pc = 0x79b9dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)116 << 16));
    // 0x79b9e0: 0x245574a0  addiu       $s5, $v0, 0x74A0
    ctx->pc = 0x79b9e0u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 2), 29856));
    // 0x79b9e4: 0xdea201a0  ld          $v0, 0x1A0($s5)
    ctx->pc = 0x79b9e4u;
    SET_GPR_U64(ctx, 2, FAST_READ64(0x747640u));
label_79b9e8:
    // 0x79b9e8: 0x5e1024  and         $v0, $v0, $fp
    ctx->pc = 0x79b9e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 30));
    // 0x79b9ec: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x79B9ECu;
    {
        const bool branch_taken_0x79b9ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x79B9F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79B9ECu;
        // 0x79b9f0: 0x26c4ee00  addiu       $a0, $s6, -0x1200 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 22), 4294962688));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79b9ec) {
            ctx->pc = 0x79BA18u;
            goto label_79ba18;
        }
    }
    ctx->pc = 0x79B9F4u;
    // 0x79b9f4: 0xc0b2ee8  jal         func_2CBBA0
    ctx->pc = 0x79B9F4u;
    SET_GPR_U32(ctx, 31, 0x79B9FCu);
    ctx->pc = 0x79B9F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79B9F4u;
    // 0x79b9f8: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CBBA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CBBA0u, 0x79B9F4u, 0x79B9FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79B9FCu;
label_79b9fc:
    // 0x79b9fc: 0x8e62d6e8  lw          $v0, -0x2918($s3)
    ctx->pc = 0x79b9fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294956776)));
    // 0x79ba00: 0xac5715bc  sw          $s7, 0x15BC($v0)
    ctx->pc = 0x79ba00u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 5564), GPR_U32(ctx, 23));
    // 0x79ba04: 0xc0b0f04  jal         func_2C3C10
    ctx->pc = 0x79BA04u;
    SET_GPR_U32(ctx, 31, 0x79BA0Cu);
    ctx->pc = 0x79BA08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79BA04u;
    // 0x79ba08: 0x8e242f84  lw          $a0, 0x2F84($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12164)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C3C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C3C10u, 0x79BA04u, 0x79BA0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79BA0Cu;
label_79ba0c:
    // 0x79ba0c: 0x8e222f84  lw          $v0, 0x2F84($s1)
    ctx->pc = 0x79ba0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12164)));
    // 0x79ba10: 0xc0b5692  jal         func_2D5A48
    ctx->pc = 0x79BA10u;
    SET_GPR_U32(ctx, 31, 0x79BA18u);
    ctx->pc = 0x79BA14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79BA10u;
    // 0x79ba14: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5A48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5A48u, 0x79BA10u, 0x79BA18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79BA18u;
label_79ba18:
    // 0x79ba18: 0x8e822f84  lw          $v0, 0x2F84($s4)
    ctx->pc = 0x79ba18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 12164)));
    // 0x79ba1c: 0x2610ffff  addiu       $s0, $s0, -0x1
    ctx->pc = 0x79ba1cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x79ba20: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x79ba20u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x79ba24: 0xc0b56a8  jal         func_2D5AA0
    ctx->pc = 0x79BA24u;
    SET_GPR_U32(ctx, 31, 0x79BA2Cu);
    ctx->pc = 0x79BA28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79BA24u;
    // 0x79ba28: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5AA0u, 0x79BA24u, 0x79BA2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79BA2Cu;
label_79ba2c:
    // 0x79ba2c: 0x5600ffee  bnel        $s0, $zero, . + 4 + (-0x12 << 2)
    ctx->pc = 0x79BA2Cu;
    {
        const bool branch_taken_0x79ba2c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x79ba2c) {
            ctx->pc = 0x79BA30u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x79BA2Cu;
            // 0x79ba30: 0xdea201a0  ld          $v0, 0x1A0($s5) (Delay Slot)
            SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 21), 416)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x79B9E8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_79b9e8;
        }
    }
    ctx->pc = 0x79BA34u;
    // 0x79ba34: 0x8e63d6e8  lw          $v1, -0x2918($s3)
    ctx->pc = 0x79ba34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294956776)));
    // 0x79ba38: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x79ba38u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x79ba3c: 0x3c014380  lui         $at, 0x4380
    ctx->pc = 0x79ba3cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17280 << 16));
    // 0x79ba40: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x79ba40u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x79ba44: 0x24051028  addiu       $a1, $zero, 0x1028
    ctx->pc = 0x79ba44u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4136));
    // 0x79ba48: 0xac6215bc  sw          $v0, 0x15BC($v1)
    ctx->pc = 0x79ba48u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 5564), GPR_U32(ctx, 2));
    // 0x79ba4c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x79ba4cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79ba50: 0x3c0143be  lui         $at, 0x43BE
    ctx->pc = 0x79ba50u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17342 << 16));
    // 0x79ba54: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x79ba54u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x79ba58: 0x2410002e  addiu       $s0, $zero, 0x2E
    ctx->pc = 0x79ba58u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 46));
    // 0x79ba5c: 0x8e64d6e8  lw          $a0, -0x2918($s3)
    ctx->pc = 0x79ba5cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294956776)));
    // 0x79ba60: 0x3c1e3000  lui         $fp, 0x3000
    ctx->pc = 0x79ba60u;
    SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)12288 << 16));
    // 0x79ba64: 0x3417ffff  ori         $s7, $zero, 0xFFFF
    ctx->pc = 0x79ba64u;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x79ba68: 0x3c11003c  lui         $s1, 0x3C
    ctx->pc = 0x79ba68u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)60 << 16));
    // 0x79ba6c: 0xc04fc8e  jal         func_13F238
    ctx->pc = 0x79BA6Cu;
    SET_GPR_U32(ctx, 31, 0x79BA74u);
    ctx->pc = 0x79BA70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79BA6Cu;
    // 0x79ba70: 0x24841520  addiu       $a0, $a0, 0x1520 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 5408));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13F238u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13F238u, 0x79BA6Cu, 0x79BA74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79BA74u;
label_79ba74:
    // 0x79ba74: 0x3c020074  lui         $v0, 0x74
    ctx->pc = 0x79ba74u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)116 << 16));
    // 0x79ba78: 0x245574a0  addiu       $s5, $v0, 0x74A0
    ctx->pc = 0x79ba78u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 2), 29856));
    // 0x79ba7c: 0xdea201a0  ld          $v0, 0x1A0($s5)
    ctx->pc = 0x79ba7cu;
    SET_GPR_U64(ctx, 2, FAST_READ64(0x747640u));
label_79ba80:
    // 0x79ba80: 0x5e1024  and         $v0, $v0, $fp
    ctx->pc = 0x79ba80u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 30));
    // 0x79ba84: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x79BA84u;
    {
        const bool branch_taken_0x79ba84 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x79BA88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79BA84u;
        // 0x79ba88: 0x26c4ee00  addiu       $a0, $s6, -0x1200 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 22), 4294962688));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79ba84) {
            ctx->pc = 0x79BAB0u;
            goto label_79bab0;
        }
    }
    ctx->pc = 0x79BA8Cu;
    // 0x79ba8c: 0xc0b2ee8  jal         func_2CBBA0
    ctx->pc = 0x79BA8Cu;
    SET_GPR_U32(ctx, 31, 0x79BA94u);
    ctx->pc = 0x79BA90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79BA8Cu;
    // 0x79ba90: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CBBA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CBBA0u, 0x79BA8Cu, 0x79BA94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79BA94u;
label_79ba94:
    // 0x79ba94: 0x8e62d6e8  lw          $v0, -0x2918($s3)
    ctx->pc = 0x79ba94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294956776)));
    // 0x79ba98: 0xac5715bc  sw          $s7, 0x15BC($v0)
    ctx->pc = 0x79ba98u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 5564), GPR_U32(ctx, 23));
    // 0x79ba9c: 0xc0b0f04  jal         func_2C3C10
    ctx->pc = 0x79BA9Cu;
    SET_GPR_U32(ctx, 31, 0x79BAA4u);
    ctx->pc = 0x79BAA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79BA9Cu;
    // 0x79baa0: 0x8e242f84  lw          $a0, 0x2F84($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12164)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C3C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C3C10u, 0x79BA9Cu, 0x79BAA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79BAA4u;
label_79baa4:
    // 0x79baa4: 0x8e222f84  lw          $v0, 0x2F84($s1)
    ctx->pc = 0x79baa4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12164)));
    // 0x79baa8: 0xc0b5692  jal         func_2D5A48
    ctx->pc = 0x79BAA8u;
    SET_GPR_U32(ctx, 31, 0x79BAB0u);
    ctx->pc = 0x79BAACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79BAA8u;
    // 0x79baac: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5A48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5A48u, 0x79BAA8u, 0x79BAB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79BAB0u;
label_79bab0:
    // 0x79bab0: 0x8e822f84  lw          $v0, 0x2F84($s4)
    ctx->pc = 0x79bab0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 12164)));
    // 0x79bab4: 0x2610ffff  addiu       $s0, $s0, -0x1
    ctx->pc = 0x79bab4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x79bab8: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x79bab8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x79babc: 0xc0b56a8  jal         func_2D5AA0
    ctx->pc = 0x79BABCu;
    SET_GPR_U32(ctx, 31, 0x79BAC4u);
    ctx->pc = 0x79BAC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79BABCu;
    // 0x79bac0: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5AA0u, 0x79BABCu, 0x79BAC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79BAC4u;
label_79bac4:
    // 0x79bac4: 0x5600ffee  bnel        $s0, $zero, . + 4 + (-0x12 << 2)
    ctx->pc = 0x79BAC4u;
    {
        const bool branch_taken_0x79bac4 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x79bac4) {
            ctx->pc = 0x79BAC8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x79BAC4u;
            // 0x79bac8: 0xdea201a0  ld          $v0, 0x1A0($s5) (Delay Slot)
            SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 21), 416)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x79BA80u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_79ba80;
        }
    }
    ctx->pc = 0x79BACCu;
    // 0x79bacc: 0x8e63d6e8  lw          $v1, -0x2918($s3)
    ctx->pc = 0x79baccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294956776)));
    // 0x79bad0: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x79bad0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x79bad4: 0x3c014380  lui         $at, 0x4380
    ctx->pc = 0x79bad4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17280 << 16));
    // 0x79bad8: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x79bad8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x79badc: 0x24051029  addiu       $a1, $zero, 0x1029
    ctx->pc = 0x79badcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4137));
    // 0x79bae0: 0xac6215bc  sw          $v0, 0x15BC($v1)
    ctx->pc = 0x79bae0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 5564), GPR_U32(ctx, 2));
    // 0x79bae4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x79bae4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79bae8: 0x3c0143be  lui         $at, 0x43BE
    ctx->pc = 0x79bae8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17342 << 16));
    // 0x79baec: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x79baecu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x79baf0: 0x3c153000  lui         $s5, 0x3000
    ctx->pc = 0x79baf0u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)12288 << 16));
    // 0x79baf4: 0x8e64d6e8  lw          $a0, -0x2918($s3)
    ctx->pc = 0x79baf4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294956776)));
    // 0x79baf8: 0xc04fc8e  jal         func_13F238
    ctx->pc = 0x79BAF8u;
    SET_GPR_U32(ctx, 31, 0x79BB00u);
    ctx->pc = 0x79BAFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79BAF8u;
    // 0x79bafc: 0x24841520  addiu       $a0, $a0, 0x1520 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 5408));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13F238u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13F238u, 0x79BAF8u, 0x79BB00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79BB00u;
label_79bb00:
    // 0x79bb00: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x79bb00u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
    // 0x79bb04: 0x3c030074  lui         $v1, 0x74
    ctx->pc = 0x79bb04u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)116 << 16));
    // 0x79bb08: 0x2450ee00  addiu       $s0, $v0, -0x1200
    ctx->pc = 0x79bb08u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294962688));
    // 0x79bb0c: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x79BB0Cu;
    {
        const bool branch_taken_0x79bb0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x79BB10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79BB0Cu;
        // 0x79bb10: 0x247174a0  addiu       $s1, $v1, 0x74A0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), 29856));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79bb0c) {
            ctx->pc = 0x79BB28u;
            goto label_79bb28;
        }
    }
    ctx->pc = 0x79BB14u;
    // 0x79bb14: 0x0  nop
    ctx->pc = 0x79bb14u;
    // NOP
label_79bb18:
    // 0x79bb18: 0x8e822f84  lw          $v0, 0x2F84($s4)
    ctx->pc = 0x79bb18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 12164)));
    // 0x79bb1c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x79bb1cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x79bb20: 0xc0b56a8  jal         func_2D5AA0
    ctx->pc = 0x79BB20u;
    SET_GPR_U32(ctx, 31, 0x79BB28u);
    ctx->pc = 0x79BB24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79BB20u;
    // 0x79bb24: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5AA0u, 0x79BB20u, 0x79BB28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79BB28u;
label_79bb28:
    // 0x79bb28: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x79bb28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x79bb2c: 0xc0b2f3c  jal         func_2CBCF0
    ctx->pc = 0x79BB2Cu;
    SET_GPR_U32(ctx, 31, 0x79BB34u);
    ctx->pc = 0x79BB30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79BB2Cu;
    // 0x79bb30: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CBCF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CBCF0u, 0x79BB2Cu, 0x79BB34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79BB34u;
label_79bb34:
    // 0x79bb34: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x79BB34u;
    {
        const bool branch_taken_0x79bb34 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x79BB38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79BB34u;
        // 0x79bb38: 0x8e62d6e8  lw          $v0, -0x2918($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294956776)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79bb34) {
            ctx->pc = 0x79BB58u;
            goto label_79bb58;
        }
    }
    ctx->pc = 0x79BB3Cu;
    // 0x79bb3c: 0xde2201a0  ld          $v0, 0x1A0($s1)
    ctx->pc = 0x79bb3cu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 17), 416)));
    // 0x79bb40: 0x551024  and         $v0, $v0, $s5
    ctx->pc = 0x79bb40u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 21));
    // 0x79bb44: 0x1040fff4  beqz        $v0, . + 4 + (-0xC << 2)
    ctx->pc = 0x79BB44u;
    {
        const bool branch_taken_0x79bb44 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x79BB48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79BB44u;
        // 0x79bb48: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x79bb44) {
            ctx->pc = 0x79BB18u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_79bb18;
        }
    }
    ctx->pc = 0x79BB4Cu;
    // 0x79bb4c: 0xc0b2ee8  jal         func_2CBBA0
    ctx->pc = 0x79BB4Cu;
    SET_GPR_U32(ctx, 31, 0x79BB54u);
    ctx->pc = 0x79BB50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79BB4Cu;
    // 0x79bb50: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CBBA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CBBA0u, 0x79BB4Cu, 0x79BB54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79BB54u;
label_79bb54:
    // 0x79bb54: 0x8e62d6e8  lw          $v0, -0x2918($s3)
    ctx->pc = 0x79bb54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294956776)));
label_79bb58:
    // 0x79bb58: 0x3403ffff  ori         $v1, $zero, 0xFFFF
    ctx->pc = 0x79bb58u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x79bb5c: 0xac4315bc  sw          $v1, 0x15BC($v0)
    ctx->pc = 0x79bb5cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 5564), GPR_U32(ctx, 3));
    // 0x79bb60: 0xc0b0f04  jal         func_2C3C10
    ctx->pc = 0x79BB60u;
    SET_GPR_U32(ctx, 31, 0x79BB68u);
    ctx->pc = 0x79BB64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79BB60u;
    // 0x79bb64: 0x8e842f84  lw          $a0, 0x2F84($s4) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 12164)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C3C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C3C10u, 0x79BB60u, 0x79BB68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79BB68u;
label_79bb68:
    // 0x79bb68: 0x8e822f84  lw          $v0, 0x2F84($s4)
    ctx->pc = 0x79bb68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 12164)));
    // 0x79bb6c: 0xc0b5692  jal         func_2D5A48
    ctx->pc = 0x79BB6Cu;
    SET_GPR_U32(ctx, 31, 0x79BB74u);
    ctx->pc = 0x79BB70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x79BB6Cu;
    // 0x79bb70: 0x8c440020  lw          $a0, 0x20($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D5A48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D5A48u, 0x79BB6Cu, 0x79BB74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x79BB74u;
label_79bb74:
    // 0x79bb74: 0x7bb00090  lq          $s0, 0x90($sp)
    ctx->pc = 0x79bb74u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x79bb78: 0x7bb10080  lq          $s1, 0x80($sp)
    ctx->pc = 0x79bb78u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x79bb7c: 0x7bb20070  lq          $s2, 0x70($sp)
    ctx->pc = 0x79bb7cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x79bb80: 0x7bb30060  lq          $s3, 0x60($sp)
    ctx->pc = 0x79bb80u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x79bb84: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x79bb84u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x79bb88: 0x7bb50040  lq          $s5, 0x40($sp)
    ctx->pc = 0x79bb88u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x79bb8c: 0x7bb60030  lq          $s6, 0x30($sp)
    ctx->pc = 0x79bb8cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x79bb90: 0x7bb70020  lq          $s7, 0x20($sp)
    ctx->pc = 0x79bb90u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x79bb94: 0x7bbe0010  lq          $fp, 0x10($sp)
    ctx->pc = 0x79bb94u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x79bb98: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x79bb98u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x79bb9c: 0x3e00008  jr          $ra
    ctx->pc = 0x79BB9Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x79BBA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x79BB9Cu;
        // 0x79bba0: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x79BB9Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x79BBA4u;
    // 0x79bba4: 0x0  nop
    ctx->pc = 0x79bba4u;
    // NOP
    ctx->pc = 0x79bba8u;
}
} // namespace gh_r000
