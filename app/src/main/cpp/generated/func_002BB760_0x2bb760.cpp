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

// Function: func_002BB760
// Address: 0x2bb760 - 0x2bb868
void func_002BB760_0x2bb760(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_002BB760_0x2bb760");
#endif

    switch (ctx->pc) {
        case 0x2bb7a8u: goto label_2bb7a8;
        case 0x2bb7d0u: goto label_2bb7d0;
        case 0x2bb7e8u: goto label_2bb7e8;
        case 0x2bb830u: goto label_2bb830;
        default: break;
    }

    ctx->pc = 0x2bb760u;

    // 0x2bb760: 0x27bdfed0  addiu       $sp, $sp, -0x130
    ctx->pc = 0x2bb760u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966992));
    // 0x2bb764: 0x24030007  addiu       $v1, $zero, 0x7
    ctx->pc = 0x2bb764u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x2bb768: 0x7fb500c0  sq          $s5, 0xC0($sp)
    ctx->pc = 0x2bb768u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 21));
    // 0x2bb76c: 0x3a0102d  daddu       $v0, $sp, $zero
    ctx->pc = 0x2bb76cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bb770: 0x7fb600b0  sq          $s6, 0xB0($sp)
    ctx->pc = 0x2bb770u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 22));
    // 0x2bb774: 0xa0a82d  daddu       $s5, $a1, $zero
    ctx->pc = 0x2bb774u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bb778: 0x7fb400d0  sq          $s4, 0xD0($sp)
    ctx->pc = 0x2bb778u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 20));
    // 0x2bb77c: 0x80b02d  daddu       $s6, $a0, $zero
    ctx->pc = 0x2bb77cu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bb780: 0xe7b40120  swc1        $f20, 0x120($sp)
    ctx->pc = 0x2bb780u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 288), bits); }
    // 0x2bb784: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x2bb784u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x2bb788: 0x7fb00110  sq          $s0, 0x110($sp)
    ctx->pc = 0x2bb788u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 272), GPR_VEC(ctx, 16));
    // 0x2bb78c: 0x46006506  mov.s       $f20, $f12
    ctx->pc = 0x2bb78cu;
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    // 0x2bb790: 0x7fb10100  sq          $s1, 0x100($sp)
    ctx->pc = 0x2bb790u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), GPR_VEC(ctx, 17));
    // 0x2bb794: 0x27b40080  addiu       $s4, $sp, 0x80
    ctx->pc = 0x2bb794u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x2bb798: 0x7fb200f0  sq          $s2, 0xF0($sp)
    ctx->pc = 0x2bb798u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 18));
    // 0x2bb79c: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x2bb79cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2bb7a0: 0x7fb300e0  sq          $s3, 0xE0($sp)
    ctx->pc = 0x2bb7a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 19));
    // 0x2bb7a4: 0xffbf00a0  sd          $ra, 0xA0($sp)
    ctx->pc = 0x2bb7a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 31));
label_2bb7a8:
    // 0x2bb7a8: 0xf8400000  sqc2        $vf0, 0x0($v0)
    ctx->pc = 0x2bb7a8u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x2bb7ac: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x2bb7acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x2bb7b0: 0x0  nop
    ctx->pc = 0x2bb7b0u;
    // NOP
    // 0x2bb7b4: 0x0  nop
    ctx->pc = 0x2bb7b4u;
    // NOP
    // 0x2bb7b8: 0x1465fffb  bne         $v1, $a1, . + 4 + (-0x5 << 2)
    ctx->pc = 0x2BB7B8u;
    {
        const bool branch_taken_0x2bb7b8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 5));
        ctx->pc = 0x2BB7BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BB7B8u;
        // 0x2bb7bc: 0x24420010  addiu       $v0, $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bb7b8) {
            ctx->pc = 0x2BB7A8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2bb7a8;
        }
    }
    ctx->pc = 0x2BB7C0u;
    // 0x2bb7c0: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x2bb7c0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bb7c4: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x2bb7c4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bb7c8: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x2bb7c8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bb7cc: 0x3a0802d  daddu       $s0, $sp, $zero
    ctx->pc = 0x2bb7ccu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_2bb7d0:
    // 0x2bb7d0: 0xda240000  lqc2        $vf4, 0x0($s1)
    ctx->pc = 0x2bb7d0u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2bb7d4: 0xfba40090  sqc2        $vf4, 0x90($sp)
    ctx->pc = 0x2bb7d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x2bb7d8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2bb7d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bb7dc: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x2bb7dcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bb7e0: 0xc0c28ac  jal         func_30A2B0
    ctx->pc = 0x2BB7E0u;
    SET_GPR_U32(ctx, 31, 0x2BB7E8u);
    ctx->pc = 0x2BB7E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BB7E0u;
    // 0x2bb7e4: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30A2B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30A2B0u, 0x2BB7E0u, 0x2BB7E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BB7E8u;
