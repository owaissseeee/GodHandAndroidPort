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

// Function: scalbnf
// Address: 0x3a4e28 - 0x3a4f88
void scalbnf_0x3a4e28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("scalbnf_0x3a4e28");
#endif

    switch (ctx->pc) {
        case 0x3a4f44u: goto label_3a4f44;
        default: break;
    }

    ctx->pc = 0x3a4e28u;

    // 0x3a4e28: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3a4e28u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x3a4e2c: 0x44056000  mfc1        $a1, $f12
    ctx->pc = 0x3a4e2cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[12], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
    // 0x3a4e30: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3a4e30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3a4e34: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x3a4e34u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a4e38: 0x3c077f80  lui         $a3, 0x7F80
    ctx->pc = 0x3a4e38u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)32640 << 16));
    // 0x3a4e3c: 0xc71024  and         $v0, $a2, $a3
    ctx->pc = 0x3a4e3cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & GPR_U64(ctx, 7));
    // 0x3a4e40: 0x21dc3  sra         $v1, $v0, 23
    ctx->pc = 0x3a4e40u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 2), 23));
    // 0x3a4e44: 0x1460001c  bnez        $v1, . + 4 + (0x1C << 2)
    ctx->pc = 0x3A4E44u;
    {
        const bool branch_taken_0x3a4e44 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3A4E48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A4E44u;
        // 0x3a4e48: 0xe7b40010  swc1        $f20, 0x10($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a4e44) {
            ctx->pc = 0x3A4EB8u;
            goto label_3a4eb8;
        }
    }
    ctx->pc = 0x3A4E4Cu;
    // 0x3a4e4c: 0x3c027fff  lui         $v0, 0x7FFF
    ctx->pc = 0x3a4e4cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32767 << 16));
    // 0x3a4e50: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x3a4e50u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x3a4e54: 0xc21024  and         $v0, $a2, $v0
    ctx->pc = 0x3a4e54u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & GPR_U64(ctx, 2));
    // 0x3a4e58: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x3A4E58u;
    {
        const bool branch_taken_0x3a4e58 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3A4E5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A4E58u;
        // 0x3a4e5c: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a4e58) {
            ctx->pc = 0x3A4E70u;
            goto label_3a4e70;
        }
    }
    ctx->pc = 0x3A4E60u;
    // 0x3a4e60: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x3a4e60u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3a4e64: 0x10000046  b           . + 4 + (0x46 << 2)
    ctx->pc = 0x3A4E64u;
    {
        const bool branch_taken_0x3a4e64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A4E68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A4E64u;
        // 0x3a4e68: 0xc7b40010  lwc1        $f20, 0x10($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a4e64) {
            ctx->pc = 0x3A4F80u;
            goto label_3a4f80;
        }
    }
    ctx->pc = 0x3A4E6Cu;
    // 0x3a4e6c: 0x0  nop
    ctx->pc = 0x3a4e6cu;
    // NOP
label_3a4e70:
    // 0x3a4e70: 0x3c014c00  lui         $at, 0x4C00
    ctx->pc = 0x3a4e70u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)19456 << 16));
    // 0x3a4e74: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x3a4e74u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3a4e78: 0x44850800  mtc1        $a1, $f1
    ctx->pc = 0x3a4e78u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x3a4e7c: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x3a4e7cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x3a4e80: 0x44050800  mfc1        $a1, $f1
    ctx->pc = 0x3a4e80u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
    // 0x3a4e84: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x3a4e84u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a4e88: 0xa71824  and         $v1, $a1, $a3
    ctx->pc = 0x3a4e88u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & GPR_U64(ctx, 7));
    // 0x3a4e8c: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x3a4e8cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x3a4e90: 0x31dc3  sra         $v1, $v1, 23
    ctx->pc = 0x3a4e90u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 23));
    // 0x3a4e94: 0x34423cb0  ori         $v0, $v0, 0x3CB0
    ctx->pc = 0x3a4e94u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)15536);
    // 0x3a4e98: 0x82102a  slt         $v0, $a0, $v0
    ctx->pc = 0x3a4e98u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x3a4e9c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x3A4E9Cu;
    {
        const bool branch_taken_0x3a4e9c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A4EA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A4E9Cu;
        // 0x3a4ea0: 0x2463ffe7  addiu       $v1, $v1, -0x19 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967271));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a4e9c) {
            ctx->pc = 0x3A4EB8u;
            goto label_3a4eb8;
        }
    }
    ctx->pc = 0x3A4EA4u;
    // 0x3a4ea4: 0x3c010da2  lui         $at, 0xDA2
    ctx->pc = 0x3a4ea4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)3490 << 16));
    // 0x3a4ea8: 0x34214260  ori         $at, $at, 0x4260
    ctx->pc = 0x3a4ea8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)16992);
    // 0x3a4eac: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x3a4eacu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3a4eb0: 0x10000031  b           . + 4 + (0x31 << 2)
    ctx->pc = 0x3A4EB0u;
    {
        const bool branch_taken_0x3a4eb0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A4EB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A4EB0u;
        // 0x3a4eb4: 0x46000802  mul.s       $f0, $f1, $f0 (Delay Slot)
        ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a4eb0) {
            ctx->pc = 0x3A4F78u;
            goto label_3a4f78;
        }
    }
    ctx->pc = 0x3A4EB8u;
