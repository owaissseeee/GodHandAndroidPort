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

// Function: func_0017FF68
// Address: 0x17ff68 - 0x180140
void func_0017FF68_0x17ff68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0017FF68_0x17ff68");
#endif

    switch (ctx->pc) {
        case 0x17ffe0u: goto label_17ffe0;
        case 0x18005cu: goto label_18005c;
        case 0x1800b8u: goto label_1800b8;
        case 0x1800e0u: goto label_1800e0;
        case 0x1800ecu: goto label_1800ec;
        default: break;
    }

    ctx->pc = 0x17ff68u;

    // 0x17ff68: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x17ff68u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x17ff6c: 0x7fb10070  sq          $s1, 0x70($sp)
    ctx->pc = 0x17ff6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 17));
    // 0x17ff70: 0x7fb00080  sq          $s0, 0x80($sp)
    ctx->pc = 0x17ff70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 16));
    // 0x17ff74: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x17ff74u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17ff78: 0x7fb20060  sq          $s2, 0x60($sp)
    ctx->pc = 0x17ff78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 18));
    // 0x17ff7c: 0x7fb30050  sq          $s3, 0x50($sp)
    ctx->pc = 0x17ff7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 19));
    // 0x17ff80: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x17ff80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x17ff84: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x17ff84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x17ff88: 0xe7b40090  swc1        $f20, 0x90($sp)
    ctx->pc = 0x17ff88u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
    // 0x17ff8c: 0x922302f5  lbu         $v1, 0x2F5($s1)
    ctx->pc = 0x17ff8cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 757)));
    // 0x17ff90: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x17FF90u;
    {
        const bool branch_taken_0x17ff90 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x17FF94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17FF90u;
        // 0x17ff94: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17ff90) {
            ctx->pc = 0x17FFA8u;
            goto label_17ffa8;
        }
    }
    ctx->pc = 0x17FF98u;
    // 0x17ff98: 0x1062004c  beq         $v1, $v0, . + 4 + (0x4C << 2)
    ctx->pc = 0x17FF98u;
    {
        const bool branch_taken_0x17ff98 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x17FF9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17FF98u;
        // 0x17ff9c: 0x7bb00080  lq          $s0, 0x80($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17ff98) {
            ctx->pc = 0x1800CCu;
            goto label_1800cc;
        }
    }
    ctx->pc = 0x17FFA0u;
    // 0x17ffa0: 0x10000060  b           . + 4 + (0x60 << 2)
    ctx->pc = 0x17FFA0u;
    {
        const bool branch_taken_0x17ffa0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17FFA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17FFA0u;
        // 0x17ffa4: 0x7bb10070  lq          $s1, 0x70($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17ffa0) {
            ctx->pc = 0x180124u;
            goto label_180124;
        }
    }
    ctx->pc = 0x17FFA8u;
label_17ffa8:
    // 0x17ffa8: 0x8e230a24  lw          $v1, 0xA24($s1)
    ctx->pc = 0x17ffa8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2596)));
    // 0x17ffac: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x17ffacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x17ffb0: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x17FFB0u;
    {
        const bool branch_taken_0x17ffb0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x17FFB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17FFB0u;
        // 0x17ffb4: 0x3c020057  lui         $v0, 0x57 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)87 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17ffb0) {
            ctx->pc = 0x17FFC0u;
            goto label_17ffc0;
        }
    }
    ctx->pc = 0x17FFB8u;
    // 0x17ffb8: 0x10000055  b           . + 4 + (0x55 << 2)
    ctx->pc = 0x17FFB8u;
    {
        const bool branch_taken_0x17ffb8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17FFBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17FFB8u;
        // 0x17ffbc: 0xa22002f7  sb          $zero, 0x2F7($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 759), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17ffb8) {
            ctx->pc = 0x180110u;
            goto label_180110;
        }
    }
    ctx->pc = 0x17FFC0u;
