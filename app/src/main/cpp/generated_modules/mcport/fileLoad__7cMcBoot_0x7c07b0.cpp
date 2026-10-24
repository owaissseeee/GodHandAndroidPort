#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "mcport_functions.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

namespace gh_mcport
{
// Function: fileLoad__7cMcBoot
// Address: 0x7c07b0 - 0x7c0c58
void fileLoad__7cMcBoot_0x7c07b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("fileLoad__7cMcBoot_0x7c07b0");
#endif

    switch (ctx->pc) {
        case 0x7c0818u: goto label_7c0818;
        case 0x7c0830u: goto label_7c0830;
        case 0x7c0848u: goto label_7c0848;
        case 0x7c0870u: goto label_7c0870;
        case 0x7c0918u: goto label_7c0918;
        case 0x7c0994u: goto label_7c0994;
        case 0x7c09a4u: goto label_7c09a4;
        case 0x7c09c8u: goto label_7c09c8;
        case 0x7c09e4u: goto label_7c09e4;
        case 0x7c0a2cu: goto label_7c0a2c;
        case 0x7c0a44u: goto label_7c0a44;
        case 0x7c0a58u: goto label_7c0a58;
        case 0x7c0ac4u: goto label_7c0ac4;
        case 0x7c0adcu: goto label_7c0adc;
        case 0x7c0b08u: goto label_7c0b08;
        case 0x7c0b18u: goto label_7c0b18;
        case 0x7c0b44u: goto label_7c0b44;
        case 0x7c0b5cu: goto label_7c0b5c;
        case 0x7c0b84u: goto label_7c0b84;
        default: break;
    }

    ctx->pc = 0x7c07b0u;

    // 0x7c07b0: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x7c07b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x7c07b4: 0x7fb10070  sq          $s1, 0x70($sp)
    ctx->pc = 0x7c07b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 17));
    // 0x7c07b8: 0x7fb20060  sq          $s2, 0x60($sp)
    ctx->pc = 0x7c07b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 18));
    // 0x7c07bc: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x7c07bcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7c07c0: 0x7fb00080  sq          $s0, 0x80($sp)
    ctx->pc = 0x7c07c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 16));
    // 0x7c07c4: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x7c07c4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x7c07c8: 0x7fb30050  sq          $s3, 0x50($sp)
    ctx->pc = 0x7c07c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 19));
    // 0x7c07cc: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x7c07ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x7c07d0: 0x7fb50030  sq          $s5, 0x30($sp)
    ctx->pc = 0x7c07d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 21));
    // 0x7c07d4: 0x7fb60020  sq          $s6, 0x20($sp)
    ctx->pc = 0x7c07d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 22));
    // 0x7c07d8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x7c07d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x7c07dc: 0x8e2300f4  lw          $v1, 0xF4($s1)
    ctx->pc = 0x7c07dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 244)));
    // 0x7c07e0: 0x10720074  beq         $v1, $s2, . + 4 + (0x74 << 2)
    ctx->pc = 0x7C07E0u;
    {
        const bool branch_taken_0x7c07e0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 18));
        ctx->pc = 0x7C07E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C07E0u;
        // 0x7c07e4: 0x28620002  slti        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x7c07e0) {
            ctx->pc = 0x7C09B4u;
            goto label_7c09b4;
        }
    }
    ctx->pc = 0x7C07E8u;
    // 0x7c07e8: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x7C07E8u;
    {
        const bool branch_taken_0x7c07e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x7c07e8) {
            ctx->pc = 0x7C07ECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x7C07E8u;
            // 0x7c07ec: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x7C0800u;
            goto label_7c0800;
        }
    }
    ctx->pc = 0x7C07F0u;
    // 0x7c07f0: 0x10600009  beqz        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x7C07F0u;
    {
        const bool branch_taken_0x7c07f0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x7C07F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C07F0u;
        // 0x7c07f4: 0x7bb00080  lq          $s0, 0x80($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7c07f0) {
            ctx->pc = 0x7C0818u;
            goto label_7c0818;
        }
    }
    ctx->pc = 0x7C07F8u;
    // 0x7c07f8: 0x1000010f  b           . + 4 + (0x10F << 2)
    ctx->pc = 0x7C07F8u;
    {
        const bool branch_taken_0x7c07f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x7C07FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C07F8u;
        // 0x7c07fc: 0x7bb10070  lq          $s1, 0x70($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7c07f8) {
            ctx->pc = 0x7C0C38u;
            goto label_7c0c38;
        }
    }
    ctx->pc = 0x7C0800u;
label_7c0800:
    // 0x7c0800: 0x106200ab  beq         $v1, $v0, . + 4 + (0xAB << 2)
    ctx->pc = 0x7C0800u;
    {
        const bool branch_taken_0x7c0800 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x7C0804u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C0800u;
        // 0x7c0804: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7c0800) {
            ctx->pc = 0x7C0AB0u;
            goto label_7c0ab0;
        }
    }
    ctx->pc = 0x7C0808u;
    // 0x7c0808: 0x106200ca  beq         $v1, $v0, . + 4 + (0xCA << 2)
    ctx->pc = 0x7C0808u;
    {
        const bool branch_taken_0x7c0808 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x7C080Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C0808u;
        // 0x7c080c: 0x7bb00080  lq          $s0, 0x80($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7c0808) {
            ctx->pc = 0x7C0B34u;
            goto label_7c0b34;
        }
    }
    ctx->pc = 0x7C0810u;
    // 0x7c0810: 0x10000109  b           . + 4 + (0x109 << 2)
    ctx->pc = 0x7C0810u;
    {
        const bool branch_taken_0x7c0810 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x7C0814u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C0810u;
        // 0x7c0814: 0x7bb10070  lq          $s1, 0x70($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7c0810) {
            ctx->pc = 0x7C0C38u;
            goto label_7c0c38;
        }
    }
    ctx->pc = 0x7C0818u;
