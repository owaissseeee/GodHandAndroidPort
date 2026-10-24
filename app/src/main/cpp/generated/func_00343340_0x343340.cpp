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

// Function: func_00343340
// Address: 0x343340 - 0x343a98
void func_00343340_0x343340(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00343340_0x343340");
#endif

    switch (ctx->pc) {
        case 0x3433d8u: goto label_3433d8;
        case 0x3433f0u: goto label_3433f0;
        case 0x343404u: goto label_343404;
        case 0x34340cu: goto label_34340c;
        case 0x343430u: goto label_343430;
        case 0x343444u: goto label_343444;
        case 0x34345cu: goto label_34345c;
        case 0x343474u: goto label_343474;
        case 0x343480u: goto label_343480;
        case 0x3434a0u: goto label_3434a0;
        case 0x3434b8u: goto label_3434b8;
        case 0x3434d0u: goto label_3434d0;
        case 0x3434e0u: goto label_3434e0;
        case 0x3434f0u: goto label_3434f0;
        case 0x343500u: goto label_343500;
        case 0x343510u: goto label_343510;
        case 0x343578u: goto label_343578;
        case 0x3435a4u: goto label_3435a4;
        case 0x3435acu: goto label_3435ac;
        case 0x3435e4u: goto label_3435e4;
        case 0x343680u: goto label_343680;
        case 0x3436e4u: goto label_3436e4;
        case 0x343750u: goto label_343750;
        case 0x3437b4u: goto label_3437b4;
        case 0x343830u: goto label_343830;
        case 0x343894u: goto label_343894;
        case 0x34392cu: goto label_34392c;
        case 0x343998u: goto label_343998;
        case 0x3439acu: goto label_3439ac;
        case 0x3439b4u: goto label_3439b4;
        case 0x3439c0u: goto label_3439c0;
        case 0x3439d4u: goto label_3439d4;
        case 0x3439f0u: goto label_3439f0;
        case 0x343a00u: goto label_343a00;
        case 0x343a18u: goto label_343a18;
        case 0x343a30u: goto label_343a30;
        case 0x343a5cu: goto label_343a5c;
        default: break;
    }

    ctx->pc = 0x343340u;

    // 0x343340: 0x27bdfed0  addiu       $sp, $sp, -0x130
    ctx->pc = 0x343340u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966992));
    // 0x343344: 0x3c020076  lui         $v0, 0x76
    ctx->pc = 0x343344u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)118 << 16));
    // 0x343348: 0xffb000e0  sd          $s0, 0xE0($sp)
    ctx->pc = 0x343348u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 224), GPR_U64(ctx, 16));
    // 0x34334c: 0x3c030076  lui         $v1, 0x76
    ctx->pc = 0x34334cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)118 << 16));
    // 0x343350: 0xffb100e8  sd          $s1, 0xE8($sp)
    ctx->pc = 0x343350u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 232), GPR_U64(ctx, 17));
    // 0x343354: 0x24708a10  addiu       $s0, $v1, -0x75F0
    ctx->pc = 0x343354u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 4294937104));
    // 0x343358: 0xffb200f0  sd          $s2, 0xF0($sp)
    ctx->pc = 0x343358u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 240), GPR_U64(ctx, 18));
    // 0x34335c: 0x3c060076  lui         $a2, 0x76
    ctx->pc = 0x34335cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)118 << 16));
    // 0x343360: 0xffb300f8  sd          $s3, 0xF8($sp)
    ctx->pc = 0x343360u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 248), GPR_U64(ctx, 19));
    // 0x343364: 0x24538a0c  addiu       $s3, $v0, -0x75F4
    ctx->pc = 0x343364u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 4294937100));
    // 0x343368: 0xffb40100  sd          $s4, 0x100($sp)
    ctx->pc = 0x343368u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 256), GPR_U64(ctx, 20));
    // 0x34336c: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x34336cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x343370: 0xffb50108  sd          $s5, 0x108($sp)
    ctx->pc = 0x343370u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 264), GPR_U64(ctx, 21));
    // 0x343374: 0xa0a82d  daddu       $s5, $a1, $zero
    ctx->pc = 0x343374u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x343378: 0xffb70118  sd          $s7, 0x118($sp)
    ctx->pc = 0x343378u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 280), GPR_U64(ctx, 23));
    // 0x34337c: 0x3c050076  lui         $a1, 0x76
    ctx->pc = 0x34337cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)118 << 16));
    // 0x343380: 0xffbe0120  sd          $fp, 0x120($sp)
    ctx->pc = 0x343380u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 288), GPR_U64(ctx, 30));
    // 0x343384: 0x24b18a14  addiu       $s1, $a1, -0x75EC
    ctx->pc = 0x343384u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 5), 4294937108));
    // 0x343388: 0xffb60110  sd          $s6, 0x110($sp)
    ctx->pc = 0x343388u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 272), GPR_U64(ctx, 22));
    // 0x34338c: 0x24d28a18  addiu       $s2, $a2, -0x75E8
    ctx->pc = 0x34338cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 6), 4294937112));
    // 0x343390: 0xffbf0128  sd          $ra, 0x128($sp)
    ctx->pc = 0x343390u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 296), GPR_U64(ctx, 31));
    // 0x343394: 0x240402d  daddu       $t0, $s2, $zero
    ctx->pc = 0x343394u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x343398: 0x3c090076  lui         $t1, 0x76
    ctx->pc = 0x343398u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)118 << 16));
    // 0x34339c: 0x25298a28  addiu       $t1, $t1, -0x75D8
    ctx->pc = 0x34339cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294937128));
    // 0x3433a0: 0x3c0a0076  lui         $t2, 0x76
    ctx->pc = 0x3433a0u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)118 << 16));
    // 0x3433a4: 0x254a8a24  addiu       $t2, $t2, -0x75DC
    ctx->pc = 0x3433a4u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4294937124));
    // 0x3433a8: 0x8ea20010  lw          $v0, 0x10($s5)
    ctx->pc = 0x3433a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 16)));
    // 0x3433ac: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x3433acu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3433b0: 0x8eb60000  lw          $s6, 0x0($s5)
    ctx->pc = 0x3433b0u;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x3433b4: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x3433b4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3433b8: 0xafa200c0  sw          $v0, 0xC0($sp)
    ctx->pc = 0x3433b8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 2));
    // 0x3433bc: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x3433bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3433c0: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x3433c0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3433c4: 0x8ea30008  lw          $v1, 0x8($s5)
    ctx->pc = 0x3433c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 8)));
    // 0x3433c8: 0xafa300c4  sw          $v1, 0xC4($sp)
    ctx->pc = 0x3433c8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 196), GPR_U32(ctx, 3));
    // 0x3433cc: 0x8ea2000c  lw          $v0, 0xC($s5)
    ctx->pc = 0x3433ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 12)));
    // 0x3433d0: 0xc0d0af2  jal         func_342BC8
    ctx->pc = 0x3433D0u;
    SET_GPR_U32(ctx, 31, 0x3433D8u);
    ctx->pc = 0x3433D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3433D0u;
    // 0x3433d4: 0xafa200c8  sw          $v0, 0xC8($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 200), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x342BC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x342BC8u, 0x3433D0u, 0x3433D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3433D8u;
label_3433d8:
    // 0x3433d8: 0x3c050076  lui         $a1, 0x76
    ctx->pc = 0x3433d8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)118 << 16));
    // 0x3433dc: 0x3c060076  lui         $a2, 0x76
    ctx->pc = 0x3433dcu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)118 << 16));
    // 0x3433e0: 0x24a58a1c  addiu       $a1, $a1, -0x75E4
    ctx->pc = 0x3433e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294937116));
    // 0x3433e4: 0x24c68a20  addiu       $a2, $a2, -0x75E0
    ctx->pc = 0x3433e4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294937120));
    // 0x3433e8: 0xc0d0b40  jal         func_342D00
    ctx->pc = 0x3433E8u;
    SET_GPR_U32(ctx, 31, 0x3433F0u);
    ctx->pc = 0x3433ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3433E8u;
    // 0x3433ec: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x342D00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x342D00u, 0x3433E8u, 0x3433F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3433F0u;
label_3433f0:
    // 0x3433f0: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x3433f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3433f4: 0x27a500a0  addiu       $a1, $sp, 0xA0
    ctx->pc = 0x3433f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x3433f8: 0x27a600a4  addiu       $a2, $sp, 0xA4
    ctx->pc = 0x3433f8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 164));
    // 0x3433fc: 0xc0d0b94  jal         func_342E50
    ctx->pc = 0x3433FCu;
    SET_GPR_U32(ctx, 31, 0x343404u);
    ctx->pc = 0x343400u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3433FCu;
    // 0x343400: 0x27a700a8  addiu       $a3, $sp, 0xA8 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 168));
    ctx->in_delay_slot = false;
    ctx->pc = 0x342E50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x342E50u, 0x3433FCu, 0x343404u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x343404u;