label_3a4eb8:
    // 0x3a4eb8: 0x240200ff  addiu       $v0, $zero, 0xFF
    ctx->pc = 0x3a4eb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x3a4ebc: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3A4EBCu;
    {
        const bool branch_taken_0x3a4ebc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x3A4EC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A4EBCu;
        // 0x3a4ec0: 0x641821  addu        $v1, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a4ebc) {
            ctx->pc = 0x3A4ED0u;
            goto label_3a4ed0;
        }
    }
    ctx->pc = 0x3A4EC4u;
    // 0x3a4ec4: 0x44851000  mtc1        $a1, $f2
    ctx->pc = 0x3a4ec4u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x3a4ec8: 0x1000002b  b           . + 4 + (0x2B << 2)
    ctx->pc = 0x3A4EC8u;
    {
        const bool branch_taken_0x3a4ec8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A4ECCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A4EC8u;
        // 0x3a4ecc: 0x46021000  add.s       $f0, $f2, $f2 (Delay Slot)
        ctx->f[0] = FPU_ADD_S(ctx->f[2], ctx->f[2]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a4ec8) {
            ctx->pc = 0x3A4F78u;
            goto label_3a4f78;
        }
    }
    ctx->pc = 0x3A4ED0u;
label_3a4ed0:
    // 0x3a4ed0: 0x286200ff  slti        $v0, $v1, 0xFF
    ctx->pc = 0x3a4ed0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)255) ? 1 : 0);
    // 0x3a4ed4: 0x10400015  beqz        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x3A4ED4u;
    {
        const bool branch_taken_0x3a4ed4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3a4ed4) {
            ctx->pc = 0x3A4F2Cu;
            goto label_3a4f2c;
        }
    }
    ctx->pc = 0x3A4EDCu;
    // 0x3a4edc: 0x1860000a  blez        $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x3A4EDCu;
    {
        const bool branch_taken_0x3a4edc = (GPR_S64(ctx, 3) <= 0);
        ctx->pc = 0x3A4EE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A4EDCu;
        // 0x3a4ee0: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a4edc) {
            ctx->pc = 0x3A4F08u;
            goto label_3a4f08;
        }
    }
    ctx->pc = 0x3A4EE4u;
    // 0x3a4ee4: 0x3c02807f  lui         $v0, 0x807F
    ctx->pc = 0x3a4ee4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32895 << 16));
    // 0x3a4ee8: 0x31dc0  sll         $v1, $v1, 23
    ctx->pc = 0x3a4ee8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 23));
    // 0x3a4eec: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x3a4eecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x3a4ef0: 0xc21024  and         $v0, $a2, $v0
    ctx->pc = 0x3a4ef0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & GPR_U64(ctx, 2));
    // 0x3a4ef4: 0x432825  or          $a1, $v0, $v1
    ctx->pc = 0x3a4ef4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x3a4ef8: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x3a4ef8u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3a4efc: 0x10000020  b           . + 4 + (0x20 << 2)
    ctx->pc = 0x3A4EFCu;
    {
        const bool branch_taken_0x3a4efc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A4F00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A4EFCu;
        // 0x3a4f00: 0xc7b40010  lwc1        $f20, 0x10($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a4efc) {
            ctx->pc = 0x3A4F80u;
            goto label_3a4f80;
        }
    }
    ctx->pc = 0x3A4F04u;
    // 0x3a4f04: 0x0  nop
    ctx->pc = 0x3a4f04u;
    // NOP
