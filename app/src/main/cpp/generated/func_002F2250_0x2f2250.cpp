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

// Function: func_002F2250
// Address: 0x2f2250 - 0x2f2758
void func_002F2250_0x2f2250(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_002F2250_0x2f2250");
#endif

    switch (ctx->pc) {
        case 0x2f228cu: goto label_2f228c;
        case 0x2f229cu: goto label_2f229c;
        case 0x2f22a4u: goto label_2f22a4;
        case 0x2f22b4u: goto label_2f22b4;
        case 0x2f22c8u: goto label_2f22c8;
        case 0x2f22dcu: goto label_2f22dc;
        case 0x2f2308u: goto label_2f2308;
        case 0x2f23a8u: goto label_2f23a8;
        case 0x2f243cu: goto label_2f243c;
        case 0x2f247cu: goto label_2f247c;
        case 0x2f24a8u: goto label_2f24a8;
        case 0x2f24c8u: goto label_2f24c8;
        case 0x2f24f4u: goto label_2f24f4;
        case 0x2f25d4u: goto label_2f25d4;
        case 0x2f25ecu: goto label_2f25ec;
        case 0x2f25fcu: goto label_2f25fc;
        case 0x2f2610u: goto label_2f2610;
        case 0x2f2620u: goto label_2f2620;
        case 0x2f2634u: goto label_2f2634;
        case 0x2f2648u: goto label_2f2648;
        case 0x2f2658u: goto label_2f2658;
        case 0x2f2670u: goto label_2f2670;
        case 0x2f269cu: goto label_2f269c;
        case 0x2f26a4u: goto label_2f26a4;
        case 0x2f26c8u: goto label_2f26c8;
        case 0x2f26d0u: goto label_2f26d0;
        case 0x2f26e8u: goto label_2f26e8;
        default: break;
    }

    ctx->pc = 0x2f2250u;

    // 0x2f2250: 0x27bdfe30  addiu       $sp, $sp, -0x1D0
    ctx->pc = 0x2f2250u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966832));
    // 0x2f2254: 0x7fb30180  sq          $s3, 0x180($sp)
    ctx->pc = 0x2f2254u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 384), GPR_VEC(ctx, 19));
    // 0x2f2258: 0x7fb001b0  sq          $s0, 0x1B0($sp)
    ctx->pc = 0x2f2258u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 432), GPR_VEC(ctx, 16));
    // 0x2f225c: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x2f225cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f2260: 0x7fb101a0  sq          $s1, 0x1A0($sp)
    ctx->pc = 0x2f2260u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 416), GPR_VEC(ctx, 17));
    // 0x2f2264: 0x7fb20190  sq          $s2, 0x190($sp)
    ctx->pc = 0x2f2264u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 400), GPR_VEC(ctx, 18));
    // 0x2f2268: 0x7fb40170  sq          $s4, 0x170($sp)
    ctx->pc = 0x2f2268u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 368), GPR_VEC(ctx, 20));
    // 0x2f226c: 0xffbf0160  sd          $ra, 0x160($sp)
    ctx->pc = 0x2f226cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 352), GPR_U64(ctx, 31));
    // 0x2f2270: 0xe7b501c8  swc1        $f21, 0x1C8($sp)
    ctx->pc = 0x2f2270u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 456), bits); }
    // 0x2f2274: 0xe7b401c0  swc1        $f20, 0x1C0($sp)
    ctx->pc = 0x2f2274u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 448), bits); }
    // 0x2f2278: 0x8e6202b0  lw          $v0, 0x2B0($s3)
    ctx->pc = 0x2f2278u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 688)));
    // 0x2f227c: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2F227Cu;
    {
        const bool branch_taken_0x2f227c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2f227c) {
            ctx->pc = 0x2F2294u;
            goto label_2f2294;
        }
    }
    ctx->pc = 0x2F2284u;
    // 0x2f2284: 0xc0bef94  jal         func_2FBE50
    ctx->pc = 0x2F2284u;
    SET_GPR_U32(ctx, 31, 0x2F228Cu);
    ctx->pc = 0x2FBE50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FBE50u, 0x2F2284u, 0x2F228Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F228Cu;
label_2f228c:
    // 0x2f228c: 0x10000128  b           . + 4 + (0x128 << 2)
    ctx->pc = 0x2F228Cu;
    {
        const bool branch_taken_0x2f228c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F2290u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F228Cu;
        // 0x2f2290: 0x7bb001b0  lq          $s0, 0x1B0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 432)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f228c) {
            ctx->pc = 0x2F2730u;
            goto label_2f2730;
        }
    }
    ctx->pc = 0x2F2294u;
label_2f2294:
    // 0x2f2294: 0xc0befb4  jal         func_2FBED0
    ctx->pc = 0x2F2294u;
    SET_GPR_U32(ctx, 31, 0x2F229Cu);
    ctx->pc = 0x2F2298u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F2294u;
    // 0x2f2298: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FBED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FBED0u, 0x2F2294u, 0x2F229Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F229Cu;
label_2f229c:
    // 0x2f229c: 0xc0bec18  jal         func_2FB060
    ctx->pc = 0x2F229Cu;
    SET_GPR_U32(ctx, 31, 0x2F22A4u);
    ctx->pc = 0x2F22A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F229Cu;
    // 0x2f22a0: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FB060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FB060u, 0x2F229Cu, 0x2F22A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F22A4u;
label_2f22a4:
    // 0x2f22a4: 0x1040011b  beqz        $v0, . + 4 + (0x11B << 2)
    ctx->pc = 0x2F22A4u;
    {
        const bool branch_taken_0x2f22a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F22A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F22A4u;
        // 0x2f22a8: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f22a4) {
            ctx->pc = 0x2F2714u;
            goto label_2f2714;
        }
    }
    ctx->pc = 0x2F22ACu;
    // 0x2f22ac: 0xc0ad8b8  jal         func_2B62E0
    ctx->pc = 0x2F22ACu;
    SET_GPR_U32(ctx, 31, 0x2F22B4u);
    ctx->pc = 0x2F22B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F22ACu;
    // 0x2f22b0: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B62E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B62E0u, 0x2F22ACu, 0x2F22B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F22B4u;
