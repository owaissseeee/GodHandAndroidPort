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

// Function: BlackJack_UpdateDealPlayer
// Address: 0x1d3110 - 0x1d32d8
void BlackJack_UpdateDealPlayer_0x1d3110(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("BlackJack_UpdateDealPlayer_0x1d3110");
#endif

    switch (ctx->pc) {
        case 0x1d31d0u: goto label_1d31d0;
        case 0x1d3298u: goto label_1d3298;
        default: break;
    }

    ctx->pc = 0x1d3110u;

    // 0x1d3110: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1d3110u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1d3114: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1d3114u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d3118: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x1d3118u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x1d311c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1d311cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1d3120: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1d3120u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d3124: 0x8e031808  lw          $v1, 0x1808($s0)
    ctx->pc = 0x1d3124u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 6152)));
    // 0x1d3128: 0x5062000e  beql        $v1, $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x1D3128u;
    {
        const bool branch_taken_0x1d3128 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1d3128) {
            ctx->pc = 0x1D312Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D3128u;
            // 0x1d312c: 0x8e02180c  lw          $v0, 0x180C($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 6156)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D3164u;
            goto label_1d3164;
        }
    }
    ctx->pc = 0x1D3130u;
    // 0x1d3130: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x1D3130u;
    {
        const bool branch_taken_0x1d3130 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D3134u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D3130u;
        // 0x1d3134: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d3130) {
            ctx->pc = 0x1D3150u;
            goto label_1d3150;
        }
    }
    ctx->pc = 0x1D3138u;
    // 0x1d3138: 0x1062002b  beq         $v1, $v0, . + 4 + (0x2B << 2)
    ctx->pc = 0x1D3138u;
    {
        const bool branch_taken_0x1d3138 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1D313Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D3138u;
        // 0x1d313c: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d3138) {
            ctx->pc = 0x1D31E8u;
            goto label_1d31e8;
        }
    }
    ctx->pc = 0x1D3140u;
    // 0x1d3140: 0x1062005f  beq         $v1, $v0, . + 4 + (0x5F << 2)
    ctx->pc = 0x1D3140u;
    {
        const bool branch_taken_0x1d3140 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1D3144u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D3140u;
        // 0x1d3144: 0x2402000a  addiu       $v0, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d3140) {
            ctx->pc = 0x1D32C0u;
            goto label_1d32c0;
        }
    }
    ctx->pc = 0x1D3148u;
    // 0x1d3148: 0x10000060  b           . + 4 + (0x60 << 2)
    ctx->pc = 0x1D3148u;
    {
        const bool branch_taken_0x1d3148 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D314Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D3148u;
        // 0x1d314c: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d3148) {
            ctx->pc = 0x1D32CCu;
            goto label_1d32cc;
        }
    }
    ctx->pc = 0x1D3150u;
label_1d3150:
    // 0x1d3150: 0x24620001  addiu       $v0, $v1, 0x1
    ctx->pc = 0x1d3150u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1d3154: 0x24030014  addiu       $v1, $zero, 0x14
    ctx->pc = 0x1d3154u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x1d3158: 0xae021808  sw          $v0, 0x1808($s0)
    ctx->pc = 0x1d3158u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 6152), GPR_U32(ctx, 2));
    // 0x1d315c: 0x1000005a  b           . + 4 + (0x5A << 2)
    ctx->pc = 0x1D315Cu;
    {
        const bool branch_taken_0x1d315c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D3160u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D315Cu;
        // 0x1d3160: 0xae03180c  sw          $v1, 0x180C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 6156), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d315c) {
            ctx->pc = 0x1D32C8u;
            goto label_1d32c8;
        }
    }
    ctx->pc = 0x1D3164u;
