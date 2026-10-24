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

// Function: func_001BFD28
// Address: 0x1bfd28 - 0x1bff48
void func_001BFD28_0x1bfd28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_001BFD28_0x1bfd28");
#endif

    switch (ctx->pc) {
        case 0x1bfd28u: goto label_1bfd28;
        case 0x1bfd2cu: goto label_1bfd2c;
        case 0x1bfd30u: goto label_1bfd30;
        case 0x1bfd34u: goto label_1bfd34;
        case 0x1bfd38u: goto label_1bfd38;
        case 0x1bfd3cu: goto label_1bfd3c;
        case 0x1bfd40u: goto label_1bfd40;
        case 0x1bfd44u: goto label_1bfd44;
        case 0x1bfd48u: goto label_1bfd48;
        case 0x1bfd4cu: goto label_1bfd4c;
        case 0x1bfd50u: goto label_1bfd50;
        case 0x1bfd54u: goto label_1bfd54;
        case 0x1bfd58u: goto label_1bfd58;
        case 0x1bfd5cu: goto label_1bfd5c;
        case 0x1bfd60u: goto label_1bfd60;
        case 0x1bfd64u: goto label_1bfd64;
        case 0x1bfd68u: goto label_1bfd68;
        case 0x1bfd6cu: goto label_1bfd6c;
        case 0x1bfd70u: goto label_1bfd70;
        case 0x1bfd74u: goto label_1bfd74;
        case 0x1bfd78u: goto label_1bfd78;
        case 0x1bfd7cu: goto label_1bfd7c;
        case 0x1bfd80u: goto label_1bfd80;
        case 0x1bfd84u: goto label_1bfd84;
        case 0x1bfd88u: goto label_1bfd88;
        case 0x1bfd8cu: goto label_1bfd8c;
        case 0x1bfd90u: goto label_1bfd90;
        case 0x1bfd94u: goto label_1bfd94;
        case 0x1bfd98u: goto label_1bfd98;
        case 0x1bfd9cu: goto label_1bfd9c;
        case 0x1bfda0u: goto label_1bfda0;
        case 0x1bfda4u: goto label_1bfda4;
        case 0x1bfda8u: goto label_1bfda8;
        case 0x1bfdacu: goto label_1bfdac;
        case 0x1bfdb0u: goto label_1bfdb0;
        case 0x1bfdb4u: goto label_1bfdb4;
        case 0x1bfdb8u: goto label_1bfdb8;
        case 0x1bfdbcu: goto label_1bfdbc;
        case 0x1bfdc0u: goto label_1bfdc0;
        case 0x1bfdc4u: goto label_1bfdc4;
        case 0x1bfdc8u: goto label_1bfdc8;
        case 0x1bfdccu: goto label_1bfdcc;
        case 0x1bfdd0u: goto label_1bfdd0;
        case 0x1bfdd4u: goto label_1bfdd4;
        case 0x1bfdd8u: goto label_1bfdd8;
        case 0x1bfddcu: goto label_1bfddc;
        case 0x1bfde0u: goto label_1bfde0;
        case 0x1bfde4u: goto label_1bfde4;
        case 0x1bfde8u: goto label_1bfde8;
        case 0x1bfdecu: goto label_1bfdec;
        case 0x1bfdf0u: goto label_1bfdf0;
        case 0x1bfdf4u: goto label_1bfdf4;
        case 0x1bfdf8u: goto label_1bfdf8;
        case 0x1bfdfcu: goto label_1bfdfc;
        case 0x1bfe00u: goto label_1bfe00;
        case 0x1bfe04u: goto label_1bfe04;
        case 0x1bfe08u: goto label_1bfe08;
        case 0x1bfe0cu: goto label_1bfe0c;
        case 0x1bfe10u: goto label_1bfe10;
        case 0x1bfe14u: goto label_1bfe14;
        case 0x1bfe18u: goto label_1bfe18;
        case 0x1bfe1cu: goto label_1bfe1c;
        case 0x1bfe20u: goto label_1bfe20;
        case 0x1bfe24u: goto label_1bfe24;
        case 0x1bfe28u: goto label_1bfe28;
        case 0x1bfe2cu: goto label_1bfe2c;
        case 0x1bfe30u: goto label_1bfe30;
        case 0x1bfe34u: goto label_1bfe34;
        case 0x1bfe38u: goto label_1bfe38;
        case 0x1bfe3cu: goto label_1bfe3c;
        case 0x1bfe40u: goto label_1bfe40;
        case 0x1bfe44u: goto label_1bfe44;
        case 0x1bfe48u: goto label_1bfe48;
        case 0x1bfe4cu: goto label_1bfe4c;
        case 0x1bfe50u: goto label_1bfe50;
        case 0x1bfe54u: goto label_1bfe54;
        case 0x1bfe58u: goto label_1bfe58;
        case 0x1bfe5cu: goto label_1bfe5c;
        case 0x1bfe60u: goto label_1bfe60;
        case 0x1bfe64u: goto label_1bfe64;
        case 0x1bfe68u: goto label_1bfe68;
        case 0x1bfe6cu: goto label_1bfe6c;
        case 0x1bfe70u: goto label_1bfe70;
        case 0x1bfe74u: goto label_1bfe74;
        case 0x1bfe78u: goto label_1bfe78;
        case 0x1bfe7cu: goto label_1bfe7c;
        case 0x1bfe80u: goto label_1bfe80;
        case 0x1bfe84u: goto label_1bfe84;
        case 0x1bfe88u: goto label_1bfe88;
        case 0x1bfe8cu: goto label_1bfe8c;
        case 0x1bfe90u: goto label_1bfe90;
        case 0x1bfe94u: goto label_1bfe94;
        case 0x1bfe98u: goto label_1bfe98;
        case 0x1bfe9cu: goto label_1bfe9c;
        case 0x1bfea0u: goto label_1bfea0;
        case 0x1bfea4u: goto label_1bfea4;
        case 0x1bfea8u: goto label_1bfea8;
        case 0x1bfeacu: goto label_1bfeac;
        case 0x1bfeb0u: goto label_1bfeb0;
        case 0x1bfeb4u: goto label_1bfeb4;
        case 0x1bfeb8u: goto label_1bfeb8;
        case 0x1bfebcu: goto label_1bfebc;
        case 0x1bfec0u: goto label_1bfec0;
        case 0x1bfec4u: goto label_1bfec4;
        case 0x1bfec8u: goto label_1bfec8;
        case 0x1bfeccu: goto label_1bfecc;
        case 0x1bfed0u: goto label_1bfed0;
        case 0x1bfed4u: goto label_1bfed4;
        case 0x1bfed8u: goto label_1bfed8;
        case 0x1bfedcu: goto label_1bfedc;
        case 0x1bfee0u: goto label_1bfee0;
        case 0x1bfee4u: goto label_1bfee4;
        case 0x1bfee8u: goto label_1bfee8;
        case 0x1bfeecu: goto label_1bfeec;
        case 0x1bfef0u: goto label_1bfef0;
        case 0x1bfef4u: goto label_1bfef4;
        case 0x1bfef8u: goto label_1bfef8;
        case 0x1bfefcu: goto label_1bfefc;
        case 0x1bff00u: goto label_1bff00;
        case 0x1bff04u: goto label_1bff04;
        case 0x1bff08u: goto label_1bff08;
        case 0x1bff0cu: goto label_1bff0c;
        case 0x1bff10u: goto label_1bff10;
        case 0x1bff14u: goto label_1bff14;
        case 0x1bff18u: goto label_1bff18;
        case 0x1bff1cu: goto label_1bff1c;
        case 0x1bff20u: goto label_1bff20;
        case 0x1bff24u: goto label_1bff24;
        case 0x1bff28u: goto label_1bff28;
        case 0x1bff2cu: goto label_1bff2c;
        case 0x1bff30u: goto label_1bff30;
        case 0x1bff34u: goto label_1bff34;
        case 0x1bff38u: goto label_1bff38;
        case 0x1bff3cu: goto label_1bff3c;
        case 0x1bff40u: goto label_1bff40;
        case 0x1bff44u: goto label_1bff44;
        default: break;
    }

    ctx->pc = 0x1bfd28u;