label_343404:
    // 0x343404: 0xc0d0ba0  jal         func_342E80
    ctx->pc = 0x343404u;
    SET_GPR_U32(ctx, 31, 0x34340Cu);
    ctx->pc = 0x342E80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x342E80u, 0x343404u, 0x34340Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34340Cu;
label_34340c:
    // 0x34340c: 0xafa200d4  sw          $v0, 0xD4($sp)
    ctx->pc = 0x34340cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 212), GPR_U32(ctx, 2));
    // 0x343410: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x343410u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x343414: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x343414u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x343418: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x343418u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x34341c: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x34341cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x343420: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x343420u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x343424: 0xa32821  addu        $a1, $a1, $v1
    ctx->pc = 0x343424u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x343428: 0xc0d115a  jal         func_344568
    ctx->pc = 0x343428u;
    SET_GPR_U32(ctx, 31, 0x343430u);
    ctx->pc = 0x34342Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x343428u;
    // 0x34342c: 0x24a50040  addiu       $a1, $a1, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x344568u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x344568u, 0x343428u, 0x343430u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x343430u;
label_343430:
    // 0x343430: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x343430u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x343434: 0xafa200bc  sw          $v0, 0xBC($sp)
    ctx->pc = 0x343434u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 188), GPR_U32(ctx, 2));
    // 0x343438: 0x8e650000  lw          $a1, 0x0($s3)
    ctx->pc = 0x343438u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x34343c: 0xc0d115a  jal         func_344568
    ctx->pc = 0x34343Cu;
    SET_GPR_U32(ctx, 31, 0x343444u);
    ctx->pc = 0x343440u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34343Cu;
    // 0x343440: 0x24a50040  addiu       $a1, $a1, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x344568u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x344568u, 0x34343Cu, 0x343444u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x343444u;
label_343444:
    // 0x343444: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x343444u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x343448: 0x27a30050  addiu       $v1, $sp, 0x50
    ctx->pc = 0x343448u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x34344c: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x34344cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x343450: 0x60302d  daddu       $a2, $v1, $zero
    ctx->pc = 0x343450u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x343454: 0xc0d0c32  jal         func_3430C8
    ctx->pc = 0x343454u;
    SET_GPR_U32(ctx, 31, 0x34345Cu);
    ctx->pc = 0x343458u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x343454u;
    // 0x343458: 0x40b82d  daddu       $s7, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3430C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3430C8u, 0x343454u, 0x34345Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34345Cu;
label_34345c:
    // 0x34345c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x34345cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x343460: 0x27a70060  addiu       $a3, $sp, 0x60
    ctx->pc = 0x343460u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x343464: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x343464u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x343468: 0xe0302d  daddu       $a2, $a3, $zero
    ctx->pc = 0x343468u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34346c: 0xc0d0c76  jal         func_3431D8
    ctx->pc = 0x34346Cu;
    SET_GPR_U32(ctx, 31, 0x343474u);
    ctx->pc = 0x343470u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34346Cu;
    // 0x343470: 0x40f02d  daddu       $fp, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3431D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3431D8u, 0x34346Cu, 0x343474u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x343474u;
label_343474:
    // 0x343474: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x343474u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x343478: 0xc0d0ea6  jal         func_343A98
    ctx->pc = 0x343478u;
    SET_GPR_U32(ctx, 31, 0x343480u);
    ctx->pc = 0x34347Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x343478u;
    // 0x34347c: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x343A98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x343A98u, 0x343478u, 0x343480u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x343480u;
label_343480:
    // 0x343480: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x343480u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x343484: 0x5443000e  bnel        $v0, $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x343484u;
    {
        const bool branch_taken_0x343484 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x343484) {
            ctx->pc = 0x343488u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x343484u;
            // 0x343488: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3434C0u;
            goto label_3434c0;
        }
    }
    ctx->pc = 0x34348Cu;
    // 0x34348c: 0x3c080076  lui         $t0, 0x76
    ctx->pc = 0x34348cu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)118 << 16));
    // 0x343490: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x343490u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x343494: 0x25088a28  addiu       $t0, $t0, -0x75D8
    ctx->pc = 0x343494u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294937128));
    // 0x343498: 0xc0d115a  jal         func_344568
    ctx->pc = 0x343498u;
    SET_GPR_U32(ctx, 31, 0x3434A0u);
    ctx->pc = 0x34349Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x343498u;
    // 0x34349c: 0x8d050000  lw          $a1, 0x0($t0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x344568u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x344568u, 0x343498u, 0x3434A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3434A0u;
label_3434a0:
    // 0x3434a0: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x3434a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3434a4: 0x3c090076  lui         $t1, 0x76
    ctx->pc = 0x3434a4u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)118 << 16));
    // 0x3434a8: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x3434a8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3434ac: 0x25298a24  addiu       $t1, $t1, -0x75DC
    ctx->pc = 0x3434acu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294937124));
    // 0x3434b0: 0xc0d115a  jal         func_344568
    ctx->pc = 0x3434B0u;
    SET_GPR_U32(ctx, 31, 0x3434B8u);
    ctx->pc = 0x3434B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3434B0u;
    // 0x3434b4: 0x8d250000  lw          $a1, 0x0($t1) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x344568u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x344568u, 0x3434B0u, 0x3434B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3434B8u;
label_3434b8:
    // 0x3434b8: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x3434B8u;
    {
        const bool branch_taken_0x3434b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3434BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3434B8u;
        // 0x3434bc: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3434b8) {
            ctx->pc = 0x3434C4u;
            goto label_3434c4;
        }
    }
    ctx->pc = 0x3434C0u;
label_3434c0:
    // 0x3434c0: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x3434c0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3434c4:
    // 0x3434c4: 0x24050800  addiu       $a1, $zero, 0x800
    ctx->pc = 0x3434c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
    // 0x3434c8: 0xc0d115a  jal         func_344568
    ctx->pc = 0x3434C8u;
    SET_GPR_U32(ctx, 31, 0x3434D0u);
    ctx->pc = 0x3434CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3434C8u;
    // 0x3434cc: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x344568u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x344568u, 0x3434C8u, 0x3434D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3434D0u;
label_3434d0:
    // 0x3434d0: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x3434d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3434d4: 0x8fa500a0  lw          $a1, 0xA0($sp)
    ctx->pc = 0x3434d4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x3434d8: 0xc0d115a  jal         func_344568
    ctx->pc = 0x3434D8u;
    SET_GPR_U32(ctx, 31, 0x3434E0u);
    ctx->pc = 0x3434DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3434D8u;
    // 0x3434dc: 0xafa200dc  sw          $v0, 0xDC($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 220), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x344568u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x344568u, 0x3434D8u, 0x3434E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3434E0u;
label_3434e0:
    // 0x3434e0: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x3434e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3434e4: 0x8fa500a4  lw          $a1, 0xA4($sp)
    ctx->pc = 0x3434e4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 164)));
    // 0x3434e8: 0xc0d115a  jal         func_344568
    ctx->pc = 0x3434E8u;
    SET_GPR_U32(ctx, 31, 0x3434F0u);
    ctx->pc = 0x3434ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3434E8u;
    // 0x3434ec: 0xafa200cc  sw          $v0, 0xCC($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 204), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x344568u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x344568u, 0x3434E8u, 0x3434F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3434F0u;
label_3434f0:
    // 0x3434f0: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x3434f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3434f4: 0x8fa500a8  lw          $a1, 0xA8($sp)
    ctx->pc = 0x3434f4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x3434f8: 0xc0d115a  jal         func_344568
    ctx->pc = 0x3434F8u;
    SET_GPR_U32(ctx, 31, 0x343500u);
    ctx->pc = 0x3434FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3434F8u;
    // 0x3434fc: 0xafa200d0  sw          $v0, 0xD0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 208), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x344568u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x344568u, 0x3434F8u, 0x343500u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x343500u;
label_343500:
    // 0x343500: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x343500u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x343504: 0x8fa500d4  lw          $a1, 0xD4($sp)
    ctx->pc = 0x343504u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 212)));
    // 0x343508: 0xc0d115a  jal         func_344568
    ctx->pc = 0x343508u;
    SET_GPR_U32(ctx, 31, 0x343510u);
    ctx->pc = 0x34350Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x343508u;
    // 0x34350c: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x344568u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x344568u, 0x343508u, 0x343510u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x343510u;