label_1d3164:
    // 0x1d3164: 0x14400054  bnez        $v0, . + 4 + (0x54 << 2)
    ctx->pc = 0x1D3164u;
    {
        const bool branch_taken_0x1d3164 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D3168u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D3164u;
        // 0x1d3168: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d3164) {
            ctx->pc = 0x1D32B8u;
            goto label_1d32b8;
        }
    }
    ctx->pc = 0x1D316Cu;
    // 0x1d316c: 0x960217fc  lhu         $v0, 0x17FC($s0)
    ctx->pc = 0x1d316cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 6140)));
    // 0x1d3170: 0x260d17d4  addiu       $t5, $s0, 0x17D4
    ctx->pc = 0x1d3170u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 16), 6100));
    // 0x1d3174: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x1d3174u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
    // 0x1d3178: 0x3c040060  lui         $a0, 0x60
    ctx->pc = 0x1d3178u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
    // 0x1d317c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1d317cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1d3180: 0x3463fffd  ori         $v1, $v1, 0xFFFD
    ctx->pc = 0x1d3180u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65533);
    // 0x1d3184: 0x1a21021  addu        $v0, $t5, $v0
    ctx->pc = 0x1d3184u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 13), GPR_U32(ctx, 2)));
    // 0x1d3188: 0x2484ee00  addiu       $a0, $a0, -0x1200
    ctx->pc = 0x1d3188u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962688));
    // 0x1d318c: 0x8c470000  lw          $a3, 0x0($v0)
    ctx->pc = 0x1d318cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1d3190: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x1d3190u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1d3194: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1d3194u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d3198: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1d3198u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d319c: 0x8cec0000  lw          $t4, 0x0($a3)
    ctx->pc = 0x1d319cu;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x1d31a0: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1d31a0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d31a4: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1d31a4u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d31a8: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x1d31a8u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d31ac: 0x8d820250  lw          $v0, 0x250($t4)
    ctx->pc = 0x1d31acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 592)));
    // 0x1d31b0: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x1d31b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x1d31b4: 0xad820250  sw          $v0, 0x250($t4)
    ctx->pc = 0x1d31b4u;
    WRITE32(ADD32(GPR_U32(ctx, 12), 592), GPR_U32(ctx, 2));
    // 0x1d31b8: 0x960317fc  lhu         $v1, 0x17FC($s0)
    ctx->pc = 0x1d31b8u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 6140)));
    // 0x1d31bc: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1d31bcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1d31c0: 0x1a36821  addu        $t5, $t5, $v1
    ctx->pc = 0x1d31c0u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), GPR_U32(ctx, 3)));
    // 0x1d31c4: 0x8da20000  lw          $v0, 0x0($t5)
    ctx->pc = 0x1d31c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 0)));
    // 0x1d31c8: 0xc0b2e92  jal         func_2CBA48
    ctx->pc = 0x1D31C8u;
    SET_GPR_U32(ctx, 31, 0x1D31D0u);
    ctx->pc = 0x1D31CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D31C8u;
    // 0x1d31cc: 0x8c470000  lw          $a3, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CBA48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CBA48u, 0x1D31C8u, 0x1D31D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D31D0u;
label_1d31d0:
    // 0x1d31d0: 0x8e031808  lw          $v1, 0x1808($s0)
    ctx->pc = 0x1d31d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 6152)));
    // 0x1d31d4: 0x24020014  addiu       $v0, $zero, 0x14
    ctx->pc = 0x1d31d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x1d31d8: 0xae02180c  sw          $v0, 0x180C($s0)
    ctx->pc = 0x1d31d8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 6156), GPR_U32(ctx, 2));
    // 0x1d31dc: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1d31dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1d31e0: 0x10000039  b           . + 4 + (0x39 << 2)
    ctx->pc = 0x1D31E0u;
    {
        const bool branch_taken_0x1d31e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D31E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D31E0u;
        // 0x1d31e4: 0xae031808  sw          $v1, 0x1808($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 6152), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d31e0) {
            ctx->pc = 0x1D32C8u;
            goto label_1d32c8;
        }
    }
    ctx->pc = 0x1D31E8u;