label_2f22b4:
    // 0x2f22b4: 0xc7a00000  lwc1        $f0, 0x0($sp)
    ctx->pc = 0x2f22b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2f22b8: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x2f22b8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f22bc: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2f22bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f22c0: 0xc0ad876  jal         func_2B61D8
    ctx->pc = 0x2F22C0u;
    SET_GPR_U32(ctx, 31, 0x2F22C8u);
    ctx->pc = 0x2F22C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F22C0u;
    // 0x2f22c4: 0xe7a00008  swc1        $f0, 0x8($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B61D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B61D8u, 0x2F22C0u, 0x2F22C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F22C8u;
label_2f22c8:
    // 0x2f22c8: 0x27b10010  addiu       $s1, $sp, 0x10
    ctx->pc = 0x2f22c8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2f22cc: 0x8e7002b0  lw          $s0, 0x2B0($s3)
    ctx->pc = 0x2f22ccu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 688)));
    // 0x2f22d0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2f22d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f22d4: 0xc0ad858  jal         func_2B6160
    ctx->pc = 0x2F22D4u;
    SET_GPR_U32(ctx, 31, 0x2F22DCu);
    ctx->pc = 0x2F22D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F22D4u;
    // 0x2f22d8: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B6160u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B6160u, 0x2F22D4u, 0x2F22DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F22DCu;
label_2f22dc:
    // 0x2f22dc: 0x8e0200f0  lw          $v0, 0xF0($s0)
    ctx->pc = 0x2f22dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 240)));
    // 0x2f22e0: 0x10510006  beq         $v0, $s1, . + 4 + (0x6 << 2)
    ctx->pc = 0x2F22E0u;
    {
        const bool branch_taken_0x2f22e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 17));
        ctx->pc = 0x2F22E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F22E0u;
        // 0x2f22e4: 0xc7a00010  lwc1        $f0, 0x10($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f22e0) {
            ctx->pc = 0x2F22FCu;
            goto label_2f22fc;
        }
    }
    ctx->pc = 0x2F22E8u;
    // 0x2f22e8: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x2f22e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x2f22ec: 0xc7a10014  lwc1        $f1, 0x14($sp)
    ctx->pc = 0x2f22ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2f22f0: 0xe4410004  swc1        $f1, 0x4($v0)
    ctx->pc = 0x2f22f0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x2f22f4: 0xc7a00018  lwc1        $f0, 0x18($sp)
    ctx->pc = 0x2f22f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2f22f8: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x2f22f8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
label_2f22fc:
    // 0x2f22fc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2f22fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f2300: 0xc0ad834  jal         func_2B60D0
    ctx->pc = 0x2F2300u;
    SET_GPR_U32(ctx, 31, 0x2F2308u);
    ctx->pc = 0x2F2304u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F2300u;
    // 0x2f2304: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B60D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B60D0u, 0x2F2300u, 0x2F2308u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F2308u;
label_2f2308:
    // 0x2f2308: 0x8e6302b0  lw          $v1, 0x2B0($s3)
    ctx->pc = 0x2f2308u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 688)));
    // 0x2f230c: 0x24620100  addiu       $v0, $v1, 0x100
    ctx->pc = 0x2f230cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 256));
    // 0x2f2310: 0x10510007  beq         $v0, $s1, . + 4 + (0x7 << 2)
    ctx->pc = 0x2F2310u;
    {
        const bool branch_taken_0x2f2310 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 17));
        ctx->pc = 0x2F2314u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F2310u;
        // 0x2f2314: 0xc7a00010  lwc1        $f0, 0x10($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f2310) {
            ctx->pc = 0x2F2330u;
            goto label_2f2330;
        }
    }
    ctx->pc = 0x2F2318u;
    // 0x2f2318: 0xe4600100  swc1        $f0, 0x100($v1)
    ctx->pc = 0x2f2318u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 256), bits); }
    // 0x2f231c: 0xc7a10014  lwc1        $f1, 0x14($sp)
    ctx->pc = 0x2f231cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2f2320: 0xe4410004  swc1        $f1, 0x4($v0)
    ctx->pc = 0x2f2320u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x2f2324: 0xc7a00018  lwc1        $f0, 0x18($sp)
    ctx->pc = 0x2f2324u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2f2328: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x2f2328u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    // 0x2f232c: 0x8e6302b0  lw          $v1, 0x2B0($s3)
    ctx->pc = 0x2f232cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 688)));
label_2f2330:
    // 0x2f2330: 0x24620110  addiu       $v0, $v1, 0x110
    ctx->pc = 0x2f2330u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 272));
    // 0x2f2334: 0x105d0006  beq         $v0, $sp, . + 4 + (0x6 << 2)
    ctx->pc = 0x2F2334u;
    {
        const bool branch_taken_0x2f2334 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 29));
        ctx->pc = 0x2F2338u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F2334u;
        // 0x2f2338: 0xc7a00000  lwc1        $f0, 0x0($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f2334) {
            ctx->pc = 0x2F2350u;
            goto label_2f2350;
        }
    }
    ctx->pc = 0x2F233Cu;
    // 0x2f233c: 0xe4600110  swc1        $f0, 0x110($v1)
    ctx->pc = 0x2f233cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 272), bits); }
    // 0x2f2340: 0xc7a10004  lwc1        $f1, 0x4($sp)
    ctx->pc = 0x2f2340u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2f2344: 0xe4410004  swc1        $f1, 0x4($v0)
    ctx->pc = 0x2f2344u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x2f2348: 0xc7a00008  lwc1        $f0, 0x8($sp)
    ctx->pc = 0x2f2348u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2f234c: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x2f234cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