label_1bfd28:
    // 0x1bfd28: 0x27bdff30  addiu       $sp, $sp, -0xD0
    ctx->pc = 0x1bfd28u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967088));
label_1bfd2c:
    // 0x1bfd2c: 0x7fb000b0  sq          $s0, 0xB0($sp)
    ctx->pc = 0x1bfd2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 16));
label_1bfd30:
    // 0x1bfd30: 0x7fb100a0  sq          $s1, 0xA0($sp)
    ctx->pc = 0x1bfd30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 17));
label_1bfd34:
    // 0x1bfd34: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1bfd34u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1bfd38:
    // 0x1bfd38: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x1bfd38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
label_1bfd3c:
    // 0x1bfd3c: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x1bfd3cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1bfd40:
    // 0x1bfd40: 0xe7b400c0  swc1        $f20, 0xC0($sp)
    ctx->pc = 0x1bfd40u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 192), bits); }
label_1bfd44:
    // 0x1bfd44: 0x920302f5  lbu         $v1, 0x2F5($s0)
    ctx->pc = 0x1bfd44u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 757)));
label_1bfd48:
    // 0x1bfd48: 0x1071005a  beq         $v1, $s1, . + 4 + (0x5A << 2)
label_1bfd4c:
    if (ctx->pc == 0x1BFD4Cu) {
        ctx->pc = 0x1BFD4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BFD48u;
        // 0x1bfd4c: 0x28620002  slti        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BFD50u;
        goto label_1bfd50;
    }
    ctx->pc = 0x1BFD48u;
    {
        const bool branch_taken_0x1bfd48 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 17));
        ctx->pc = 0x1BFD4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BFD48u;
        // 0x1bfd4c: 0x28620002  slti        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bfd48) {
            ctx->pc = 0x1BFEB4u;
            goto label_1bfeb4;
        }
    }
    ctx->pc = 0x1BFD50u;
