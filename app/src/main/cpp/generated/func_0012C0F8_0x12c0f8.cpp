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

// Function: func_0012C0F8
// Address: 0x12c0f8 - 0x12c348
void func_0012C0F8_0x12c0f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0012C0F8_0x12c0f8");
#endif

    switch (ctx->pc) {
        case 0x12c138u: goto label_12c138;
        case 0x12c1acu: goto label_12c1ac;
        case 0x12c1ecu: goto label_12c1ec;
        case 0x12c320u: goto label_12c320;
        default: break;
    }

    ctx->pc = 0x12c0f8u;

    // 0x12c0f8: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x12c0f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x12c0fc: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x12c0fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x12c100: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x12c100u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12c104: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x12c104u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x12c108: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x12c108u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x12c10c: 0x3c040057  lui         $a0, 0x57
    ctx->pc = 0x12c10cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
    // 0x12c110: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x12c110u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
    // 0x12c114: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x12c114u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12c118: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x12c118u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x12c11c: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x12c11cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12c120: 0xe7b40060  swc1        $f20, 0x60($sp)
    ctx->pc = 0x12c120u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x12c124: 0x24849b70  addiu       $a0, $a0, -0x6490
    ctx->pc = 0x12c124u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941552));
    // 0x12c128: 0x7fb40010  sq          $s4, 0x10($sp)
    ctx->pc = 0x12c128u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 20));
    // 0x12c12c: 0x200982d  daddu       $s3, $s0, $zero
    ctx->pc = 0x12c12cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12c130: 0xc07e804  jal         func_1FA010
    ctx->pc = 0x12C130u;
    SET_GPR_U32(ctx, 31, 0x12C138u);
    ctx->pc = 0x12C134u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12C130u;
    // 0x12c134: 0x8634054a  lh          $s4, 0x54A($s1) (Delay Slot)
    SET_GPR_S32(ctx, 20, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 1354)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FA010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FA010u, 0x12C130u, 0x12C138u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12C138u;
label_12c138:
    // 0x12c138: 0x2443ffff  addiu       $v1, $v0, -0x1
    ctx->pc = 0x12c138u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x12c13c: 0x2c620005  sltiu       $v0, $v1, 0x5
    ctx->pc = 0x12c13cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
    // 0x12c140: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x12C140u;
    {
        const bool branch_taken_0x12c140 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x12C144u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12C140u;
        // 0x12c144: 0x3c020042  lui         $v0, 0x42 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)66 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12c140) {
            ctx->pc = 0x12C160u;
            goto label_12c160;
        }
    }
    ctx->pc = 0x12C148u;
    // 0x12c148: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x12c148u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x12c14c: 0x2442d1c0  addiu       $v0, $v0, -0x2E40
    ctx->pc = 0x12c14cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294955456));
    // 0x12c150: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x12c150u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x12c154: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x12c154u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x12c158: 0x800008  jr          $a0
    ctx->pc = 0x12C158u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x12C160u: goto label_12c160;
            case 0x12C174u: goto label_12c174;
            case 0x12C188u: goto label_12c188;
            case 0x12C198u: goto label_12c198;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x12C158u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x12C160u;
label_12c160:
    // 0x12c160: 0x3c013f19  lui         $at, 0x3F19
    ctx->pc = 0x12c160u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16153 << 16));
    // 0x12c164: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x12c164u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
    // 0x12c168: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x12c168u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x12c16c: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x12C16Cu;
    {
        const bool branch_taken_0x12c16c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x12c16c) {
            ctx->pc = 0x12C1A4u;
            goto label_12c1a4;
        }
    }
    ctx->pc = 0x12C174u;
label_12c174:
    // 0x12c174: 0x3c013f4c  lui         $at, 0x3F4C
    ctx->pc = 0x12c174u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16204 << 16));
    // 0x12c178: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x12c178u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x12c17c: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x12c17cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x12c180: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x12C180u;
    {
        const bool branch_taken_0x12c180 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x12c180) {
            ctx->pc = 0x12C1A4u;
            goto label_12c1a4;
        }
    }
    ctx->pc = 0x12C188u;
label_12c188:
    // 0x12c188: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x12c188u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x12c18c: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x12c18cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x12c190: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x12C190u;
    {
        const bool branch_taken_0x12c190 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x12c190) {
            ctx->pc = 0x12C1A4u;
            goto label_12c1a4;
        }
    }
    ctx->pc = 0x12C198u;
label_12c198:
    // 0x12c198: 0x3c013f99  lui         $at, 0x3F99
    ctx->pc = 0x12c198u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16281 << 16));
    // 0x12c19c: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x12c19cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
    // 0x12c1a0: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x12c1a0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_12c1a4:
    // 0x12c1a4: 0xc07e99e  jal         func_1FA678
    ctx->pc = 0x12C1A4u;
    SET_GPR_U32(ctx, 31, 0x12C1ACu);
    ctx->pc = 0x12C1A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12C1A4u;
    // 0x12c1a8: 0x26449b70  addiu       $a0, $s2, -0x6490 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 4294941552));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FA678u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FA678u, 0x12C1A4u, 0x12C1ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12C1ACu;
