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

// Function: func_001F0498
// Address: 0x1f0498 - 0x1f0530
void func_001F0498_0x1f0498(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_001F0498_0x1f0498");
#endif

    switch (ctx->pc) {
        case 0x1f0498u: goto label_1f0498;
        case 0x1f049cu: goto label_1f049c;
        case 0x1f04a0u: goto label_1f04a0;
        case 0x1f04a4u: goto label_1f04a4;
        case 0x1f04a8u: goto label_1f04a8;
        case 0x1f04acu: goto label_1f04ac;
        case 0x1f04b0u: goto label_1f04b0;
        case 0x1f04b4u: goto label_1f04b4;
        case 0x1f04b8u: goto label_1f04b8;
        case 0x1f04bcu: goto label_1f04bc;
        case 0x1f04c0u: goto label_1f04c0;
        case 0x1f04c4u: goto label_1f04c4;
        case 0x1f04c8u: goto label_1f04c8;
        case 0x1f04ccu: goto label_1f04cc;
        case 0x1f04d0u: goto label_1f04d0;
        case 0x1f04d4u: goto label_1f04d4;
        case 0x1f04d8u: goto label_1f04d8;
        case 0x1f04dcu: goto label_1f04dc;
        case 0x1f04e0u: goto label_1f04e0;
        case 0x1f04e4u: goto label_1f04e4;
        case 0x1f04e8u: goto label_1f04e8;
        case 0x1f04ecu: goto label_1f04ec;
        case 0x1f04f0u: goto label_1f04f0;
        case 0x1f04f4u: goto label_1f04f4;
        case 0x1f04f8u: goto label_1f04f8;
        case 0x1f04fcu: goto label_1f04fc;
        case 0x1f0500u: goto label_1f0500;
        case 0x1f0504u: goto label_1f0504;
        case 0x1f0508u: goto label_1f0508;
        case 0x1f050cu: goto label_1f050c;
        case 0x1f0510u: goto label_1f0510;
        case 0x1f0514u: goto label_1f0514;
        case 0x1f0518u: goto label_1f0518;
        case 0x1f051cu: goto label_1f051c;
        case 0x1f0520u: goto label_1f0520;
        case 0x1f0524u: goto label_1f0524;
        case 0x1f0528u: goto label_1f0528;
        case 0x1f052cu: goto label_1f052c;
        default: break;
    }

    ctx->pc = 0x1f0498u;

label_1f0498:
    // 0x1f0498: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1f0498u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_1f049c:
    // 0x1f049c: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x1f049cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1f04a0:
    // 0x1f04a0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1f04a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_1f04a4:
    // 0x1f04a4: 0x3405ffff  ori         $a1, $zero, 0xFFFF
    ctx->pc = 0x1f04a4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
label_1f04a8:
    // 0x1f04a8: 0xe7b40030  swc1        $f20, 0x30($sp)
    ctx->pc = 0x1f04a8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
label_1f04ac:
    // 0x1f04ac: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x1f04acu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_1f04b0:
    // 0x1f04b0: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x1f04b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
label_1f04b4:
    // 0x1f04b4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1f04b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1f04b8:
    // 0x1f04b8: 0xc0c3ea6  jal         func_30FA98
label_1f04bc:
    if (ctx->pc == 0x1F04BCu) {
        ctx->pc = 0x1F04BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F04B8u;
        // 0x1f04bc: 0x46006506  mov.s       $f20, $f12 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F04C0u;
        goto label_1f04c0;
    }
    ctx->pc = 0x1F04B8u;
    SET_GPR_U32(ctx, 31, 0x1F04C0u);
    ctx->pc = 0x1F04BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F04B8u;
    // 0x1f04bc: 0x46006506  mov.s       $f20, $f12 (Delay Slot)
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x30FA98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30FA98u, 0x1F04B8u, 0x1F04C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F04C0u;
label_1f04c0:
    // 0x1f04c0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1f04c0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1f04c4:
    // 0x1f04c4: 0x12000011  beqz        $s0, . + 4 + (0x11 << 2)
label_1f04c8:
    if (ctx->pc == 0x1F04C8u) {
        ctx->pc = 0x1F04C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F04C4u;
        // 0x1f04c8: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F04CCu;
        goto label_1f04cc;
    }
    ctx->pc = 0x1F04C4u;
    {
        const bool branch_taken_0x1f04c4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F04C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F04C4u;
        // 0x1f04c8: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f04c4) {
            ctx->pc = 0x1F050Cu;
            goto label_1f050c;
        }
    }
    ctx->pc = 0x1F04CCu;