label_2f2350:
    // 0x2f2350: 0x9262024c  lbu         $v0, 0x24C($s3)
    ctx->pc = 0x2f2350u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 588)));
    // 0x2f2354: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2f2354u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2f2358: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x2f2358u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x2f235c: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x2F235Cu;
    {
        const bool branch_taken_0x2f235c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F2360u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F235Cu;
        // 0x2f2360: 0x8e640120  lw          $a0, 0x120($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 288)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f235c) {
            ctx->pc = 0x2F2388u;
            goto label_2f2388;
        }
    }
    ctx->pc = 0x2F2364u;
    // 0x2f2364: 0x9263024d  lbu         $v1, 0x24D($s3)
    ctx->pc = 0x2f2364u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 589)));
    // 0x2f2368: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2f2368u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2f236c: 0x0  nop
    ctx->pc = 0x2f236cu;
    // NOP
    // 0x2f2370: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x2f2370u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x2f2374: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x2f2374u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2f2378: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2f2378u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2f237c: 0x0  nop
    ctx->pc = 0x2f237cu;
    // NOP
    // 0x2f2380: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2f2380u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2f2384: 0x46010503  div.s       $f20, $f0, $f1
    ctx->pc = 0x2f2384u;
    ctx->f[20] = ps2FpuDivide(ctx->fcr31, ctx->f[0], ctx->f[1]);
label_2f2388:
    // 0x2f2388: 0x1080000d  beqz        $a0, . + 4 + (0xD << 2)
    ctx->pc = 0x2F2388u;
    {
        const bool branch_taken_0x2f2388 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F238Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F2388u;
        // 0x2f238c: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f2388) {
            ctx->pc = 0x2F23C0u;
            goto label_2f23c0;
        }
    }
    ctx->pc = 0x2F2390u;
    // 0x2f2390: 0x8c82000c  lw          $v0, 0xC($a0)
    ctx->pc = 0x2f2390u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x2f2394: 0x8c430250  lw          $v1, 0x250($v0)
    ctx->pc = 0x2f2394u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 592)));
    // 0x2f2398: 0x4620008  bltzl       $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x2F2398u;
    {
        const bool branch_taken_0x2f2398 = (GPR_S64(ctx, 3) < 0);
        if (branch_taken_0x2f2398) {
            ctx->pc = 0x2F239Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F2398u;
            // 0x2f239c: 0xae600120  sw          $zero, 0x120($s3) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 19), 288), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F23BCu;
            goto label_2f23bc;
        }
    }
    ctx->pc = 0x2F23A0u;
    // 0x2f23a0: 0xc0c1c46  jal         func_307118
    ctx->pc = 0x2F23A0u;
    SET_GPR_U32(ctx, 31, 0x2F23A8u);
    ctx->pc = 0x307118u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x307118u, 0x2F23A0u, 0x2F23A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F23A8u;
label_2f23a8:
    // 0x2f23a8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2f23a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2f23ac: 0x54430004  bnel        $v0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x2F23ACu;
    {
        const bool branch_taken_0x2f23ac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x2f23ac) {
            ctx->pc = 0x2F23B0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F23ACu;
            // 0x2f23b0: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F23C0u;
            goto label_2f23c0;
        }
    }
    ctx->pc = 0x2F23B4u;
    // 0x2f23b4: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2F23B4u;
    {
        const bool branch_taken_0x2f23b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F23B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F23B4u;
        // 0x2f23b8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f23b4) {
            ctx->pc = 0x2F23C4u;
            goto label_2f23c4;
        }
    }
    ctx->pc = 0x2F23BCu;
label_2f23bc:
    // 0x2f23bc: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x2f23bcu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2f23c0:
    // 0x2f23c0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2f23c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2f23c4:
    // 0x2f23c4: 0x5462000a  bnel        $v1, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x2F23C4u;
    {
        const bool branch_taken_0x2f23c4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2f23c4) {
            ctx->pc = 0x2F23C8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F23C4u;
            // 0x2f23c8: 0x8e6302b0  lw          $v1, 0x2B0($s3) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 688)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F23F0u;
            goto label_2f23f0;
        }
    }
    ctx->pc = 0x2F23CCu;
    // 0x2f23cc: 0x8e630120  lw          $v1, 0x120($s3)
    ctx->pc = 0x2f23ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 288)));
    // 0x2f23d0: 0x8c620010  lw          $v0, 0x10($v1)
    ctx->pc = 0x2f23d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x2f23d4: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x2f23d4u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
    // 0x2f23d8: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2f23d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2f23dc: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x2F23DCu;
    {
        const bool branch_taken_0x2f23dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f23dc) {
            ctx->pc = 0x2F23E0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F23DCu;
            // 0x2f23e0: 0x8e6302b0  lw          $v1, 0x2B0($s3) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 688)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F23F0u;
            goto label_2f23f0;
        }
    }
    ctx->pc = 0x2F23E4u;
    // 0x2f23e4: 0xc4600008  lwc1        $f0, 0x8($v1)
    ctx->pc = 0x2f23e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2f23e8: 0x4600a502  mul.s       $f20, $f20, $f0
    ctx->pc = 0x2f23e8u;
    ctx->f[20] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
    // 0x2f23ec: 0x8e6302b0  lw          $v1, 0x2B0($s3)
    ctx->pc = 0x2f23ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 688)));