label_7c0818:
    // 0x7c0818: 0x26300088  addiu       $s0, $s1, 0x88
    ctx->pc = 0x7c0818u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 136));
    // 0x7c081c: 0x24120014  addiu       $s2, $zero, 0x14
    ctx->pc = 0x7c081cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x7c0820: 0x24140001  addiu       $s4, $zero, 0x1
    ctx->pc = 0x7c0820u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x7c0824: 0x3c150074  lui         $s5, 0x74
    ctx->pc = 0x7c0824u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)116 << 16));
    // 0x7c0828: 0x24160001  addiu       $s6, $zero, 0x1
    ctx->pc = 0x7c0828u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x7c082c: 0x0  nop
    ctx->pc = 0x7c082cu;
    // NOP
label_7c0830:
    // 0x7c0830: 0x8e230008  lw          $v1, 0x8($s1)
    ctx->pc = 0x7c0830u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x7c0834: 0x28620014  slti        $v0, $v1, 0x14
    ctx->pc = 0x7c0834u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)20) ? 1 : 0);
    // 0x7c0838: 0x5440002f  bnel        $v0, $zero, . + 4 + (0x2F << 2)
    ctx->pc = 0x7C0838u;
    {
        const bool branch_taken_0x7c0838 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x7c0838) {
            ctx->pc = 0x7C083Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x7C0838u;
            // 0x7c083c: 0x72001a  div         $zero, $v1, $s2 (Delay Slot)
            { int32_t divisor = GPR_S32(ctx, 18);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
            ctx->in_delay_slot = false;
            ctx->pc = 0x7C08F8u;
            goto label_7c08f8;
        }
    }
    ctx->pc = 0x7C0840u;
    // 0x7c0840: 0xc1f241c  jal         func_7C9070
    ctx->pc = 0x7C0840u;
    SET_GPR_U32(ctx, 31, 0x7C0848u);
    ctx->pc = 0x7C0844u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7C0840u;
    // 0x7c0844: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7C9070u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7C9070u, 0x7C0840u, 0x7C0848u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7C0848u;
label_7c0848:
    // 0x7c0848: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x7c0848u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x7c084c: 0x52400001  beql        $s2, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x7C084Cu;
    {
        const bool branch_taken_0x7c084c = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x7c084c) {
            ctx->pc = 0x7C0850u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x7C084Cu;
            // 0x7c0850: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x7C0854u;
            goto label_7c0854;
        }
    }
    ctx->pc = 0x7C0854u;
label_7c0854:
    // 0x7c0854: 0x52001a  div         $zero, $v0, $s2
    ctx->pc = 0x7c0854u;
    { int32_t divisor = GPR_S32(ctx, 18);    int32_t dividend = GPR_S32(ctx, 2);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x7c0858: 0x2010  mfhi        $a0
    ctx->pc = 0x7c0858u;
    SET_GPR_U64(ctx, 4, ctx->hi);
    // 0x7c085c: 0x481000e  bgez        $a0, . + 4 + (0xE << 2)
    ctx->pc = 0x7C085Cu;
    {
        const bool branch_taken_0x7c085c = (GPR_S64(ctx, 4) >= 0);
        ctx->pc = 0x7C0860u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C085Cu;
        // 0x7c0860: 0x44102a  slt         $v0, $v0, $a0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x7c085c) {
            ctx->pc = 0x7C0898u;
            goto label_7c0898;
        }
    }
    ctx->pc = 0x7C0864u;
    // 0x7c0864: 0x200182d  daddu       $v1, $s0, $zero
    ctx->pc = 0x7c0864u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7c0868: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x7c0868u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7c086c: 0x0  nop
    ctx->pc = 0x7c086cu;
    // NOP
label_7c0870:
    // 0x7c0870: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x7c0870u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x7c0874: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x7C0874u;
    {
        const bool branch_taken_0x7c0874 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x7C0878u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C0874u;
        // 0x7c0878: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7c0874) {
            ctx->pc = 0x7C0890u;
            goto label_7c0890;
        }
    }
    ctx->pc = 0x7C087Cu;
    // 0x7c087c: 0x0  nop
    ctx->pc = 0x7c087cu;
    // NOP
    // 0x7c0880: 0x1880fffb  blez        $a0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x7C0880u;
    {
        const bool branch_taken_0x7c0880 = (GPR_S64(ctx, 4) <= 0);
        ctx->pc = 0x7C0884u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C0880u;
        // 0x7c0884: 0x24630004  addiu       $v1, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7c0880) {
            ctx->pc = 0x7C0870u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_7c0870;
        }
    }
    ctx->pc = 0x7C0888u;
    // 0x7c0888: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x7C0888u;
    {
        const bool branch_taken_0x7c0888 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x7C088Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C0888u;
        // 0x7c088c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7c0888) {
            ctx->pc = 0x7C08BCu;
            goto label_7c08bc;
        }
    }
    ctx->pc = 0x7C0890u;
label_7c0890:
    // 0x7c0890: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x7C0890u;
    {
        const bool branch_taken_0x7c0890 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x7C0894u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C0890u;
        // 0x7c0894: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7c0890) {
            ctx->pc = 0x7C08BCu;
            goto label_7c08bc;
        }
    }
    ctx->pc = 0x7C0898u;