label_343510:
    // 0x343510: 0x8faa00bc  lw          $t2, 0xBC($sp)
    ctx->pc = 0x343510u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 188)));
    // 0x343514: 0x11400013  beqz        $t2, . + 4 + (0x13 << 2)
    ctx->pc = 0x343514u;
    {
        const bool branch_taken_0x343514 = (GPR_U64(ctx, 10) == GPR_U64(ctx, 0));
        ctx->pc = 0x343518u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x343514u;
        // 0x343518: 0xafa200d8  sw          $v0, 0xD8($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 216), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x343514) {
            ctx->pc = 0x343564u;
            goto label_343564;
        }
    }
    ctx->pc = 0x34351Cu;
    // 0x34351c: 0x12e00012  beqz        $s7, . + 4 + (0x12 << 2)
    ctx->pc = 0x34351Cu;
    {
        const bool branch_taken_0x34351c = (GPR_U64(ctx, 23) == GPR_U64(ctx, 0));
        ctx->pc = 0x343520u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34351Cu;
        // 0x343520: 0x3c040045  lui         $a0, 0x45 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)69 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34351c) {
            ctx->pc = 0x343568u;
            goto label_343568;
        }
    }
    ctx->pc = 0x343524u;
    // 0x343524: 0x17c0001d  bnez        $fp, . + 4 + (0x1D << 2)
    ctx->pc = 0x343524u;
    {
        const bool branch_taken_0x343524 = (GPR_U64(ctx, 30) != GPR_U64(ctx, 0));
        ctx->pc = 0x343528u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x343524u;
        // 0x343528: 0x24847230  addiu       $a0, $a0, 0x7230 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 29232));
        ctx->in_delay_slot = false;
        if (branch_taken_0x343524) {
            ctx->pc = 0x34359Cu;
            goto label_34359c;
        }
    }
    ctx->pc = 0x34352Cu;
    // 0x34352c: 0x5660000e  bnel        $s3, $zero, . + 4 + (0xE << 2)
    ctx->pc = 0x34352Cu;
    {
        const bool branch_taken_0x34352c = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        if (branch_taken_0x34352c) {
            ctx->pc = 0x343530u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x34352Cu;
            // 0x343530: 0x3c040045  lui         $a0, 0x45 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)69 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x343568u;
            goto label_343568;
        }
    }
    ctx->pc = 0x343534u;
    // 0x343534: 0x8fa200cc  lw          $v0, 0xCC($sp)
    ctx->pc = 0x343534u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 204)));
    // 0x343538: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x343538u;
    {
        const bool branch_taken_0x343538 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x34353Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x343538u;
        // 0x34353c: 0x8fa300d0  lw          $v1, 0xD0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x343538) {
            ctx->pc = 0x343564u;
            goto label_343564;
        }
    }
    ctx->pc = 0x343540u;
    // 0x343540: 0x10600009  beqz        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x343540u;
    {
        const bool branch_taken_0x343540 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x343544u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x343540u;
        // 0x343544: 0x3c040045  lui         $a0, 0x45 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)69 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x343540) {
            ctx->pc = 0x343568u;
            goto label_343568;
        }
    }
    ctx->pc = 0x343548u;
    // 0x343548: 0x8fa400dc  lw          $a0, 0xDC($sp)
    ctx->pc = 0x343548u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 220)));
    // 0x34354c: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x34354Cu;
    {
        const bool branch_taken_0x34354c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x343550u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34354Cu;
        // 0x343550: 0x8fa500d8  lw          $a1, 0xD8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34354c) {
            ctx->pc = 0x343564u;
            goto label_343564;
        }
    }
    ctx->pc = 0x343554u;
    // 0x343554: 0x50a00004  beql        $a1, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x343554u;
    {
        const bool branch_taken_0x343554 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x343554) {
            ctx->pc = 0x343558u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x343554u;
            // 0x343558: 0x3c040045  lui         $a0, 0x45 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)69 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x343568u;
            goto label_343568;
        }
    }
    ctx->pc = 0x34355Cu;
    // 0x34355c: 0x16000004  bnez        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x34355Cu;
    {
        const bool branch_taken_0x34355c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x34355c) {
            ctx->pc = 0x343570u;
            goto label_343570;
        }
    }
    ctx->pc = 0x343564u;
label_343564:
    // 0x343564: 0x3c040045  lui         $a0, 0x45
    ctx->pc = 0x343564u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)69 << 16));
label_343568:
    // 0x343568: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x343568u;
    {
        const bool branch_taken_0x343568 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x34356Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x343568u;
        // 0x34356c: 0x24847230  addiu       $a0, $a0, 0x7230 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 29232));
        ctx->in_delay_slot = false;
        if (branch_taken_0x343568) {
            ctx->pc = 0x34359Cu;
            goto label_34359c;
        }
    }
    ctx->pc = 0x343570u;
label_343570:
    // 0x343570: 0xc0d0ea6  jal         func_343A98
    ctx->pc = 0x343570u;
    SET_GPR_U32(ctx, 31, 0x343578u);
    ctx->pc = 0x343574u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x343570u;
    // 0x343574: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x343A98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x343A98u, 0x343570u, 0x343578u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x343578u;
label_343578:
    // 0x343578: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x343578u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x34357c: 0x5443000e  bnel        $v0, $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x34357Cu;
    {
        const bool branch_taken_0x34357c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x34357c) {
            ctx->pc = 0x343580u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x34357Cu;
            // 0x343580: 0x2402ffc0  addiu       $v0, $zero, -0x40 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967232));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3435B8u;
            goto label_3435b8;
        }
    }
    ctx->pc = 0x343584u;
    // 0x343584: 0x12400004  beqz        $s2, . + 4 + (0x4 << 2)
    ctx->pc = 0x343584u;
    {
        const bool branch_taken_0x343584 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x343588u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x343584u;
        // 0x343588: 0x3c040045  lui         $a0, 0x45 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)69 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x343584) {
            ctx->pc = 0x343598u;
            goto label_343598;
        }
    }
    ctx->pc = 0x34358Cu;
    // 0x34358c: 0x1620000a  bnez        $s1, . + 4 + (0xA << 2)
    ctx->pc = 0x34358Cu;
    {
        const bool branch_taken_0x34358c = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x343590u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34358Cu;
        // 0x343590: 0x2402ffc0  addiu       $v0, $zero, -0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967232));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34358c) {
            ctx->pc = 0x3435B8u;
            goto label_3435b8;
        }
    }
    ctx->pc = 0x343594u;
    // 0x343594: 0x3c040045  lui         $a0, 0x45
    ctx->pc = 0x343594u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)69 << 16));
label_343598:
    // 0x343598: 0x24847250  addiu       $a0, $a0, 0x7250
    ctx->pc = 0x343598u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 29264));
label_34359c:
    // 0x34359c: 0xc0d22f8  jal         func_348BE0
    ctx->pc = 0x34359Cu;
    SET_GPR_U32(ctx, 31, 0x3435A4u);
    ctx->pc = 0x348BE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x348BE0u, 0x34359Cu, 0x3435A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3435A4u;
label_3435a4:
    // 0x3435a4: 0xc0d11c4  jal         func_344710
    ctx->pc = 0x3435A4u;
    SET_GPR_U32(ctx, 31, 0x3435ACu);
    ctx->pc = 0x3435A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3435A4u;
    // 0x3435a8: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x344710u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x344710u, 0x3435A4u, 0x3435ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3435ACu;
label_3435ac:
    // 0x3435ac: 0x1000012d  b           . + 4 + (0x12D << 2)
    ctx->pc = 0x3435ACu;
    {
        const bool branch_taken_0x3435ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3435B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3435ACu;
        // 0x3435b0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3435ac) {
            ctx->pc = 0x343A64u;
            goto label_343a64;
        }
    }
    ctx->pc = 0x3435B4u;
    // 0x3435b4: 0x0  nop
    ctx->pc = 0x3435b4u;
    // NOP
label_3435b8:
    // 0x3435b8: 0x26e3003f  addiu       $v1, $s7, 0x3F
    ctx->pc = 0x3435b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 23), 63));
    // 0x3435bc: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x3435bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x3435c0: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x3435c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3435c4: 0x27a500ac  addiu       $a1, $sp, 0xAC
    ctx->pc = 0x3435c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 172));
    // 0x3435c8: 0x27a600b0  addiu       $a2, $sp, 0xB0
    ctx->pc = 0x3435c8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x3435cc: 0x27a700b4  addiu       $a3, $sp, 0xB4
    ctx->pc = 0x3435ccu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 180));
    // 0x3435d0: 0x27a800b8  addiu       $t0, $sp, 0xB8
    ctx->pc = 0x3435d0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 184));
    // 0x3435d4: 0x3c100076  lui         $s0, 0x76
    ctx->pc = 0x3435d4u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)118 << 16));
    // 0x3435d8: 0x3c13003f  lui         $s3, 0x3F
    ctx->pc = 0x3435d8u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)63 << 16));
    // 0x3435dc: 0xc0d0b2c  jal         func_342CB0
    ctx->pc = 0x3435DCu;
    SET_GPR_U32(ctx, 31, 0x3435E4u);
    ctx->pc = 0x3435E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3435DCu;
    // 0x3435e0: 0xae038a08  sw          $v1, -0x75F8($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 4294937096), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x342CB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x342CB0u, 0x3435DCu, 0x3435E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3435E4u;
