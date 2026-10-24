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

// Function: Fil_clut_set
// Address: 0x2a35e8 - 0x2a38e8
void Fil_clut_set_0x2a35e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Fil_clut_set_0x2a35e8");
#endif

    switch (ctx->pc) {
        case 0x2a36a8u: goto label_2a36a8;
        case 0x2a36e4u: goto label_2a36e4;
        case 0x2a3748u: goto label_2a3748;
        case 0x2a3808u: goto label_2a3808;
        case 0x2a384cu: goto label_2a384c;
        case 0x2a3870u: goto label_2a3870;
        case 0x2a38a0u: goto label_2a38a0;
        default: break;
    }

    ctx->pc = 0x2a35e8u;

    // 0x2a35e8: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x2a35e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
    // 0x2a35ec: 0x2c820007  sltiu       $v0, $a0, 0x7
    ctx->pc = 0x2a35ecu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)7) ? 1 : 0);
    // 0x2a35f0: 0x7fb00080  sq          $s0, 0x80($sp)
    ctx->pc = 0x2a35f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 16));
    // 0x2a35f4: 0x7fb10070  sq          $s1, 0x70($sp)
    ctx->pc = 0x2a35f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 17));
    // 0x2a35f8: 0x7fb20060  sq          $s2, 0x60($sp)
    ctx->pc = 0x2a35f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 18));
    // 0x2a35fc: 0x7fb30050  sq          $s3, 0x50($sp)
    ctx->pc = 0x2a35fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 19));
    // 0x2a3600: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x2a3600u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x2a3604: 0x7fb50030  sq          $s5, 0x30($sp)
    ctx->pc = 0x2a3604u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 21));
    // 0x2a3608: 0x7fb60020  sq          $s6, 0x20($sp)
    ctx->pc = 0x2a3608u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 22));
    // 0x2a360c: 0x7fb70010  sq          $s7, 0x10($sp)
    ctx->pc = 0x2a360cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 23));
    // 0x2a3610: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2a3610u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2a3614: 0xe7b800b0  swc1        $f24, 0xB0($sp)
    ctx->pc = 0x2a3614u;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 176), bits); }
    // 0x2a3618: 0xe7b700a8  swc1        $f23, 0xA8($sp)
    ctx->pc = 0x2a3618u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 168), bits); }
    // 0x2a361c: 0xe7b600a0  swc1        $f22, 0xA0($sp)
    ctx->pc = 0x2a361cu;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
    // 0x2a3620: 0xe7b50098  swc1        $f21, 0x98($sp)
    ctx->pc = 0x2a3620u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 152), bits); }
    // 0x2a3624: 0x10400087  beqz        $v0, . + 4 + (0x87 << 2)
    ctx->pc = 0x2A3624u;
    {
        const bool branch_taken_0x2a3624 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A3628u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A3624u;
        // 0x2a3628: 0xe7b40090  swc1        $f20, 0x90($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a3624) {
            ctx->pc = 0x2A3844u;
            goto label_2a3844;
        }
    }
    ctx->pc = 0x2A362Cu;
    // 0x2a362c: 0x3c020045  lui         $v0, 0x45
    ctx->pc = 0x2a362cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)69 << 16));
    // 0x2a3630: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x2a3630u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x2a3634: 0x2442acc0  addiu       $v0, $v0, -0x5340
    ctx->pc = 0x2a3634u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294945984));
    // 0x2a3638: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2a3638u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2a363c: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x2a363cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2a3640: 0x800008  jr          $a0
    ctx->pc = 0x2A3640u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2A3648u: goto label_2a3648;
            case 0x2A365Cu: goto label_2a365c;
            case 0x2A3670u: goto label_2a3670;
            case 0x2A368Cu: goto label_2a368c;
            case 0x2A36B0u: goto label_2a36b0;
            case 0x2A36C4u: goto label_2a36c4;
            case 0x2A36ECu: goto label_2a36ec;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A3640u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x2A3648u;
label_2a3648:
    // 0x2a3648: 0x3c04005a  lui         $a0, 0x5A
    ctx->pc = 0x2a3648u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)90 << 16));
    // 0x2a364c: 0x3c05004a  lui         $a1, 0x4A
    ctx->pc = 0x2a364cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)74 << 16));
    // 0x2a3650: 0x3c078080  lui         $a3, 0x8080
    ctx->pc = 0x2a3650u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)32896 << 16));
    // 0x2a3654: 0x1000001f  b           . + 4 + (0x1F << 2)
    ctx->pc = 0x2A3654u;
    {
        const bool branch_taken_0x2a3654 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A3658u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A3654u;
        // 0x2a3658: 0x2484acdc  addiu       $a0, $a0, -0x5324 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294946012));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a3654) {
            ctx->pc = 0x2A36D4u;
            goto label_2a36d4;
        }
    }
    ctx->pc = 0x2A365Cu;