label_7c0898:
    // 0x7c0898: 0x2483001f  addiu       $v1, $a0, 0x1F
    ctx->pc = 0x7c0898u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 31));
    // 0x7c089c: 0x82180b  movn        $v1, $a0, $v0
    ctx->pc = 0x7c089cu;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 4));
    // 0x7c08a0: 0x31943  sra         $v1, $v1, 5
    ctx->pc = 0x7c08a0u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 5));
    // 0x7c08a4: 0x942004  sllv        $a0, $s4, $a0
    ctx->pc = 0x7c08a4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 20), GPR_U32(ctx, 4) & 0x1F));
    // 0x7c08a8: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x7c08a8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x7c08ac: 0x2031821  addu        $v1, $s0, $v1
    ctx->pc = 0x7c08acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x7c08b0: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x7c08b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x7c08b4: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x7c08b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x7c08b8: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x7c08b8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_7c08bc:
    // 0x7c08bc: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x7c08bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x7c08c0: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x7C08C0u;
    {
        const bool branch_taken_0x7c08c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x7C08C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C08C0u;
        // 0x7c08c4: 0x8ea27a24  lw          $v0, 0x7A24($s5) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 31268)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7c08c0) {
            ctx->pc = 0x7C08E4u;
            goto label_7c08e4;
        }
    }
    ctx->pc = 0x7C08C8u;
    // 0x7c08c8: 0x34420004  ori         $v0, $v0, 0x4
    ctx->pc = 0x7c08c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4);
    // 0x7c08cc: 0xaea27a24  sw          $v0, 0x7A24($s5)
    ctx->pc = 0x7c08ccu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 31268), GPR_U32(ctx, 2));
    // 0x7c08d0: 0x922300f8  lbu         $v1, 0xF8($s1)
    ctx->pc = 0x7c08d0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 248)));
    // 0x7c08d4: 0x106000c9  beqz        $v1, . + 4 + (0xC9 << 2)
    ctx->pc = 0x7C08D4u;
    {
        const bool branch_taken_0x7c08d4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x7C08D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C08D4u;
        // 0x7c08d8: 0x2402000a  addiu       $v0, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7c08d4) {
            ctx->pc = 0x7C0BFCu;
            goto label_7c0bfc;
        }
    }
    ctx->pc = 0x7C08DCu;
    // 0x7c08dc: 0x100000d4  b           . + 4 + (0xD4 << 2)
    ctx->pc = 0x7C08DCu;
    {
        const bool branch_taken_0x7c08dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x7C08E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C08DCu;
        // 0x7c08e0: 0xa2360000  sb          $s6, 0x0($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 0), (uint8_t)GPR_U32(ctx, 22));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7c08dc) {
            ctx->pc = 0x7C0C30u;
            goto label_7c0c30;
        }
    }
    ctx->pc = 0x7C08E4u;
label_7c08e4:
    // 0x7c08e4: 0x922200f8  lbu         $v0, 0xF8($s1)
    ctx->pc = 0x7c08e4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 248)));
    // 0x7c08e8: 0x104000c9  beqz        $v0, . + 4 + (0xC9 << 2)
    ctx->pc = 0x7C08E8u;
    {
        const bool branch_taken_0x7c08e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x7C08ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C08E8u;
        // 0x7c08ec: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7c08e8) {
            ctx->pc = 0x7C0C10u;
            goto label_7c0c10;
        }
    }
    ctx->pc = 0x7C08F0u;
    // 0x7c08f0: 0x100000cf  b           . + 4 + (0xCF << 2)
    ctx->pc = 0x7C08F0u;
    {
        const bool branch_taken_0x7c08f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x7C08F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C08F0u;
        // 0x7c08f4: 0xa2360000  sb          $s6, 0x0($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 0), (uint8_t)GPR_U32(ctx, 22));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7c08f0) {
            ctx->pc = 0x7C0C30u;
            goto label_7c0c30;
        }
    }
    ctx->pc = 0x7C08F8u;
label_7c08f8:
    // 0x7c08f8: 0x52400001  beql        $s2, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x7C08F8u;
    {
        const bool branch_taken_0x7c08f8 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x7c08f8) {
            ctx->pc = 0x7C08FCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x7C08F8u;
            // 0x7c08fc: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x7C0900u;
            goto label_7c0900;
        }
    }
    ctx->pc = 0x7C0900u;
label_7c0900:
    // 0x7c0900: 0x2810  mfhi        $a1
    ctx->pc = 0x7c0900u;
    SET_GPR_U64(ctx, 5, ctx->hi);
    // 0x7c0904: 0x4a1000e  bgez        $a1, . + 4 + (0xE << 2)
    ctx->pc = 0x7C0904u;
    {
        const bool branch_taken_0x7c0904 = (GPR_S64(ctx, 5) >= 0);
        ctx->pc = 0x7C0908u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C0904u;
        // 0x7c0908: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7c0904) {
            ctx->pc = 0x7C0940u;
            goto label_7c0940;
        }
    }
    ctx->pc = 0x7C090Cu;
    // 0x7c090c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x7c090cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7c0910: 0x200182d  daddu       $v1, $s0, $zero
    ctx->pc = 0x7c0910u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7c0914: 0x0  nop
    ctx->pc = 0x7c0914u;
    // NOP
label_7c0918:
    // 0x7c0918: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x7c0918u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x7c091c: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x7C091Cu;
    {
        const bool branch_taken_0x7c091c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x7C0920u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C091Cu;
        // 0x7c0920: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7c091c) {
            ctx->pc = 0x7C0938u;
            goto label_7c0938;
        }
    }
    ctx->pc = 0x7C0924u;
    // 0x7c0924: 0x0  nop
    ctx->pc = 0x7c0924u;
    // NOP
    // 0x7c0928: 0x1880fffb  blez        $a0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x7C0928u;
    {
        const bool branch_taken_0x7c0928 = (GPR_S64(ctx, 4) <= 0);
        ctx->pc = 0x7C092Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C0928u;
        // 0x7c092c: 0x24630004  addiu       $v1, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7c0928) {
            ctx->pc = 0x7C0918u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_7c0918;
        }
    }
    ctx->pc = 0x7C0930u;
    // 0x7c0930: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x7C0930u;
    {
        const bool branch_taken_0x7c0930 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x7C0934u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C0930u;
        // 0x7c0934: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7c0930) {
            ctx->pc = 0x7C0968u;
            goto label_7c0968;
        }
    }
    ctx->pc = 0x7C0938u;
label_7c0938:
    // 0x7c0938: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x7C0938u;
    {
        const bool branch_taken_0x7c0938 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x7C093Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C0938u;
        // 0x7c093c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7c0938) {
            ctx->pc = 0x7C0968u;
            goto label_7c0968;
        }
    }
    ctx->pc = 0x7C0940u;