label_17ffc0:
    // 0x17ffc0: 0x3c013dcc  lui         $at, 0x3DCC
    ctx->pc = 0x17ffc0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15820 << 16));
    // 0x17ffc4: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x17ffc4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x17ffc8: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x17ffc8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x17ffcc: 0x24538020  addiu       $s3, $v0, -0x7FE0
    ctx->pc = 0x17ffccu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 4294934560));
    // 0x17ffd0: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x17ffd0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17ffd4: 0x27b40020  addiu       $s4, $sp, 0x20
    ctx->pc = 0x17ffd4u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x17ffd8: 0x26320600  addiu       $s2, $s1, 0x600
    ctx->pc = 0x17ffd8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 1536));
    // 0x17ffdc: 0x0  nop
    ctx->pc = 0x17ffdcu;
    // NOP
label_17ffe0:
    // 0x17ffe0: 0x922302b4  lbu         $v1, 0x2B4($s1)
    ctx->pc = 0x17ffe0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 692)));
    // 0x17ffe4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x17ffe4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17ffe8: 0x6000002  bltz        $s0, . + 4 + (0x2 << 2)
    ctx->pc = 0x17FFE8u;
    {
        const bool branch_taken_0x17ffe8 = (GPR_S64(ctx, 16) < 0);
        ctx->pc = 0x17FFECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17FFE8u;
        // 0x17ffec: 0xafa30000  sw          $v1, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17ffe8) {
            ctx->pc = 0x17FFF4u;
            goto label_17fff4;
        }
    }
    ctx->pc = 0x17FFF0u;
    // 0x17fff0: 0x203102a  slt         $v0, $s0, $v1
    ctx->pc = 0x17fff0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_17fff4:
    // 0x17fff4: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x17fff4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x17fff8: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x17FFF8u;
    {
        const bool branch_taken_0x17fff8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x17FFFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17FFF8u;
        // 0x17fffc: 0x101080  sll         $v0, $s0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17fff8) {
            ctx->pc = 0x180010u;
            goto label_180010;
        }
    }
    ctx->pc = 0x180000u;
    // 0x180000: 0x8e230278  lw          $v1, 0x278($s1)
    ctx->pc = 0x180000u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 632)));
    // 0x180004: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x180004u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x180008: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x180008u;
    {
        const bool branch_taken_0x180008 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18000Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x180008u;
        // 0x18000c: 0x8c420000  lw          $v0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x180008) {
            ctx->pc = 0x180014u;
            goto label_180014;
        }
    }
    ctx->pc = 0x180010u;
label_180010:
    // 0x180010: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x180010u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_180014:
    // 0x180014: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x180014u;
    {
        const bool branch_taken_0x180014 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x180018u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x180014u;
        // 0x180018: 0x24420100  addiu       $v0, $v0, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 256));
        ctx->in_delay_slot = false;
        if (branch_taken_0x180014) {
            ctx->pc = 0x18005Cu;
            goto label_18005c;
        }
    }
    ctx->pc = 0x18001Cu;
    // 0x18001c: 0xfba00020  sqc2        $vf0, 0x20($sp)
    ctx->pc = 0x18001cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x180020: 0xda640000  lqc2        $vf4, 0x0($s3)
    ctx->pc = 0x180020u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x180024: 0xd8450000  lqc2        $vf5, 0x0($v0)
    ctx->pc = 0x180024u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x180028: 0x4bc5212c  vsub.xyz    $vf4, $vf4, $vf5
    ctx->pc = 0x180028u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x18002c: 0xfba40020  sqc2        $vf4, 0x20($sp)
    ctx->pc = 0x18002cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x180030: 0xda840000  lqc2        $vf4, 0x0($s4)
    ctx->pc = 0x180030u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x180034: 0xfba40010  sqc2        $vf4, 0x10($sp)
    ctx->pc = 0x180034u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x180038: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x180038u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18003c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x18003cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x180040: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x180040u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x180044: 0x2407003c  addiu       $a3, $zero, 0x3C
    ctx->pc = 0x180044u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    // 0x180048: 0x27a80010  addiu       $t0, $sp, 0x10
    ctx->pc = 0x180048u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x18004c: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x18004cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x180050: 0x4600a346  mov.s       $f13, $f20
    ctx->pc = 0x180050u;
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
    // 0x180054: 0xc071a62  jal         func_1C6988
    ctx->pc = 0x180054u;
    SET_GPR_U32(ctx, 31, 0x18005Cu);
    ctx->pc = 0x180058u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x180054u;
    // 0x180058: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C6988u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C6988u, 0x180054u, 0x18005Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x18005Cu;
