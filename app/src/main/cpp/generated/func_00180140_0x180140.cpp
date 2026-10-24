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

// Function: func_00180140
// Address: 0x180140 - 0x180310
void func_00180140_0x180140(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00180140_0x180140");
#endif

    switch (ctx->pc) {
        case 0x1801b0u: goto label_1801b0;
        case 0x18022cu: goto label_18022c;
        case 0x180288u: goto label_180288;
        case 0x1802b0u: goto label_1802b0;
        case 0x1802bcu: goto label_1802bc;
        default: break;
    }

    ctx->pc = 0x180140u;

    // 0x180140: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x180140u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x180144: 0x7fb10070  sq          $s1, 0x70($sp)
    ctx->pc = 0x180144u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 17));
    // 0x180148: 0x7fb00080  sq          $s0, 0x80($sp)
    ctx->pc = 0x180148u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 16));
    // 0x18014c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x18014cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x180150: 0x7fb20060  sq          $s2, 0x60($sp)
    ctx->pc = 0x180150u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 18));
    // 0x180154: 0x7fb30050  sq          $s3, 0x50($sp)
    ctx->pc = 0x180154u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 19));
    // 0x180158: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x180158u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x18015c: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x18015cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x180160: 0xe7b40090  swc1        $f20, 0x90($sp)
    ctx->pc = 0x180160u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
    // 0x180164: 0x922302f5  lbu         $v1, 0x2F5($s1)
    ctx->pc = 0x180164u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 757)));
    // 0x180168: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x180168u;
    {
        const bool branch_taken_0x180168 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x18016Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x180168u;
        // 0x18016c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x180168) {
            ctx->pc = 0x180180u;
            goto label_180180;
        }
    }
    ctx->pc = 0x180170u;
    // 0x180170: 0x1062004a  beq         $v1, $v0, . + 4 + (0x4A << 2)
    ctx->pc = 0x180170u;
    {
        const bool branch_taken_0x180170 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x180174u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x180170u;
        // 0x180174: 0x7bb00080  lq          $s0, 0x80($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x180170) {
            ctx->pc = 0x18029Cu;
            goto label_18029c;
        }
    }
    ctx->pc = 0x180178u;
    // 0x180178: 0x1000005d  b           . + 4 + (0x5D << 2)
    ctx->pc = 0x180178u;
    {
        const bool branch_taken_0x180178 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18017Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x180178u;
        // 0x18017c: 0x7bb10070  lq          $s1, 0x70($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x180178) {
            ctx->pc = 0x1802F0u;
            goto label_1802f0;
        }
    }
    ctx->pc = 0x180180u;
label_180180:
    // 0x180180: 0x8e220a24  lw          $v0, 0xA24($s1)
    ctx->pc = 0x180180u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2596)));
    // 0x180184: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x180184u;
    {
        const bool branch_taken_0x180184 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x180188u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x180184u;
        // 0x180188: 0x3c020056  lui         $v0, 0x56 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)86 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x180184) {
            ctx->pc = 0x180194u;
            goto label_180194;
        }
    }
    ctx->pc = 0x18018Cu;
    // 0x18018c: 0x10000053  b           . + 4 + (0x53 << 2)
    ctx->pc = 0x18018Cu;
    {
        const bool branch_taken_0x18018c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x180190u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18018Cu;
        // 0x180190: 0xa22002f7  sb          $zero, 0x2F7($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 759), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18018c) {
            ctx->pc = 0x1802DCu;
            goto label_1802dc;
        }
    }
    ctx->pc = 0x180194u;
label_180194:
    // 0x180194: 0x3c013dcc  lui         $at, 0x3DCC
    ctx->pc = 0x180194u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15820 << 16));
    // 0x180198: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x180198u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x18019c: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x18019cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x1801a0: 0x24537fc0  addiu       $s3, $v0, 0x7FC0
    ctx->pc = 0x1801a0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 32704));
    // 0x1801a4: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1801a4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1801a8: 0x27b40020  addiu       $s4, $sp, 0x20
    ctx->pc = 0x1801a8u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1801ac: 0x26320600  addiu       $s2, $s1, 0x600
    ctx->pc = 0x1801acu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 1536));