label_1bfd50:
    // 0x1bfd50: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
label_1bfd54:
    if (ctx->pc == 0x1BFD54u) {
        ctx->pc = 0x1BFD54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BFD50u;
        // 0x1bfd54: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BFD58u;
        goto label_1bfd58;
    }
    ctx->pc = 0x1BFD50u;
    {
        const bool branch_taken_0x1bfd50 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bfd50) {
            ctx->pc = 0x1BFD54u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1BFD50u;
            // 0x1bfd54: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1BFD68u;
            goto label_1bfd68;
        }
    }
    ctx->pc = 0x1BFD58u;
label_1bfd58:
    // 0x1bfd58: 0x50600009  beql        $v1, $zero, . + 4 + (0x9 << 2)
label_1bfd5c:
    if (ctx->pc == 0x1BFD5Cu) {
        ctx->pc = 0x1BFD5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BFD58u;
        // 0x1bfd5c: 0xc60c05c0  lwc1        $f12, 0x5C0($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1472)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BFD60u;
        goto label_1bfd60;
    }
    ctx->pc = 0x1BFD58u;
    {
        const bool branch_taken_0x1bfd58 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bfd58) {
            ctx->pc = 0x1BFD5Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1BFD58u;
            // 0x1bfd5c: 0xc60c05c0  lwc1        $f12, 0x5C0($s0) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1472)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x1BFD80u;
            goto label_1bfd80;
        }
    }
    ctx->pc = 0x1BFD60u;
label_1bfd60:
    // 0x1bfd60: 0x10000074  b           . + 4 + (0x74 << 2)
label_1bfd64:
    if (ctx->pc == 0x1BFD64u) {
        ctx->pc = 0x1BFD64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BFD60u;
        // 0x1bfd64: 0x7bb000b0  lq          $s0, 0xB0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 176)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BFD68u;
        goto label_1bfd68;
    }
    ctx->pc = 0x1BFD60u;
    {
        const bool branch_taken_0x1bfd60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BFD64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BFD60u;
        // 0x1bfd64: 0x7bb000b0  lq          $s0, 0xB0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 176)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bfd60) {
            ctx->pc = 0x1BFF34u;
            goto label_1bff34;
        }
    }
    ctx->pc = 0x1BFD68u;
label_1bfd68:
    // 0x1bfd68: 0x1062005d  beq         $v1, $v0, . + 4 + (0x5D << 2)
label_1bfd6c:
    if (ctx->pc == 0x1BFD6Cu) {
        ctx->pc = 0x1BFD6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BFD68u;
        // 0x1bfd6c: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BFD70u;
        goto label_1bfd70;
    }
    ctx->pc = 0x1BFD68u;
    {
        const bool branch_taken_0x1bfd68 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1BFD6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BFD68u;
        // 0x1bfd6c: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bfd68) {
            ctx->pc = 0x1BFEE0u;
            goto label_1bfee0;
        }
    }
    ctx->pc = 0x1BFD70u;
label_1bfd70:
    // 0x1bfd70: 0x5062006c  beql        $v1, $v0, . + 4 + (0x6C << 2)
label_1bfd74:
    if (ctx->pc == 0x1BFD74u) {
        ctx->pc = 0x1BFD74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BFD70u;
        // 0x1bfd74: 0xa20302f4  sb          $v1, 0x2F4($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 756), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BFD78u;
        goto label_1bfd78;
    }
    ctx->pc = 0x1BFD70u;
    {
        const bool branch_taken_0x1bfd70 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1bfd70) {
            ctx->pc = 0x1BFD74u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1BFD70u;
            // 0x1bfd74: 0xa20302f4  sb          $v1, 0x2F4($s0) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 16), 756), (uint8_t)GPR_U32(ctx, 3));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1BFF24u;
            goto label_1bff24;
        }
    }
    ctx->pc = 0x1BFD78u;
label_1bfd78:
    // 0x1bfd78: 0x1000006e  b           . + 4 + (0x6E << 2)