label_2f23f0:
    // 0x2f23f0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2f23f0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f23f4: 0xc6600188  lwc1        $f0, 0x188($s3)
    ctx->pc = 0x2f23f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2f23f8: 0x4480a800  mtc1        $zero, $f21
    ctx->pc = 0x2f23f8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x2f23fc: 0xe4600240  swc1        $f0, 0x240($v1)
    ctx->pc = 0x2f23fcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 576), bits); }
    // 0x2f2400: 0x8e6202b0  lw          $v0, 0x2B0($s3)
    ctx->pc = 0x2f2400u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 688)));
    // 0x2f2404: 0xc660018c  lwc1        $f0, 0x18C($s3)
    ctx->pc = 0x2f2404u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 396)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2f2408: 0xe4400244  swc1        $f0, 0x244($v0)
    ctx->pc = 0x2f2408u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 580), bits); }
    // 0x2f240c: 0x8e6302b0  lw          $v1, 0x2B0($s3)
    ctx->pc = 0x2f240cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 688)));
    // 0x2f2410: 0xc6600190  lwc1        $f0, 0x190($s3)
    ctx->pc = 0x2f2410u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 400)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2f2414: 0xe4600248  swc1        $f0, 0x248($v1)
    ctx->pc = 0x2f2414u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 584), bits); }
    // 0x2f2418: 0xc6600194  lwc1        $f0, 0x194($s3)
    ctx->pc = 0x2f2418u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 404)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2f241c: 0x8e6202b0  lw          $v0, 0x2B0($s3)
    ctx->pc = 0x2f241cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 688)));
    // 0x2f2420: 0xe440024c  swc1        $f0, 0x24C($v0)
    ctx->pc = 0x2f2420u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 588), bits); }
    // 0x2f2424: 0x8e6302b0  lw          $v1, 0x2B0($s3)
    ctx->pc = 0x2f2424u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 688)));
    // 0x2f2428: 0xc460024c  lwc1        $f0, 0x24C($v1)
    ctx->pc = 0x2f2428u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 588)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2f242c: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x2f242cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
    // 0x2f2430: 0xe460024c  swc1        $f0, 0x24C($v1)
    ctx->pc = 0x2f2430u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 588), bits); }
    // 0x2f2434: 0xc052dbe  jal         func_14B6F8
    ctx->pc = 0x2F2434u;
    SET_GPR_U32(ctx, 31, 0x2F243Cu);
    ctx->pc = 0x2F2438u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F2434u;
    // 0x2f2438: 0x8e6402b0  lw          $a0, 0x2B0($s3) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 688)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14B6F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14B6F8u, 0x2F2434u, 0x2F243Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F243Cu;
label_2f243c:
    // 0x2f243c: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x2f243cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f2440: 0xc66102bc  lwc1        $f1, 0x2BC($s3)
    ctx->pc = 0x2f2440u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 700)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2f2444: 0xc680038c  lwc1        $f0, 0x38C($s4)
    ctx->pc = 0x2f2444u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 908)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2f2448: 0xc6820390  lwc1        $f2, 0x390($s4)
    ctx->pc = 0x2f2448u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 912)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2f244c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2f244cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2f2450: 0xe680038c  swc1        $f0, 0x38C($s4)
    ctx->pc = 0x2f2450u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 908), bits); }
    // 0x2f2454: 0xc66102c0  lwc1        $f1, 0x2C0($s3)
    ctx->pc = 0x2f2454u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 704)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2f2458: 0x46011080  add.s       $f2, $f2, $f1
    ctx->pc = 0x2f2458u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
    // 0x2f245c: 0xe6820390  swc1        $f2, 0x390($s4)
    ctx->pc = 0x2f245cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 912), bits); }
    // 0x2f2460: 0xc66002cc  lwc1        $f0, 0x2CC($s3)
    ctx->pc = 0x2f2460u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 716)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2f2464: 0x46150032  c.eq.s      $f0, $f21
    ctx->pc = 0x2f2464u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[21])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2f2468: 0x0  nop
    ctx->pc = 0x2f2468u;
    // NOP
    // 0x2f246c: 0x45030010  bc1tl       . + 4 + (0x10 << 2)
    ctx->pc = 0x2F246Cu;
    {
        const bool branch_taken_0x2f246c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2f246c) {
            ctx->pc = 0x2F2470u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F246Cu;
            // 0x2f2470: 0xc66002d0  lwc1        $f0, 0x2D0($s3) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 720)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F24B0u;
            goto label_2f24b0;
        }
    }
    ctx->pc = 0x2F2474u;
    // 0x2f2474: 0xc07dfbc  jal         func_1F7EF0
    ctx->pc = 0x2F2474u;
    SET_GPR_U32(ctx, 31, 0x2F247Cu);
    ctx->pc = 0x2F2478u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F2474u;
    // 0x2f2478: 0xc66c02d4  lwc1        $f12, 0x2D4($s3) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 724)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7EF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F7EF0u, 0x2F2474u, 0x2F247Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F247Cu;
label_2f247c:
    // 0x2f247c: 0xc66202c4  lwc1        $f2, 0x2C4($s3)
    ctx->pc = 0x2f247cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 708)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2f2480: 0xc681038c  lwc1        $f1, 0x38C($s4)
    ctx->pc = 0x2f2480u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 908)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2f2484: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x2f2484u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x2f2488: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x2f2488u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2f248c: 0xe681038c  swc1        $f1, 0x38C($s4)
    ctx->pc = 0x2f248cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 908), bits); }
    // 0x2f2490: 0xc66002d4  lwc1        $f0, 0x2D4($s3)
    ctx->pc = 0x2f2490u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 724)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2f2494: 0xc66102cc  lwc1        $f1, 0x2CC($s3)
    ctx->pc = 0x2f2494u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 716)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2f2498: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2f2498u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2f249c: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x2f249cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    // 0x2f24a0: 0xc07df52  jal         func_1F7D48
    ctx->pc = 0x2F24A0u;
    SET_GPR_U32(ctx, 31, 0x2F24A8u);
    ctx->pc = 0x2F24A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F24A0u;
    // 0x2f24a4: 0xe66002d4  swc1        $f0, 0x2D4($s3) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 724), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7D48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F7D48u, 0x2F24A0u, 0x2F24A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F24A8u;