label_12c1ac:
    // 0x12c1ac: 0x3c013f40  lui         $at, 0x3F40
    ctx->pc = 0x12c1acu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16192 << 16));
    // 0x12c1b0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x12c1b0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x12c1b4: 0x5440000b  bnel        $v0, $zero, . + 4 + (0xB << 2)
    ctx->pc = 0x12C1B4u;
    {
        const bool branch_taken_0x12c1b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x12c1b4) {
            ctx->pc = 0x12C1B8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12C1B4u;
            // 0x12c1b8: 0x4600a502  mul.s       $f20, $f20, $f0 (Delay Slot)
            ctx->f[20] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x12C1E4u;
            goto label_12c1e4;
        }
    }
    ctx->pc = 0x12C1BCu;
    // 0x12c1bc: 0x8e429b70  lw          $v0, -0x6490($s2)
    ctx->pc = 0x12c1bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294941552)));
    // 0x12c1c0: 0x3c040400  lui         $a0, 0x400
    ctx->pc = 0x12c1c0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)1024 << 16));
    // 0x12c1c4: 0x8c430014  lw          $v1, 0x14($v0)
    ctx->pc = 0x12c1c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
    // 0x12c1c8: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x12c1c8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x12c1cc: 0x54600005  bnel        $v1, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x12C1CCu;
    {
        const bool branch_taken_0x12c1cc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x12c1cc) {
            ctx->pc = 0x12C1D0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12C1CCu;
            // 0x12c1d0: 0x4600a502  mul.s       $f20, $f20, $f0 (Delay Slot)
            ctx->f[20] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x12C1E4u;
            goto label_12c1e4;
        }
    }
    ctx->pc = 0x12C1D4u;
    // 0x12c1d4: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x12c1d4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x12c1d8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x12c1d8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x12c1dc: 0x0  nop
    ctx->pc = 0x12c1dcu;
    // NOP
    // 0x12c1e0: 0x4600a502  mul.s       $f20, $f20, $f0
    ctx->pc = 0x12c1e0u;
    ctx->f[20] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
label_12c1e4:
    // 0x12c1e4: 0xc07e99e  jal         func_1FA678
    ctx->pc = 0x12C1E4u;
    SET_GPR_U32(ctx, 31, 0x12C1ECu);
    ctx->pc = 0x12C1E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12C1E4u;
    // 0x12c1e8: 0x26449b70  addiu       $a0, $s2, -0x6490 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 4294941552));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FA678u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FA678u, 0x12C1E4u, 0x12C1ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12C1ECu;
label_12c1ec:
    // 0x12c1ec: 0x38420002  xori        $v0, $v0, 0x2
    ctx->pc = 0x12c1ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)2);
    // 0x12c1f0: 0x10400016  beqz        $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x12C1F0u;
    {
        const bool branch_taken_0x12c1f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x12C1F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12C1F0u;
        // 0x12c1f4: 0x3c02005d  lui         $v0, 0x5D (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12c1f0) {
            ctx->pc = 0x12C24Cu;
            goto label_12c24c;
        }
    }
    ctx->pc = 0x12C1F8u;
    // 0x12c1f8: 0x9444ac94  lhu         $a0, -0x536C($v0)
    ctx->pc = 0x12c1f8u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 4294945940)));
    // 0x12c1fc: 0x2c830002  sltiu       $v1, $a0, 0x2
    ctx->pc = 0x12c1fcu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x12c200: 0x14600012  bnez        $v1, . + 4 + (0x12 << 2)
    ctx->pc = 0x12C200u;
    {
        const bool branch_taken_0x12c200 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x12C204u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12C200u;
        // 0x12c204: 0x2c820004  sltiu       $v0, $a0, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x12c200) {
            ctx->pc = 0x12C24Cu;
            goto label_12c24c;
        }
    }
    ctx->pc = 0x12C208u;
    // 0x12c208: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x12C208u;
    {
        const bool branch_taken_0x12c208 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x12C20Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12C208u;
        // 0x12c20c: 0x2c820003  sltiu       $v0, $a0, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x12c208) {
            ctx->pc = 0x12C224u;
            goto label_12c224;
        }
    }
    ctx->pc = 0x12C210u;
    // 0x12c210: 0x3c013f33  lui         $at, 0x3F33
    ctx->pc = 0x12c210u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16179 << 16));
    // 0x12c214: 0x34213333  ori         $at, $at, 0x3333
    ctx->pc = 0x12c214u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)13107);
    // 0x12c218: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x12c218u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x12c21c: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x12C21Cu;
    {
        const bool branch_taken_0x12c21c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12C220u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12C21Cu;
        // 0x12c220: 0x4600a502  mul.s       $f20, $f20, $f0 (Delay Slot)
        ctx->f[20] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x12c21c) {
            ctx->pc = 0x12C24Cu;
            goto label_12c24c;
        }
    }
    ctx->pc = 0x12C224u;