label_1bfd7c:
    if (ctx->pc == 0x1BFD7Cu) {
        ctx->pc = 0x1BFD7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BFD78u;
        // 0x1bfd7c: 0x7bb000b0  lq          $s0, 0xB0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 176)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BFD80u;
        goto label_1bfd80;
    }
    ctx->pc = 0x1BFD78u;
    {
        const bool branch_taken_0x1bfd78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BFD7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BFD78u;
        // 0x1bfd7c: 0x7bb000b0  lq          $s0, 0xB0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 176)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bfd78) {
            ctx->pc = 0x1BFF34u;
            goto label_1bff34;
        }
    }
    ctx->pc = 0x1BFD80u;
label_1bfd80:
    // 0x1bfd80: 0xc07e060  jal         func_1F8180
label_1bfd84:
    if (ctx->pc == 0x1BFD84u) {
        ctx->pc = 0x1BFD84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BFD80u;
        // 0x1bfd84: 0xc60d05c8  lwc1        $f13, 0x5C8($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1480)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BFD88u;
        goto label_1bfd88;
    }
    ctx->pc = 0x1BFD80u;
    SET_GPR_U32(ctx, 31, 0x1BFD88u);
    ctx->pc = 0x1BFD84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BFD80u;
    // 0x1bfd84: 0xc60d05c8  lwc1        $f13, 0x5C8($s0) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1480)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F8180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F8180u, 0x1BFD80u, 0x1BFD88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BFD88u;
label_1bfd88:
    // 0x1bfd88: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x1bfd88u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
label_1bfd8c:
    // 0x1bfd8c: 0xfba00000  sqc2        $vf0, 0x0($sp)
    ctx->pc = 0x1bfd8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[0]));
label_1bfd90:
    // 0x1bfd90: 0x8e030214  lw          $v1, 0x214($s0)
    ctx->pc = 0x1bfd90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 532)));
label_1bfd94:
    // 0x1bfd94: 0x84640080  lh          $a0, 0x80($v1)
    ctx->pc = 0x1bfd94u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 128)));
label_1bfd98:
    // 0x1bfd98: 0x8c620084  lw          $v0, 0x84($v1)
    ctx->pc = 0x1bfd98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 132)));
label_1bfd9c:
    // 0x1bfd9c: 0x40f809  jalr        $v0
label_1bfda0:
    if (ctx->pc == 0x1BFDA0u) {
        ctx->pc = 0x1BFDA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BFD9Cu;
        // 0x1bfda0: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BFDA4u;
        goto label_1bfda4;
    }
    ctx->pc = 0x1BFD9Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1BFDA4u);
        ctx->pc = 0x1BFDA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BFD9Cu;
        // 0x1bfda0: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1BFD9Cu, 0x1BFDA4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1BFDA4u;
label_1bfda4:
    // 0x1bfda4: 0x13a20007  beq         $sp, $v0, . + 4 + (0x7 << 2)
label_1bfda8:
    if (ctx->pc == 0x1BFDA8u) {
        ctx->pc = 0x1BFDACu;
        goto label_1bfdac;
    }
    ctx->pc = 0x1BFDA4u;
    {
        const bool branch_taken_0x1bfda4 = (GPR_U64(ctx, 29) == GPR_U64(ctx, 2));
        if (branch_taken_0x1bfda4) {
            ctx->pc = 0x1BFDC4u;
            goto label_1bfdc4;
        }
    }
    ctx->pc = 0x1BFDACu;
label_1bfdac:
    // 0x1bfdac: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x1bfdacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1bfdb0:
    // 0x1bfdb0: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x1bfdb0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_1bfdb4:
    // 0x1bfdb4: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x1bfdb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1bfdb8:
    // 0x1bfdb8: 0xe7a10004  swc1        $f1, 0x4($sp)
    ctx->pc = 0x1bfdb8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_1bfdbc:
    // 0x1bfdbc: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x1bfdbcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1bfdc0:
    // 0x1bfdc0: 0xe7a00008  swc1        $f0, 0x8($sp)
    ctx->pc = 0x1bfdc0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_1bfdc4:
    // 0x1bfdc4: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1bfdc4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_1bfdc8:
    // 0x1bfdc8: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x1bfdc8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_1bfdcc:
    // 0x1bfdcc: 0x27a70010  addiu       $a3, $sp, 0x10
    ctx->pc = 0x1bfdccu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_1bfdd0:
    // 0x1bfdd0: 0xe7a30010  swc1        $f3, 0x10($sp)
    ctx->pc = 0x1bfdd0u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
label_1bfdd4:
    // 0x1bfdd4: 0xe4e30004  swc1        $f3, 0x4($a3)
    ctx->pc = 0x1bfdd4u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 4), bits); }
label_1bfdd8:
    // 0x1bfdd8: 0xe4e30008  swc1        $f3, 0x8($a3)
    ctx->pc = 0x1bfdd8u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 8), bits); }