label_2f24a8:
    // 0x2f24a8: 0xe66002d4  swc1        $f0, 0x2D4($s3)
    ctx->pc = 0x2f24a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 724), bits); }
    // 0x2f24ac: 0xc66002d0  lwc1        $f0, 0x2D0($s3)
    ctx->pc = 0x2f24acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 720)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2f24b0:
    // 0x2f24b0: 0x46150032  c.eq.s      $f0, $f21
    ctx->pc = 0x2f24b0u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[21])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2f24b4: 0x0  nop
    ctx->pc = 0x2f24b4u;
    // NOP
    // 0x2f24b8: 0x45030010  bc1tl       . + 4 + (0x10 << 2)
    ctx->pc = 0x2F24B8u;
    {
        const bool branch_taken_0x2f24b8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2f24b8) {
            ctx->pc = 0x2F24BCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F24B8u;
            // 0x2f24bc: 0xc680038c  lwc1        $f0, 0x38C($s4) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 908)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F24FCu;
            goto label_2f24fc;
        }
    }
    ctx->pc = 0x2F24C0u;
    // 0x2f24c0: 0xc07dfee  jal         func_1F7FB8
    ctx->pc = 0x2F24C0u;
    SET_GPR_U32(ctx, 31, 0x2F24C8u);
    ctx->pc = 0x2F24C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F24C0u;
    // 0x2f24c4: 0xc66c02d8  lwc1        $f12, 0x2D8($s3) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 728)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7FB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F7FB8u, 0x2F24C0u, 0x2F24C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F24C8u;
label_2f24c8:
    // 0x2f24c8: 0xc66202c8  lwc1        $f2, 0x2C8($s3)
    ctx->pc = 0x2f24c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 712)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2f24cc: 0xc6810390  lwc1        $f1, 0x390($s4)
    ctx->pc = 0x2f24ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 912)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2f24d0: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x2f24d0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x2f24d4: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x2f24d4u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2f24d8: 0xe6810390  swc1        $f1, 0x390($s4)
    ctx->pc = 0x2f24d8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 912), bits); }
    // 0x2f24dc: 0xc66002d8  lwc1        $f0, 0x2D8($s3)
    ctx->pc = 0x2f24dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 728)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2f24e0: 0xc66102d0  lwc1        $f1, 0x2D0($s3)
    ctx->pc = 0x2f24e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 720)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2f24e4: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2f24e4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2f24e8: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x2f24e8u;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    // 0x2f24ec: 0xc07df52  jal         func_1F7D48
    ctx->pc = 0x2F24ECu;
    SET_GPR_U32(ctx, 31, 0x2F24F4u);
    ctx->pc = 0x2F24F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F24ECu;
    // 0x2f24f0: 0xe66002d8  swc1        $f0, 0x2D8($s3) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 728), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7D48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F7D48u, 0x2F24ECu, 0x2F24F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F24F4u;
label_2f24f4:
    // 0x2f24f4: 0xe66002d8  swc1        $f0, 0x2D8($s3)
    ctx->pc = 0x2f24f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 728), bits); }
    // 0x2f24f8: 0xc680038c  lwc1        $f0, 0x38C($s4)
    ctx->pc = 0x2f24f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 908)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2f24fc:
    // 0x2f24fc: 0x3c014000  lui         $at, 0x4000
    ctx->pc = 0x2f24fcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16384 << 16));
    // 0x2f2500: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2f2500u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2f2504: 0x0  nop
    ctx->pc = 0x2f2504u;
    // NOP
    // 0x2f2508: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2f2508u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2f250c: 0x0  nop
    ctx->pc = 0x2f250cu;
    // NOP
    // 0x2f2510: 0x45020004  bc1fl       . + 4 + (0x4 << 2)
    ctx->pc = 0x2F2510u;
    {
        const bool branch_taken_0x2f2510 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2f2510) {
            ctx->pc = 0x2F2514u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F2510u;
            // 0x2f2514: 0xc680038c  lwc1        $f0, 0x38C($s4) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 908)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F2524u;
            goto label_2f2524;
        }
    }
    ctx->pc = 0x2F2518u;
    // 0x2f2518: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x2f2518u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x2f251c: 0xe680038c  swc1        $f0, 0x38C($s4)
    ctx->pc = 0x2f251cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 908), bits); }
    // 0x2f2520: 0xc680038c  lwc1        $f0, 0x38C($s4)
    ctx->pc = 0x2f2520u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 908)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2f2524:
    // 0x2f2524: 0x3c01c000  lui         $at, 0xC000
    ctx->pc = 0x2f2524u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49152 << 16));
    // 0x2f2528: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x2f2528u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2f252c: 0x0  nop
    ctx->pc = 0x2f252cu;
    // NOP
    // 0x2f2530: 0x46020034  c.lt.s      $f0, $f2
    ctx->pc = 0x2f2530u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2f2534: 0x0  nop
    ctx->pc = 0x2f2534u;
    // NOP
    // 0x2f2538: 0x45020004  bc1fl       . + 4 + (0x4 << 2)
    ctx->pc = 0x2F2538u;
    {
        const bool branch_taken_0x2f2538 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2f2538) {
            ctx->pc = 0x2F253Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F2538u;
            // 0x2f253c: 0xc6800390  lwc1        $f0, 0x390($s4) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 912)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F254Cu;
            goto label_2f254c;
        }
    }
    ctx->pc = 0x2F2540u;
    // 0x2f2540: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2f2540u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2f2544: 0xe680038c  swc1        $f0, 0x38C($s4)
    ctx->pc = 0x2f2544u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 908), bits); }
    // 0x2f2548: 0xc6800390  lwc1        $f0, 0x390($s4)
    ctx->pc = 0x2f2548u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 912)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2f254c:
    // 0x2f254c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2f254cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2f2550: 0x0  nop
    ctx->pc = 0x2f2550u;
    // NOP
    // 0x2f2554: 0x45020004  bc1fl       . + 4 + (0x4 << 2)
    ctx->pc = 0x2F2554u;
    {
        const bool branch_taken_0x2f2554 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2f2554) {
            ctx->pc = 0x2F2558u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F2554u;
            // 0x2f2558: 0xc6800390  lwc1        $f0, 0x390($s4) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 912)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F2568u;
            goto label_2f2568;
        }
    }
    ctx->pc = 0x2F255Cu;
    // 0x2f255c: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x2f255cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x2f2560: 0xe6800390  swc1        $f0, 0x390($s4)
    ctx->pc = 0x2f2560u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 912), bits); }
    // 0x2f2564: 0xc6800390  lwc1        $f0, 0x390($s4)
    ctx->pc = 0x2f2564u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 912)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2f2568:
    // 0x2f2568: 0x46020034  c.lt.s      $f0, $f2
    ctx->pc = 0x2f2568u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2f256c: 0x0  nop
    ctx->pc = 0x2f256cu;
    // NOP
    // 0x2f2570: 0x45020004  bc1fl       . + 4 + (0x4 << 2)
    ctx->pc = 0x2F2570u;
    {
        const bool branch_taken_0x2f2570 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2f2570) {
            ctx->pc = 0x2F2574u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F2570u;
            // 0x2f2574: 0x926302e9  lbu         $v1, 0x2E9($s3) (Delay Slot)
            SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 745)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F2584u;
            goto label_2f2584;
        }
    }
    ctx->pc = 0x2F2578u;
    // 0x2f2578: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2f2578u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2f257c: 0xe6800390  swc1        $f0, 0x390($s4)
    ctx->pc = 0x2f257cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 912), bits); }
    // 0x2f2580: 0x926302e9  lbu         $v1, 0x2E9($s3)
    ctx->pc = 0x2f2580u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 745)));
