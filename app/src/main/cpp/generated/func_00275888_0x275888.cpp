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

// Function: func_00275888
// Address: 0x275888 - 0x275978
void func_00275888_0x275888(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00275888_0x275888");
#endif

    switch (ctx->pc) {
        case 0x2758ccu: goto label_2758cc;
        case 0x2758d8u: goto label_2758d8;
        case 0x275908u: goto label_275908;
        case 0x275918u: goto label_275918;
        case 0x275950u: goto label_275950;
        default: break;
    }

    ctx->pc = 0x275888u;

    // 0x275888: 0x27bdff10  addiu       $sp, $sp, -0xF0
    ctx->pc = 0x275888u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967056));
    // 0x27588c: 0x7fb100c0  sq          $s1, 0xC0($sp)
    ctx->pc = 0x27588cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 17));
    // 0x275890: 0x7fb200b0  sq          $s2, 0xB0($sp)
    ctx->pc = 0x275890u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 18));
    // 0x275894: 0x27b10030  addiu       $s1, $sp, 0x30
    ctx->pc = 0x275894u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x275898: 0xe7b400e0  swc1        $f20, 0xE0($sp)
    ctx->pc = 0x275898u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 224), bits); }
    // 0x27589c: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x27589cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2758a0: 0x46006506  mov.s       $f20, $f12
    ctx->pc = 0x2758a0u;
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    // 0x2758a4: 0x7fb000d0  sq          $s0, 0xD0($sp)
    ctx->pc = 0x2758a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 16));
    // 0x2758a8: 0x7fb300a0  sq          $s3, 0xA0($sp)
    ctx->pc = 0x2758a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 19));
    // 0x2758ac: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x2758acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x2758b0: 0xfba00030  sqc2        $vf0, 0x30($sp)
    ctx->pc = 0x2758b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x2758b4: 0xfba00040  sqc2        $vf0, 0x40($sp)
    ctx->pc = 0x2758b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x2758b8: 0x27b00050  addiu       $s0, $sp, 0x50
    ctx->pc = 0x2758b8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x2758bc: 0xc64c0104  lwc1        $f12, 0x104($s2)
    ctx->pc = 0x2758bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2758c0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2758c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2758c4: 0xc051e62  jal         func_147988
    ctx->pc = 0x2758C4u;
    SET_GPR_U32(ctx, 31, 0x2758CCu);
    ctx->pc = 0x2758C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2758C4u;
    // 0x2758c8: 0x24130001  addiu       $s3, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x147988u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x147988u, 0x2758C4u, 0x2758CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2758CCu;
label_2758cc:
    // 0x2758cc: 0x8e4500f0  lw          $a1, 0xF0($s2)
    ctx->pc = 0x2758ccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 240)));
    // 0x2758d0: 0xc051f10  jal         func_147C40
    ctx->pc = 0x2758D0u;
    SET_GPR_U32(ctx, 31, 0x2758D8u);
    ctx->pc = 0x2758D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2758D0u;
    // 0x2758d4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x147C40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x147C40u, 0x2758D0u, 0x2758D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2758D8u;
label_2758d8:
    // 0x2758d8: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x2758d8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x2758dc: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2758dcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2758e0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2758e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2758e4: 0xe7b40048  swc1        $f20, 0x48($sp)
    ctx->pc = 0x2758e4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x2758e8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2758e8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2758ec: 0xe7a00044  swc1        $f0, 0x44($sp)
    ctx->pc = 0x2758ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
    // 0x2758f0: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x2758f0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2758f4: 0xafa00030  sw          $zero, 0x30($sp)
    ctx->pc = 0x2758f4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 0));
    // 0x2758f8: 0xe7a00034  swc1        $f0, 0x34($sp)
    ctx->pc = 0x2758f8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x2758fc: 0xafa00038  sw          $zero, 0x38($sp)
    ctx->pc = 0x2758fcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 0));
    // 0x275900: 0xc0c28ac  jal         func_30A2B0
    ctx->pc = 0x275900u;
    SET_GPR_U32(ctx, 31, 0x275908u);
    ctx->pc = 0x275904u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x275900u;
    // 0x275904: 0xafa00040  sw          $zero, 0x40($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30A2B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30A2B0u, 0x275900u, 0x275908u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x275908u;
label_275908:
    // 0x275908: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x275908u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x27590c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x27590cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x275910: 0xc0c28ac  jal         func_30A2B0
    ctx->pc = 0x275910u;
    SET_GPR_U32(ctx, 31, 0x275918u);
    ctx->pc = 0x275914u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x275910u;
    // 0x275914: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30A2B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30A2B0u, 0x275910u, 0x275918u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x275918u;
label_275918:
    // 0x275918: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x275918u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27591c: 0xafb30020  sw          $s3, 0x20($sp)
    ctx->pc = 0x27591cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 19));
    // 0x275920: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x275920u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x275924: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x275924u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x275928: 0xafa00008  sw          $zero, 0x8($sp)
    ctx->pc = 0x275928u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
    // 0x27592c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x27592cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x275930: 0xafa00010  sw          $zero, 0x10($sp)
    ctx->pc = 0x275930u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 0));
    // 0x275934: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x275934u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x275938: 0xafa00018  sw          $zero, 0x18($sp)
    ctx->pc = 0x275938u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 0));
    // 0x27593c: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x27593cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x275940: 0x24090124  addiu       $t1, $zero, 0x124
    ctx->pc = 0x275940u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 292));
    // 0x275944: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x275944u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x275948: 0xc04c784  jal         func_131E10
    ctx->pc = 0x275948u;
    SET_GPR_U32(ctx, 31, 0x275950u);
    ctx->pc = 0x27594Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x275948u;
    // 0x27594c: 0x240b0001  addiu       $t3, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x131E10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x131E10u, 0x275948u, 0x275950u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x275950u;
label_275950:
    // 0x275950: 0x2980a  movz        $s3, $zero, $v0
    ctx->pc = 0x275950u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 19, GPR_VEC(ctx, 0));
    // 0x275954: 0x7bb000d0  lq          $s0, 0xD0($sp)
    ctx->pc = 0x275954u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x275958: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x275958u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27595c: 0x7bb100c0  lq          $s1, 0xC0($sp)
    ctx->pc = 0x27595cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x275960: 0x7bb200b0  lq          $s2, 0xB0($sp)
    ctx->pc = 0x275960u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x275964: 0x7bb300a0  lq          $s3, 0xA0($sp)
    ctx->pc = 0x275964u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x275968: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x275968u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x27596c: 0xc7b400e0  lwc1        $f20, 0xE0($sp)
    ctx->pc = 0x27596cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x275970: 0x3e00008  jr          $ra
    ctx->pc = 0x275970u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x275974u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x275970u;
        // 0x275974: 0x27bd00f0  addiu       $sp, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x275970u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x275978u;
}