label_2a365c:
    // 0x2a365c: 0x3c04005a  lui         $a0, 0x5A
    ctx->pc = 0x2a365cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)90 << 16));
    // 0x2a3660: 0x3c05004a  lui         $a1, 0x4A
    ctx->pc = 0x2a3660u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)74 << 16));
    // 0x2a3664: 0x3c078080  lui         $a3, 0x8080
    ctx->pc = 0x2a3664u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)32896 << 16));
    // 0x2a3668: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x2A3668u;
    {
        const bool branch_taken_0x2a3668 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A366Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A3668u;
        // 0x2a366c: 0x2484ada4  addiu       $a0, $a0, -0x525C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294946212));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a3668) {
            ctx->pc = 0x2A36D4u;
            goto label_2a36d4;
        }
    }
    ctx->pc = 0x2A3670u;
label_2a3670:
    // 0x2a3670: 0x3c04005a  lui         $a0, 0x5A
    ctx->pc = 0x2a3670u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)90 << 16));
    // 0x2a3674: 0x3c05004a  lui         $a1, 0x4A
    ctx->pc = 0x2a3674u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)74 << 16));
    // 0x2a3678: 0x3c078080  lui         $a3, 0x8080
    ctx->pc = 0x2a3678u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)32896 << 16));
    // 0x2a367c: 0x2484ae08  addiu       $a0, $a0, -0x51F8
    ctx->pc = 0x2a367cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294946312));
    // 0x2a3680: 0x24a56100  addiu       $a1, $a1, 0x6100
    ctx->pc = 0x2a3680u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 24832));
    // 0x2a3684: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x2A3684u;
    {
        const bool branch_taken_0x2a3684 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A3688u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A3684u;
        // 0x2a3688: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a3684) {
            ctx->pc = 0x2A36DCu;
            goto label_2a36dc;
        }
    }
    ctx->pc = 0x2A368Cu;
label_2a368c:
    // 0x2a368c: 0x3c04005a  lui         $a0, 0x5A
    ctx->pc = 0x2a368cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)90 << 16));
    // 0x2a3690: 0x3c05004a  lui         $a1, 0x4A
    ctx->pc = 0x2a3690u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)74 << 16));
    // 0x2a3694: 0x2484ad40  addiu       $a0, $a0, -0x52C0
    ctx->pc = 0x2a3694u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294946112));
    // 0x2a3698: 0x24a56100  addiu       $a1, $a1, 0x6100
    ctx->pc = 0x2a3698u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 24832));
    // 0x2a369c: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x2a369cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2a36a0: 0xc0a8bb4  jal         func_2A2ED0
    ctx->pc = 0x2A36A0u;
    SET_GPR_U32(ctx, 31, 0x2A36A8u);
    ctx->pc = 0x2A36A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A36A0u;
    // 0x2a36a4: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A2ED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A2ED0u, 0x2A36A0u, 0x2A36A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A36A8u;
label_2a36a8:
    // 0x2a36a8: 0x10000066  b           . + 4 + (0x66 << 2)
    ctx->pc = 0x2A36A8u;
    {
        const bool branch_taken_0x2a36a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a36a8) {
            ctx->pc = 0x2A3844u;
            goto label_2a3844;
        }
    }
    ctx->pc = 0x2A36B0u;
label_2a36b0:
    // 0x2a36b0: 0x3c04005a  lui         $a0, 0x5A
    ctx->pc = 0x2a36b0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)90 << 16));
    // 0x2a36b4: 0x3c05004a  lui         $a1, 0x4A
    ctx->pc = 0x2a36b4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)74 << 16));
    // 0x2a36b8: 0x3c078080  lui         $a3, 0x8080
    ctx->pc = 0x2a36b8u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)32896 << 16));
    // 0x2a36bc: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x2A36BCu;
    {
        const bool branch_taken_0x2a36bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A36C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A36BCu;
        // 0x2a36c0: 0x2484ae6c  addiu       $a0, $a0, -0x5194 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294946412));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a36bc) {
            ctx->pc = 0x2A36D4u;
            goto label_2a36d4;
        }
    }
    ctx->pc = 0x2A36C4u;