label_1bfddc:
    // 0x1bfddc: 0xe4e3000c  swc1        $f3, 0xC($a3)
    ctx->pc = 0x1bfddcu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 12), bits); }
label_1bfde0:
    // 0x1bfde0: 0xfba00020  sqc2        $vf0, 0x20($sp)
    ctx->pc = 0x1bfde0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[0]));
label_1bfde4:
    // 0x1bfde4: 0xfba00030  sqc2        $vf0, 0x30($sp)
    ctx->pc = 0x1bfde4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[0]));
label_1bfde8:
    // 0x1bfde8: 0xe7a30040  swc1        $f3, 0x40($sp)
    ctx->pc = 0x1bfde8u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
label_1bfdec:
    // 0x1bfdec: 0x27a20040  addiu       $v0, $sp, 0x40
    ctx->pc = 0x1bfdecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_1bfdf0:
    // 0x1bfdf0: 0xe443000c  swc1        $f3, 0xC($v0)
    ctx->pc = 0x1bfdf0u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
label_1bfdf4:
    // 0x1bfdf4: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x1bfdf4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_1bfdf8:
    // 0x1bfdf8: 0xe4430004  swc1        $f3, 0x4($v0)
    ctx->pc = 0x1bfdf8u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
label_1bfdfc:
    // 0x1bfdfc: 0x240400ff  addiu       $a0, $zero, 0xFF
    ctx->pc = 0x1bfdfcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
label_1bfe00:
    // 0x1bfe00: 0xe4430008  swc1        $f3, 0x8($v0)
    ctx->pc = 0x1bfe00u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
label_1bfe04:
    // 0x1bfe04: 0xe4e30040  swc1        $f3, 0x40($a3)
    ctx->pc = 0x1bfe04u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 64), bits); }
label_1bfe08:
    // 0x1bfe08: 0xafa00054  sw          $zero, 0x54($sp)
    ctx->pc = 0x1bfe08u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 0));
label_1bfe0c:
    // 0x1bfe0c: 0xafa00058  sw          $zero, 0x58($sp)
    ctx->pc = 0x1bfe0cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 0));
label_1bfe10:
    // 0x1bfe10: 0xa0e3004c  sb          $v1, 0x4C($a3)
    ctx->pc = 0x1bfe10u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 76), (uint8_t)GPR_U32(ctx, 3));
label_1bfe14:
    // 0x1bfe14: 0xa3a0005d  sb          $zero, 0x5D($sp)
    ctx->pc = 0x1bfe14u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 93), (uint8_t)GPR_U32(ctx, 0));
label_1bfe18:
    // 0x1bfe18: 0xa3a0005e  sb          $zero, 0x5E($sp)
    ctx->pc = 0x1bfe18u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 94), (uint8_t)GPR_U32(ctx, 0));
label_1bfe1c:
    // 0x1bfe1c: 0xa0e4004f  sb          $a0, 0x4F($a3)
    ctx->pc = 0x1bfe1cu;
    WRITE8(ADD32(GPR_U32(ctx, 7), 79), (uint8_t)GPR_U32(ctx, 4));
label_1bfe20:
    // 0x1bfe20: 0xafa00060  sw          $zero, 0x60($sp)
    ctx->pc = 0x1bfe20u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 0));
label_1bfe24:
    // 0x1bfe24: 0xfba00070  sqc2        $vf0, 0x70($sp)
    ctx->pc = 0x1bfe24u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), _mm_castps_si128(ctx->vu0_vf[0]));
label_1bfe28:
    // 0x1bfe28: 0xe7b40024  swc1        $f20, 0x24($sp)
    ctx->pc = 0x1bfe28u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
label_1bfe2c:
    // 0x1bfe2c: 0x27a20030  addiu       $v0, $sp, 0x30
    ctx->pc = 0x1bfe2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_1bfe30:
    // 0x1bfe30: 0xa7a00080  sh          $zero, 0x80($sp)
    ctx->pc = 0x1bfe30u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 128), (uint16_t)GPR_U32(ctx, 0));
label_1bfe34:
    // 0x1bfe34: 0xa7a00082  sh          $zero, 0x82($sp)
    ctx->pc = 0x1bfe34u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 130), (uint16_t)GPR_U32(ctx, 0));
label_1bfe38:
    // 0x1bfe38: 0xa3a00084  sb          $zero, 0x84($sp)
    ctx->pc = 0x1bfe38u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 132), (uint8_t)GPR_U32(ctx, 0));
label_1bfe3c:
    // 0x1bfe3c: 0x105d0007  beq         $v0, $sp, . + 4 + (0x7 << 2)