label_12c224:
    // 0x12c224: 0x3c013f66  lui         $at, 0x3F66
    ctx->pc = 0x12c224u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16230 << 16));
    // 0x12c228: 0x34216666  ori         $at, $at, 0x6666
    ctx->pc = 0x12c228u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)26214);
    // 0x12c22c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x12c22cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x12c230: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x12C230u;
    {
        const bool branch_taken_0x12c230 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x12c230) {
            ctx->pc = 0x12C234u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12C230u;
            // 0x12c234: 0x4600a502  mul.s       $f20, $f20, $f0 (Delay Slot)
            ctx->f[20] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x12C24Cu;
            goto label_12c24c;
        }
    }
    ctx->pc = 0x12C238u;
    // 0x12c238: 0x3c013f4c  lui         $at, 0x3F4C
    ctx->pc = 0x12c238u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16204 << 16));
    // 0x12c23c: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x12c23cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x12c240: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x12c240u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x12c244: 0x0  nop
    ctx->pc = 0x12c244u;
    // NOP
    // 0x12c248: 0x4600a502  mul.s       $f20, $f20, $f0
    ctx->pc = 0x12c248u;
    ctx->f[20] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
label_12c24c:
    // 0x12c24c: 0x44900000  mtc1        $s0, $f0
    ctx->pc = 0x12c24cu;
    { uint32_t bits = GPR_U32(ctx, 16); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x12c250: 0x0  nop
    ctx->pc = 0x12c250u;
    // NOP
    // 0x12c254: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x12c254u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x12c258: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x12c258u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x12c25c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x12c25cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x12c260: 0x24037d00  addiu       $v1, $zero, 0x7D00
    ctx->pc = 0x12c260u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32000));
    // 0x12c264: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x12c264u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
    // 0x12c268: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x12c268u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x12c26c: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x12c26cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x12c270: 0x44100800  mfc1        $s0, $f1
    ctx->pc = 0x12c270u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 16, bits); }
    // 0x12c274: 0x2a027d01  slti        $v0, $s0, 0x7D01
    ctx->pc = 0x12c274u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)32001) ? 1 : 0);
    // 0x12c278: 0x1a600004  blez        $s3, . + 4 + (0x4 << 2)
    ctx->pc = 0x12C278u;
    {
        const bool branch_taken_0x12c278 = (GPR_S64(ctx, 19) <= 0);
        ctx->pc = 0x12C27Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12C278u;
        // 0x12c27c: 0x62800a  movz        $s0, $v1, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12c278) {
            ctx->pc = 0x12C28Cu;
            goto label_12c28c;
        }
    }
    ctx->pc = 0x12C280u;
    // 0x12c280: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x12c280u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x12c284: 0x10102a  slt         $v0, $zero, $s0
    ctx->pc = 0x12c284u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x12c288: 0x62800a  movz        $s0, $v1, $v0
    ctx->pc = 0x12c288u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 3));
label_12c28c:
    // 0x12c28c: 0x9622054a  lhu         $v0, 0x54A($s1)
    ctx->pc = 0x12c28cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 1354)));
    // 0x12c290: 0x501023  subu        $v0, $v0, $s0
    ctx->pc = 0x12c290u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x12c294: 0x21c00  sll         $v1, $v0, 16
    ctx->pc = 0x12c294u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x12c298: 0x1c600002  bgtz        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x12C298u;
    {
        const bool branch_taken_0x12c298 = (GPR_S64(ctx, 3) > 0);
        ctx->pc = 0x12C29Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12C298u;
        // 0x12c29c: 0xa622054a  sh          $v0, 0x54A($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 1354), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12c298) {
            ctx->pc = 0x12C2A4u;
            goto label_12c2a4;
        }
    }
    ctx->pc = 0x12C2A0u;
    // 0x12c2a0: 0xa620054a  sh          $zero, 0x54A($s1)
    ctx->pc = 0x12c2a0u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1354), (uint16_t)GPR_U32(ctx, 0));