label_2f2584:
    // 0x2f2584: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2f2584u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2f2588: 0x14620044  bne         $v1, $v0, . + 4 + (0x44 << 2)
    ctx->pc = 0x2F2588u;
    {
        const bool branch_taken_0x2f2588 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2f2588) {
            ctx->pc = 0x2F269Cu;
            goto label_2f269c;
        }
    }
    ctx->pc = 0x2F2590u;
    // 0x2f2590: 0xc66102f4  lwc1        $f1, 0x2F4($s3)
    ctx->pc = 0x2f2590u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 756)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2f2594: 0x46150832  c.eq.s      $f1, $f21
    ctx->pc = 0x2f2594u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[21])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2f2598: 0x0  nop
    ctx->pc = 0x2f2598u;
    // NOP
    // 0x2f259c: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x2F259Cu;
    {
        const bool branch_taken_0x2f259c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2F25A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F259Cu;
        // 0x2f25a0: 0xc66002f8  lwc1        $f0, 0x2F8($s3) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 760)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f259c) {
            ctx->pc = 0x2F25B4u;
            goto label_2f25b4;
        }
    }
    ctx->pc = 0x2F25A4u;
    // 0x2f25a4: 0x46150032  c.eq.s      $f0, $f21
    ctx->pc = 0x2f25a4u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[21])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2f25a8: 0x0  nop
    ctx->pc = 0x2f25a8u;
    // NOP
    // 0x2f25ac: 0x4501002c  bc1t        . + 4 + (0x2C << 2)
    ctx->pc = 0x2F25ACu;
    {
        const bool branch_taken_0x2f25ac = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x2F25B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F25ACu;
        // 0x2f25b0: 0x27b00020  addiu       $s0, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f25ac) {
            ctx->pc = 0x2F2660u;
            goto label_2f2660;
        }
    }
    ctx->pc = 0x2F25B4u;
label_2f25b4:
    // 0x2f25b4: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x2f25b4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2f25b8: 0x3c01bf00  lui         $at, 0xBF00
    ctx->pc = 0x2f25b8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48896 << 16));
    // 0x2f25bc: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x2f25bcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x2f25c0: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x2f25c0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x2f25c4: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x2f25c4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x2f25c8: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x2f25c8u;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    // 0x2f25cc: 0xc07df52  jal         func_1F7D48
    ctx->pc = 0x2F25CCu;
    SET_GPR_U32(ctx, 31, 0x2F25D4u);
    ctx->pc = 0x2F25D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F25CCu;
    // 0x2f25d0: 0xe66002f4  swc1        $f0, 0x2F4($s3) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 756), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7D48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F7D48u, 0x2F25CCu, 0x2F25D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F25D4u;
label_2f25d4:
    // 0x2f25d4: 0x27b20060  addiu       $s2, $sp, 0x60
    ctx->pc = 0x2f25d4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x2f25d8: 0xe66002f4  swc1        $f0, 0x2F4($s3)
    ctx->pc = 0x2f25d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 756), bits); }
    // 0x2f25dc: 0x4600a346  mov.s       $f13, $f20
    ctx->pc = 0x2f25dcu;
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
    // 0x2f25e0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2f25e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f25e4: 0xc052080  jal         func_148200
    ctx->pc = 0x2F25E4u;
    SET_GPR_U32(ctx, 31, 0x2F25ECu);
    ctx->pc = 0x2F25E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F25E4u;
    // 0x2f25e8: 0x4600ab06  mov.s       $f12, $f21 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x148200u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x148200u, 0x2F25E4u, 0x2F25ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F25ECu;
label_2f25ec:
    // 0x2f25ec: 0x27b100a0  addiu       $s1, $sp, 0xA0
    ctx->pc = 0x2f25ecu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x2f25f0: 0xc66c02f4  lwc1        $f12, 0x2F4($s3)
    ctx->pc = 0x2f25f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 756)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2f25f4: 0xc0520b0  jal         func_1482C0
    ctx->pc = 0x2F25F4u;
    SET_GPR_U32(ctx, 31, 0x2F25FCu);
    ctx->pc = 0x2F25F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F25F4u;
    // 0x2f25f8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1482C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1482C0u, 0x2F25F4u, 0x2F25FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F25FCu;
label_2f25fc:
    // 0x2f25fc: 0x27b000e0  addiu       $s0, $sp, 0xE0
    ctx->pc = 0x2f25fcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x2f2600: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x2f2600u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x2f2604: 0x4600ab46  mov.s       $f13, $f21
    ctx->pc = 0x2f2604u;
    ctx->f[13] = FPU_MOV_S(ctx->f[21]);
    // 0x2f2608: 0xc052080  jal         func_148200
    ctx->pc = 0x2F2608u;
    SET_GPR_U32(ctx, 31, 0x2F2610u);
    ctx->pc = 0x2F260Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F2608u;
    // 0x2f260c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x148200u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x148200u, 0x2F2608u, 0x2F2610u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F2610u;