label_3435e4:
    // 0x3435e4: 0x8fa600b0  lw          $a2, 0xB0($sp)
    ctx->pc = 0x3435e4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x3435e8: 0x3c17003f  lui         $s7, 0x3F
    ctx->pc = 0x3435e8u;
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)63 << 16));
    // 0x3435ec: 0x8fa700ac  lw          $a3, 0xAC($sp)
    ctx->pc = 0x3435ecu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 172)));
    // 0x3435f0: 0x2662c788  addiu       $v0, $s3, -0x3878
    ctx->pc = 0x3435f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 4294952840));
    // 0x3435f4: 0x8fa500b4  lw          $a1, 0xB4($sp)
    ctx->pc = 0x3435f4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 180)));
    // 0x3435f8: 0x26e4c7b0  addiu       $a0, $s7, -0x3850
    ctx->pc = 0x3435f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 23), 4294952880));
    // 0x3435fc: 0x8fa300b8  lw          $v1, 0xB8($sp)
    ctx->pc = 0x3435fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x343600: 0x24080002  addiu       $t0, $zero, 0x2
    ctx->pc = 0x343600u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x343604: 0xac910018  sw          $s1, 0x18($a0)
    ctx->pc = 0x343604u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 17)); ps2TraceGuestWrite(rdram, 0x3EC7C8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3EC7C8u, _value); } while (0);
    // 0x343608: 0xac450000  sw          $a1, 0x0($v0)
    ctx->pc = 0x343608u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 5));
    // 0x34360c: 0xac400020  sw          $zero, 0x20($v0)
    ctx->pc = 0x34360cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 32), GPR_U32(ctx, 0));
    // 0x343610: 0xac430004  sw          $v1, 0x4($v0)
    ctx->pc = 0x343610u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 3));
    // 0x343614: 0xac920008  sw          $s2, 0x8($a0)
    ctx->pc = 0x343614u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 18)); ps2TraceGuestWrite(rdram, 0x3EC7B8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3EC7B8u, _value); } while (0);
    // 0x343618: 0xac470014  sw          $a3, 0x14($v0)
    ctx->pc = 0x343618u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 20), GPR_U32(ctx, 7));
    // 0x34361c: 0xac460018  sw          $a2, 0x18($v0)
    ctx->pc = 0x34361cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 24), GPR_U32(ctx, 6));
    // 0x343620: 0xac470008  sw          $a3, 0x8($v0)
    ctx->pc = 0x343620u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 7));
    // 0x343624: 0xac46000c  sw          $a2, 0xC($v0)
    ctx->pc = 0x343624u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 6));
    // 0x343628: 0xac400010  sw          $zero, 0x10($v0)
    ctx->pc = 0x343628u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 16), GPR_U32(ctx, 0));
    // 0x34362c: 0x8fa600c0  lw          $a2, 0xC0($sp)
    ctx->pc = 0x34362cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x343630: 0x12c80041  beq         $s6, $t0, . + 4 + (0x41 << 2)
    ctx->pc = 0x343630u;
    {
        const bool branch_taken_0x343630 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 8));
        ctx->pc = 0x343634u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x343630u;
        // 0x343634: 0xac46001c  sw          $a2, 0x1C($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 28), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x343630) {
            ctx->pc = 0x343738u;
            goto label_343738;
        }
    }
    ctx->pc = 0x343638u;
    // 0x343638: 0x2ac20003  slti        $v0, $s6, 0x3
    ctx->pc = 0x343638u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 22) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x34363c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x34363Cu;
    {
        const bool branch_taken_0x34363c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x343640u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34363Cu;
        // 0x343640: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34363c) {
            ctx->pc = 0x343658u;
            goto label_343658;
        }
    }
    ctx->pc = 0x343644u;
    // 0x343644: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x343644u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x343648: 0x12c20007  beq         $s6, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x343648u;
    {
        const bool branch_taken_0x343648 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 2));
        ctx->pc = 0x34364Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x343648u;
        // 0x34364c: 0x3c05003f  lui         $a1, 0x3F (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)63 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x343648) {
            ctx->pc = 0x343668u;
            goto label_343668;
        }
    }
    ctx->pc = 0x343650u;
    // 0x343650: 0x100000a9  b           . + 4 + (0xA9 << 2)
    ctx->pc = 0x343650u;
    {
        const bool branch_taken_0x343650 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x343654u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x343650u;
        // 0x343654: 0x3c030076  lui         $v1, 0x76 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)118 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x343650) {
            ctx->pc = 0x3438F8u;
            goto label_3438f8;
        }
    }
    ctx->pc = 0x343658u;
label_343658:
    // 0x343658: 0x12c2006f  beq         $s6, $v0, . + 4 + (0x6F << 2)
    ctx->pc = 0x343658u;
    {
        const bool branch_taken_0x343658 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 2));
        ctx->pc = 0x34365Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x343658u;
        // 0x34365c: 0x3c05003f  lui         $a1, 0x3F (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)63 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x343658) {
            ctx->pc = 0x343818u;
            goto label_343818;
        }
    }
    ctx->pc = 0x343660u;
    // 0x343660: 0x100000a5  b           . + 4 + (0xA5 << 2)
    ctx->pc = 0x343660u;
    {
        const bool branch_taken_0x343660 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x343664u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x343660u;
        // 0x343664: 0x3c030076  lui         $v1, 0x76 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)118 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x343660) {
            ctx->pc = 0x3438F8u;
            goto label_3438f8;
        }
    }
    ctx->pc = 0x343668u;
label_343668:
    // 0x343668: 0x3c03003f  lui         $v1, 0x3F
    ctx->pc = 0x343668u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)63 << 16));
    // 0x34366c: 0x2463c6b0  addiu       $v1, $v1, -0x3950
    ctx->pc = 0x34366cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294952624));
    // 0x343670: 0x30620007  andi        $v0, $v1, 0x7
    ctx->pc = 0x343670u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)7);
    // 0x343674: 0x1040001a  beqz        $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x343674u;
    {
        const bool branch_taken_0x343674 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x343678u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x343674u;
        // 0x343678: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x343674) {
            ctx->pc = 0x3436E0u;
            goto label_3436e0;
        }
    }
    ctx->pc = 0x34367Cu;
    // 0x34367c: 0x24620040  addiu       $v0, $v1, 0x40
    ctx->pc = 0x34367cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 64));
label_343680:
    // 0x343680: 0x68670007  ldl         $a3, 0x7($v1)
    ctx->pc = 0x343680u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
    // 0x343684: 0x6c670000  ldr         $a3, 0x0($v1)
    ctx->pc = 0x343684u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
    // 0x343688: 0x6868000f  ldl         $t0, 0xF($v1)
    ctx->pc = 0x343688u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem << shift)); }
    // 0x34368c: 0x6c680008  ldr         $t0, 0x8($v1)
    ctx->pc = 0x34368cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem >> shift)); }
    // 0x343690: 0x68690017  ldl         $t1, 0x17($v1)
    ctx->pc = 0x343690u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem << shift)); }
    // 0x343694: 0x6c690010  ldr         $t1, 0x10($v1)
    ctx->pc = 0x343694u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem >> shift)); }
    // 0x343698: 0x686a001f  ldl         $t2, 0x1F($v1)
    ctx->pc = 0x343698u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 10, (GPR_U64(ctx, 10) & keepMask) | (mem << shift)); }
    // 0x34369c: 0x6c6a0018  ldr         $t2, 0x18($v1)
    ctx->pc = 0x34369cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 10, (GPR_U64(ctx, 10) & keepMask) | (mem >> shift)); }
    // 0x3436a0: 0xb0870007  sdl         $a3, 0x7($a0)
    ctx->pc = 0x3436a0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x3436a4: 0xb4870000  sdr         $a3, 0x0($a0)
    ctx->pc = 0x3436a4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x3436a8: 0xb088000f  sdl         $t0, 0xF($a0)
    ctx->pc = 0x3436a8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x3436ac: 0xb4880008  sdr         $t0, 0x8($a0)
    ctx->pc = 0x3436acu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x3436b0: 0xb0890017  sdl         $t1, 0x17($a0)
    ctx->pc = 0x3436b0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 9); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x3436b4: 0xb4890010  sdr         $t1, 0x10($a0)
    ctx->pc = 0x3436b4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 9); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x3436b8: 0xb08a001f  sdl         $t2, 0x1F($a0)
    ctx->pc = 0x3436b8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 10); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x3436bc: 0xb48a0018  sdr         $t2, 0x18($a0)
    ctx->pc = 0x3436bcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 10); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x3436c0: 0x24630020  addiu       $v1, $v1, 0x20
    ctx->pc = 0x3436c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
    // 0x3436c4: 0x0  nop
    ctx->pc = 0x3436c4u;
    // NOP
    // 0x3436c8: 0x0  nop
    ctx->pc = 0x3436c8u;
    // NOP
    // 0x3436cc: 0x1462ffec  bne         $v1, $v0, . + 4 + (-0x14 << 2)
    ctx->pc = 0x3436CCu;
    {
        const bool branch_taken_0x3436cc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x3436D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3436CCu;
        // 0x3436d0: 0x24840020  addiu       $a0, $a0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3436cc) {
            ctx->pc = 0x343680u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_343680;
        }
    }
    ctx->pc = 0x3436D4u;
    // 0x3436d4: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x3436D4u;
    {
        const bool branch_taken_0x3436d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3436D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3436D4u;
        // 0x3436d8: 0x8e028a08  lw          $v0, -0x75F8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294937096)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3436d4) {
            ctx->pc = 0x34371Cu;
            goto label_34371c;
        }
    }
    ctx->pc = 0x3436DCu;
    // 0x3436dc: 0x0  nop
    ctx->pc = 0x3436dcu;
    // NOP