label_1d31e8:
    // 0x1d31e8: 0x960317fc  lhu         $v1, 0x17FC($s0)
    ctx->pc = 0x1d31e8u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 6140)));
    // 0x1d31ec: 0xc600180c  lwc1        $f0, 0x180C($s0)
    ctx->pc = 0x1d31ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 6156)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1d31f0: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1d31f0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1d31f4: 0x3c0141a0  lui         $at, 0x41A0
    ctx->pc = 0x1d31f4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16800 << 16));
    // 0x1d31f8: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1d31f8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1d31fc: 0x3c040057  lui         $a0, 0x57
    ctx->pc = 0x1d31fcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
    // 0x1d3200: 0x248480f0  addiu       $a0, $a0, -0x7F10
    ctx->pc = 0x1d3200u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294934768));
    // 0x1d3204: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x1d3204u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x1d3208: 0x960517fc  lhu         $a1, 0x17FC($s0)
    ctx->pc = 0x1d3208u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 6140)));
    // 0x1d320c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1d320cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1d3210: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x1d3210u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1d3214: 0xc4620000  lwc1        $f2, 0x0($v1)
    ctx->pc = 0x1d3214u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1d3218: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1d3218u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1d321c: 0x44812800  mtc1        $at, $f5
    ctx->pc = 0x1d321cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
    // 0x1d3220: 0x51100  sll         $v0, $a1, 4
    ctx->pc = 0x1d3220u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
    // 0x1d3224: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x1d3224u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x1d3228: 0xc4640008  lwc1        $f4, 0x8($v1)
    ctx->pc = 0x1d3228u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x1d322c: 0x46051080  add.s       $f2, $f2, $f5
    ctx->pc = 0x1d322cu;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[5]);
    // 0x1d3230: 0xc4630004  lwc1        $f3, 0x4($v1)
    ctx->pc = 0x1d3230u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1d3234: 0x0  nop
    ctx->pc = 0x1d3234u;
    // NOP
    // 0x1d3238: 0x0  nop
    ctx->pc = 0x1d3238u;
    // NOP
    // 0x1d323c: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x1d323cu;
    ctx->f[0] = ps2FpuDivide(ctx->fcr31, ctx->f[0], ctx->f[1]);
    // 0x1d3240: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x1d3240u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x1d3244: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x1d3244u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1d3248: 0x2052821  addu        $a1, $s0, $a1
    ctx->pc = 0x1d3248u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 5)));
    // 0x1d324c: 0xe7a40008  swc1        $f4, 0x8($sp)
    ctx->pc = 0x1d324cu;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x1d3250: 0xe7a30004  swc1        $f3, 0x4($sp)
    ctx->pc = 0x1d3250u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x1d3254: 0x46020841  sub.s       $f1, $f1, $f2
    ctx->pc = 0x1d3254u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[2]);
    // 0x1d3258: 0xe7a5000c  swc1        $f5, 0xC($sp)
    ctx->pc = 0x1d3258u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x1d325c: 0x8ca217d4  lw          $v0, 0x17D4($a1)
    ctx->pc = 0x1d325cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 6100)));
    // 0x1d3260: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1d3260u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1d3264: 0xe7a20000  swc1        $f2, 0x0($sp)
    ctx->pc = 0x1d3264u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x1d3268: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1d3268u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1d326c: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x1d326cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x1d3270: 0x8c6200f0  lw          $v0, 0xF0($v1)
    ctx->pc = 0x1d3270u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 240)));
    // 0x1d3274: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x1d3274u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x1d3278: 0x8e02180c  lw          $v0, 0x180C($s0)
    ctx->pc = 0x1d3278u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 6156)));
    // 0x1d327c: 0x1440000e  bnez        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x1D327Cu;
    {
        const bool branch_taken_0x1d327c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D3280u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D327Cu;
        // 0x1d3280: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d327c) {
            ctx->pc = 0x1D32B8u;
            goto label_1d32b8;
        }
    }
    ctx->pc = 0x1D3284u;
    // 0x1d3284: 0x960217fc  lhu         $v0, 0x17FC($s0)
    ctx->pc = 0x1d3284u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 6140)));
    // 0x1d3288: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d3288u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d328c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1d328cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1d3290: 0xc0751c8  jal         func_1D4720
    ctx->pc = 0x1D3290u;
    SET_GPR_U32(ctx, 31, 0x1D3298u);
    ctx->pc = 0x1D3294u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D3290u;
    // 0x1d3294: 0xa60217fc  sh          $v0, 0x17FC($s0) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 16), 6140), (uint16_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D4720u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D4720u, 0x1D3290u, 0x1D3298u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D3298u;
label_1d3298:
    // 0x1d3298: 0x28420016  slti        $v0, $v0, 0x16
    ctx->pc = 0x1d3298u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)22) ? 1 : 0);
    // 0x1d329c: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x1d329cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x1d32a0: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1D32A0u;
    {
        const bool branch_taken_0x1d32a0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D32A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D32A0u;
        // 0x1d32a4: 0x2402000f  addiu       $v0, $zero, 0xF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d32a0) {
            ctx->pc = 0x1D32C0u;
            goto label_1d32c0;
        }
    }
    ctx->pc = 0x1D32A8u;
    // 0x1d32a8: 0x8e021808  lw          $v0, 0x1808($s0)
    ctx->pc = 0x1d32a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 6152)));
    // 0x1d32ac: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1d32acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1d32b0: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1D32B0u;
    {
        const bool branch_taken_0x1d32b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D32B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D32B0u;
        // 0x1d32b4: 0xae021808  sw          $v0, 0x1808($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 6152), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d32b0) {
            ctx->pc = 0x1D32C8u;
            goto label_1d32c8;
        }
    }
    ctx->pc = 0x1D32B8u;
label_1d32b8:
    // 0x1d32b8: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1D32B8u;
    {
        const bool branch_taken_0x1d32b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D32BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D32B8u;
        // 0x1d32bc: 0xae02180c  sw          $v0, 0x180C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 6156), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d32b8) {
            ctx->pc = 0x1D32C8u;
            goto label_1d32c8;
        }
    }
    ctx->pc = 0x1D32C0u;
label_1d32c0:
    // 0x1d32c0: 0xae001808  sw          $zero, 0x1808($s0)
    ctx->pc = 0x1d32c0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 6152), GPR_U32(ctx, 0));
    // 0x1d32c4: 0xae021804  sw          $v0, 0x1804($s0)
    ctx->pc = 0x1d32c4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 6148), GPR_U32(ctx, 2));
label_1d32c8:
    // 0x1d32c8: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x1d32c8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1d32cc:
    // 0x1d32cc: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1d32ccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d32d0: 0x3e00008  jr          $ra
    ctx->pc = 0x1D32D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D32D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D32D0u;
        // 0x1d32d4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D32D0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D32D8u;
}