label_2bb7e8:
    // 0x2bb7e8: 0xda440000  lqc2        $vf4, 0x0($s2)
    ctx->pc = 0x2bb7e8u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x2bb7ec: 0xfba40080  sqc2        $vf4, 0x80($sp)
    ctx->pc = 0x2bb7ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x2bb7f0: 0x12140006  beq         $s0, $s4, . + 4 + (0x6 << 2)
    ctx->pc = 0x2BB7F0u;
    {
        const bool branch_taken_0x2bb7f0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 20));
        ctx->pc = 0x2BB7F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BB7F0u;
        // 0x2bb7f4: 0xc7a00080  lwc1        $f0, 0x80($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bb7f0) {
            ctx->pc = 0x2BB80Cu;
            goto label_2bb80c;
        }
    }
    ctx->pc = 0x2BB7F8u;
    // 0x2bb7f8: 0xe6000000  swc1        $f0, 0x0($s0)
    ctx->pc = 0x2bb7f8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
    // 0x2bb7fc: 0xc7a10084  lwc1        $f1, 0x84($sp)
    ctx->pc = 0x2bb7fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2bb800: 0xe6010004  swc1        $f1, 0x4($s0)
    ctx->pc = 0x2bb800u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
    // 0x2bb804: 0xc7a00088  lwc1        $f0, 0x88($sp)
    ctx->pc = 0x2bb804u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2bb808: 0xe6000008  swc1        $f0, 0x8($s0)
    ctx->pc = 0x2bb808u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
label_2bb80c:
    // 0x2bb80c: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x2bb80cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x2bb810: 0x26100010  addiu       $s0, $s0, 0x10
    ctx->pc = 0x2bb810u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x2bb814: 0x2e620008  sltiu       $v0, $s3, 0x8
    ctx->pc = 0x2bb814u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
    // 0x2bb818: 0x1440ffed  bnez        $v0, . + 4 + (-0x13 << 2)
    ctx->pc = 0x2BB818u;
    {
        const bool branch_taken_0x2bb818 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2BB81Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BB818u;
        // 0x2bb81c: 0x26310010  addiu       $s1, $s1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bb818) {
            ctx->pc = 0x2BB7D0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2bb7d0;
        }
    }
    ctx->pc = 0x2BB820u;
    // 0x2bb820: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x2bb820u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bb824: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x2bb824u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x2bb828: 0xc0aee1a  jal         func_2BB868
    ctx->pc = 0x2BB828u;
    SET_GPR_U32(ctx, 31, 0x2BB830u);
    ctx->pc = 0x2BB82Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BB828u;
    // 0x2bb82c: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BB868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BB868u, 0x2BB828u, 0x2BB830u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BB830u;
label_2bb830:
    // 0x2bb830: 0x7bb00110  lq          $s0, 0x110($sp)
    ctx->pc = 0x2bb830u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x2bb834: 0x7bb10100  lq          $s1, 0x100($sp)
    ctx->pc = 0x2bb834u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x2bb838: 0x7bb200f0  lq          $s2, 0xF0($sp)
    ctx->pc = 0x2bb838u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x2bb83c: 0x7bb300e0  lq          $s3, 0xE0($sp)
    ctx->pc = 0x2bb83cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x2bb840: 0x7bb400d0  lq          $s4, 0xD0($sp)
    ctx->pc = 0x2bb840u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x2bb844: 0x7bb500c0  lq          $s5, 0xC0($sp)
    ctx->pc = 0x2bb844u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x2bb848: 0x7bb600b0  lq          $s6, 0xB0($sp)
    ctx->pc = 0x2bb848u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x2bb84c: 0xdfbf00a0  ld          $ra, 0xA0($sp)
    ctx->pc = 0x2bb84cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x2bb850: 0xc7b40120  lwc1        $f20, 0x120($sp)
    ctx->pc = 0x2bb850u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2bb854: 0x3e00008  jr          $ra
    ctx->pc = 0x2BB854u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2BB858u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BB854u;
        // 0x2bb858: 0x27bd0130  addiu       $sp, $sp, 0x130 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2BB854u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2BB85Cu;
    // 0x2bb85c: 0x0  nop
    ctx->pc = 0x2bb85cu;
    // NOP
    // 0x2bb860: 0x27bd0090  addiu       $sp, $sp, 0x90
    ctx->pc = 0x2bb860u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x2bb864: 0x0  nop
    ctx->pc = 0x2bb864u;
    // NOP
    ctx->pc = 0x2bb868u;
}