label_1bfe40:
    if (ctx->pc == 0x1BFE40u) {
        ctx->pc = 0x1BFE40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BFE3Cu;
        // 0x1bfe40: 0xafa00088  sw          $zero, 0x88($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 136), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BFE44u;
        goto label_1bfe44;
    }
    ctx->pc = 0x1BFE3Cu;
    {
        const bool branch_taken_0x1bfe3c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 29));
        ctx->pc = 0x1BFE40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BFE3Cu;
        // 0x1bfe40: 0xafa00088  sw          $zero, 0x88($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 136), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bfe3c) {
            ctx->pc = 0x1BFE5Cu;
            goto label_1bfe5c;
        }
    }
    ctx->pc = 0x1BFE44u;
label_1bfe44:
    // 0x1bfe44: 0xc7a00000  lwc1        $f0, 0x0($sp)
    ctx->pc = 0x1bfe44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1bfe48:
    // 0x1bfe48: 0xc7a10004  lwc1        $f1, 0x4($sp)
    ctx->pc = 0x1bfe48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1bfe4c:
    // 0x1bfe4c: 0xc7a20008  lwc1        $f2, 0x8($sp)
    ctx->pc = 0x1bfe4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1bfe50:
    // 0x1bfe50: 0xe7a00030  swc1        $f0, 0x30($sp)
    ctx->pc = 0x1bfe50u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
label_1bfe54:
    // 0x1bfe54: 0xe7a10034  swc1        $f1, 0x34($sp)
    ctx->pc = 0x1bfe54u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
label_1bfe58:
    // 0x1bfe58: 0xe7a20038  swc1        $f2, 0x38($sp)
    ctx->pc = 0x1bfe58u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
label_1bfe5c:
    // 0x1bfe5c: 0x3c09ffff  lui         $t1, 0xFFFF
    ctx->pc = 0x1bfe5cu;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)65535 << 16));
label_1bfe60:
    // 0x1bfe60: 0xe7a30050  swc1        $f3, 0x50($sp)
    ctx->pc = 0x1bfe60u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
label_1bfe64:
    // 0x1bfe64: 0x2405001c  addiu       $a1, $zero, 0x1C
    ctx->pc = 0x1bfe64u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
label_1bfe68:
    // 0x1bfe68: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1bfe68u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1bfe6c:
    // 0x1bfe6c: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x1bfe6cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_1bfe70:
    // 0x1bfe70: 0x3529ffff  ori         $t1, $t1, 0xFFFF
    ctx->pc = 0x1bfe70u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)65535);
label_1bfe74:
    // 0x1bfe74: 0xc0c194a  jal         func_306528
label_1bfe78:
    if (ctx->pc == 0x1BFE78u) {
        ctx->pc = 0x1BFE78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BFE74u;
        // 0x1bfe78: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BFE7Cu;
        goto label_1bfe7c;
    }
    ctx->pc = 0x1BFE74u;
    SET_GPR_U32(ctx, 31, 0x1BFE7Cu);
    ctx->pc = 0x1BFE78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BFE74u;
    // 0x1bfe78: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x306528u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x306528u, 0x1BFE74u, 0x1BFE7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BFE7Cu;
label_1bfe7c:
    // 0x1bfe7c: 0x8e030214  lw          $v1, 0x214($s0)
    ctx->pc = 0x1bfe7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 532)));
label_1bfe80:
    // 0x1bfe80: 0x846400a8  lh          $a0, 0xA8($v1)
    ctx->pc = 0x1bfe80u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 168)));
label_1bfe84:
    // 0x1bfe84: 0x8c6200ac  lw          $v0, 0xAC($v1)
    ctx->pc = 0x1bfe84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 172)));
label_1bfe88:
    // 0x1bfe88: 0x40f809  jalr        $v0
label_1bfe8c:
    if (ctx->pc == 0x1BFE8Cu) {
        ctx->pc = 0x1BFE8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BFE88u;
        // 0x1bfe8c: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BFE90u;
        goto label_1bfe90;
    }
    ctx->pc = 0x1BFE88u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1BFE90u);
        ctx->pc = 0x1BFE8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BFE88u;
        // 0x1bfe8c: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1BFE88u, 0x1BFE90u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1BFE90u;
label_1bfe90:
    // 0x1bfe90: 0xc06ffda  jal         func_1BFF68
label_1bfe94:
    if (ctx->pc == 0x1BFE94u) {
        ctx->pc = 0x1BFE94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BFE90u;
        // 0x1bfe94: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BFE98u;
        goto label_1bfe98;
    }
    ctx->pc = 0x1BFE90u;
    SET_GPR_U32(ctx, 31, 0x1BFE98u);
    ctx->pc = 0x1BFE94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BFE90u;
    // 0x1bfe94: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BFF68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BFF68u, 0x1BFE90u, 0x1BFE98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BFE98u;