label_12c2a4:
    // 0x12c2a4: 0x2a82000b  slti        $v0, $s4, 0xB
    ctx->pc = 0x12c2a4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)(int32_t)11) ? 1 : 0);
    // 0x12c2a8: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x12C2A8u;
    {
        const bool branch_taken_0x12c2a8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x12c2a8) {
            ctx->pc = 0x12C2C0u;
            goto label_12c2c0;
        }
    }
    ctx->pc = 0x12C2B0u;
    // 0x12c2b0: 0x8622054a  lh          $v0, 0x54A($s1)
    ctx->pc = 0x12c2b0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 1354)));
    // 0x12c2b4: 0x1c400002  bgtz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x12C2B4u;
    {
        const bool branch_taken_0x12c2b4 = (GPR_S64(ctx, 2) > 0);
        ctx->pc = 0x12C2B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12C2B4u;
        // 0x12c2b8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12c2b4) {
            ctx->pc = 0x12C2C0u;
            goto label_12c2c0;
        }
    }
    ctx->pc = 0x12C2BCu;
    // 0x12c2bc: 0xa622054a  sh          $v0, 0x54A($s1)
    ctx->pc = 0x12c2bcu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1354), (uint16_t)GPR_U32(ctx, 2));
label_12c2c0:
    // 0x12c2c0: 0x5a000018  blezl       $s0, . + 4 + (0x18 << 2)
    ctx->pc = 0x12C2C0u;
    {
        const bool branch_taken_0x12c2c0 = (GPR_S64(ctx, 16) <= 0);
        if (branch_taken_0x12c2c0) {
            ctx->pc = 0x12C2C4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12C2C0u;
            // 0x12c2c4: 0x8622054a  lh          $v0, 0x54A($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 1354)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x12C324u;
            goto label_12c324;
        }
    }
    ctx->pc = 0x12C2C8u;
    // 0x12c2c8: 0x86220548  lh          $v0, 0x548($s1)
    ctx->pc = 0x12c2c8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 1352)));
    // 0x12c2cc: 0x44900800  mtc1        $s0, $f1
    ctx->pc = 0x12c2ccu;
    { uint32_t bits = GPR_U32(ctx, 16); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x12c2d0: 0x0  nop
    ctx->pc = 0x12c2d0u;
    // NOP
    // 0x12c2d4: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x12c2d4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x12c2d8: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x12c2d8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x12c2dc: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x12c2dcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x12c2e0: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x12c2e0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x12c2e4: 0x0  nop
    ctx->pc = 0x12c2e4u;
    // NOP
    // 0x12c2e8: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x12c2e8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x12c2ec: 0x3c014120  lui         $at, 0x4120
    ctx->pc = 0x12c2ecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16672 << 16));
    // 0x12c2f0: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x12c2f0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x12c2f4: 0x46020003  div.s       $f0, $f0, $f2
    ctx->pc = 0x12c2f4u;
    ctx->f[0] = ps2FpuDivide(ctx->fcr31, ctx->f[0], ctx->f[2]);
    // 0x12c2f8: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x12c2f8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x12c2fc: 0x46030b02  mul.s       $f12, $f1, $f3
    ctx->pc = 0x12c2fcu;
    ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[3]);
    // 0x12c300: 0x460c1834  c.lt.s      $f3, $f12
    ctx->pc = 0x12c300u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[3], ctx->f[12])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x12c304: 0x0  nop
    ctx->pc = 0x12c304u;
    // NOP
    // 0x12c308: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x12C308u;
    {
        const bool branch_taken_0x12c308 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x12c308) {
            ctx->pc = 0x12C30Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12C308u;
            // 0x12c30c: 0x46001b06  mov.s       $f12, $f3 (Delay Slot)
            ctx->f[12] = FPU_MOV_S(ctx->f[3]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x12C310u;
            goto label_12c310;
        }
    }
    ctx->pc = 0x12C310u;
label_12c310:
    // 0x12c310: 0x3c04005d  lui         $a0, 0x5D
    ctx->pc = 0x12c310u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)93 << 16));
    // 0x12c314: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x12c314u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12c318: 0xc0aa65e  jal         func_2A9978
    ctx->pc = 0x12C318u;
    SET_GPR_U32(ctx, 31, 0x12C320u);
    ctx->pc = 0x12C31Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12C318u;
    // 0x12c31c: 0x2484b000  addiu       $a0, $a0, -0x5000 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294946816));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A9978u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A9978u, 0x12C318u, 0x12C320u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12C320u;
label_12c320:
    // 0x12c320: 0x8622054a  lh          $v0, 0x54A($s1)
    ctx->pc = 0x12c320u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 1354)));
label_12c324:
    // 0x12c324: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x12c324u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x12c328: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x12c328u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x12c32c: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x12c32cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x12c330: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x12c330u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x12c334: 0x7bb40010  lq          $s4, 0x10($sp)
    ctx->pc = 0x12c334u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x12c338: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x12c338u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x12c33c: 0xc7b40060  lwc1        $f20, 0x60($sp)
    ctx->pc = 0x12c33cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x12c340: 0x3e00008  jr          $ra
    ctx->pc = 0x12C340u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12C344u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12C340u;
        // 0x12c344: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x12C340u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x12C348u;
}