label_2a36c4:
    // 0x2a36c4: 0x3c04005a  lui         $a0, 0x5A
    ctx->pc = 0x2a36c4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)90 << 16));
    // 0x2a36c8: 0x3c05004a  lui         $a1, 0x4A
    ctx->pc = 0x2a36c8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)74 << 16));
    // 0x2a36cc: 0x3c078080  lui         $a3, 0x8080
    ctx->pc = 0x2a36ccu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)32896 << 16));
    // 0x2a36d0: 0x2484aed0  addiu       $a0, $a0, -0x5130
    ctx->pc = 0x2a36d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294946512));
label_2a36d4:
    // 0x2a36d4: 0x24a56100  addiu       $a1, $a1, 0x6100
    ctx->pc = 0x2a36d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 24832));
    // 0x2a36d8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2a36d8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2a36dc:
    // 0x2a36dc: 0xc0a8bb4  jal         func_2A2ED0
    ctx->pc = 0x2A36DCu;
    SET_GPR_U32(ctx, 31, 0x2A36E4u);
    ctx->pc = 0x2A36E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A36DCu;
    // 0x2a36e0: 0x34e78080  ori         $a3, $a3, 0x8080 (Delay Slot)
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)32896);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A2ED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A2ED0u, 0x2A36DCu, 0x2A36E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A36E4u;
label_2a36e4:
    // 0x2a36e4: 0x10000057  b           . + 4 + (0x57 << 2)
    ctx->pc = 0x2A36E4u;
    {
        const bool branch_taken_0x2a36e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a36e4) {
            ctx->pc = 0x2A3844u;
            goto label_2a3844;
        }
    }
    ctx->pc = 0x2A36ECu;
label_2a36ec:
    // 0x2a36ec: 0x3c02005d  lui         $v0, 0x5D
    ctx->pc = 0x2a36ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
    // 0x2a36f0: 0x3c03003c  lui         $v1, 0x3C
    ctx->pc = 0x2a36f0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)60 << 16));
    // 0x2a36f4: 0x8c55aff0  lw          $s5, -0x5010($v0)
    ctx->pc = 0x2a36f4u;
    SET_GPR_S32(ctx, 21, (int32_t)FAST_READ32(0x5CAFF0u));
    // 0x2a36f8: 0x24741680  addiu       $s4, $v1, 0x1680
    ctx->pc = 0x2a36f8u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 3), 5760));
    // 0x2a36fc: 0x3c020059  lui         $v0, 0x59
    ctx->pc = 0x2a36fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)89 << 16));
    // 0x2a3700: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2a3700u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2a3704: 0x4481c000  mtc1        $at, $f24
    ctx->pc = 0x2a3704u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[24], &bits, sizeof(bits)); }
    // 0x2a3708: 0x24536c00  addiu       $s3, $v0, 0x6C00
    ctx->pc = 0x2a3708u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 27648));
    // 0x2a370c: 0x3c013dcc  lui         $at, 0x3DCC
    ctx->pc = 0x2a370cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15820 << 16));
    // 0x2a3710: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x2a3710u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x2a3714: 0x4481b000  mtc1        $at, $f22
    ctx->pc = 0x2a3714u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[22], &bits, sizeof(bits)); }
    // 0x2a3718: 0x3c014416  lui         $at, 0x4416
    ctx->pc = 0x2a3718u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17430 << 16));
    // 0x2a371c: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x2a371cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x2a3720: 0x24020100  addiu       $v0, $zero, 0x100
    ctx->pc = 0x2a3720u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x2a3724: 0x3c014415  lui         $at, 0x4415
    ctx->pc = 0x2a3724u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17429 << 16));
    // 0x2a3728: 0x3421f99a  ori         $at, $at, 0xF99A
    ctx->pc = 0x2a3728u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)63898);
    // 0x2a372c: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x2a372cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x2a3730: 0x3c17004a  lui         $s7, 0x4A
    ctx->pc = 0x2a3730u;
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)74 << 16));
    // 0x2a3734: 0x3c0149f7  lui         $at, 0x49F7
    ctx->pc = 0x2a3734u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)18935 << 16));
    // 0x2a3738: 0x3421ff08  ori         $at, $at, 0xFF08
    ctx->pc = 0x2a3738u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)65288);
    // 0x2a373c: 0x4481b800  mtc1        $at, $f23
    ctx->pc = 0x2a373cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[23], &bits, sizeof(bits)); }
    // 0x2a3740: 0x241600e0  addiu       $s6, $zero, 0xE0
    ctx->pc = 0x2a3740u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 224));
    // 0x2a3744: 0x0  nop
    ctx->pc = 0x2a3744u;
    // NOP
