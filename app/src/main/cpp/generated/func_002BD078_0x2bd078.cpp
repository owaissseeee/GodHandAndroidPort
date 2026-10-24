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

// Function: func_002BD078
// Address: 0x2bd078 - 0x2bd200
void func_002BD078_0x2bd078(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_002BD078_0x2bd078");
#endif

    switch (ctx->pc) {
        case 0x2bd0d0u: goto label_2bd0d0;
        case 0x2bd0f4u: goto label_2bd0f4;
        case 0x2bd130u: goto label_2bd130;
        case 0x2bd158u: goto label_2bd158;
        case 0x2bd170u: goto label_2bd170;
        case 0x2bd1c0u: goto label_2bd1c0;
        default: break;
    }

    ctx->pc = 0x2bd078u;

    // 0x2bd078: 0x27bdfea0  addiu       $sp, $sp, -0x160
    ctx->pc = 0x2bd078u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966944));
    // 0x2bd07c: 0x7fb20120  sq          $s2, 0x120($sp)
    ctx->pc = 0x2bd07cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 288), GPR_VEC(ctx, 18));
    // 0x2bd080: 0x7fb30110  sq          $s3, 0x110($sp)
    ctx->pc = 0x2bd080u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 272), GPR_VEC(ctx, 19));
    // 0x2bd084: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x2bd084u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bd088: 0x7fb500f0  sq          $s5, 0xF0($sp)
    ctx->pc = 0x2bd088u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 21));
    // 0x2bd08c: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x2bd08cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bd090: 0xe7b50158  swc1        $f21, 0x158($sp)
    ctx->pc = 0x2bd090u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 344), bits); }
    // 0x2bd094: 0xa0a82d  daddu       $s5, $a1, $zero
    ctx->pc = 0x2bd094u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bd098: 0xe7b40150  swc1        $f20, 0x150($sp)
    ctx->pc = 0x2bd098u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 336), bits); }
    // 0x2bd09c: 0x46006546  mov.s       $f21, $f12
    ctx->pc = 0x2bd09cu;
    ctx->f[21] = FPU_MOV_S(ctx->f[12]);
    // 0x2bd0a0: 0x46006d06  mov.s       $f20, $f13
    ctx->pc = 0x2bd0a0u;
    ctx->f[20] = FPU_MOV_S(ctx->f[13]);
    // 0x2bd0a4: 0x7fb00140  sq          $s0, 0x140($sp)
    ctx->pc = 0x2bd0a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 320), GPR_VEC(ctx, 16));
    // 0x2bd0a8: 0x7fb10130  sq          $s1, 0x130($sp)
    ctx->pc = 0x2bd0a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 304), GPR_VEC(ctx, 17));
    // 0x2bd0ac: 0x7fb40100  sq          $s4, 0x100($sp)
    ctx->pc = 0x2bd0acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), GPR_VEC(ctx, 20));
    // 0x2bd0b0: 0x7fb600e0  sq          $s6, 0xE0($sp)
    ctx->pc = 0x2bd0b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 22));
    // 0x2bd0b4: 0x7fb700d0  sq          $s7, 0xD0($sp)
    ctx->pc = 0x2bd0b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 23));
    // 0x2bd0b8: 0xffbf00c0  sd          $ra, 0xC0($sp)
    ctx->pc = 0x2bd0b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 192), GPR_U64(ctx, 31));
    // 0x2bd0bc: 0xfba00000  sqc2        $vf0, 0x0($sp)
    ctx->pc = 0x2bd0bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x2bd0c0: 0xfba00010  sqc2        $vf0, 0x10($sp)
    ctx->pc = 0x2bd0c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x2bd0c4: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2bd0c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bd0c8: 0xc051f18  jal         func_147C60
    ctx->pc = 0x2BD0C8u;
    SET_GPR_U32(ctx, 31, 0x2BD0D0u);
    ctx->pc = 0x2BD0CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BD0C8u;
    // 0x2bd0cc: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x147C60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x147C60u, 0x2BD0C8u, 0x2BD0D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BD0D0u;
label_2bd0d0:
    // 0x2bd0d0: 0x27b00030  addiu       $s0, $sp, 0x30
    ctx->pc = 0x2bd0d0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2bd0d4: 0xe7b40014  swc1        $f20, 0x14($sp)
    ctx->pc = 0x2bd0d4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x2bd0d8: 0x27b10010  addiu       $s1, $sp, 0x10
    ctx->pc = 0x2bd0d8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2bd0dc: 0xda240000  lqc2        $vf4, 0x0($s1)
    ctx->pc = 0x2bd0dcu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2bd0e0: 0xfba40030  sqc2        $vf4, 0x30($sp)
    ctx->pc = 0x2bd0e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x2bd0e4: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x2bd0e4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bd0e8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2bd0e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bd0ec: 0xc0c28ac  jal         func_30A2B0
    ctx->pc = 0x2BD0ECu;
    SET_GPR_U32(ctx, 31, 0x2BD0F4u);
    ctx->pc = 0x2BD0F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BD0ECu;
    // 0x2bd0f0: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30A2B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30A2B0u, 0x2BD0ECu, 0x2BD0F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BD0F4u;