label_1bfe98:
    // 0x1bfe98: 0xc06de42  jal         func_1B7908
label_1bfe9c:
    if (ctx->pc == 0x1BFE9Cu) {
        ctx->pc = 0x1BFE9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BFE98u;
        // 0x1bfe9c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BFEA0u;
        goto label_1bfea0;
    }
    ctx->pc = 0x1BFE98u;
    SET_GPR_U32(ctx, 31, 0x1BFEA0u);
    ctx->pc = 0x1BFE9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BFE98u;
    // 0x1bfe9c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7908u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7908u, 0x1BFE98u, 0x1BFEA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BFEA0u;
label_1bfea0:
    // 0x1bfea0: 0x2402001e  addiu       $v0, $zero, 0x1E
    ctx->pc = 0x1bfea0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
label_1bfea4:
    // 0x1bfea4: 0xa21102f5  sb          $s1, 0x2F5($s0)
    ctx->pc = 0x1bfea4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 757), (uint8_t)GPR_U32(ctx, 17));
label_1bfea8:
    // 0x1bfea8: 0xa6020604  sh          $v0, 0x604($s0)
    ctx->pc = 0x1bfea8u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1540), (uint16_t)GPR_U32(ctx, 2));
label_1bfeac:
    // 0x1bfeac: 0xa20002f6  sb          $zero, 0x2F6($s0)
    ctx->pc = 0x1bfeacu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 0));
label_1bfeb0:
    // 0x1bfeb0: 0xa20002f7  sb          $zero, 0x2F7($s0)
    ctx->pc = 0x1bfeb0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 759), (uint8_t)GPR_U32(ctx, 0));
label_1bfeb4:
    // 0x1bfeb4: 0x96020604  lhu         $v0, 0x604($s0)
    ctx->pc = 0x1bfeb4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 1540)));
label_1bfeb8:
    // 0x1bfeb8: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1bfeb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_1bfebc:
    // 0x1bfebc: 0x21c00  sll         $v1, $v0, 16
    ctx->pc = 0x1bfebcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
label_1bfec0:
    // 0x1bfec0: 0x1c60001b  bgtz        $v1, . + 4 + (0x1B << 2)
label_1bfec4:
    if (ctx->pc == 0x1BFEC4u) {
        ctx->pc = 0x1BFEC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BFEC0u;
        // 0x1bfec4: 0xa6020604  sh          $v0, 0x604($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 1540), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BFEC8u;
        goto label_1bfec8;
    }
    ctx->pc = 0x1BFEC0u;
    {
        const bool branch_taken_0x1bfec0 = (GPR_S64(ctx, 3) > 0);
        ctx->pc = 0x1BFEC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BFEC0u;
        // 0x1bfec4: 0xa6020604  sh          $v0, 0x604($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 1540), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bfec0) {
            ctx->pc = 0x1BFF30u;
            goto label_1bff30;
        }
    }
    ctx->pc = 0x1BFEC8u;
label_1bfec8:
    // 0x1bfec8: 0x2402000f  addiu       $v0, $zero, 0xF
    ctx->pc = 0x1bfec8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
label_1bfecc:
    // 0x1bfecc: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1bfeccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1bfed0:
    // 0x1bfed0: 0xa6020604  sh          $v0, 0x604($s0)
    ctx->pc = 0x1bfed0u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1540), (uint16_t)GPR_U32(ctx, 2));
label_1bfed4:
    // 0x1bfed4: 0xa20302f5  sb          $v1, 0x2F5($s0)
    ctx->pc = 0x1bfed4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 757), (uint8_t)GPR_U32(ctx, 3));
label_1bfed8:
    // 0x1bfed8: 0x10000014  b           . + 4 + (0x14 << 2)
label_1bfedc:
    if (ctx->pc == 0x1BFEDCu) {
        ctx->pc = 0x1BFEDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BFED8u;
        // 0x1bfedc: 0xa20002f7  sb          $zero, 0x2F7($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 759), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BFEE0u;
        goto label_1bfee0;
    }
    ctx->pc = 0x1BFED8u;
    {
        const bool branch_taken_0x1bfed8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BFEDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BFED8u;
        // 0x1bfedc: 0xa20002f7  sb          $zero, 0x2F7($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 759), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bfed8) {
            ctx->pc = 0x1BFF2Cu;
            goto label_1bff2c;
        }
    }
    ctx->pc = 0x1BFEE0u;
label_1bfee0:
    // 0x1bfee0: 0x96020604  lhu         $v0, 0x604($s0)
    ctx->pc = 0x1bfee0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 1540)));
label_1bfee4:
    // 0x1bfee4: 0x3c014170  lui         $at, 0x4170
    ctx->pc = 0x1bfee4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16752 << 16));