label_18005c:
    // 0x18005c: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x18005cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x180060: 0x26520160  addiu       $s2, $s2, 0x160
    ctx->pc = 0x180060u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 352));
    // 0x180064: 0x2a020003  slti        $v0, $s0, 0x3
    ctx->pc = 0x180064u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x180068: 0x1440ffdd  bnez        $v0, . + 4 + (-0x23 << 2)
    ctx->pc = 0x180068u;
    {
        const bool branch_taken_0x180068 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x18006Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x180068u;
        // 0x18006c: 0x26730010  addiu       $s3, $s3, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x180068) {
            ctx->pc = 0x17FFE0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_17ffe0;
        }
    }
    ctx->pc = 0x180070u;
    // 0x180070: 0x922302b4  lbu         $v1, 0x2B4($s1)
    ctx->pc = 0x180070u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 692)));
    // 0x180074: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x180074u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x180078: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x180078u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x18007c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x18007Cu;
    {
        const bool branch_taken_0x18007c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x180080u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18007Cu;
        // 0x180080: 0xafa30000  sw          $v1, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18007c) {
            ctx->pc = 0x180090u;
            goto label_180090;
        }
    }
    ctx->pc = 0x180084u;
    // 0x180084: 0x8e220278  lw          $v0, 0x278($s1)
    ctx->pc = 0x180084u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 632)));
    // 0x180088: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x180088u;
    {
        const bool branch_taken_0x180088 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18008Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x180088u;
        // 0x18008c: 0x8c490004  lw          $t1, 0x4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x180088) {
            ctx->pc = 0x180094u;
            goto label_180094;
        }
    }
    ctx->pc = 0x180090u;
label_180090:
    // 0x180090: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x180090u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_180094:
    // 0x180094: 0x3c040060  lui         $a0, 0x60
    ctx->pc = 0x180094u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
    // 0x180098: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x180098u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x18009c: 0x2484ee00  addiu       $a0, $a0, -0x1200
    ctx->pc = 0x18009cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962688));
    // 0x1800a0: 0x240600df  addiu       $a2, $zero, 0xDF
    ctx->pc = 0x1800a0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 223));
    // 0x1800a4: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x1800a4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1800a8: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1800a8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1800ac: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1800acu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1800b0: 0xc0b2e92  jal         func_2CBA48
    ctx->pc = 0x1800B0u;
    SET_GPR_U32(ctx, 31, 0x1800B8u);
    ctx->pc = 0x1800B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1800B0u;
    // 0x1800b4: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CBA48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CBA48u, 0x1800B0u, 0x1800B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1800B8u;
label_1800b8:
    // 0x1800b8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1800b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1800bc: 0xa22002f6  sb          $zero, 0x2F6($s1)
    ctx->pc = 0x1800bcu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 758), (uint8_t)GPR_U32(ctx, 0));
    // 0x1800c0: 0xa22302f5  sb          $v1, 0x2F5($s1)
    ctx->pc = 0x1800c0u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 757), (uint8_t)GPR_U32(ctx, 3));
    // 0x1800c4: 0xa2230a28  sb          $v1, 0xA28($s1)
    ctx->pc = 0x1800c4u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 2600), (uint8_t)GPR_U32(ctx, 3));
    // 0x1800c8: 0xa22002f7  sb          $zero, 0x2F7($s1)
    ctx->pc = 0x1800c8u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 759), (uint8_t)GPR_U32(ctx, 0));