label_2bd0f4:
    // 0x2bd0f4: 0xda040000  lqc2        $vf4, 0x0($s0)
    ctx->pc = 0x2bd0f4u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2bd0f8: 0xfba40020  sqc2        $vf4, 0x20($sp)
    ctx->pc = 0x2bd0f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x2bd0fc: 0xc7a20020  lwc1        $f2, 0x20($sp)
    ctx->pc = 0x2bd0fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2bd100: 0x27a20040  addiu       $v0, $sp, 0x40
    ctx->pc = 0x2bd100u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x2bd104: 0xc7a10024  lwc1        $f1, 0x24($sp)
    ctx->pc = 0x2bd104u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2bd108: 0x220b82d  daddu       $s7, $s1, $zero
    ctx->pc = 0x2bd108u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bd10c: 0xc7a00028  lwc1        $f0, 0x28($sp)
    ctx->pc = 0x2bd10cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2bd110: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2bd110u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bd114: 0xe7a20010  swc1        $f2, 0x10($sp)
    ctx->pc = 0x2bd114u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x2bd118: 0x27b40020  addiu       $s4, $sp, 0x20
    ctx->pc = 0x2bd118u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2bd11c: 0xe7a10014  swc1        $f1, 0x14($sp)
    ctx->pc = 0x2bd11cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x2bd120: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x2bd120u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2bd124: 0xe7a00018  swc1        $f0, 0x18($sp)
    ctx->pc = 0x2bd124u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x2bd128: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x2bd128u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bd12c: 0x24030007  addiu       $v1, $zero, 0x7
    ctx->pc = 0x2bd12cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_2bd130:
    // 0x2bd130: 0xf8400000  sqc2        $vf0, 0x0($v0)
    ctx->pc = 0x2bd130u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x2bd134: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x2bd134u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x2bd138: 0x0  nop
    ctx->pc = 0x2bd138u;
    // NOP
    // 0x2bd13c: 0x0  nop
    ctx->pc = 0x2bd13cu;
    // NOP
    // 0x2bd140: 0x1465fffb  bne         $v1, $a1, . + 4 + (-0x5 << 2)
    ctx->pc = 0x2BD140u;
    {
        const bool branch_taken_0x2bd140 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 5));
        ctx->pc = 0x2BD144u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BD140u;
        // 0x2bd144: 0x24420010  addiu       $v0, $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bd140) {
            ctx->pc = 0x2BD130u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2bd130;
        }
    }
    ctx->pc = 0x2BD148u;
    // 0x2bd148: 0x260802d  daddu       $s0, $s3, $zero
    ctx->pc = 0x2bd148u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bd14c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2bd14cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bd150: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x2bd150u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bd154: 0x27b20040  addiu       $s2, $sp, 0x40
    ctx->pc = 0x2bd154u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_2bd158:
    // 0x2bd158: 0xda040000  lqc2        $vf4, 0x0($s0)
    ctx->pc = 0x2bd158u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2bd15c: 0xfba40030  sqc2        $vf4, 0x30($sp)
    ctx->pc = 0x2bd15cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x2bd160: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2bd160u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bd164: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x2bd164u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bd168: 0xc0c28ac  jal         func_30A2B0
    ctx->pc = 0x2BD168u;
    SET_GPR_U32(ctx, 31, 0x2BD170u);
    ctx->pc = 0x2BD16Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BD168u;
    // 0x2bd16c: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30A2B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30A2B0u, 0x2BD168u, 0x2BD170u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BD170u;