label_7c0940:
    // 0x7c0940: 0x24a3001f  addiu       $v1, $a1, 0x1F
    ctx->pc = 0x7c0940u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 31));
    // 0x7c0944: 0x45102a  slt         $v0, $v0, $a1
    ctx->pc = 0x7c0944u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x7c0948: 0xb42004  sllv        $a0, $s4, $a1
    ctx->pc = 0x7c0948u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 20), GPR_U32(ctx, 5) & 0x1F));
    // 0x7c094c: 0xa2180b  movn        $v1, $a1, $v0
    ctx->pc = 0x7c094cu;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 5));
    // 0x7c0950: 0x31943  sra         $v1, $v1, 5
    ctx->pc = 0x7c0950u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 5));
    // 0x7c0954: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x7c0954u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x7c0958: 0x2031821  addu        $v1, $s0, $v1
    ctx->pc = 0x7c0958u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x7c095c: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x7c095cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x7c0960: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x7c0960u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x7c0964: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x7c0964u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_7c0968:
    // 0x7c0968: 0x24130001  addiu       $s3, $zero, 0x1
    ctx->pc = 0x7c0968u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x7c096c: 0x50530005  beql        $v0, $s3, . + 4 + (0x5 << 2)
    ctx->pc = 0x7C096Cu;
    {
        const bool branch_taken_0x7c096c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 19));
        if (branch_taken_0x7c096c) {
            ctx->pc = 0x7C0970u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x7C096Cu;
            // 0x7c0970: 0x3c10007d  lui         $s0, 0x7D (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)125 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x7C0984u;
            goto label_7c0984;
        }
    }
    ctx->pc = 0x7C0974u;
    // 0x7c0974: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x7c0974u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x7c0978: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x7c0978u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x7c097c: 0x1000ffac  b           . + 4 + (-0x54 << 2)
    ctx->pc = 0x7C097Cu;
    {
        const bool branch_taken_0x7c097c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x7C0980u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C097Cu;
        // 0x7c0980: 0xae220008  sw          $v0, 0x8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7c097c) {
            ctx->pc = 0x7C0830u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_7c0830;
        }
    }
    ctx->pc = 0x7C0984u;
label_7c0984:
    // 0x7c0984: 0x8e250008  lw          $a1, 0x8($s1)
    ctx->pc = 0x7c0984u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x7c0988: 0x26101740  addiu       $s0, $s0, 0x1740
    ctx->pc = 0x7c0988u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 5952));
    // 0x7c098c: 0xc1f0c7c  jal         func_7C31F0
    ctx->pc = 0x7C098Cu;
    SET_GPR_U32(ctx, 31, 0x7C0994u);
    ctx->pc = 0x7C0990u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7C098Cu;
    // 0x7c0990: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7C31F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7C31F0u, 0x7C098Cu, 0x7C0994u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7C0994u;
label_7c0994:
    // 0x7c0994: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x7c0994u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7c0998: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x7c0998u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7c099c: 0xc1f0cf4  jal         func_7C33D0
    ctx->pc = 0x7C099Cu;
    SET_GPR_U32(ctx, 31, 0x7C09A4u);
    ctx->pc = 0x7C09A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7C099Cu;
    // 0x7c09a0: 0x24850014  addiu       $a1, $a0, 0x14 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 20));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7C33D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7C33D0u, 0x7C099Cu, 0x7C09A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7C09A4u;
label_7c09a4:
    // 0x7c09a4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x7c09a4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7c09a8: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x7c09a8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x7c09ac: 0x10000028  b           . + 4 + (0x28 << 2)
    ctx->pc = 0x7C09ACu;
    {
        const bool branch_taken_0x7c09ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x7C09B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C09ACu;
        // 0x7c09b0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7c09ac) {
            ctx->pc = 0x7C0A50u;
            goto label_7c0a50;
        }
    }
    ctx->pc = 0x7C09B4u;
label_7c09b4:
    // 0x7c09b4: 0x3c02007d  lui         $v0, 0x7D
    ctx->pc = 0x7c09b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)125 << 16));
    // 0x7c09b8: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x7c09b8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7c09bc: 0x24501740  addiu       $s0, $v0, 0x1740
    ctx->pc = 0x7c09bcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 5952));
    // 0x7c09c0: 0xc1f0c92  jal         func_7C3248
    ctx->pc = 0x7C09C0u;
    SET_GPR_U32(ctx, 31, 0x7C09C8u);
    ctx->pc = 0x7C09C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7C09C0u;
    // 0x7c09c4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7C3248u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7C3248u, 0x7C09C0u, 0x7C09C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7C09C8u;
label_7c09c8:
    // 0x7c09c8: 0x5452009a  bnel        $v0, $s2, . + 4 + (0x9A << 2)
    ctx->pc = 0x7C09C8u;
    {
        const bool branch_taken_0x7c09c8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 18));
        if (branch_taken_0x7c09c8) {
            ctx->pc = 0x7C09CCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x7C09C8u;
            // 0x7c09cc: 0x7bb00080  lq          $s0, 0x80($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x7C0C34u;
            goto label_7c0c34;
        }
    }
    ctx->pc = 0x7C09D0u;
    // 0x7c09d0: 0x3c04007d  lui         $a0, 0x7D
    ctx->pc = 0x7c09d0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)125 << 16));
    // 0x7c09d4: 0x8fa50000  lw          $a1, 0x0($sp)
    ctx->pc = 0x7c09d4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x7c09d8: 0x24841500  addiu       $a0, $a0, 0x1500
    ctx->pc = 0x7c09d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 5376));
    // 0x7c09dc: 0xc1f03e0  jal         func_7C0F80
    ctx->pc = 0x7C09DCu;
    SET_GPR_U32(ctx, 31, 0x7C09E4u);
    ctx->pc = 0x7C09E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7C09DCu;
    // 0x7c09e0: 0x24130002  addiu       $s3, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7C0F80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7C0F80u, 0x7C09DCu, 0x7C09E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7C09E4u;