label_2f2610:
    // 0x2f2610: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x2f2610u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f2614: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2f2614u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f2618: 0xc051d52  jal         func_147548
    ctx->pc = 0x2F2618u;
    SET_GPR_U32(ctx, 31, 0x2F2620u);
    ctx->pc = 0x2F261Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F2618u;
    // 0x2f261c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x147548u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x147548u, 0x2F2618u, 0x2F2620u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F2620u;
label_2f2620:
    // 0x2f2620: 0x27b10020  addiu       $s1, $sp, 0x20
    ctx->pc = 0x2f2620u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2f2624: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2f2624u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f2628: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x2f2628u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f262c: 0xc051d52  jal         func_147548
    ctx->pc = 0x2F262Cu;
    SET_GPR_U32(ctx, 31, 0x2F2634u);
    ctx->pc = 0x2F2630u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F262Cu;
    // 0x2f2630: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x147548u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x147548u, 0x2F262Cu, 0x2F2634u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F2634u;
label_2f2634:
    // 0x2f2634: 0x27b00120  addiu       $s0, $sp, 0x120
    ctx->pc = 0x2f2634u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
    // 0x2f2638: 0xc66c02ec  lwc1        $f12, 0x2EC($s3)
    ctx->pc = 0x2f2638u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 748)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2f263c: 0xc66d02f0  lwc1        $f13, 0x2F0($s3)
    ctx->pc = 0x2f263cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 752)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x2f2640: 0xc052094  jal         func_148250
    ctx->pc = 0x2F2640u;
    SET_GPR_U32(ctx, 31, 0x2F2648u);
    ctx->pc = 0x2F2644u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F2640u;
    // 0x2f2644: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x148250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x148250u, 0x2F2640u, 0x2F2648u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F2648u;
label_2f2648:
    // 0x2f2648: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2f2648u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f264c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2f264cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f2650: 0xc051d52  jal         func_147548
    ctx->pc = 0x2F2650u;
    SET_GPR_U32(ctx, 31, 0x2F2658u);
    ctx->pc = 0x2F2654u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F2650u;
    // 0x2f2654: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x147548u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x147548u, 0x2F2650u, 0x2F2658u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F2658u;
label_2f2658:
    // 0x2f2658: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x2F2658u;
    {
        const bool branch_taken_0x2f2658 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F265Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F2658u;
        // 0x2f265c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f2658) {
            ctx->pc = 0x2F2674u;
            goto label_2f2674;
        }
    }
    ctx->pc = 0x2F2660u;
label_2f2660:
    // 0x2f2660: 0xc66c02ec  lwc1        $f12, 0x2EC($s3)
    ctx->pc = 0x2f2660u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 748)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2f2664: 0xc66d02f0  lwc1        $f13, 0x2F0($s3)
    ctx->pc = 0x2f2664u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 752)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x2f2668: 0xc052094  jal         func_148250
    ctx->pc = 0x2F2668u;
    SET_GPR_U32(ctx, 31, 0x2F2670u);
    ctx->pc = 0x2F266Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F2668u;
    // 0x2f266c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x148250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x148250u, 0x2F2668u, 0x2F2670u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F2670u;
label_2f2670:
    // 0x2f2670: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2f2670u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2f2674:
    // 0x2f2674: 0xc681038c  lwc1        $f1, 0x38C($s4)
    ctx->pc = 0x2f2674u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 908)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2f2678: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2f2678u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f267c: 0xc7a00040  lwc1        $f0, 0x40($sp)
    ctx->pc = 0x2f267cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2f2680: 0xc7a20044  lwc1        $f2, 0x44($sp)
    ctx->pc = 0x2f2680u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2f2684: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2f2684u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2f2688: 0xe7a00040  swc1        $f0, 0x40($sp)
    ctx->pc = 0x2f2688u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x2f268c: 0xc6810390  lwc1        $f1, 0x390($s4)
    ctx->pc = 0x2f268cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 912)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2f2690: 0x46011080  add.s       $f2, $f2, $f1
    ctx->pc = 0x2f2690u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
    // 0x2f2694: 0xc052474  jal         func_1491D0
    ctx->pc = 0x2F2694u;
    SET_GPR_U32(ctx, 31, 0x2F269Cu);
    ctx->pc = 0x2F2698u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F2694u;
    // 0x2f2698: 0xe7a20044  swc1        $f2, 0x44($sp) (Delay Slot)
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1491D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1491D0u, 0x2F2694u, 0x2F269Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F269Cu;
label_2f269c:
    // 0x2f269c: 0xc052d8e  jal         func_14B638
    ctx->pc = 0x2F269Cu;
    SET_GPR_U32(ctx, 31, 0x2F26A4u);
    ctx->pc = 0x2F26A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F269Cu;
    // 0x2f26a0: 0x8e6402b0  lw          $a0, 0x2B0($s3) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 688)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14B638u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14B638u, 0x2F269Cu, 0x2F26A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F26A4u;
label_2f26a4:
    // 0x2f26a4: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2f26a4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f26a8: 0x2e220002  sltiu       $v0, $s1, 0x2
    ctx->pc = 0x2f26a8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x2f26ac: 0x14400020  bnez        $v0, . + 4 + (0x20 << 2)
    ctx->pc = 0x2F26ACu;
    {
        const bool branch_taken_0x2f26ac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F26B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F26ACu;
        // 0x2f26b0: 0x7bb001b0  lq          $s0, 0x1B0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 432)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f26ac) {
            ctx->pc = 0x2F2730u;
            goto label_2f2730;
        }
    }
    ctx->pc = 0x2F26B4u;
    // 0x2f26b4: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x2f26b4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2f26b8: 0x211102b  sltu        $v0, $s0, $s1
    ctx->pc = 0x2f26b8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
    // 0x2f26bc: 0x1040001b  beqz        $v0, . + 4 + (0x1B << 2)
    ctx->pc = 0x2F26BCu;
    {
        const bool branch_taken_0x2f26bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F26C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F26BCu;
        // 0x2f26c0: 0x24120001  addiu       $s2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f26bc) {
            ctx->pc = 0x2F272Cu;
            goto label_2f272c;
        }
    }
    ctx->pc = 0x2F26C4u;
    // 0x2f26c4: 0x8e6402b0  lw          $a0, 0x2B0($s3)
    ctx->pc = 0x2f26c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 688)));