label_2bd170:
    // 0x2bd170: 0xda240000  lqc2        $vf4, 0x0($s1)
    ctx->pc = 0x2bd170u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2bd174: 0xfba40020  sqc2        $vf4, 0x20($sp)
    ctx->pc = 0x2bd174u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x2bd178: 0x12540006  beq         $s2, $s4, . + 4 + (0x6 << 2)
    ctx->pc = 0x2BD178u;
    {
        const bool branch_taken_0x2bd178 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 20));
        ctx->pc = 0x2BD17Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BD178u;
        // 0x2bd17c: 0xc7a00020  lwc1        $f0, 0x20($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bd178) {
            ctx->pc = 0x2BD194u;
            goto label_2bd194;
        }
    }
    ctx->pc = 0x2BD180u;
    // 0x2bd180: 0xe6400000  swc1        $f0, 0x0($s2)
    ctx->pc = 0x2bd180u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 0), bits); }
    // 0x2bd184: 0xc7a10024  lwc1        $f1, 0x24($sp)
    ctx->pc = 0x2bd184u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2bd188: 0xe6410004  swc1        $f1, 0x4($s2)
    ctx->pc = 0x2bd188u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 4), bits); }
    // 0x2bd18c: 0xc7a00028  lwc1        $f0, 0x28($sp)
    ctx->pc = 0x2bd18cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2bd190: 0xe6400008  swc1        $f0, 0x8($s2)
    ctx->pc = 0x2bd190u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 8), bits); }
label_2bd194:
    // 0x2bd194: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x2bd194u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x2bd198: 0x26520010  addiu       $s2, $s2, 0x10
    ctx->pc = 0x2bd198u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
    // 0x2bd19c: 0x2e620008  sltiu       $v0, $s3, 0x8
    ctx->pc = 0x2bd19cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
    // 0x2bd1a0: 0x1440ffed  bnez        $v0, . + 4 + (-0x13 << 2)
    ctx->pc = 0x2BD1A0u;
    {
        const bool branch_taken_0x2bd1a0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2BD1A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BD1A0u;
        // 0x2bd1a4: 0x26100010  addiu       $s0, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bd1a0) {
            ctx->pc = 0x2BD158u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2bd158;
        }
    }
    ctx->pc = 0x2BD1A8u;
    // 0x2bd1a8: 0x2e0282d  daddu       $a1, $s7, $zero
    ctx->pc = 0x2bd1a8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bd1ac: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x2bd1acu;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    // 0x2bd1b0: 0x4600a346  mov.s       $f13, $f20
    ctx->pc = 0x2bd1b0u;
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
    // 0x2bd1b4: 0x2c0302d  daddu       $a2, $s6, $zero
    ctx->pc = 0x2bd1b4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bd1b8: 0xc0af254  jal         func_2BC950
    ctx->pc = 0x2BD1B8u;
    SET_GPR_U32(ctx, 31, 0x2BD1C0u);
    ctx->pc = 0x2BD1BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BD1B8u;
    // 0x2bd1bc: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BC950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BC950u, 0x2BD1B8u, 0x2BD1C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BD1C0u;
label_2bd1c0:
    // 0x2bd1c0: 0x7bb00140  lq          $s0, 0x140($sp)
    ctx->pc = 0x2bd1c0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x2bd1c4: 0x7bb10130  lq          $s1, 0x130($sp)
    ctx->pc = 0x2bd1c4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x2bd1c8: 0x7bb20120  lq          $s2, 0x120($sp)
    ctx->pc = 0x2bd1c8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x2bd1cc: 0x7bb30110  lq          $s3, 0x110($sp)
    ctx->pc = 0x2bd1ccu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x2bd1d0: 0x7bb40100  lq          $s4, 0x100($sp)
    ctx->pc = 0x2bd1d0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x2bd1d4: 0x7bb500f0  lq          $s5, 0xF0($sp)
    ctx->pc = 0x2bd1d4u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x2bd1d8: 0x7bb600e0  lq          $s6, 0xE0($sp)
    ctx->pc = 0x2bd1d8u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x2bd1dc: 0x7bb700d0  lq          $s7, 0xD0($sp)
    ctx->pc = 0x2bd1dcu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x2bd1e0: 0xdfbf00c0  ld          $ra, 0xC0($sp)
    ctx->pc = 0x2bd1e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x2bd1e4: 0xc7b50158  lwc1        $f21, 0x158($sp)
    ctx->pc = 0x2bd1e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 344)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x2bd1e8: 0xc7b40150  lwc1        $f20, 0x150($sp)
    ctx->pc = 0x2bd1e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 336)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2bd1ec: 0x3e00008  jr          $ra
    ctx->pc = 0x2BD1ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2BD1F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BD1ECu;
        // 0x2bd1f0: 0x27bd0160  addiu       $sp, $sp, 0x160 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2BD1ECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2BD1F4u;
    // 0x2bd1f4: 0x0  nop
    ctx->pc = 0x2bd1f4u;
    // NOP
    // 0x2bd1f8: 0x27bd00e0  addiu       $sp, $sp, 0xE0
    ctx->pc = 0x2bd1f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x2bd1fc: 0x0  nop
    ctx->pc = 0x2bd1fcu;
    // NOP
    ctx->pc = 0x2bd200u;
}