label_1801b0:
    // 0x1801b0: 0x922302b4  lbu         $v1, 0x2B4($s1)
    ctx->pc = 0x1801b0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 692)));
    // 0x1801b4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1801b4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1801b8: 0x6000002  bltz        $s0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1801B8u;
    {
        const bool branch_taken_0x1801b8 = (GPR_S64(ctx, 16) < 0);
        ctx->pc = 0x1801BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1801B8u;
        // 0x1801bc: 0xafa30000  sw          $v1, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1801b8) {
            ctx->pc = 0x1801C4u;
            goto label_1801c4;
        }
    }
    ctx->pc = 0x1801C0u;
    // 0x1801c0: 0x203102a  slt         $v0, $s0, $v1
    ctx->pc = 0x1801c0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_1801c4:
    // 0x1801c4: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1801c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1801c8: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1801C8u;
    {
        const bool branch_taken_0x1801c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1801CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1801C8u;
        // 0x1801cc: 0x101080  sll         $v0, $s0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1801c8) {
            ctx->pc = 0x1801E0u;
            goto label_1801e0;
        }
    }
    ctx->pc = 0x1801D0u;
    // 0x1801d0: 0x8e230278  lw          $v1, 0x278($s1)
    ctx->pc = 0x1801d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 632)));
    // 0x1801d4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1801d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1801d8: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1801D8u;
    {
        const bool branch_taken_0x1801d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1801DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1801D8u;
        // 0x1801dc: 0x8c420000  lw          $v0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1801d8) {
            ctx->pc = 0x1801E4u;
            goto label_1801e4;
        }
    }
    ctx->pc = 0x1801E0u;
label_1801e0:
    // 0x1801e0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1801e0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1801e4:
    // 0x1801e4: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x1801E4u;
    {
        const bool branch_taken_0x1801e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1801E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1801E4u;
        // 0x1801e8: 0x24420100  addiu       $v0, $v0, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 256));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1801e4) {
            ctx->pc = 0x18022Cu;
            goto label_18022c;
        }
    }
    ctx->pc = 0x1801ECu;
    // 0x1801ec: 0xfba00020  sqc2        $vf0, 0x20($sp)
    ctx->pc = 0x1801ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x1801f0: 0xda640000  lqc2        $vf4, 0x0($s3)
    ctx->pc = 0x1801f0u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x1801f4: 0xd8450000  lqc2        $vf5, 0x0($v0)
    ctx->pc = 0x1801f4u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1801f8: 0x4bc5212c  vsub.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x1801f8u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x1801fc: 0xfba40020  sqc2        $vf4, 0x20($sp)
    ctx->pc = 0x1801fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x180200: 0xda840000  lqc2        $vf4, 0x0($s4)
    ctx->pc = 0x180200u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x180204: 0xfba40010  sqc2        $vf4, 0x10($sp)
    ctx->pc = 0x180204u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x180208: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x180208u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18020c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x18020cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x180210: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x180210u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x180214: 0x2407003c  addiu       $a3, $zero, 0x3C
    ctx->pc = 0x180214u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    // 0x180218: 0x27a80010  addiu       $t0, $sp, 0x10
    ctx->pc = 0x180218u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x18021c: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x18021cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x180220: 0x4600a346  mov.s       $f13, $f20
    ctx->pc = 0x180220u;
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
    // 0x180224: 0xc071a62  jal         func_1C6988
    ctx->pc = 0x180224u;
    SET_GPR_U32(ctx, 31, 0x18022Cu);
    ctx->pc = 0x180228u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x180224u;
    // 0x180228: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C6988u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C6988u, 0x180224u, 0x18022Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18022Cu;