label_2a3748:
    // 0x2a3748: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x2a3748u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x2a374c: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x2a374cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a3750: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2a3750u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2a3754: 0x541021  addu        $v0, $v0, $s4
    ctx->pc = 0x2a3754u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
    // 0x2a3758: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x2a3758u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2a375c: 0x32e42  srl         $a1, $v1, 25
    ctx->pc = 0x2a375cu;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 3), 25));
    // 0x2a3760: 0xc6a00250  lwc1        $f0, 0x250($s5)
    ctx->pc = 0x2a3760u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 592)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a3764: 0x128880  sll         $s1, $s2, 2
    ctx->pc = 0x2a3764u;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    // 0x2a3768: 0x2348021  addu        $s0, $s1, $s4
    ctx->pc = 0x2a3768u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 20)));
    // 0x2a376c: 0xc66340d0  lwc1        $f3, 0x40D0($s3)
    ctx->pc = 0x2a376cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 16592)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2a3770: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x2a3770u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
    // 0x2a3774: 0x92020003  lbu         $v0, 0x3($s0)
    ctx->pc = 0x2a3774u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 3)));
    // 0x2a3778: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2a3778u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a377c: 0x2c21023  subu        $v0, $s6, $v0
    ctx->pc = 0x2a377cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 22), GPR_U32(ctx, 2)));
    // 0x2a3780: 0x0  nop
    ctx->pc = 0x2a3780u;
    // NOP
    // 0x2a3784: 0x0  nop
    ctx->pc = 0x2a3784u;
    // NOP
    // 0x2a3788: 0x4600b803  div.s       $f0, $f23, $f0
    ctx->pc = 0x2a3788u;
    ctx->f[0] = ps2FpuDivide(ctx->fcr31, ctx->f[23], ctx->f[0]);
    // 0x2a378c: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x2a378cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x2a3790: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x2a3790u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2a3794: 0x0  nop
    ctx->pc = 0x2a3794u;
    // NOP
    // 0x2a3798: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x2a3798u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x2a379c: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x2a379cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
    // 0x2a37a0: 0x46160042  mul.s       $f1, $f0, $f22
    ctx->pc = 0x2a37a0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[22]);
    // 0x2a37a4: 0x46180001  sub.s       $f0, $f0, $f24
    ctx->pc = 0x2a37a4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[24]);
    // 0x2a37a8: 0x46150841  sub.s       $f1, $f1, $f21
    ctx->pc = 0x2a37a8u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[21]);
    // 0x2a37ac: 0x46150002  mul.s       $f0, $f0, $f21
    ctx->pc = 0x2a37acu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[21]);
    // 0x2a37b0: 0x46000847  neg.s       $f1, $f1
    ctx->pc = 0x2a37b0u;
    ctx->f[1] = FPU_NEG_S(ctx->f[1]);
    // 0x2a37b4: 0x46160002  mul.s       $f0, $f0, $f22
    ctx->pc = 0x2a37b4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[22]);
    // 0x2a37b8: 0x0  nop
    ctx->pc = 0x2a37b8u;
    // NOP
    // 0x2a37bc: 0x0  nop
    ctx->pc = 0x2a37bcu;
    // NOP
    // 0x2a37c0: 0x46140843  div.s       $f1, $f1, $f20
    ctx->pc = 0x2a37c0u;
    ctx->f[1] = ps2FpuDivide(ctx->fcr31, ctx->f[1], ctx->f[20]);
    // 0x2a37c4: 0x0  nop
    ctx->pc = 0x2a37c4u;
    // NOP
    // 0x2a37c8: 0x0  nop
    ctx->pc = 0x2a37c8u;
    // NOP
    // 0x2a37cc: 0x46140003  div.s       $f0, $f0, $f20
    ctx->pc = 0x2a37ccu;
    ctx->f[0] = ps2FpuDivide(ctx->fcr31, ctx->f[0], ctx->f[20]);
    // 0x2a37d0: 0x46011081  sub.s       $f2, $f2, $f1
    ctx->pc = 0x2a37d0u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
    // 0x2a37d4: 0x0  nop
    ctx->pc = 0x2a37d4u;
    // NOP
    // 0x2a37d8: 0x46020003  div.s       $f0, $f0, $f2
    ctx->pc = 0x2a37d8u;
    ctx->f[0] = ps2FpuDivide(ctx->fcr31, ctx->f[0], ctx->f[2]);
    // 0x2a37dc: 0x46001834  c.lt.s      $f3, $f0
    ctx->pc = 0x2a37dcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[3], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2a37e0: 0x0  nop
    ctx->pc = 0x2a37e0u;
    // NOP
    // 0x2a37e4: 0x4500000c  bc1f        . + 4 + (0xC << 2)
    ctx->pc = 0x2A37E4u;
    {
        const bool branch_taken_0x2a37e4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2A37E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A37E4u;
        // 0x2a37e8: 0xc66440d4  lwc1        $f4, 0x40D4($s3) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 16596)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a37e4) {
            ctx->pc = 0x2A3818u;
            goto label_2a3818;
        }
    }
    ctx->pc = 0x2A37ECu;
    // 0x2a37ec: 0x46032041  sub.s       $f1, $f4, $f3
    ctx->pc = 0x2a37ecu;
    ctx->f[1] = FPU_SUB_S(ctx->f[4], ctx->f[3]);
    // 0x2a37f0: 0x3c014300  lui         $at, 0x4300
    ctx->pc = 0x2a37f0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17152 << 16));
    // 0x2a37f4: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2a37f4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2a37f8: 0x46030001  sub.s       $f0, $f0, $f3
    ctx->pc = 0x2a37f8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[3]);
    // 0x2a37fc: 0x46016303  div.s       $f12, $f12, $f1
    ctx->pc = 0x2a37fcu;
    ctx->f[12] = ps2FpuDivide(ctx->fcr31, ctx->f[12], ctx->f[1]);
    // 0x2a3800: 0xc0c7b42  jal         func_31ED08
    ctx->pc = 0x2A3800u;
    SET_GPR_U32(ctx, 31, 0x2A3808u);
    ctx->pc = 0x2A3804u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A3800u;
    // 0x2a3804: 0x460c0302  mul.s       $f12, $f0, $f12 (Delay Slot)
    ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x31ED08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31ED08u, 0x2A3800u, 0x2A3808u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A3808u;