label_3436e0:
    // 0x3436e0: 0x24620040  addiu       $v0, $v1, 0x40
    ctx->pc = 0x3436e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 64));
label_3436e4:
    // 0x3436e4: 0xdc650000  ld          $a1, 0x0($v1)
    ctx->pc = 0x3436e4u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x3436e8: 0xdc660008  ld          $a2, 0x8($v1)
    ctx->pc = 0x3436e8u;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x3436ec: 0xdc670010  ld          $a3, 0x10($v1)
    ctx->pc = 0x3436ecu;
    SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x3436f0: 0xdc680018  ld          $t0, 0x18($v1)
    ctx->pc = 0x3436f0u;
    SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 3), 24)));
    // 0x3436f4: 0xfc850000  sd          $a1, 0x0($a0)
    ctx->pc = 0x3436f4u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 0), GPR_U64(ctx, 5));
    // 0x3436f8: 0xfc860008  sd          $a2, 0x8($a0)
    ctx->pc = 0x3436f8u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 8), GPR_U64(ctx, 6));
    // 0x3436fc: 0xfc870010  sd          $a3, 0x10($a0)
    ctx->pc = 0x3436fcu;
    WRITE64(ADD32(GPR_U32(ctx, 4), 16), GPR_U64(ctx, 7));
    // 0x343700: 0xfc880018  sd          $t0, 0x18($a0)
    ctx->pc = 0x343700u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 24), GPR_U64(ctx, 8));
    // 0x343704: 0x24630020  addiu       $v1, $v1, 0x20
    ctx->pc = 0x343704u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
    // 0x343708: 0x0  nop
    ctx->pc = 0x343708u;
    // NOP
    // 0x34370c: 0x0  nop
    ctx->pc = 0x34370cu;
    // NOP
    // 0x343710: 0x1462fff4  bne         $v1, $v0, . + 4 + (-0xC << 2)
    ctx->pc = 0x343710u;
    {
        const bool branch_taken_0x343710 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x343714u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x343710u;
        // 0x343714: 0x24840020  addiu       $a0, $a0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x343710) {
            ctx->pc = 0x3436E4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3436e4;
        }
    }
    ctx->pc = 0x343718u;
    // 0x343718: 0x8e028a08  lw          $v0, -0x75F8($s0)
    ctx->pc = 0x343718u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294937096)));
label_34371c:
    // 0x34371c: 0x3c05003f  lui         $a1, 0x3F
    ctx->pc = 0x34371cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)63 << 16));
    // 0x343720: 0x8c690000  lw          $t1, 0x0($v1)
    ctx->pc = 0x343720u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x343724: 0x3c080076  lui         $t0, 0x76
    ctx->pc = 0x343724u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)118 << 16));
    // 0x343728: 0xac890000  sw          $t1, 0x0($a0)
    ctx->pc = 0x343728u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 9));
    // 0x34372c: 0xae8201c4  sw          $v0, 0x1C4($s4)
    ctx->pc = 0x34372cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 452), GPR_U32(ctx, 2));
    // 0x343730: 0x1000006c  b           . + 4 + (0x6C << 2)
    ctx->pc = 0x343730u;
    {
        const bool branch_taken_0x343730 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x343734u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x343730u;
        // 0x343734: 0x8d038a0c  lw          $v1, -0x75F4($t0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4294937100)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x343730) {
            ctx->pc = 0x3438E4u;
            goto label_3438e4;
        }
    }
    ctx->pc = 0x343738u;
label_343738:
    // 0x343738: 0x3c03003f  lui         $v1, 0x3F
    ctx->pc = 0x343738u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)63 << 16));
    // 0x34373c: 0x2463c6f8  addiu       $v1, $v1, -0x3908
    ctx->pc = 0x34373cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294952696));
    // 0x343740: 0x30620007  andi        $v0, $v1, 0x7
    ctx->pc = 0x343740u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)7);
    // 0x343744: 0x1040001a  beqz        $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x343744u;
    {
        const bool branch_taken_0x343744 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x343748u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x343744u;
        // 0x343748: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x343744) {
            ctx->pc = 0x3437B0u;
            goto label_3437b0;
        }
    }
    ctx->pc = 0x34374Cu;
    // 0x34374c: 0x24620040  addiu       $v0, $v1, 0x40
    ctx->pc = 0x34374cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 64));
label_343750:
    // 0x343750: 0x68690007  ldl         $t1, 0x7($v1)
    ctx->pc = 0x343750u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem << shift)); }
    // 0x343754: 0x6c690000  ldr         $t1, 0x0($v1)
    ctx->pc = 0x343754u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem >> shift)); }
    // 0x343758: 0x686a000f  ldl         $t2, 0xF($v1)
    ctx->pc = 0x343758u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 10, (GPR_U64(ctx, 10) & keepMask) | (mem << shift)); }
    // 0x34375c: 0x6c6a0008  ldr         $t2, 0x8($v1)
    ctx->pc = 0x34375cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 10, (GPR_U64(ctx, 10) & keepMask) | (mem >> shift)); }
    // 0x343760: 0x68640017  ldl         $a0, 0x17($v1)
    ctx->pc = 0x343760u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
    // 0x343764: 0x6c640010  ldr         $a0, 0x10($v1)
    ctx->pc = 0x343764u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
    // 0x343768: 0x6866001f  ldl         $a2, 0x1F($v1)
    ctx->pc = 0x343768u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
    // 0x34376c: 0x6c660018  ldr         $a2, 0x18($v1)
    ctx->pc = 0x34376cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
    // 0x343770: 0xb0a90007  sdl         $t1, 0x7($a1)
    ctx->pc = 0x343770u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 9); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x343774: 0xb4a90000  sdr         $t1, 0x0($a1)
    ctx->pc = 0x343774u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 9); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x343778: 0xb0aa000f  sdl         $t2, 0xF($a1)
    ctx->pc = 0x343778u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 10); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x34377c: 0xb4aa0008  sdr         $t2, 0x8($a1)
    ctx->pc = 0x34377cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 10); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x343780: 0xb0a40017  sdl         $a0, 0x17($a1)
    ctx->pc = 0x343780u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x343784: 0xb4a40010  sdr         $a0, 0x10($a1)
    ctx->pc = 0x343784u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x343788: 0xb0a6001f  sdl         $a2, 0x1F($a1)
    ctx->pc = 0x343788u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x34378c: 0xb4a60018  sdr         $a2, 0x18($a1)
    ctx->pc = 0x34378cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x343790: 0x24630020  addiu       $v1, $v1, 0x20
    ctx->pc = 0x343790u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
    // 0x343794: 0x0  nop
    ctx->pc = 0x343794u;
    // NOP
    // 0x343798: 0x0  nop
    ctx->pc = 0x343798u;
    // NOP
    // 0x34379c: 0x1462ffec  bne         $v1, $v0, . + 4 + (-0x14 << 2)
    ctx->pc = 0x34379Cu;
    {
        const bool branch_taken_0x34379c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x3437A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34379Cu;
        // 0x3437a0: 0x24a50020  addiu       $a1, $a1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34379c) {
            ctx->pc = 0x343750u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_343750;
        }
    }
    ctx->pc = 0x3437A4u;
    // 0x3437a4: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x3437A4u;
    {
        const bool branch_taken_0x3437a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3437A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3437A4u;
        // 0x3437a8: 0x8e028a08  lw          $v0, -0x75F8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294937096)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3437a4) {
            ctx->pc = 0x3437ECu;
            goto label_3437ec;
        }
    }
    ctx->pc = 0x3437ACu;
    // 0x3437ac: 0x0  nop
    ctx->pc = 0x3437acu;
    // NOP
label_3437b0:
    // 0x3437b0: 0x24620040  addiu       $v0, $v1, 0x40
    ctx->pc = 0x3437b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 64));