label_1800cc:
    // 0x1800cc: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x1800ccu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1800d0: 0x24140001  addiu       $s4, $zero, 0x1
    ctx->pc = 0x1800d0u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1800d4: 0x26300600  addiu       $s0, $s1, 0x600
    ctx->pc = 0x1800d4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 1536));
    // 0x1800d8: 0x24120002  addiu       $s2, $zero, 0x2
    ctx->pc = 0x1800d8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1800dc: 0x0  nop
    ctx->pc = 0x1800dcu;
    // NOP
label_1800e0:
    // 0x1800e0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1800e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1800e4: 0xc070fce  jal         func_1C3F38
    ctx->pc = 0x1800E4u;
    SET_GPR_U32(ctx, 31, 0x1800ECu);
    ctx->pc = 0x1800E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1800E4u;
    // 0x1800e8: 0x2652ffff  addiu       $s2, $s2, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C3F38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C3F38u, 0x1800E4u, 0x1800ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1800ECu;
label_1800ec:
    // 0x1800ec: 0x26100160  addiu       $s0, $s0, 0x160
    ctx->pc = 0x1800ecu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 352));
    // 0x1800f0: 0x641fffb  bgez        $s2, . + 4 + (-0x5 << 2)
    ctx->pc = 0x1800F0u;
    {
        const bool branch_taken_0x1800f0 = (GPR_S64(ctx, 18) >= 0);
        ctx->pc = 0x1800F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1800F0u;
        // 0x1800f4: 0x282980b  movn        $s3, $s4, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 19, GPR_VEC(ctx, 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1800f0) {
            ctx->pc = 0x1800E0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1800e0;
        }
    }
    ctx->pc = 0x1800F8u;
    // 0x1800f8: 0x16600009  bnez        $s3, . + 4 + (0x9 << 2)
    ctx->pc = 0x1800F8u;
    {
        const bool branch_taken_0x1800f8 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        ctx->pc = 0x1800FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1800F8u;
        // 0x1800fc: 0x7bb00080  lq          $s0, 0x80($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1800f8) {
            ctx->pc = 0x180120u;
            goto label_180120;
        }
    }
    ctx->pc = 0x180100u;
    // 0x180100: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x180100u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x180104: 0xa22002f7  sb          $zero, 0x2F7($s1)
    ctx->pc = 0x180104u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 759), (uint8_t)GPR_U32(ctx, 0));
    // 0x180108: 0xae220a24  sw          $v0, 0xA24($s1)
    ctx->pc = 0x180108u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 2596), GPR_U32(ctx, 2));
    // 0x18010c: 0xa2200a28  sb          $zero, 0xA28($s1)
    ctx->pc = 0x18010cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 2600), (uint8_t)GPR_U32(ctx, 0));
label_180110:
    // 0x180110: 0xa22002f4  sb          $zero, 0x2F4($s1)
    ctx->pc = 0x180110u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 756), (uint8_t)GPR_U32(ctx, 0));
    // 0x180114: 0xa22002f5  sb          $zero, 0x2F5($s1)
    ctx->pc = 0x180114u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 757), (uint8_t)GPR_U32(ctx, 0));
    // 0x180118: 0xa22002f6  sb          $zero, 0x2F6($s1)
    ctx->pc = 0x180118u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 758), (uint8_t)GPR_U32(ctx, 0));
    // 0x18011c: 0x7bb00080  lq          $s0, 0x80($sp)
    ctx->pc = 0x18011cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_180120:
    // 0x180120: 0x7bb10070  lq          $s1, 0x70($sp)
    ctx->pc = 0x180120u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_180124:
    // 0x180124: 0x7bb20060  lq          $s2, 0x60($sp)
    ctx->pc = 0x180124u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x180128: 0x7bb30050  lq          $s3, 0x50($sp)
    ctx->pc = 0x180128u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x18012c: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x18012cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x180130: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x180130u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x180134: 0xc7b40090  lwc1        $f20, 0x90($sp)
    ctx->pc = 0x180134u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x180138: 0x3e00008  jr          $ra
    ctx->pc = 0x180138u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18013Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x180138u;
        // 0x18013c: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x180138u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x180140u;
}