label_2a3808:
    // 0x2a3808: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2a3808u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a380c: 0x24030080  addiu       $v1, $zero, 0x80
    ctx->pc = 0x2a380cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x2a3810: 0x2ca20081  sltiu       $v0, $a1, 0x81
    ctx->pc = 0x2a3810u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)129) ? 1 : 0);
    // 0x2a3814: 0x62280a  movz        $a1, $v1, $v0
    ctx->pc = 0x2a3814u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 3));
label_2a3818:
    // 0x2a3818: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x2a3818u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2a381c: 0x3c0200ff  lui         $v0, 0xFF
    ctx->pc = 0x2a381cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)255 << 16));
    // 0x2a3820: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x2a3820u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x2a3824: 0x52e00  sll         $a1, $a1, 24
    ctx->pc = 0x2a3824u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 24));
    // 0x2a3828: 0x822024  and         $a0, $a0, $v0
    ctx->pc = 0x2a3828u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x2a382c: 0x26e36100  addiu       $v1, $s7, 0x6100
    ctx->pc = 0x2a382cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 23), 24832));
    // 0x2a3830: 0x2231821  addu        $v1, $s1, $v1
    ctx->pc = 0x2a3830u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
    // 0x2a3834: 0x852025  or          $a0, $a0, $a1
    ctx->pc = 0x2a3834u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 5));
    // 0x2a3838: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x2a3838u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a383c: 0x1440ffc2  bnez        $v0, . + 4 + (-0x3E << 2)
    ctx->pc = 0x2A383Cu;
    {
        const bool branch_taken_0x2a383c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2A3840u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A383Cu;
        // 0x2a3840: 0xac640000  sw          $a0, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a383c) {
            ctx->pc = 0x2A3748u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2a3748;
        }
    }
    ctx->pc = 0x2A3844u;
label_2a3844:
    // 0x2a3844: 0xc0ebfc8  jal         func_3AFF20
    ctx->pc = 0x2A3844u;
    SET_GPR_U32(ctx, 31, 0x2A384Cu);
    ctx->pc = 0x2A3848u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A3844u;
    // 0x2a3848: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3AFF20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3AFF20u, 0x2A3844u, 0x2A384Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A384Cu;