label_3437b4:
    // 0x3437b4: 0xdc670000  ld          $a3, 0x0($v1)
    ctx->pc = 0x3437b4u;
    SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x3437b8: 0xdc680008  ld          $t0, 0x8($v1)
    ctx->pc = 0x3437b8u;
    SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x3437bc: 0xdc690010  ld          $t1, 0x10($v1)
    ctx->pc = 0x3437bcu;
    SET_GPR_U64(ctx, 9, READ64(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x3437c0: 0xdc6a0018  ld          $t2, 0x18($v1)
    ctx->pc = 0x3437c0u;
    SET_GPR_U64(ctx, 10, READ64(ADD32(GPR_U32(ctx, 3), 24)));
    // 0x3437c4: 0xfca70000  sd          $a3, 0x0($a1)
    ctx->pc = 0x3437c4u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 0), GPR_U64(ctx, 7));
    // 0x3437c8: 0xfca80008  sd          $t0, 0x8($a1)
    ctx->pc = 0x3437c8u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 8), GPR_U64(ctx, 8));
    // 0x3437cc: 0xfca90010  sd          $t1, 0x10($a1)
    ctx->pc = 0x3437ccu;
    WRITE64(ADD32(GPR_U32(ctx, 5), 16), GPR_U64(ctx, 9));
    // 0x3437d0: 0xfcaa0018  sd          $t2, 0x18($a1)
    ctx->pc = 0x3437d0u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 24), GPR_U64(ctx, 10));
    // 0x3437d4: 0x24630020  addiu       $v1, $v1, 0x20
    ctx->pc = 0x3437d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
    // 0x3437d8: 0x0  nop
    ctx->pc = 0x3437d8u;
    // NOP
    // 0x3437dc: 0x0  nop
    ctx->pc = 0x3437dcu;
    // NOP
    // 0x3437e0: 0x1462fff4  bne         $v1, $v0, . + 4 + (-0xC << 2)
    ctx->pc = 0x3437E0u;
    {
        const bool branch_taken_0x3437e0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x3437E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3437E0u;
        // 0x3437e4: 0x24a50020  addiu       $a1, $a1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3437e0) {
            ctx->pc = 0x3437B4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3437b4;
        }
    }
    ctx->pc = 0x3437E8u;
    // 0x3437e8: 0x8e028a08  lw          $v0, -0x75F8($s0)
    ctx->pc = 0x3437e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294937096)));
label_3437ec:
    // 0x3437ec: 0x3c0a0076  lui         $t2, 0x76
    ctx->pc = 0x3437ecu;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)118 << 16));
    // 0x3437f0: 0x8c660000  lw          $a2, 0x0($v1)
    ctx->pc = 0x3437f0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x3437f4: 0x24040800  addiu       $a0, $zero, 0x800
    ctx->pc = 0x3437f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
    // 0x3437f8: 0xaca60000  sw          $a2, 0x0($a1)
    ctx->pc = 0x3437f8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 6));
    // 0x3437fc: 0x3c05003f  lui         $a1, 0x3F
    ctx->pc = 0x3437fcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)63 << 16));
    // 0x343800: 0xae8201c4  sw          $v0, 0x1C4($s4)
    ctx->pc = 0x343800u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 452), GPR_U32(ctx, 2));
    // 0x343804: 0x8d438a0c  lw          $v1, -0x75F4($t2)
    ctx->pc = 0x343804u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x758A0Cu));
    // 0x343808: 0xae8401cc  sw          $a0, 0x1CC($s4)
    ctx->pc = 0x343808u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 460), GPR_U32(ctx, 4));
    // 0x34380c: 0x10000038  b           . + 4 + (0x38 << 2)
    ctx->pc = 0x34380Cu;
    {
        const bool branch_taken_0x34380c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x343810u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34380Cu;
        // 0x343810: 0x2463f800  addiu       $v1, $v1, -0x800 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294965248));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34380c) {
            ctx->pc = 0x3438F0u;
            goto label_3438f0;
        }
    }
    ctx->pc = 0x343814u;
    // 0x343814: 0x0  nop
    ctx->pc = 0x343814u;
    // NOP
label_343818:
    // 0x343818: 0x3c03003f  lui         $v1, 0x3F
    ctx->pc = 0x343818u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)63 << 16));
    // 0x34381c: 0x2463c740  addiu       $v1, $v1, -0x38C0
    ctx->pc = 0x34381cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294952768));
    // 0x343820: 0x30620007  andi        $v0, $v1, 0x7
    ctx->pc = 0x343820u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)7);
    // 0x343824: 0x1040001a  beqz        $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x343824u;
    {
        const bool branch_taken_0x343824 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x343828u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x343824u;
        // 0x343828: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x343824) {
            ctx->pc = 0x343890u;
            goto label_343890;
        }
    }
    ctx->pc = 0x34382Cu;
    // 0x34382c: 0x24620040  addiu       $v0, $v1, 0x40
    ctx->pc = 0x34382cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 64));
label_343830:
    // 0x343830: 0x68650007  ldl         $a1, 0x7($v1)
    ctx->pc = 0x343830u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
    // 0x343834: 0x6c650000  ldr         $a1, 0x0($v1)
    ctx->pc = 0x343834u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
    // 0x343838: 0x6866000f  ldl         $a2, 0xF($v1)
    ctx->pc = 0x343838u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
    // 0x34383c: 0x6c660008  ldr         $a2, 0x8($v1)
    ctx->pc = 0x34383cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
    // 0x343840: 0x68670017  ldl         $a3, 0x17($v1)
    ctx->pc = 0x343840u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
    // 0x343844: 0x6c670010  ldr         $a3, 0x10($v1)
    ctx->pc = 0x343844u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
    // 0x343848: 0x6868001f  ldl         $t0, 0x1F($v1)
    ctx->pc = 0x343848u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem << shift)); }
    // 0x34384c: 0x6c680018  ldr         $t0, 0x18($v1)
    ctx->pc = 0x34384cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem >> shift)); }
    // 0x343850: 0xb0850007  sdl         $a1, 0x7($a0)
    ctx->pc = 0x343850u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x343854: 0xb4850000  sdr         $a1, 0x0($a0)
    ctx->pc = 0x343854u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x343858: 0xb086000f  sdl         $a2, 0xF($a0)
    ctx->pc = 0x343858u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x34385c: 0xb4860008  sdr         $a2, 0x8($a0)
    ctx->pc = 0x34385cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x343860: 0xb0870017  sdl         $a3, 0x17($a0)
    ctx->pc = 0x343860u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x343864: 0xb4870010  sdr         $a3, 0x10($a0)
    ctx->pc = 0x343864u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x343868: 0xb088001f  sdl         $t0, 0x1F($a0)
    ctx->pc = 0x343868u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x34386c: 0xb4880018  sdr         $t0, 0x18($a0)
    ctx->pc = 0x34386cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x343870: 0x24630020  addiu       $v1, $v1, 0x20
    ctx->pc = 0x343870u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
    // 0x343874: 0x0  nop
    ctx->pc = 0x343874u;
    // NOP
    // 0x343878: 0x0  nop
    ctx->pc = 0x343878u;
    // NOP
    // 0x34387c: 0x1462ffec  bne         $v1, $v0, . + 4 + (-0x14 << 2)
    ctx->pc = 0x34387Cu;
    {
        const bool branch_taken_0x34387c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x343880u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34387Cu;
        // 0x343880: 0x24840020  addiu       $a0, $a0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34387c) {
            ctx->pc = 0x343830u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_343830;
        }
    }
    ctx->pc = 0x343884u;
    // 0x343884: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x343884u;
    {
        const bool branch_taken_0x343884 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x343888u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x343884u;
        // 0x343888: 0x8e028a08  lw          $v0, -0x75F8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294937096)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x343884) {
            ctx->pc = 0x3438CCu;
            goto label_3438cc;
        }
    }
    ctx->pc = 0x34388Cu;
    // 0x34388c: 0x0  nop
    ctx->pc = 0x34388cu;
    // NOP
label_343890:
    // 0x343890: 0x24620040  addiu       $v0, $v1, 0x40
    ctx->pc = 0x343890u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 64));
label_343894:
    // 0x343894: 0xdc690000  ld          $t1, 0x0($v1)
    ctx->pc = 0x343894u;
    SET_GPR_U64(ctx, 9, READ64(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x343898: 0xdc6a0008  ld          $t2, 0x8($v1)
    ctx->pc = 0x343898u;
    SET_GPR_U64(ctx, 10, READ64(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x34389c: 0xdc650010  ld          $a1, 0x10($v1)
    ctx->pc = 0x34389cu;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x3438a0: 0xdc660018  ld          $a2, 0x18($v1)
    ctx->pc = 0x3438a0u;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 3), 24)));
    // 0x3438a4: 0xfc890000  sd          $t1, 0x0($a0)
    ctx->pc = 0x3438a4u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 0), GPR_U64(ctx, 9));
    // 0x3438a8: 0xfc8a0008  sd          $t2, 0x8($a0)
    ctx->pc = 0x3438a8u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 8), GPR_U64(ctx, 10));
    // 0x3438ac: 0xfc850010  sd          $a1, 0x10($a0)
    ctx->pc = 0x3438acu;
    WRITE64(ADD32(GPR_U32(ctx, 4), 16), GPR_U64(ctx, 5));
    // 0x3438b0: 0xfc860018  sd          $a2, 0x18($a0)
    ctx->pc = 0x3438b0u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 24), GPR_U64(ctx, 6));
    // 0x3438b4: 0x24630020  addiu       $v1, $v1, 0x20
    ctx->pc = 0x3438b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
    // 0x3438b8: 0x0  nop
    ctx->pc = 0x3438b8u;
    // NOP
    // 0x3438bc: 0x0  nop
    ctx->pc = 0x3438bcu;
    // NOP
    // 0x3438c0: 0x1462fff4  bne         $v1, $v0, . + 4 + (-0xC << 2)
    ctx->pc = 0x3438C0u;
    {
        const bool branch_taken_0x3438c0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x3438C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3438C0u;
        // 0x3438c4: 0x24840020  addiu       $a0, $a0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3438c0) {
            ctx->pc = 0x343894u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_343894;
        }
    }
    ctx->pc = 0x3438C8u;
    // 0x3438c8: 0x8e028a08  lw          $v0, -0x75F8($s0)
    ctx->pc = 0x3438c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294937096)));