label_18022c:
    // 0x18022c: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x18022cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x180230: 0x26520160  addiu       $s2, $s2, 0x160
    ctx->pc = 0x180230u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 352));
    // 0x180234: 0x2a020003  slti        $v0, $s0, 0x3
    ctx->pc = 0x180234u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x180238: 0x1440ffdd  bnez        $v0, . + 4 + (-0x23 << 2)
    ctx->pc = 0x180238u;
    {
        const bool branch_taken_0x180238 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x18023Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x180238u;
        // 0x18023c: 0x26730010  addiu       $s3, $s3, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x180238) {
            ctx->pc = 0x1801B0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1801b0;
        }
    }
    ctx->pc = 0x180240u;
    // 0x180240: 0x922302b4  lbu         $v1, 0x2B4($s1)
    ctx->pc = 0x180240u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 692)));
    // 0x180244: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x180244u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x180248: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x180248u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x18024c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x18024Cu;
    {
        const bool branch_taken_0x18024c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x180250u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18024Cu;
        // 0x180250: 0xafa30000  sw          $v1, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18024c) {
            ctx->pc = 0x180260u;
            goto label_180260;
        }
    }
    ctx->pc = 0x180254u;
    // 0x180254: 0x8e220278  lw          $v0, 0x278($s1)
    ctx->pc = 0x180254u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 632)));
    // 0x180258: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x180258u;
    {
        const bool branch_taken_0x180258 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18025Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x180258u;
        // 0x18025c: 0x8c490004  lw          $t1, 0x4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x180258) {
            ctx->pc = 0x180264u;
            goto label_180264;
        }
    }
    ctx->pc = 0x180260u;
label_180260:
    // 0x180260: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x180260u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_180264:
    // 0x180264: 0x3c040060  lui         $a0, 0x60
    ctx->pc = 0x180264u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
    // 0x180268: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x180268u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x18026c: 0x2484ee00  addiu       $a0, $a0, -0x1200
    ctx->pc = 0x18026cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962688));
    // 0x180270: 0x240600df  addiu       $a2, $zero, 0xDF
    ctx->pc = 0x180270u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 223));
    // 0x180274: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x180274u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x180278: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x180278u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18027c: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x18027cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x180280: 0xc0b2e92  jal         func_2CBA48
    ctx->pc = 0x180280u;
    SET_GPR_U32(ctx, 31, 0x180288u);
    ctx->pc = 0x180284u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x180280u;
    // 0x180284: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CBA48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CBA48u, 0x180280u, 0x180288u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x180288u;
label_180288:
    // 0x180288: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x180288u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x18028c: 0xa22002f6  sb          $zero, 0x2F6($s1)
    ctx->pc = 0x18028cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 758), (uint8_t)GPR_U32(ctx, 0));
    // 0x180290: 0xa22302f5  sb          $v1, 0x2F5($s1)
    ctx->pc = 0x180290u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 757), (uint8_t)GPR_U32(ctx, 3));
    // 0x180294: 0xa2230a28  sb          $v1, 0xA28($s1)
    ctx->pc = 0x180294u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 2600), (uint8_t)GPR_U32(ctx, 3));
    // 0x180298: 0xa22002f7  sb          $zero, 0x2F7($s1)
    ctx->pc = 0x180298u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 759), (uint8_t)GPR_U32(ctx, 0));
label_18029c:
    // 0x18029c: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x18029cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1802a0: 0x24140001  addiu       $s4, $zero, 0x1
    ctx->pc = 0x1802a0u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1802a4: 0x26300600  addiu       $s0, $s1, 0x600
    ctx->pc = 0x1802a4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 1536));
    // 0x1802a8: 0x24120002  addiu       $s2, $zero, 0x2
    ctx->pc = 0x1802a8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1802ac: 0x0  nop
    ctx->pc = 0x1802acu;
    // NOP