label_2f26c8:
    // 0x2f26c8: 0xc052dbe  jal         func_14B6F8
    ctx->pc = 0x2F26C8u;
    SET_GPR_U32(ctx, 31, 0x2F26D0u);
    ctx->pc = 0x2F26CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F26C8u;
    // 0x2f26cc: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14B6F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14B6F8u, 0x2F26C8u, 0x2F26D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F26D0u;
label_2f26d0:
    // 0x2f26d0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2f26d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f26d4: 0x926202e9  lbu         $v0, 0x2E9($s3)
    ctx->pc = 0x2f26d4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 745)));
    // 0x2f26d8: 0x54520005  bnel        $v0, $s2, . + 4 + (0x5 << 2)
    ctx->pc = 0x2F26D8u;
    {
        const bool branch_taken_0x2f26d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 18));
        if (branch_taken_0x2f26d8) {
            ctx->pc = 0x2F26DCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F26D8u;
            // 0x2f26dc: 0xc680038c  lwc1        $f0, 0x38C($s4) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 908)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F26F0u;
            goto label_2f26f0;
        }
    }
    ctx->pc = 0x2F26E0u;
    // 0x2f26e0: 0xc052474  jal         func_1491D0
    ctx->pc = 0x2F26E0u;
    SET_GPR_U32(ctx, 31, 0x2F26E8u);
    ctx->pc = 0x2F26E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F26E0u;
    // 0x2f26e4: 0x27a50020  addiu       $a1, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1491D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1491D0u, 0x2F26E0u, 0x2F26E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F26E8u;
label_2f26e8:
    // 0x2f26e8: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x2F26E8u;
    {
        const bool branch_taken_0x2f26e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F26ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F26E8u;
        // 0x2f26ec: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f26e8) {
            ctx->pc = 0x2F2700u;
            goto label_2f2700;
        }
    }
    ctx->pc = 0x2F26F0u;
label_2f26f0:
    // 0x2f26f0: 0xe480038c  swc1        $f0, 0x38C($a0)
    ctx->pc = 0x2f26f0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 908), bits); }
    // 0x2f26f4: 0xc6810390  lwc1        $f1, 0x390($s4)
    ctx->pc = 0x2f26f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 912)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2f26f8: 0xe4810390  swc1        $f1, 0x390($a0)
    ctx->pc = 0x2f26f8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 912), bits); }
    // 0x2f26fc: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x2f26fcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_2f2700:
    // 0x2f2700: 0x211102b  sltu        $v0, $s0, $s1
    ctx->pc = 0x2f2700u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
    // 0x2f2704: 0x5440fff0  bnel        $v0, $zero, . + 4 + (-0x10 << 2)
    ctx->pc = 0x2F2704u;
    {
        const bool branch_taken_0x2f2704 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2f2704) {
            ctx->pc = 0x2F2708u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F2704u;
            // 0x2f2708: 0x8e6402b0  lw          $a0, 0x2B0($s3) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 688)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F26C8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2f26c8;
        }
    }
    ctx->pc = 0x2F270Cu;
    // 0x2f270c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2F270Cu;
    {
        const bool branch_taken_0x2f270c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F2710u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F270Cu;
        // 0x2f2710: 0x7bb001b0  lq          $s0, 0x1B0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 432)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f270c) {
            ctx->pc = 0x2F2730u;
            goto label_2f2730;
        }
    }
    ctx->pc = 0x2F2714u;
label_2f2714:
    // 0x2f2714: 0x8e6402b0  lw          $a0, 0x2B0($s3)
    ctx->pc = 0x2f2714u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 688)));
    // 0x2f2718: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2F2718u;
    {
        const bool branch_taken_0x2f2718 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F271Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F2718u;
        // 0x2f271c: 0x7bb001b0  lq          $s0, 0x1B0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 432)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f2718) {
            ctx->pc = 0x2F2730u;
            goto label_2f2730;
        }
    }
    ctx->pc = 0x2F2720u;
    // 0x2f2720: 0x8c820250  lw          $v0, 0x250($a0)
    ctx->pc = 0x2f2720u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 592)));
    // 0x2f2724: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x2f2724u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
    // 0x2f2728: 0xac820250  sw          $v0, 0x250($a0)
    ctx->pc = 0x2f2728u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 592), GPR_U32(ctx, 2));
label_2f272c:
    // 0x2f272c: 0x7bb001b0  lq          $s0, 0x1B0($sp)
    ctx->pc = 0x2f272cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 432)));
label_2f2730:
    // 0x2f2730: 0x7bb101a0  lq          $s1, 0x1A0($sp)
    ctx->pc = 0x2f2730u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 416)));
    // 0x2f2734: 0x7bb20190  lq          $s2, 0x190($sp)
    ctx->pc = 0x2f2734u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 400)));
    // 0x2f2738: 0x7bb30180  lq          $s3, 0x180($sp)
    ctx->pc = 0x2f2738u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 384)));
    // 0x2f273c: 0x7bb40170  lq          $s4, 0x170($sp)
    ctx->pc = 0x2f273cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 368)));
    // 0x2f2740: 0xdfbf0160  ld          $ra, 0x160($sp)
    ctx->pc = 0x2f2740u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 352)));
    // 0x2f2744: 0xc7b501c8  lwc1        $f21, 0x1C8($sp)
    ctx->pc = 0x2f2744u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 456)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x2f2748: 0xc7b401c0  lwc1        $f20, 0x1C0($sp)
    ctx->pc = 0x2f2748u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 448)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2f274c: 0x3e00008  jr          $ra
    ctx->pc = 0x2F274Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F2750u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F274Cu;
        // 0x2f2750: 0x27bd01d0  addiu       $sp, $sp, 0x1D0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 464));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F274Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2F2754u;
    // 0x2f2754: 0x0  nop
    ctx->pc = 0x2f2754u;
    // NOP
    ctx->pc = 0x2f2758u;
}