label_7c09e4:
    // 0x7c09e4: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x7c09e4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7c09e8: 0x1073001f  beq         $v1, $s3, . + 4 + (0x1F << 2)
    ctx->pc = 0x7C09E8u;
    {
        const bool branch_taken_0x7c09e8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 19));
        ctx->pc = 0x7C09ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C09E8u;
        // 0x7c09ec: 0x28620003  slti        $v0, $v1, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)3) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x7c09e8) {
            ctx->pc = 0x7C0A68u;
            goto label_7c0a68;
        }
    }
    ctx->pc = 0x7C09F0u;
    // 0x7c09f0: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x7C09F0u;
    {
        const bool branch_taken_0x7c09f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x7C09F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C09F0u;
        // 0x7c09f4: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7c09f0) {
            ctx->pc = 0x7C0A08u;
            goto label_7c0a08;
        }
    }
    ctx->pc = 0x7C09F8u;
    // 0x7c09f8: 0x10720007  beq         $v1, $s2, . + 4 + (0x7 << 2)
    ctx->pc = 0x7C09F8u;
    {
        const bool branch_taken_0x7c09f8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 18));
        ctx->pc = 0x7C09FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C09F8u;
        // 0x7c09fc: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7c09f8) {
            ctx->pc = 0x7C0A18u;
            goto label_7c0a18;
        }
    }
    ctx->pc = 0x7C0A00u;
    // 0x7c0a00: 0x10000089  b           . + 4 + (0x89 << 2)
    ctx->pc = 0x7C0A00u;
    {
        const bool branch_taken_0x7c0a00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x7C0A04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C0A00u;
        // 0x7c0a04: 0xae2000e8  sw          $zero, 0xE8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 232), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7c0a00) {
            ctx->pc = 0x7C0C28u;
            goto label_7c0c28;
        }
    }
    ctx->pc = 0x7C0A08u;
label_7c0a08:
    // 0x7c0a08: 0x10620026  beq         $v1, $v0, . + 4 + (0x26 << 2)
    ctx->pc = 0x7C0A08u;
    {
        const bool branch_taken_0x7c0a08 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x7C0A0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C0A08u;
        // 0x7c0a0c: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7c0a08) {
            ctx->pc = 0x7C0AA4u;
            goto label_7c0aa4;
        }
    }
    ctx->pc = 0x7C0A10u;
    // 0x7c0a10: 0x10000085  b           . + 4 + (0x85 << 2)
    ctx->pc = 0x7C0A10u;
    {
        const bool branch_taken_0x7c0a10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x7C0A14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C0A10u;
        // 0x7c0a14: 0xae2000e8  sw          $zero, 0xE8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 232), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7c0a10) {
            ctx->pc = 0x7C0C28u;
            goto label_7c0c28;
        }
    }
    ctx->pc = 0x7C0A18u;
label_7c0a18:
    // 0x7c0a18: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x7c0a18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x7c0a1c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x7c0a1cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7c0a20: 0x8e250008  lw          $a1, 0x8($s1)
    ctx->pc = 0x7c0a20u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x7c0a24: 0xc1f23d2  jal         func_7C8F48
    ctx->pc = 0x7C0A24u;
    SET_GPR_U32(ctx, 31, 0x7C0A2Cu);
    ctx->pc = 0x7C0A28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7C0A24u;
    // 0x7c0a28: 0xae220010  sw          $v0, 0x10($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7C8F48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7C8F48u, 0x7C0A24u, 0x7C0A2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7C0A2Cu;
label_7c0a2c:
    // 0x7c0a2c: 0x8e250010  lw          $a1, 0x10($s1)
    ctx->pc = 0x7c0a2cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x7c0a30: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x7c0a30u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7c0a34: 0x24070400  addiu       $a3, $zero, 0x400
    ctx->pc = 0x7c0a34u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
    // 0x7c0a38: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x7c0a38u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7c0a3c: 0xc1f0d98  jal         func_7C3660
    ctx->pc = 0x7C0A3Cu;
    SET_GPR_U32(ctx, 31, 0x7C0A44u);
    ctx->pc = 0x7C0A40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7C0A3Cu;
    // 0x7c0a40: 0x40302d  daddu       $a2, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7C3660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7C3660u, 0x7C0A3Cu, 0x7C0A44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7C0A44u;
label_7c0a44:
    // 0x7c0a44: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x7c0a44u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7c0a48: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x7c0a48u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7c0a4c: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x7c0a4cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
label_7c0a50:
    // 0x7c0a50: 0xc1f03a0  jal         func_7C0E80
    ctx->pc = 0x7C0A50u;
    SET_GPR_U32(ctx, 31, 0x7C0A58u);
    ctx->pc = 0x7C0E80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7C0E80u, 0x7C0A50u, 0x7C0A58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7C0A58u;
label_7c0a58:
    // 0x7c0a58: 0x10400072  beqz        $v0, . + 4 + (0x72 << 2)
    ctx->pc = 0x7C0A58u;
    {
        const bool branch_taken_0x7c0a58 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x7C0A5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C0A58u;
        // 0x7c0a5c: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7c0a58) {
            ctx->pc = 0x7C0C24u;
            goto label_7c0c24;
        }
    }
    ctx->pc = 0x7C0A60u;
    // 0x7c0a60: 0x10000073  b           . + 4 + (0x73 << 2)
    ctx->pc = 0x7C0A60u;
    {
        const bool branch_taken_0x7c0a60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x7C0A64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C0A60u;
        // 0x7c0a64: 0xae3300f4  sw          $s3, 0xF4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 244), GPR_U32(ctx, 19));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7c0a60) {
            ctx->pc = 0x7C0C30u;
            goto label_7c0c30;
        }
    }
    ctx->pc = 0x7C0A68u;
label_7c0a68:
    // 0x7c0a68: 0x8e240008  lw          $a0, 0x8($s1)
    ctx->pc = 0x7c0a68u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x7c0a6c: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x7c0a6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x7c0a70: 0x26250088  addiu       $a1, $s1, 0x88
    ctx->pc = 0x7c0a70u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 136));
    // 0x7c0a74: 0x64182a  slt         $v1, $v1, $a0
    ctx->pc = 0x7c0a74u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x7c0a78: 0x2482001f  addiu       $v0, $a0, 0x1F
    ctx->pc = 0x7c0a78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 31));
    // 0x7c0a7c: 0x83100b  movn        $v0, $a0, $v1
    ctx->pc = 0x7c0a7cu;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 4));
    // 0x7c0a80: 0x21143  sra         $v0, $v0, 5
    ctx->pc = 0x7c0a80u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 5));
    // 0x7c0a84: 0x922004  sllv        $a0, $s2, $a0
    ctx->pc = 0x7c0a84u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 18), GPR_U32(ctx, 4) & 0x1F));
    // 0x7c0a88: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x7c0a88u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x7c0a8c: 0x42027  nor         $a0, $zero, $a0
    ctx->pc = 0x7c0a8cu;
    SET_GPR_U64(ctx, 4, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 4)));
    // 0x7c0a90: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x7c0a90u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x7c0a94: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x7c0a94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x7c0a98: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x7c0a98u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x7c0a9c: 0x1000ff5e  b           . + 4 + (-0xA2 << 2)
    ctx->pc = 0x7C0A9Cu;
    {
        const bool branch_taken_0x7c0a9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x7C0AA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C0A9Cu;
        // 0x7c0aa0: 0xaca30000  sw          $v1, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7c0a9c) {
            ctx->pc = 0x7C0818u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_7c0818;
        }
    }
    ctx->pc = 0x7C0AA4u;