label_1f04cc:
    // 0x1f04cc: 0x8e030214  lw          $v1, 0x214($s0)
    ctx->pc = 0x1f04ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 532)));
label_1f04d0:
    // 0x1f04d0: 0x84640040  lh          $a0, 0x40($v1)
    ctx->pc = 0x1f04d0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 64)));
label_1f04d4:
    // 0x1f04d4: 0x8c620044  lw          $v0, 0x44($v1)
    ctx->pc = 0x1f04d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 68)));
label_1f04d8:
    // 0x1f04d8: 0x40f809  jalr        $v0
label_1f04dc:
    if (ctx->pc == 0x1F04DCu) {
        ctx->pc = 0x1F04DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F04D8u;
        // 0x1f04dc: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F04E0u;
        goto label_1f04e0;
    }
    ctx->pc = 0x1F04D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1F04E0u);
        ctx->pc = 0x1F04DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F04D8u;
        // 0x1f04dc: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F04D8u, 0x1F04E0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1F04E0u;
label_1f04e0:
    // 0x1f04e0: 0x8e0200f0  lw          $v0, 0xF0($s0)
    ctx->pc = 0x1f04e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 240)));
label_1f04e4:
    // 0x1f04e4: 0x50510008  beql        $v0, $s1, . + 4 + (0x8 << 2)
label_1f04e8:
    if (ctx->pc == 0x1F04E8u) {
        ctx->pc = 0x1F04E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F04E4u;
        // 0x1f04e8: 0xe6140104  swc1        $f20, 0x104($s0) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 260), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F04ECu;
        goto label_1f04ec;
    }
    ctx->pc = 0x1F04E4u;
    {
        const bool branch_taken_0x1f04e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 17));
        if (branch_taken_0x1f04e4) {
            ctx->pc = 0x1F04E8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F04E4u;
            // 0x1f04e8: 0xe6140104  swc1        $f20, 0x104($s0) (Delay Slot)
            { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 260), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F0508u;
            goto label_1f0508;
        }
    }
    ctx->pc = 0x1F04ECu;
label_1f04ec:
    // 0x1f04ec: 0xc6200000  lwc1        $f0, 0x0($s1)
    ctx->pc = 0x1f04ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1f04f0:
    // 0x1f04f0: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x1f04f0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
label_1f04f4:
    // 0x1f04f4: 0xc6210004  lwc1        $f1, 0x4($s1)
    ctx->pc = 0x1f04f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1f04f8:
    // 0x1f04f8: 0xe4410004  swc1        $f1, 0x4($v0)
    ctx->pc = 0x1f04f8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
label_1f04fc:
    // 0x1f04fc: 0xc6200008  lwc1        $f0, 0x8($s1)
    ctx->pc = 0x1f04fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1f0500:
    // 0x1f0500: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x1f0500u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
label_1f0504:
    // 0x1f0504: 0xe6140104  swc1        $f20, 0x104($s0)
    ctx->pc = 0x1f0504u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 260), bits); }
label_1f0508:
    // 0x1f0508: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1f0508u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1f050c:
    // 0x1f050c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1f050cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1f0510:
    // 0x1f0510: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x1f0510u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1f0514:
    // 0x1f0514: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1f0514u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1f0518:
    // 0x1f0518: 0xc7b40030  lwc1        $f20, 0x30($sp)
    ctx->pc = 0x1f0518u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_1f051c:
    // 0x1f051c: 0x3e00008  jr          $ra
label_1f0520:
    if (ctx->pc == 0x1F0520u) {
        ctx->pc = 0x1F0520u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F051Cu;
        // 0x1f0520: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F0524u;
        goto label_1f0524;
    }
    ctx->pc = 0x1F051Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F0520u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F051Cu;
        // 0x1f0520: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F051Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F0524u;
label_1f0524:
    // 0x1f0524: 0x0  nop
    ctx->pc = 0x1f0524u;
    // NOP
label_1f0528:
    // 0x1f0528: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x1f0528u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_1f052c:
    // 0x1f052c: 0x0  nop
    ctx->pc = 0x1f052cu;
    // NOP
    ctx->pc = 0x1f0530u;
}