label_2a384c:
    // 0x2a384c: 0x3c02004a  lui         $v0, 0x4A
    ctx->pc = 0x2a384cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)74 << 16));
    // 0x2a3850: 0x3c03004a  lui         $v1, 0x4A
    ctx->pc = 0x2a3850u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)74 << 16));
    // 0x2a3854: 0x3c04003c  lui         $a0, 0x3C
    ctx->pc = 0x2a3854u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)60 << 16));
    // 0x2a3858: 0x24686100  addiu       $t0, $v1, 0x6100
    ctx->pc = 0x2a3858u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 3), 24832));
    // 0x2a385c: 0x2484d758  addiu       $a0, $a0, -0x28A8
    ctx->pc = 0x2a385cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294956888));
    // 0x2a3860: 0x24476980  addiu       $a3, $v0, 0x6980
    ctx->pc = 0x2a3860u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 27008));
    // 0x2a3864: 0x24060100  addiu       $a2, $zero, 0x100
    ctx->pc = 0x2a3864u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x2a3868: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2a3868u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a386c: 0x0  nop
    ctx->pc = 0x2a386cu;
    // NOP
label_2a3870:
    // 0x2a3870: 0xa41021  addu        $v0, $a1, $a0
    ctx->pc = 0x2a3870u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x2a3874: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x2a3874u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x2a3878: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x2a3878u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2a387c: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x2a387cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x2a3880: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2a3880u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2a3884: 0x681821  addu        $v1, $v1, $t0
    ctx->pc = 0x2a3884u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
    // 0x2a3888: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x2a3888u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2a388c: 0xace20000  sw          $v0, 0x0($a3)
    ctx->pc = 0x2a388cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 2));
    // 0x2a3890: 0x14c0fff7  bnez        $a2, . + 4 + (-0x9 << 2)
    ctx->pc = 0x2A3890u;
    {
        const bool branch_taken_0x2a3890 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x2A3894u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A3890u;
        // 0x2a3894: 0x24e70004  addiu       $a3, $a3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a3890) {
            ctx->pc = 0x2A3870u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2a3870;
        }
    }
    ctx->pc = 0x2A3898u;
    // 0x2a3898: 0xc0ebfc8  jal         func_3AFF20
    ctx->pc = 0x2A3898u;
    SET_GPR_U32(ctx, 31, 0x2A38A0u);
    ctx->pc = 0x2A389Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A3898u;
    // 0x2a389c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3AFF20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3AFF20u, 0x2A3898u, 0x2A38A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A38A0u;
label_2a38a0:
    // 0x2a38a0: 0x7bb00080  lq          $s0, 0x80($sp)
    ctx->pc = 0x2a38a0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2a38a4: 0x7bb10070  lq          $s1, 0x70($sp)
    ctx->pc = 0x2a38a4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2a38a8: 0x7bb20060  lq          $s2, 0x60($sp)
    ctx->pc = 0x2a38a8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2a38ac: 0x7bb30050  lq          $s3, 0x50($sp)
    ctx->pc = 0x2a38acu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2a38b0: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x2a38b0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2a38b4: 0x7bb50030  lq          $s5, 0x30($sp)
    ctx->pc = 0x2a38b4u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2a38b8: 0x7bb60020  lq          $s6, 0x20($sp)
    ctx->pc = 0x2a38b8u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2a38bc: 0x7bb70010  lq          $s7, 0x10($sp)
    ctx->pc = 0x2a38bcu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2a38c0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2a38c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2a38c4: 0xc7b800b0  lwc1        $f24, 0xB0($sp)
    ctx->pc = 0x2a38c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[24] = f; }
    // 0x2a38c8: 0xc7b700a8  lwc1        $f23, 0xA8($sp)
    ctx->pc = 0x2a38c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x2a38cc: 0xc7b600a0  lwc1        $f22, 0xA0($sp)
    ctx->pc = 0x2a38ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x2a38d0: 0xc7b50098  lwc1        $f21, 0x98($sp)
    ctx->pc = 0x2a38d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x2a38d4: 0xc7b40090  lwc1        $f20, 0x90($sp)
    ctx->pc = 0x2a38d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2a38d8: 0x3e00008  jr          $ra
    ctx->pc = 0x2A38D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A38DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A38D8u;
        // 0x2a38dc: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A38D8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2A38E0u;
    // 0x2a38e0: 0x27bd00f0  addiu       $sp, $sp, 0xF0
    ctx->pc = 0x2a38e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x2a38e4: 0x0  nop
    ctx->pc = 0x2a38e4u;
    // NOP
    ctx->pc = 0x2a38e8u;
}