label_1bfee8:
    // 0x1bfee8: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1bfee8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1bfeec:
    // 0x1bfeec: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1bfeecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_1bfef0:
    // 0x1bfef0: 0x21c00  sll         $v1, $v0, 16
    ctx->pc = 0x1bfef0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
label_1bfef4:
    // 0x1bfef4: 0xa6020604  sh          $v0, 0x604($s0)
    ctx->pc = 0x1bfef4u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1540), (uint16_t)GPR_U32(ctx, 2));
label_1bfef8:
    // 0x1bfef8: 0x31c03  sra         $v1, $v1, 16
    ctx->pc = 0x1bfef8u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 16));
label_1bfefc:
    // 0x1bfefc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1bfefcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1bff00:
    // 0x1bff00: 0x0  nop
    ctx->pc = 0x1bff00u;
    // NOP
label_1bff04:
    // 0x1bff04: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1bff04u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_1bff08:
    // 0x1bff08: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x1bff08u;
    ctx->f[0] = ps2FpuDivide(ctx->fcr31, ctx->f[0], ctx->f[1]);
label_1bff0c:
    // 0x1bff0c: 0x1c600008  bgtz        $v1, . + 4 + (0x8 << 2)
label_1bff10:
    if (ctx->pc == 0x1BFF10u) {
        ctx->pc = 0x1BFF10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BFF0Cu;
        // 0x1bff10: 0xe600024c  swc1        $f0, 0x24C($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 588), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BFF14u;
        goto label_1bff14;
    }
    ctx->pc = 0x1BFF0Cu;
    {
        const bool branch_taken_0x1bff0c = (GPR_S64(ctx, 3) > 0);
        ctx->pc = 0x1BFF10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BFF0Cu;
        // 0x1bff10: 0xe600024c  swc1        $f0, 0x24C($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 588), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bff0c) {
            ctx->pc = 0x1BFF30u;
            goto label_1bff30;
        }
    }
    ctx->pc = 0x1BFF14u;
label_1bff14:
    // 0x1bff14: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x1bff14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1bff18:
    // 0x1bff18: 0xa20002f7  sb          $zero, 0x2F7($s0)
    ctx->pc = 0x1bff18u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 759), (uint8_t)GPR_U32(ctx, 0));
label_1bff1c:
    // 0x1bff1c: 0x10000003  b           . + 4 + (0x3 << 2)
label_1bff20:
    if (ctx->pc == 0x1BFF20u) {
        ctx->pc = 0x1BFF20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BFF1Cu;
        // 0x1bff20: 0xa20202f5  sb          $v0, 0x2F5($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 757), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BFF24u;
        goto label_1bff24;
    }
    ctx->pc = 0x1BFF1Cu;
    {
        const bool branch_taken_0x1bff1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BFF20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BFF1Cu;
        // 0x1bff20: 0xa20202f5  sb          $v0, 0x2F5($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 757), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bff1c) {
            ctx->pc = 0x1BFF2Cu;
            goto label_1bff2c;
        }
    }
    ctx->pc = 0x1BFF24u;
label_1bff24:
    // 0x1bff24: 0xa20002f7  sb          $zero, 0x2F7($s0)
    ctx->pc = 0x1bff24u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 759), (uint8_t)GPR_U32(ctx, 0));
label_1bff28:
    // 0x1bff28: 0xa20002f5  sb          $zero, 0x2F5($s0)
    ctx->pc = 0x1bff28u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 757), (uint8_t)GPR_U32(ctx, 0));
label_1bff2c:
    // 0x1bff2c: 0xa20002f6  sb          $zero, 0x2F6($s0)
    ctx->pc = 0x1bff2cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 0));
label_1bff30:
    // 0x1bff30: 0x7bb000b0  lq          $s0, 0xB0($sp)
    ctx->pc = 0x1bff30u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_1bff34:
    // 0x1bff34: 0x7bb100a0  lq          $s1, 0xA0($sp)
    ctx->pc = 0x1bff34u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_1bff38:
    // 0x1bff38: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x1bff38u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_1bff3c:
    // 0x1bff3c: 0xc7b400c0  lwc1        $f20, 0xC0($sp)
    ctx->pc = 0x1bff3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_1bff40:
    // 0x1bff40: 0x3e00008  jr          $ra
label_1bff44:
    if (ctx->pc == 0x1BFF44u) {
        ctx->pc = 0x1BFF44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BFF40u;
        // 0x1bff44: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BFF48u;
        goto label_fallthrough_0x1bff40;
    }
    ctx->pc = 0x1BFF40u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1BFF44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BFF40u;
        // 0x1bff44: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1BFF40u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1bff40:
    ctx->pc = 0x1BFF48u;
}