label_7c0aa4:
    // 0x7c0aa4: 0xae2000e8  sw          $zero, 0xE8($s1)
    ctx->pc = 0x7c0aa4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 232), GPR_U32(ctx, 0));
    // 0x7c0aa8: 0x10000060  b           . + 4 + (0x60 << 2)
    ctx->pc = 0x7C0AA8u;
    {
        const bool branch_taken_0x7c0aa8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x7C0AACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C0AA8u;
        // 0x7c0aac: 0xae2000f0  sw          $zero, 0xF0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 240), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7c0aa8) {
            ctx->pc = 0x7C0C2Cu;
            goto label_7c0c2c;
        }
    }
    ctx->pc = 0x7C0AB0u;
label_7c0ab0:
    // 0x7c0ab0: 0x3c02007d  lui         $v0, 0x7D
    ctx->pc = 0x7c0ab0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)125 << 16));
    // 0x7c0ab4: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x7c0ab4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7c0ab8: 0x24501740  addiu       $s0, $v0, 0x1740
    ctx->pc = 0x7c0ab8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 5952));
    // 0x7c0abc: 0xc1f0c92  jal         func_7C3248
    ctx->pc = 0x7C0ABCu;
    SET_GPR_U32(ctx, 31, 0x7C0AC4u);
    ctx->pc = 0x7C0AC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7C0ABCu;
    // 0x7c0ac0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7C3248u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7C3248u, 0x7C0ABCu, 0x7C0AC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7C0AC4u;
label_7c0ac4:
    // 0x7c0ac4: 0x5452005b  bnel        $v0, $s2, . + 4 + (0x5B << 2)
    ctx->pc = 0x7C0AC4u;
    {
        const bool branch_taken_0x7c0ac4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 18));
        if (branch_taken_0x7c0ac4) {
            ctx->pc = 0x7C0AC8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x7C0AC4u;
            // 0x7c0ac8: 0x7bb00080  lq          $s0, 0x80($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x7C0C34u;
            goto label_7c0c34;
        }
    }
    ctx->pc = 0x7C0ACCu;
    // 0x7c0acc: 0x3c04007d  lui         $a0, 0x7D
    ctx->pc = 0x7c0accu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)125 << 16));
    // 0x7c0ad0: 0x8fa50000  lw          $a1, 0x0($sp)
    ctx->pc = 0x7c0ad0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x7c0ad4: 0xc1f03fa  jal         func_7C0FE8
    ctx->pc = 0x7C0AD4u;
    SET_GPR_U32(ctx, 31, 0x7C0ADCu);
    ctx->pc = 0x7C0AD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7C0AD4u;
    // 0x7c0ad8: 0x24841500  addiu       $a0, $a0, 0x1500 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 5376));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7C0FE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7C0FE8u, 0x7C0AD4u, 0x7C0ADCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7C0ADCu;
label_7c0adc:
    // 0x7c0adc: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x7c0adcu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7c0ae0: 0x10720005  beq         $v1, $s2, . + 4 + (0x5 << 2)
    ctx->pc = 0x7C0AE0u;
    {
        const bool branch_taken_0x7c0ae0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 18));
        ctx->pc = 0x7C0AE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C0AE0u;
        // 0x7c0ae4: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7c0ae0) {
            ctx->pc = 0x7C0AF8u;
            goto label_7c0af8;
        }
    }
    ctx->pc = 0x7C0AE8u;
    // 0x7c0ae8: 0x1062000f  beq         $v1, $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x7C0AE8u;
    {
        const bool branch_taken_0x7c0ae8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x7C0AECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C0AE8u;
        // 0x7c0aec: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7c0ae8) {
            ctx->pc = 0x7C0B28u;
            goto label_7c0b28;
        }
    }
    ctx->pc = 0x7C0AF0u;
    // 0x7c0af0: 0x1000004d  b           . + 4 + (0x4D << 2)
    ctx->pc = 0x7C0AF0u;
    {
        const bool branch_taken_0x7c0af0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x7C0AF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C0AF0u;
        // 0x7c0af4: 0xae2000e8  sw          $zero, 0xE8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 232), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7c0af0) {
            ctx->pc = 0x7C0C28u;
            goto label_7c0c28;
        }
    }
    ctx->pc = 0x7C0AF8u;
label_7c0af8:
    // 0x7c0af8: 0x8e250010  lw          $a1, 0x10($s1)
    ctx->pc = 0x7c0af8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x7c0afc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x7c0afcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7c0b00: 0xc1f0ce0  jal         func_7C3380
    ctx->pc = 0x7C0B00u;
    SET_GPR_U32(ctx, 31, 0x7C0B08u);
    ctx->pc = 0x7C0B04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7C0B00u;
    // 0x7c0b04: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7C3380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7C3380u, 0x7C0B00u, 0x7C0B08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7C0B08u;
label_7c0b08:
    // 0x7c0b08: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x7c0b08u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7c0b0c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x7c0b0cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7c0b10: 0xc1f03a0  jal         func_7C0E80
    ctx->pc = 0x7C0B10u;
    SET_GPR_U32(ctx, 31, 0x7C0B18u);
    ctx->pc = 0x7C0B14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7C0B10u;
    // 0x7c0b14: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7C0E80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7C0E80u, 0x7C0B10u, 0x7C0B18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7C0B18u;