label_1802b0:
    // 0x1802b0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1802b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1802b4: 0xc070fce  jal         func_1C3F38
    ctx->pc = 0x1802B4u;
    SET_GPR_U32(ctx, 31, 0x1802BCu);
    ctx->pc = 0x1802B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1802B4u;
    // 0x1802b8: 0x2652ffff  addiu       $s2, $s2, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C3F38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C3F38u, 0x1802B4u, 0x1802BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1802BCu;
label_1802bc:
    // 0x1802bc: 0x26100160  addiu       $s0, $s0, 0x160
    ctx->pc = 0x1802bcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 352));
    // 0x1802c0: 0x641fffb  bgez        $s2, . + 4 + (-0x5 << 2)
    ctx->pc = 0x1802C0u;
    {
        const bool branch_taken_0x1802c0 = (GPR_S64(ctx, 18) >= 0);
        ctx->pc = 0x1802C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1802C0u;
        // 0x1802c4: 0x282980b  movn        $s3, $s4, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 19, GPR_VEC(ctx, 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1802c0) {
            ctx->pc = 0x1802B0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1802b0;
        }
    }
    ctx->pc = 0x1802C8u;
    // 0x1802c8: 0x16600008  bnez        $s3, . + 4 + (0x8 << 2)
    ctx->pc = 0x1802C8u;
    {
        const bool branch_taken_0x1802c8 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        ctx->pc = 0x1802CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1802C8u;
        // 0x1802cc: 0x7bb00080  lq          $s0, 0x80($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1802c8) {
            ctx->pc = 0x1802ECu;
            goto label_1802ec;
        }
    }
    ctx->pc = 0x1802D0u;
    // 0x1802d0: 0xa22002f7  sb          $zero, 0x2F7($s1)
    ctx->pc = 0x1802d0u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 759), (uint8_t)GPR_U32(ctx, 0));
    // 0x1802d4: 0xae200a24  sw          $zero, 0xA24($s1)
    ctx->pc = 0x1802d4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 2596), GPR_U32(ctx, 0));
    // 0x1802d8: 0xa2200a28  sb          $zero, 0xA28($s1)
    ctx->pc = 0x1802d8u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 2600), (uint8_t)GPR_U32(ctx, 0));
label_1802dc:
    // 0x1802dc: 0xa22002f4  sb          $zero, 0x2F4($s1)
    ctx->pc = 0x1802dcu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 756), (uint8_t)GPR_U32(ctx, 0));
    // 0x1802e0: 0xa22002f5  sb          $zero, 0x2F5($s1)
    ctx->pc = 0x1802e0u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 757), (uint8_t)GPR_U32(ctx, 0));
    // 0x1802e4: 0xa22002f6  sb          $zero, 0x2F6($s1)
    ctx->pc = 0x1802e4u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 758), (uint8_t)GPR_U32(ctx, 0));
    // 0x1802e8: 0x7bb00080  lq          $s0, 0x80($sp)
    ctx->pc = 0x1802e8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_1802ec:
    // 0x1802ec: 0x7bb10070  lq          $s1, 0x70($sp)
    ctx->pc = 0x1802ecu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_1802f0:
    // 0x1802f0: 0x7bb20060  lq          $s2, 0x60($sp)
    ctx->pc = 0x1802f0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1802f4: 0x7bb30050  lq          $s3, 0x50($sp)
    ctx->pc = 0x1802f4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1802f8: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x1802f8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1802fc: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1802fcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x180300: 0xc7b40090  lwc1        $f20, 0x90($sp)
    ctx->pc = 0x180300u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x180304: 0x3e00008  jr          $ra
    ctx->pc = 0x180304u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x180308u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x180304u;
        // 0x180308: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x180304u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x18030Cu;
    // 0x18030c: 0x0  nop
    ctx->pc = 0x18030cu;
    // NOP
    ctx->pc = 0x180310u;
}