label_3438cc:
    // 0x3438cc: 0x3c05003f  lui         $a1, 0x3F
    ctx->pc = 0x3438ccu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)63 << 16));
    // 0x3438d0: 0x8c670000  lw          $a3, 0x0($v1)
    ctx->pc = 0x3438d0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x3438d4: 0xac870000  sw          $a3, 0x0($a0)
    ctx->pc = 0x3438d4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 7));
    // 0x3438d8: 0xae8201c4  sw          $v0, 0x1C4($s4)
    ctx->pc = 0x3438d8u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 452), GPR_U32(ctx, 2));
    // 0x3438dc: 0x3c020076  lui         $v0, 0x76
    ctx->pc = 0x3438dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)118 << 16));
    // 0x3438e0: 0x8c438a0c  lw          $v1, -0x75F4($v0)
    ctx->pc = 0x3438e0u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x758A0Cu));
label_3438e4:
    // 0x3438e4: 0x8ca2c7cc  lw          $v0, -0x3834($a1)
    ctx->pc = 0x3438e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4294952908)));
    // 0x3438e8: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x3438e8u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x3438ec: 0xae8201cc  sw          $v0, 0x1CC($s4)
    ctx->pc = 0x3438ecu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 460), GPR_U32(ctx, 2));
label_3438f0:
    // 0x3438f0: 0xae8301c8  sw          $v1, 0x1C8($s4)
    ctx->pc = 0x3438f0u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 456), GPR_U32(ctx, 3));
    // 0x3438f4: 0x3c030076  lui         $v1, 0x76
    ctx->pc = 0x3438f4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)118 << 16));
label_3438f8:
    // 0x3438f8: 0x24708a10  addiu       $s0, $v1, -0x75F0
    ctx->pc = 0x3438f8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 4294937104));
    // 0x3438fc: 0x8ca3c7cc  lw          $v1, -0x3834($a1)
    ctx->pc = 0x3438fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4294952908)));
    // 0x343900: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x343900u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x343904: 0x10800007  beqz        $a0, . + 4 + (0x7 << 2)
    ctx->pc = 0x343904u;
    {
        const bool branch_taken_0x343904 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x343908u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x343904u;
        // 0x343908: 0xafa30028  sw          $v1, 0x28($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x343904) {
            ctx->pc = 0x343924u;
            goto label_343924;
        }
    }
    ctx->pc = 0x34390Cu;
    // 0x34390c: 0x83001a  div         $zero, $a0, $v1
    ctx->pc = 0x34390cu;
    { int32_t divisor = GPR_S32(ctx, 3);    int32_t dividend = GPR_S32(ctx, 4);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x343910: 0x50600001  beql        $v1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x343910u;
    {
        const bool branch_taken_0x343910 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x343910) {
            ctx->pc = 0x343914u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x343910u;
            // 0x343914: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x343918u;
            goto label_343918;
        }
    }
    ctx->pc = 0x343918u;
label_343918:
    // 0x343918: 0x1010  mfhi        $v0
    ctx->pc = 0x343918u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x34391c: 0x821023  subu        $v0, $a0, $v0
    ctx->pc = 0x34391cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x343920: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x343920u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_343924:
    // 0x343924: 0xc0d0b80  jal         func_342E00
    ctx->pc = 0x343924u;
    SET_GPR_U32(ctx, 31, 0x34392Cu);
    ctx->pc = 0x343928u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x343924u;
    // 0x343928: 0x8ea40024  lw          $a0, 0x24($s5) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 36)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x342E00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x342E00u, 0x343924u, 0x34392Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34392Cu;
label_34392c:
    // 0x34392c: 0x8e070000  lw          $a3, 0x0($s0)
    ctx->pc = 0x34392cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x343930: 0x27a60050  addiu       $a2, $sp, 0x50
    ctx->pc = 0x343930u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x343934: 0x27aa0060  addiu       $t2, $sp, 0x60
    ctx->pc = 0x343934u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x343938: 0x3c030076  lui         $v1, 0x76
    ctx->pc = 0x343938u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)118 << 16));
    // 0x34393c: 0x3c050076  lui         $a1, 0x76
    ctx->pc = 0x34393cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)118 << 16));
    // 0x343940: 0x8c688a14  lw          $t0, -0x75EC($v1)
    ctx->pc = 0x343940u;
    SET_GPR_S32(ctx, 8, (int32_t)FAST_READ32(0x758A14u));
    // 0x343944: 0x2664c788  addiu       $a0, $s3, -0x3878
    ctx->pc = 0x343944u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 4294952840));
    // 0x343948: 0x8ca38a18  lw          $v1, -0x75E8($a1)
    ctx->pc = 0x343948u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x758A18u));
    // 0x34394c: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x34394cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x343950: 0x140302d  daddu       $a2, $t2, $zero
    ctx->pc = 0x343950u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x343954: 0x8faa00bc  lw          $t2, 0xBC($sp)
    ctx->pc = 0x343954u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 188)));
    // 0x343958: 0x8fa900a0  lw          $t1, 0xA0($sp)
    ctx->pc = 0x343958u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x34395c: 0xafaa0004  sw          $t2, 0x4($sp)
    ctx->pc = 0x34395cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 10));
    // 0x343960: 0xafa70008  sw          $a3, 0x8($sp)
    ctx->pc = 0x343960u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 7));
    // 0x343964: 0xafa8000c  sw          $t0, 0xC($sp)
    ctx->pc = 0x343964u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 8));
    // 0x343968: 0xafa30010  sw          $v1, 0x10($sp)
    ctx->pc = 0x343968u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 3));
    // 0x34396c: 0x8fa700c4  lw          $a3, 0xC4($sp)
    ctx->pc = 0x34396cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 196)));
    // 0x343970: 0x8fa300c0  lw          $v1, 0xC0($sp)
    ctx->pc = 0x343970u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x343974: 0x8fa800c8  lw          $t0, 0xC8($sp)
    ctx->pc = 0x343974u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x343978: 0x8faa00cc  lw          $t2, 0xCC($sp)
    ctx->pc = 0x343978u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 204)));
    // 0x34397c: 0xafa20038  sw          $v0, 0x38($sp)
    ctx->pc = 0x34397cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 2));
    // 0x343980: 0xafa3002c  sw          $v1, 0x2C($sp)
    ctx->pc = 0x343980u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 3));
    // 0x343984: 0xafa70030  sw          $a3, 0x30($sp)
    ctx->pc = 0x343984u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 7));
    // 0x343988: 0xafa80034  sw          $t0, 0x34($sp)
    ctx->pc = 0x343988u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 8));
    // 0x34398c: 0xafaa003c  sw          $t2, 0x3C($sp)
    ctx->pc = 0x34398cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 60), GPR_U32(ctx, 10));
    // 0x343990: 0xc0d4054  jal         func_350150
    ctx->pc = 0x343990u;
    SET_GPR_U32(ctx, 31, 0x343998u);
    ctx->pc = 0x343994u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x343990u;
    // 0x343994: 0xafa90040  sw          $t1, 0x40($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 9));
    ctx->in_delay_slot = false;
    ctx->pc = 0x350150u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x350150u, 0x343990u, 0x343998u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x343998u;
label_343998:
    // 0x343998: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x343998u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x34399c: 0x16c20003  bne         $s6, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x34399Cu;
    {
        const bool branch_taken_0x34399c = (GPR_U64(ctx, 22) != GPR_U64(ctx, 2));
        if (branch_taken_0x34399c) {
            ctx->pc = 0x3439ACu;
            goto label_3439ac;
        }
    }
    ctx->pc = 0x3439A4u;
    // 0x3439a4: 0xc0d2738  jal         func_349CE0
    ctx->pc = 0x3439A4u;
    SET_GPR_U32(ctx, 31, 0x3439ACu);
    ctx->pc = 0x3439A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3439A4u;
    // 0x3439a8: 0x26e4c7b0  addiu       $a0, $s7, -0x3850 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 23), 4294952880));
    ctx->in_delay_slot = false;
    ctx->pc = 0x349CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x349CE0u, 0x3439A4u, 0x3439ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3439ACu;
label_3439ac:
    // 0x3439ac: 0xc0d58d2  jal         func_356348
    ctx->pc = 0x3439ACu;
    SET_GPR_U32(ctx, 31, 0x3439B4u);
    ctx->pc = 0x3439B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3439ACu;
    // 0x3439b0: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x356348u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x356348u, 0x3439ACu, 0x3439B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3439B4u;