label_7c0b18:
    // 0x7c0b18: 0x10400042  beqz        $v0, . + 4 + (0x42 << 2)
    ctx->pc = 0x7C0B18u;
    {
        const bool branch_taken_0x7c0b18 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x7C0B1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C0B18u;
        // 0x7c0b1c: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7c0b18) {
            ctx->pc = 0x7C0C24u;
            goto label_7c0c24;
        }
    }
    ctx->pc = 0x7C0B20u;
    // 0x7c0b20: 0x10000043  b           . + 4 + (0x43 << 2)
    ctx->pc = 0x7C0B20u;
    {
        const bool branch_taken_0x7c0b20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x7C0B24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C0B20u;
        // 0x7c0b24: 0xae2200f4  sw          $v0, 0xF4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 244), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7c0b20) {
            ctx->pc = 0x7C0C30u;
            goto label_7c0c30;
        }
    }
    ctx->pc = 0x7C0B28u;
label_7c0b28:
    // 0x7c0b28: 0xae2000e8  sw          $zero, 0xE8($s1)
    ctx->pc = 0x7c0b28u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 232), GPR_U32(ctx, 0));
    // 0x7c0b2c: 0x1000003f  b           . + 4 + (0x3F << 2)
    ctx->pc = 0x7C0B2Cu;
    {
        const bool branch_taken_0x7c0b2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x7C0B30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C0B2Cu;
        // 0x7c0b30: 0xae2000f0  sw          $zero, 0xF0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 240), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7c0b2c) {
            ctx->pc = 0x7C0C2Cu;
            goto label_7c0c2c;
        }
    }
    ctx->pc = 0x7C0B34u;
label_7c0b34:
    // 0x7c0b34: 0x3c04007d  lui         $a0, 0x7D
    ctx->pc = 0x7c0b34u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)125 << 16));
    // 0x7c0b38: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x7c0b38u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7c0b3c: 0xc1f0c92  jal         func_7C3248
    ctx->pc = 0x7C0B3Cu;
    SET_GPR_U32(ctx, 31, 0x7C0B44u);
    ctx->pc = 0x7C0B40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7C0B3Cu;
    // 0x7c0b40: 0x24841740  addiu       $a0, $a0, 0x1740 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 5952));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7C3248u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7C3248u, 0x7C0B3Cu, 0x7C0B44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7C0B44u;
label_7c0b44:
    // 0x7c0b44: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x7c0b44u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7c0b48: 0x5612003a  bnel        $s0, $s2, . + 4 + (0x3A << 2)
    ctx->pc = 0x7C0B48u;
    {
        const bool branch_taken_0x7c0b48 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 18));
        if (branch_taken_0x7c0b48) {
            ctx->pc = 0x7C0B4Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x7C0B48u;
            // 0x7c0b4c: 0x7bb00080  lq          $s0, 0x80($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x7C0C34u;
            goto label_7c0c34;
        }
    }
    ctx->pc = 0x7C0B50u;
    // 0x7c0b50: 0x8fa50000  lw          $a1, 0x0($sp)
    ctx->pc = 0x7c0b50u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x7c0b54: 0xc1f0412  jal         func_7C1048
    ctx->pc = 0x7C0B54u;
    SET_GPR_U32(ctx, 31, 0x7C0B5Cu);
    ctx->pc = 0x7C0B58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7C0B54u;
    // 0x7c0b58: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7C1048u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7C1048u, 0x7C0B54u, 0x7C0B5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7C0B5Cu;
label_7c0b5c:
    // 0x7c0b5c: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x7c0b5cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7c0b60: 0x12500005  beq         $s2, $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x7C0B60u;
    {
        const bool branch_taken_0x7c0b60 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 16));
        ctx->pc = 0x7C0B64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C0B60u;
        // 0x7c0b64: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7c0b60) {
            ctx->pc = 0x7C0B78u;
            goto label_7c0b78;
        }
    }
    ctx->pc = 0x7C0B68u;
    // 0x7c0b68: 0x12420021  beq         $s2, $v0, . + 4 + (0x21 << 2)
    ctx->pc = 0x7C0B68u;
    {
        const bool branch_taken_0x7c0b68 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 2));
        ctx->pc = 0x7C0B6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C0B68u;
        // 0x7c0b6c: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7c0b68) {
            ctx->pc = 0x7C0BF0u;
            goto label_7c0bf0;
        }
    }
    ctx->pc = 0x7C0B70u;
    // 0x7c0b70: 0x1000002d  b           . + 4 + (0x2D << 2)
    ctx->pc = 0x7C0B70u;
    {
        const bool branch_taken_0x7c0b70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x7C0B74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C0B70u;
        // 0x7c0b74: 0xae2000e8  sw          $zero, 0xE8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 232), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7c0b70) {
            ctx->pc = 0x7C0C28u;
            goto label_7c0c28;
        }
    }
    ctx->pc = 0x7C0B78u;
label_7c0b78:
    // 0x7c0b78: 0x8e250008  lw          $a1, 0x8($s1)
    ctx->pc = 0x7c0b78u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x7c0b7c: 0xc1f23d2  jal         func_7C8F48
    ctx->pc = 0x7C0B7Cu;
    SET_GPR_U32(ctx, 31, 0x7C0B84u);
    ctx->pc = 0x7C0B80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7C0B7Cu;
    // 0x7c0b80: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7C8F48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7C8F48u, 0x7C0B7Cu, 0x7C0B84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7C0B84u;