label_3a4f08:
    // 0x3a4f08: 0x2862ffe8  slti        $v0, $v1, -0x18
    ctx->pc = 0x3a4f08u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)4294967272) ? 1 : 0);
    // 0x3a4f0c: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x3A4F0Cu;
    {
        const bool branch_taken_0x3a4f0c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A4F10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A4F0Cu;
        // 0x3a4f10: 0x3402c350  ori         $v0, $zero, 0xC350 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)50000);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a4f0c) {
            ctx->pc = 0x3A4F4Cu;
            goto label_3a4f4c;
        }
    }
    ctx->pc = 0x3A4F14u;
    // 0x3a4f14: 0x44102a  slt         $v0, $v0, $a0
    ctx->pc = 0x3a4f14u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x3a4f18: 0x3c010da2  lui         $at, 0xDA2
    ctx->pc = 0x3a4f18u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)3490 << 16));
    // 0x3a4f1c: 0x34214260  ori         $at, $at, 0x4260
    ctx->pc = 0x3a4f1cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)16992);
    // 0x3a4f20: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x3a4f20u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x3a4f24: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3A4F24u;
    {
        const bool branch_taken_0x3a4f24 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3a4f24) {
            ctx->pc = 0x3A4F38u;
            goto label_3a4f38;
        }
    }
    ctx->pc = 0x3A4F2Cu;
label_3a4f2c:
    // 0x3a4f2c: 0x3c017149  lui         $at, 0x7149
    ctx->pc = 0x3a4f2cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)29001 << 16));
    // 0x3a4f30: 0x3421f2ca  ori         $at, $at, 0xF2CA
    ctx->pc = 0x3a4f30u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)62154);
    // 0x3a4f34: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x3a4f34u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_3a4f38:
    // 0x3a4f38: 0x44856800  mtc1        $a1, $f13
    ctx->pc = 0x3a4f38u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x3a4f3c: 0xc0e93e2  jal         func_3A4F88
    ctx->pc = 0x3A4F3Cu;
    SET_GPR_U32(ctx, 31, 0x3A4F44u);
    ctx->pc = 0x3A4F40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A4F3Cu;
    // 0x3a4f40: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A4F88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A4F88u, 0x3A4F3Cu, 0x3A4F44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A4F44u;
label_3a4f44:
    // 0x3a4f44: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x3A4F44u;
    {
        const bool branch_taken_0x3a4f44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A4F48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A4F44u;
        // 0x3a4f48: 0x46140002  mul.s       $f0, $f0, $f20 (Delay Slot)
        ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a4f44) {
            ctx->pc = 0x3A4F78u;
            goto label_3a4f78;
        }
    }
    ctx->pc = 0x3A4F4Cu;
label_3a4f4c:
    // 0x3a4f4c: 0x24630019  addiu       $v1, $v1, 0x19
    ctx->pc = 0x3a4f4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 25));
    // 0x3a4f50: 0x3c02807f  lui         $v0, 0x807F
    ctx->pc = 0x3a4f50u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32895 << 16));
    // 0x3a4f54: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x3a4f54u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x3a4f58: 0x31dc0  sll         $v1, $v1, 23
    ctx->pc = 0x3a4f58u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 23));
    // 0x3a4f5c: 0xc21024  and         $v0, $a2, $v0
    ctx->pc = 0x3a4f5cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & GPR_U64(ctx, 2));
    // 0x3a4f60: 0x432825  or          $a1, $v0, $v1
    ctx->pc = 0x3a4f60u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x3a4f64: 0x3c013300  lui         $at, 0x3300
    ctx->pc = 0x3a4f64u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)13056 << 16));
    // 0x3a4f68: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x3a4f68u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3a4f6c: 0x44850800  mtc1        $a1, $f1
    ctx->pc = 0x3a4f6cu;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x3a4f70: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x3a4f70u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x3a4f74: 0x0  nop
    ctx->pc = 0x3a4f74u;
    // NOP
label_3a4f78:
    // 0x3a4f78: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3a4f78u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3a4f7c: 0xc7b40010  lwc1        $f20, 0x10($sp)
    ctx->pc = 0x3a4f7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_3a4f80:
    // 0x3a4f80: 0x3e00008  jr          $ra
    ctx->pc = 0x3A4F80u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3A4F84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A4F80u;
        // 0x3a4f84: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3A4F80u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3A4F88u;
}