label_3439b4:
    // 0x3439b4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3439b4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3439b8: 0xc0d608a  jal         func_358228
    ctx->pc = 0x3439B8u;
    SET_GPR_U32(ctx, 31, 0x3439C0u);
    ctx->pc = 0x3439BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3439B8u;
    // 0x3439bc: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x358228u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x358228u, 0x3439B8u, 0x3439C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3439C0u;
label_3439c0:
    // 0x3439c0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x3439c0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3439c4: 0x16000006  bnez        $s0, . + 4 + (0x6 << 2)
    ctx->pc = 0x3439C4u;
    {
        const bool branch_taken_0x3439c4 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x3439C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3439C4u;
        // 0x3439c8: 0x3c050034  lui         $a1, 0x34 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)52 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3439c4) {
            ctx->pc = 0x3439E0u;
            goto label_3439e0;
        }
    }
    ctx->pc = 0x3439CCu;
    // 0x3439cc: 0xc0d15d4  jal         func_345750
    ctx->pc = 0x3439CCu;
    SET_GPR_U32(ctx, 31, 0x3439D4u);
    ctx->pc = 0x3439D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3439CCu;
    // 0x3439d0: 0x2404fecf  addiu       $a0, $zero, -0x131 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966991));
    ctx->in_delay_slot = false;
    ctx->pc = 0x345750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x345750u, 0x3439CCu, 0x3439D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3439D4u;
label_3439d4:
    // 0x3439d4: 0x3c040045  lui         $a0, 0x45
    ctx->pc = 0x3439d4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)69 << 16));
    // 0x3439d8: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x3439D8u;
    {
        const bool branch_taken_0x3439d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3439DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3439D8u;
        // 0x3439dc: 0x24847270  addiu       $a0, $a0, 0x7270 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 29296));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3439d8) {
            ctx->pc = 0x343A28u;
            goto label_343a28;
        }
    }
    ctx->pc = 0x3439E0u;
label_3439e0:
    // 0x3439e0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3439e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3439e4: 0x24a55848  addiu       $a1, $a1, 0x5848
    ctx->pc = 0x3439e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 22600));
    // 0x3439e8: 0xc0d3788  jal         func_34DE20
    ctx->pc = 0x3439E8u;
    SET_GPR_U32(ctx, 31, 0x3439F0u);
    ctx->pc = 0x3439ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3439E8u;
    // 0x3439ec: 0x280302d  daddu       $a2, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x34DE20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x34DE20u, 0x3439E8u, 0x3439F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3439F0u;
label_3439f0:
    // 0x3439f0: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x3439F0u;
    {
        const bool branch_taken_0x3439f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3439F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3439F0u;
        // 0x3439f4: 0x8fa500a4  lw          $a1, 0xA4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 164)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3439f0) {
            ctx->pc = 0x343A10u;
            goto label_343a10;
        }
    }
    ctx->pc = 0x3439F8u;
    // 0x3439f8: 0xc0d15d4  jal         func_345750
    ctx->pc = 0x3439F8u;
    SET_GPR_U32(ctx, 31, 0x343A00u);
    ctx->pc = 0x3439FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3439F8u;
    // 0x3439fc: 0x2404fed1  addiu       $a0, $zero, -0x12F (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966993));
    ctx->in_delay_slot = false;
    ctx->pc = 0x345750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x345750u, 0x3439F8u, 0x343A00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x343A00u;
label_343a00:
    // 0x343a00: 0x3c040045  lui         $a0, 0x45
    ctx->pc = 0x343a00u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)69 << 16));
    // 0x343a04: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x343A04u;
    {
        const bool branch_taken_0x343a04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x343A08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x343A04u;
        // 0x343a08: 0x248472a0  addiu       $a0, $a0, 0x72A0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 29344));
        ctx->in_delay_slot = false;
        if (branch_taken_0x343a04) {
            ctx->pc = 0x343A28u;
            goto label_343a28;
        }
    }
    ctx->pc = 0x343A0Cu;
    // 0x343a0c: 0x0  nop
    ctx->pc = 0x343a0cu;
    // NOP
label_343a10:
    // 0x343a10: 0xc0d0ade  jal         func_342B78
    ctx->pc = 0x343A10u;
    SET_GPR_U32(ctx, 31, 0x343A18u);
    ctx->pc = 0x343A14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x343A10u;
    // 0x343a14: 0x8fa400d0  lw          $a0, 0xD0($sp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x342B78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x342B78u, 0x343A10u, 0x343A18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x343A18u;
label_343a18:
    // 0x343a18: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x343A18u;
    {
        const bool branch_taken_0x343a18 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x343A1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x343A18u;
        // 0x343a1c: 0xae8202d0  sw          $v0, 0x2D0($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 720), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x343a18) {
            ctx->pc = 0x343A38u;
            goto label_343a38;
        }
    }
    ctx->pc = 0x343A20u;
    // 0x343a20: 0x3c040045  lui         $a0, 0x45
    ctx->pc = 0x343a20u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)69 << 16));
    // 0x343a24: 0x248472c8  addiu       $a0, $a0, 0x72C8
    ctx->pc = 0x343a24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 29384));
label_343a28:
    // 0x343a28: 0xc0d22f8  jal         func_348BE0
    ctx->pc = 0x343A28u;
    SET_GPR_U32(ctx, 31, 0x343A30u);
    ctx->pc = 0x348BE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x348BE0u, 0x343A28u, 0x343A30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x343A30u;
label_343a30:
    // 0x343a30: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x343A30u;
    {
        const bool branch_taken_0x343a30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x343A34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x343A30u;
        // 0x343a34: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x343a30) {
            ctx->pc = 0x343A64u;
            goto label_343a64;
        }
    }
    ctx->pc = 0x343A38u;
label_343a38:
    // 0x343a38: 0x8fa200d8  lw          $v0, 0xD8($sp)
    ctx->pc = 0x343a38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x343a3c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x343a3cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x343a40: 0x24060800  addiu       $a2, $zero, 0x800
    ctx->pc = 0x343a40u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
    // 0x343a44: 0x24070040  addiu       $a3, $zero, 0x40
    ctx->pc = 0x343a44u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x343a48: 0xae8201a4  sw          $v0, 0x1A4($s4)
    ctx->pc = 0x343a48u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 420), GPR_U32(ctx, 2));
    // 0x343a4c: 0x8fa300d4  lw          $v1, 0xD4($sp)
    ctx->pc = 0x343a4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 212)));
    // 0x343a50: 0x8fa500dc  lw          $a1, 0xDC($sp)
    ctx->pc = 0x343a50u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 220)));
    // 0x343a54: 0xc0d0eb4  jal         func_343AD0
    ctx->pc = 0x343A54u;
    SET_GPR_U32(ctx, 31, 0x343A5Cu);
    ctx->pc = 0x343A58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x343A54u;
    // 0x343a58: 0xae8301a8  sw          $v1, 0x1A8($s4) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 20), 424), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x343AD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x343AD0u, 0x343A54u, 0x343A5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x343A5Cu;
label_343a5c:
    // 0x343a5c: 0xae8002d4  sw          $zero, 0x2D4($s4)
    ctx->pc = 0x343a5cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 724), GPR_U32(ctx, 0));
    // 0x343a60: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x343a60u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_343a64:
    // 0x343a64: 0xdfb000e0  ld          $s0, 0xE0($sp)
    ctx->pc = 0x343a64u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x343a68: 0xdfb100e8  ld          $s1, 0xE8($sp)
    ctx->pc = 0x343a68u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x343a6c: 0xdfb200f0  ld          $s2, 0xF0($sp)
    ctx->pc = 0x343a6cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x343a70: 0xdfb300f8  ld          $s3, 0xF8($sp)
    ctx->pc = 0x343a70u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x343a74: 0xdfb40100  ld          $s4, 0x100($sp)
    ctx->pc = 0x343a74u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x343a78: 0xdfb50108  ld          $s5, 0x108($sp)
    ctx->pc = 0x343a78u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x343a7c: 0xdfb60110  ld          $s6, 0x110($sp)
    ctx->pc = 0x343a7cu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x343a80: 0xdfb70118  ld          $s7, 0x118($sp)
    ctx->pc = 0x343a80u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 280)));
    // 0x343a84: 0xdfbe0120  ld          $fp, 0x120($sp)
    ctx->pc = 0x343a84u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x343a88: 0xdfbf0128  ld          $ra, 0x128($sp)
    ctx->pc = 0x343a88u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x343a8c: 0x3e00008  jr          $ra
    ctx->pc = 0x343A8Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x343A90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x343A8Cu;
        // 0x343a90: 0x27bd0130  addiu       $sp, $sp, 0x130 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x343A8Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x343A94u;
    // 0x343a94: 0x0  nop
    ctx->pc = 0x343a94u;
    // NOP
    ctx->pc = 0x343a98u;
}