label_7c0b84:
    // 0x7c0b84: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x7c0b84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x7c0b88: 0x3c013dcc  lui         $at, 0x3DCC
    ctx->pc = 0x7c0b88u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15820 << 16));
    // 0x7c0b8c: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x7c0b8cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x7c0b90: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x7c0b90u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x7c0b94: 0x0  nop
    ctx->pc = 0x7c0b94u;
    // NOP
    // 0x7c0b98: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x7c0b98u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x7c0b9c: 0x0  nop
    ctx->pc = 0x7c0b9cu;
    // NOP
    // 0x7c0ba0: 0x45030010  bc1tl       . + 4 + (0x10 << 2)
    ctx->pc = 0x7C0BA0u;
    {
        const bool branch_taken_0x7c0ba0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x7c0ba0) {
            ctx->pc = 0x7C0BA4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x7C0BA0u;
            // 0x7c0ba4: 0x8e220008  lw          $v0, 0x8($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x7C0BE4u;
            goto label_7c0be4;
        }
    }
    ctx->pc = 0x7C0BA8u;
    // 0x7c0ba8: 0x8e240008  lw          $a0, 0x8($s1)
    ctx->pc = 0x7c0ba8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x7c0bac: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x7c0bacu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x7c0bb0: 0x26250088  addiu       $a1, $s1, 0x88
    ctx->pc = 0x7c0bb0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 136));
    // 0x7c0bb4: 0x64182a  slt         $v1, $v1, $a0
    ctx->pc = 0x7c0bb4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x7c0bb8: 0x2482001f  addiu       $v0, $a0, 0x1F
    ctx->pc = 0x7c0bb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 31));
    // 0x7c0bbc: 0x83100b  movn        $v0, $a0, $v1
    ctx->pc = 0x7c0bbcu;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 4));
    // 0x7c0bc0: 0x21143  sra         $v0, $v0, 5
    ctx->pc = 0x7c0bc0u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 5));
    // 0x7c0bc4: 0x922004  sllv        $a0, $s2, $a0
    ctx->pc = 0x7c0bc4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 18), GPR_U32(ctx, 4) & 0x1F));
    // 0x7c0bc8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x7c0bc8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x7c0bcc: 0x42027  nor         $a0, $zero, $a0
    ctx->pc = 0x7c0bccu;
    SET_GPR_U64(ctx, 4, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 4)));
    // 0x7c0bd0: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x7c0bd0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x7c0bd4: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x7c0bd4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x7c0bd8: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x7c0bd8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x7c0bdc: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x7c0bdcu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    // 0x7c0be0: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x7c0be0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_7c0be4:
    // 0x7c0be4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x7c0be4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x7c0be8: 0x1000ff0b  b           . + 4 + (-0xF5 << 2)
    ctx->pc = 0x7C0BE8u;
    {
        const bool branch_taken_0x7c0be8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x7C0BECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C0BE8u;
        // 0x7c0bec: 0xae220008  sw          $v0, 0x8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7c0be8) {
            ctx->pc = 0x7C0818u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_7c0818;
        }
    }
    ctx->pc = 0x7C0BF0u;
label_7c0bf0:
    // 0x7c0bf0: 0xae2000e8  sw          $zero, 0xE8($s1)
    ctx->pc = 0x7c0bf0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 232), GPR_U32(ctx, 0));
    // 0x7c0bf4: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x7C0BF4u;
    {
        const bool branch_taken_0x7c0bf4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x7C0BF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C0BF4u;
        // 0x7c0bf8: 0xae2000f0  sw          $zero, 0xF0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 240), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7c0bf4) {
            ctx->pc = 0x7C0C2Cu;
            goto label_7c0c2c;
        }
    }
    ctx->pc = 0x7C0BFCu;
label_7c0bfc:
    // 0x7c0bfc: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x7c0bfcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x7c0c00: 0xae22007c  sw          $v0, 0x7C($s1)
    ctx->pc = 0x7c0c00u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 124), GPR_U32(ctx, 2));
    // 0x7c0c04: 0xae2300f0  sw          $v1, 0xF0($s1)
    ctx->pc = 0x7c0c04u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 240), GPR_U32(ctx, 3));
    // 0x7c0c08: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x7C0C08u;
    {
        const bool branch_taken_0x7c0c08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x7C0C0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C0C08u;
        // 0x7c0c0c: 0xae2000e8  sw          $zero, 0xE8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 232), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7c0c08) {
            ctx->pc = 0x7C0C2Cu;
            goto label_7c0c2c;
        }
    }
    ctx->pc = 0x7C0C10u;
label_7c0c10:
    // 0x7c0c10: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x7c0c10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x7c0c14: 0xae22007c  sw          $v0, 0x7C($s1)
    ctx->pc = 0x7c0c14u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 124), GPR_U32(ctx, 2));
    // 0x7c0c18: 0xae2300f0  sw          $v1, 0xF0($s1)
    ctx->pc = 0x7c0c18u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 240), GPR_U32(ctx, 3));
    // 0x7c0c1c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x7C0C1Cu;
    {
        const bool branch_taken_0x7c0c1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x7C0C20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C0C1Cu;
        // 0x7c0c20: 0xae2000e8  sw          $zero, 0xE8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 232), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7c0c1c) {
            ctx->pc = 0x7C0C2Cu;
            goto label_7c0c2c;
        }
    }
    ctx->pc = 0x7C0C24u;
label_7c0c24:
    // 0x7c0c24: 0xae2000e8  sw          $zero, 0xE8($s1)
    ctx->pc = 0x7c0c24u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 232), GPR_U32(ctx, 0));
label_7c0c28:
    // 0x7c0c28: 0xae2200f0  sw          $v0, 0xF0($s1)
    ctx->pc = 0x7c0c28u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 240), GPR_U32(ctx, 2));
label_7c0c2c:
    // 0x7c0c2c: 0xae2000f4  sw          $zero, 0xF4($s1)
    ctx->pc = 0x7c0c2cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 244), GPR_U32(ctx, 0));
label_7c0c30:
    // 0x7c0c30: 0x7bb00080  lq          $s0, 0x80($sp)
    ctx->pc = 0x7c0c30u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_7c0c34:
    // 0x7c0c34: 0x7bb10070  lq          $s1, 0x70($sp)
    ctx->pc = 0x7c0c34u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_7c0c38:
    // 0x7c0c38: 0x7bb20060  lq          $s2, 0x60($sp)
    ctx->pc = 0x7c0c38u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x7c0c3c: 0x7bb30050  lq          $s3, 0x50($sp)
    ctx->pc = 0x7c0c3cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x7c0c40: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x7c0c40u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x7c0c44: 0x7bb50030  lq          $s5, 0x30($sp)
    ctx->pc = 0x7c0c44u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x7c0c48: 0x7bb60020  lq          $s6, 0x20($sp)
    ctx->pc = 0x7c0c48u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x7c0c4c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x7c0c4cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x7c0c50: 0x3e00008  jr          $ra
    ctx->pc = 0x7C0C50u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x7C0C54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7C0C50u;
        // 0x7c0c54: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x7C0C50u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x7C0C58u;
}
} // namespace gh_mcport
