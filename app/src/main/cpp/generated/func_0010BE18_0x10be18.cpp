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

// Function: func_0010BE18
// Address: 0x10be18 - 0x10c300
void func_0010BE18_0x10be18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0010BE18_0x10be18");
#endif

    switch (ctx->pc) {
        case 0x10be88u: goto label_10be88;
        case 0x10bedcu: goto label_10bedc;
        case 0x10bf34u: goto label_10bf34;
        case 0x10bf48u: goto label_10bf48;
        case 0x10bfc8u: goto label_10bfc8;
        case 0x10bfdcu: goto label_10bfdc;
        case 0x10c05cu: goto label_10c05c;
        case 0x10c0e4u: goto label_10c0e4;
        case 0x10c1bcu: goto label_10c1bc;
        case 0x10c1c8u: goto label_10c1c8;
        case 0x10c208u: goto label_10c208;
        case 0x10c24cu: goto label_10c24c;
        case 0x10c258u: goto label_10c258;
        case 0x10c298u: goto label_10c298;
        case 0x10c2ccu: goto label_10c2cc;
        case 0x10c2dcu: goto label_10c2dc;
        default: break;
    }

    ctx->pc = 0x10be18u;

    // 0x10be18: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x10be18u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x10be1c: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x10be1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
    // 0x10be20: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x10be20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
    // 0x10be24: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x10be24u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10be28: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x10be28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
    // 0x10be2c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x10be2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x10be30: 0x7fb40020  sq          $s4, 0x20($sp)
    ctx->pc = 0x10be30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 20));
    // 0x10be34: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x10be34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x10be38: 0xe7b40070  swc1        $f20, 0x70($sp)
    ctx->pc = 0x10be38u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
    // 0x10be3c: 0x8622054a  lh          $v0, 0x54A($s1)
    ctx->pc = 0x10be3cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 1354)));
    // 0x10be40: 0x5c400004  bgtzl       $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x10BE40u;
    {
        const bool branch_taken_0x10be40 = (GPR_S64(ctx, 2) > 0);
        if (branch_taken_0x10be40) {
            ctx->pc = 0x10BE44u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x10BE40u;
            // 0x10be44: 0x922302f6  lbu         $v1, 0x2F6($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 758)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x10BE54u;
            goto label_10be54;
        }
    }
    ctx->pc = 0x10BE48u;
    // 0x10be48: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x10be48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x10be4c: 0xa622054a  sh          $v0, 0x54A($s1)
    ctx->pc = 0x10be4cu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1354), (uint16_t)GPR_U32(ctx, 2));
    // 0x10be50: 0x922302f6  lbu         $v1, 0x2F6($s1)
    ctx->pc = 0x10be50u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 758)));
label_10be54:
    // 0x10be54: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x10BE54u;
    {
        const bool branch_taken_0x10be54 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x10BE58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10BE54u;
        // 0x10be58: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10be54) {
            ctx->pc = 0x10BE6Cu;
            goto label_10be6c;
        }
    }
    ctx->pc = 0x10BE5Cu;
    // 0x10be5c: 0x106200a7  beq         $v1, $v0, . + 4 + (0xA7 << 2)
    ctx->pc = 0x10BE5Cu;
    {
        const bool branch_taken_0x10be5c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x10BE60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10BE5Cu;
        // 0x10be60: 0x3c020074  lui         $v0, 0x74 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)116 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10be5c) {
            ctx->pc = 0x10C0FCu;
            goto label_10c0fc;
        }
    }
    ctx->pc = 0x10BE64u;
    // 0x10be64: 0x10000113  b           . + 4 + (0x113 << 2)
    ctx->pc = 0x10BE64u;
    {
        const bool branch_taken_0x10be64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10BE68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10BE64u;
        // 0x10be68: 0x9222061f  lbu         $v0, 0x61F($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1567)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10be64) {
            ctx->pc = 0x10C2B4u;
            goto label_10c2b4;
        }
    }
    ctx->pc = 0x10BE6Cu;
label_10be6c:
    // 0x10be6c: 0x3c10005d  lui         $s0, 0x5D
    ctx->pc = 0x10be6cu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)93 << 16));
    // 0x10be70: 0xa62005e0  sh          $zero, 0x5E0($s1)
    ctx->pc = 0x10be70u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1504), (uint16_t)GPR_U32(ctx, 0));
    // 0x10be74: 0x2610b000  addiu       $s0, $s0, -0x5000
    ctx->pc = 0x10be74u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294946816));
    // 0x10be78: 0xa62005e2  sh          $zero, 0x5E2($s1)
    ctx->pc = 0x10be78u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1506), (uint16_t)GPR_U32(ctx, 0));
    // 0x10be7c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x10be7cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10be80: 0xc0aa6f0  jal         func_2A9BC0
    ctx->pc = 0x10BE80u;
    SET_GPR_U32(ctx, 31, 0x10BE88u);
    ctx->pc = 0x10BE84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10BE80u;
    // 0x10be84: 0x24130001  addiu       $s3, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A9BC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A9BC0u, 0x10BE80u, 0x10BE88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10BE88u;
label_10be88:
    // 0x10be88: 0x24140002  addiu       $s4, $zero, 0x2
    ctx->pc = 0x10be88u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x10be8c: 0x92030010  lbu         $v1, 0x10($s0)
    ctx->pc = 0x10be8cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x10be90: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x10be90u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10be94: 0x262380b  movn        $a3, $s3, $v0
    ctx->pc = 0x10be94u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 7, GPR_VEC(ctx, 19));
    // 0x10be98: 0x283380b  movn        $a3, $s4, $v1
    ctx->pc = 0x10be98u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 7, GPR_VEC(ctx, 20));
    // 0x10be9c: 0x10f3001a  beq         $a3, $s3, . + 4 + (0x1A << 2)
    ctx->pc = 0x10BE9Cu;
    {
        const bool branch_taken_0x10be9c = (GPR_U64(ctx, 7) == GPR_U64(ctx, 19));
        ctx->pc = 0x10BEA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10BE9Cu;
        // 0x10bea0: 0xae2015b4  sw          $zero, 0x15B4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 5556), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10be9c) {
            ctx->pc = 0x10BF08u;
            goto label_10bf08;
        }
    }
    ctx->pc = 0x10BEA4u;
    // 0x10bea4: 0x10e00003  beqz        $a3, . + 4 + (0x3 << 2)
    ctx->pc = 0x10BEA4u;
    {
        const bool branch_taken_0x10bea4 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x10BEA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10BEA4u;
        // 0x10bea8: 0x8e220304  lw          $v0, 0x304($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10bea4) {
            ctx->pc = 0x10BEB4u;
            goto label_10beb4;
        }
    }
    ctx->pc = 0x10BEACu;
    // 0x10beac: 0x10f4003c  beq         $a3, $s4, . + 4 + (0x3C << 2)
    ctx->pc = 0x10BEACu;
    {
        const bool branch_taken_0x10beac = (GPR_U64(ctx, 7) == GPR_U64(ctx, 20));
        if (branch_taken_0x10beac) {
            ctx->pc = 0x10BFA0u;
            goto label_10bfa0;
        }
    }
    ctx->pc = 0x10BEB4u;
label_10beb4:
    // 0x10beb4: 0x922702f7  lbu         $a3, 0x2F7($s1)
    ctx->pc = 0x10beb4u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 759)));
    // 0x10beb8: 0x8c430028  lw          $v1, 0x28($v0)
    ctx->pc = 0x10beb8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 40)));
    // 0x10bebc: 0x8c44002c  lw          $a0, 0x2C($v0)
    ctx->pc = 0x10bebcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 44)));
    // 0x10bec0: 0x629021  addu        $s2, $v1, $v0
    ctx->pc = 0x10bec0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x10bec4: 0x10f40008  beq         $a3, $s4, . + 4 + (0x8 << 2)
    ctx->pc = 0x10BEC4u;
    {
        const bool branch_taken_0x10bec4 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 20));
        ctx->pc = 0x10BEC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10BEC4u;
        // 0x10bec8: 0x828021  addu        $s0, $a0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10bec4) {
            ctx->pc = 0x10BEE8u;
            goto label_10bee8;
        }
    }
    ctx->pc = 0x10BECCu;
    // 0x10becc: 0x54e00058  bnel        $a3, $zero, . + 4 + (0x58 << 2)
    ctx->pc = 0x10BECCu;
    {
        const bool branch_taken_0x10becc = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        if (branch_taken_0x10becc) {
            ctx->pc = 0x10BED0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x10BECCu;
            // 0x10bed0: 0x8e2406a0  lw          $a0, 0x6A0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1696)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x10C030u;
            goto label_10c030;
        }
    }
    ctx->pc = 0x10BED4u;
    // 0x10bed4: 0xc0c73f8  jal         func_31CFE0
    ctx->pc = 0x10BED4u;
    SET_GPR_U32(ctx, 31, 0x10BEDCu);
    ctx->pc = 0x31CFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31CFE0u, 0x10BED4u, 0x10BEDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10BEDCu;
label_10bedc:
    // 0x10bedc: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x10bedcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x10bee0: 0x50400053  beql        $v0, $zero, . + 4 + (0x53 << 2)
    ctx->pc = 0x10BEE0u;
    {
        const bool branch_taken_0x10bee0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x10bee0) {
            ctx->pc = 0x10BEE4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x10BEE0u;
            // 0x10bee4: 0x8e2406a0  lw          $a0, 0x6A0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1696)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x10C030u;
            goto label_10c030;
        }
    }
    ctx->pc = 0x10BEE8u;
label_10bee8:
    // 0x10bee8: 0x8e220304  lw          $v0, 0x304($s1)
    ctx->pc = 0x10bee8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
    // 0x10beec: 0x8c4302b8  lw          $v1, 0x2B8($v0)
    ctx->pc = 0x10beecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 696)));
    // 0x10bef0: 0x8c4402bc  lw          $a0, 0x2BC($v0)
    ctx->pc = 0x10bef0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 700)));
    // 0x10bef4: 0x629021  addu        $s2, $v1, $v0
    ctx->pc = 0x10bef4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x10bef8: 0xae3415b4  sw          $s4, 0x15B4($s1)
    ctx->pc = 0x10bef8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 5556), GPR_U32(ctx, 20));
    // 0x10befc: 0x828021  addu        $s0, $a0, $v0
    ctx->pc = 0x10befcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x10bf00: 0x1000004a  b           . + 4 + (0x4A << 2)
    ctx->pc = 0x10BF00u;
    {
        const bool branch_taken_0x10bf00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10BF04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10BF00u;
        // 0x10bf04: 0xa23402f7  sb          $s4, 0x2F7($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 759), (uint8_t)GPR_U32(ctx, 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10bf00) {
            ctx->pc = 0x10C02Cu;
            goto label_10c02c;
        }
    }
    ctx->pc = 0x10BF08u;
label_10bf08:
    // 0x10bf08: 0x8e220304  lw          $v0, 0x304($s1)
    ctx->pc = 0x10bf08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
    // 0x10bf0c: 0x922702f7  lbu         $a3, 0x2F7($s1)
    ctx->pc = 0x10bf0cu;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 759)));
    // 0x10bf10: 0x8c4302a0  lw          $v1, 0x2A0($v0)
    ctx->pc = 0x10bf10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 672)));
    // 0x10bf14: 0x8c4402a4  lw          $a0, 0x2A4($v0)
    ctx->pc = 0x10bf14u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 676)));
    // 0x10bf18: 0x629021  addu        $s2, $v1, $v0
    ctx->pc = 0x10bf18u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x10bf1c: 0x10f40008  beq         $a3, $s4, . + 4 + (0x8 << 2)
    ctx->pc = 0x10BF1Cu;
    {
        const bool branch_taken_0x10bf1c = (GPR_U64(ctx, 7) == GPR_U64(ctx, 20));
        ctx->pc = 0x10BF20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10BF1Cu;
        // 0x10bf20: 0x828021  addu        $s0, $a0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10bf1c) {
            ctx->pc = 0x10BF40u;
            goto label_10bf40;
        }
    }
    ctx->pc = 0x10BF24u;
    // 0x10bf24: 0x54e00042  bnel        $a3, $zero, . + 4 + (0x42 << 2)
    ctx->pc = 0x10BF24u;
    {
        const bool branch_taken_0x10bf24 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        if (branch_taken_0x10bf24) {
            ctx->pc = 0x10BF28u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x10BF24u;
            // 0x10bf28: 0x8e2406a0  lw          $a0, 0x6A0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1696)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x10C030u;
            goto label_10c030;
        }
    }
    ctx->pc = 0x10BF2Cu;
    // 0x10bf2c: 0xc0c73f8  jal         func_31CFE0
    ctx->pc = 0x10BF2Cu;
    SET_GPR_U32(ctx, 31, 0x10BF34u);
    ctx->pc = 0x31CFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31CFE0u, 0x10BF2Cu, 0x10BF34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10BF34u;
label_10bf34:
    // 0x10bf34: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x10bf34u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x10bf38: 0x5040003d  beql        $v0, $zero, . + 4 + (0x3D << 2)
    ctx->pc = 0x10BF38u;
    {
        const bool branch_taken_0x10bf38 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x10bf38) {
            ctx->pc = 0x10BF3Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x10BF38u;
            // 0x10bf3c: 0x8e2406a0  lw          $a0, 0x6A0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1696)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x10C030u;
            goto label_10c030;
        }
    }
    ctx->pc = 0x10BF40u;
label_10bf40:
    // 0x10bf40: 0xc0c73f8  jal         func_31CFE0
    ctx->pc = 0x10BF40u;
    SET_GPR_U32(ctx, 31, 0x10BF48u);
    ctx->pc = 0x31CFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31CFE0u, 0x10BF40u, 0x10BF48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10BF48u;
label_10bf48:
    // 0x10bf48: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x10bf48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x10bf4c: 0x43001b  divu        $zero, $v0, $v1
    ctx->pc = 0x10bf4cu;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x10bf50: 0x50600001  beql        $v1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x10BF50u;
    {
        const bool branch_taken_0x10bf50 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x10bf50) {
            ctx->pc = 0x10BF54u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x10BF50u;
            // 0x10bf54: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x10BF58u;
            goto label_10bf58;
        }
    }
    ctx->pc = 0x10BF58u;
label_10bf58:
    // 0x10bf58: 0x2010  mfhi        $a0
    ctx->pc = 0x10bf58u;
    SET_GPR_U64(ctx, 4, ctx->hi);
    // 0x10bf5c: 0x14930006  bne         $a0, $s3, . + 4 + (0x6 << 2)
    ctx->pc = 0x10BF5Cu;
    {
        const bool branch_taken_0x10bf5c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 19));
        if (branch_taken_0x10bf5c) {
            ctx->pc = 0x10BF78u;
            goto label_10bf78;
        }
    }
    ctx->pc = 0x10BF64u;
    // 0x10bf64: 0x8e220690  lw          $v0, 0x690($s1)
    ctx->pc = 0x10bf64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1680)));
    // 0x10bf68: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x10bf68u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10bf6c: 0x262200b  movn        $a0, $s3, $v0
    ctx->pc = 0x10bf6cu;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 19));
    // 0x10bf70: 0x50930026  beql        $a0, $s3, . + 4 + (0x26 << 2)
    ctx->pc = 0x10BF70u;
    {
        const bool branch_taken_0x10bf70 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 19));
        if (branch_taken_0x10bf70) {
            ctx->pc = 0x10BF74u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x10BF70u;
            // 0x10bf74: 0x8e220304  lw          $v0, 0x304($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x10C00Cu;
            goto label_10c00c;
        }
    }
    ctx->pc = 0x10BF78u;
label_10bf78:
    // 0x10bf78: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x10BF78u;
    {
        const bool branch_taken_0x10bf78 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x10BF7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10BF78u;
        // 0x10bf7c: 0x8e220304  lw          $v0, 0x304($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10bf78) {
            ctx->pc = 0x10BF88u;
            goto label_10bf88;
        }
    }
    ctx->pc = 0x10BF80u;
    // 0x10bf80: 0x10940004  beq         $a0, $s4, . + 4 + (0x4 << 2)
    ctx->pc = 0x10BF80u;
    {
        const bool branch_taken_0x10bf80 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 20));
        if (branch_taken_0x10bf80) {
            ctx->pc = 0x10BF94u;
            goto label_10bf94;
        }
    }
    ctx->pc = 0x10BF88u;
label_10bf88:
    // 0x10bf88: 0x8c4302a8  lw          $v1, 0x2A8($v0)
    ctx->pc = 0x10bf88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 680)));
    // 0x10bf8c: 0x10000021  b           . + 4 + (0x21 << 2)
    ctx->pc = 0x10BF8Cu;
    {
        const bool branch_taken_0x10bf8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10BF90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10BF8Cu;
        // 0x10bf90: 0x8c4402ac  lw          $a0, 0x2AC($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 684)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10bf8c) {
            ctx->pc = 0x10C014u;
            goto label_10c014;
        }
    }
    ctx->pc = 0x10BF94u;
label_10bf94:
    // 0x10bf94: 0x8c430030  lw          $v1, 0x30($v0)
    ctx->pc = 0x10bf94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x10bf98: 0x1000001e  b           . + 4 + (0x1E << 2)
    ctx->pc = 0x10BF98u;
    {
        const bool branch_taken_0x10bf98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10BF9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10BF98u;
        // 0x10bf9c: 0x8c440034  lw          $a0, 0x34($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10bf98) {
            ctx->pc = 0x10C014u;
            goto label_10c014;
        }
    }
    ctx->pc = 0x10BFA0u;
label_10bfa0:
    // 0x10bfa0: 0x922802f7  lbu         $t0, 0x2F7($s1)
    ctx->pc = 0x10bfa0u;
    SET_GPR_ZE32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 759)));
    // 0x10bfa4: 0x8c4302a8  lw          $v1, 0x2A8($v0)
    ctx->pc = 0x10bfa4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 680)));
    // 0x10bfa8: 0x8c4402ac  lw          $a0, 0x2AC($v0)
    ctx->pc = 0x10bfa8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 684)));
    // 0x10bfac: 0x629021  addu        $s2, $v1, $v0
    ctx->pc = 0x10bfacu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x10bfb0: 0x11070008  beq         $t0, $a3, . + 4 + (0x8 << 2)
    ctx->pc = 0x10BFB0u;
    {
        const bool branch_taken_0x10bfb0 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 7));
        ctx->pc = 0x10BFB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10BFB0u;
        // 0x10bfb4: 0x828021  addu        $s0, $a0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10bfb0) {
            ctx->pc = 0x10BFD4u;
            goto label_10bfd4;
        }
    }
    ctx->pc = 0x10BFB8u;
    // 0x10bfb8: 0x5500001d  bnel        $t0, $zero, . + 4 + (0x1D << 2)
    ctx->pc = 0x10BFB8u;
    {
        const bool branch_taken_0x10bfb8 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 0));
        if (branch_taken_0x10bfb8) {
            ctx->pc = 0x10BFBCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x10BFB8u;
            // 0x10bfbc: 0x8e2406a0  lw          $a0, 0x6A0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1696)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x10C030u;
            goto label_10c030;
        }
    }
    ctx->pc = 0x10BFC0u;
    // 0x10bfc0: 0xc0c73f8  jal         func_31CFE0
    ctx->pc = 0x10BFC0u;
    SET_GPR_U32(ctx, 31, 0x10BFC8u);
    ctx->pc = 0x31CFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31CFE0u, 0x10BFC0u, 0x10BFC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10BFC8u;
label_10bfc8:
    // 0x10bfc8: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x10bfc8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x10bfcc: 0x50400018  beql        $v0, $zero, . + 4 + (0x18 << 2)
    ctx->pc = 0x10BFCCu;
    {
        const bool branch_taken_0x10bfcc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x10bfcc) {
            ctx->pc = 0x10BFD0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x10BFCCu;
            // 0x10bfd0: 0x8e2406a0  lw          $a0, 0x6A0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1696)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x10C030u;
            goto label_10c030;
        }
    }
    ctx->pc = 0x10BFD4u;
label_10bfd4:
    // 0x10bfd4: 0xc0c73f8  jal         func_31CFE0
    ctx->pc = 0x10BFD4u;
    SET_GPR_U32(ctx, 31, 0x10BFDCu);
    ctx->pc = 0x31CFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31CFE0u, 0x10BFD4u, 0x10BFDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10BFDCu;
label_10bfdc:
    // 0x10bfdc: 0x30430001  andi        $v1, $v0, 0x1
    ctx->pc = 0x10bfdcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x10bfe0: 0x14730003  bne         $v1, $s3, . + 4 + (0x3 << 2)
    ctx->pc = 0x10BFE0u;
    {
        const bool branch_taken_0x10bfe0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 19));
        if (branch_taken_0x10bfe0) {
            ctx->pc = 0x10BFF0u;
            goto label_10bff0;
        }
    }
    ctx->pc = 0x10BFE8u;
    // 0x10bfe8: 0x8e220690  lw          $v0, 0x690($s1)
    ctx->pc = 0x10bfe8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1680)));
    // 0x10bfec: 0x2180a  movz        $v1, $zero, $v0
    ctx->pc = 0x10bfecu;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 0));
label_10bff0:
    // 0x10bff0: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x10BFF0u;
    {
        const bool branch_taken_0x10bff0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x10BFF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10BFF0u;
        // 0x10bff4: 0x8e220304  lw          $v0, 0x304($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10bff0) {
            ctx->pc = 0x10C000u;
            goto label_10c000;
        }
    }
    ctx->pc = 0x10BFF8u;
    // 0x10bff8: 0x10730004  beq         $v1, $s3, . + 4 + (0x4 << 2)
    ctx->pc = 0x10BFF8u;
    {
        const bool branch_taken_0x10bff8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 19));
        if (branch_taken_0x10bff8) {
            ctx->pc = 0x10C00Cu;
            goto label_10c00c;
        }
    }
    ctx->pc = 0x10C000u;
label_10c000:
    // 0x10c000: 0x8c430030  lw          $v1, 0x30($v0)
    ctx->pc = 0x10c000u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x10c004: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x10C004u;
    {
        const bool branch_taken_0x10c004 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10C008u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10C004u;
        // 0x10c008: 0x8c440034  lw          $a0, 0x34($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10c004) {
            ctx->pc = 0x10C014u;
            goto label_10c014;
        }
    }
    ctx->pc = 0x10C00Cu;
label_10c00c:
    // 0x10c00c: 0x8c4302b0  lw          $v1, 0x2B0($v0)
    ctx->pc = 0x10c00cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 688)));
    // 0x10c010: 0x8c4402b4  lw          $a0, 0x2B4($v0)
    ctx->pc = 0x10c010u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 692)));
label_10c014:
    // 0x10c014: 0x629021  addu        $s2, $v1, $v0
    ctx->pc = 0x10c014u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x10c018: 0x828021  addu        $s0, $a0, $v0
    ctx->pc = 0x10c018u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x10c01c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x10c01cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x10c020: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x10c020u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x10c024: 0xa22202f7  sb          $v0, 0x2F7($s1)
    ctx->pc = 0x10c024u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 759), (uint8_t)GPR_U32(ctx, 2));
    // 0x10c028: 0xae2315b4  sw          $v1, 0x15B4($s1)
    ctx->pc = 0x10c028u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 5556), GPR_U32(ctx, 3));
label_10c02c:
    // 0x10c02c: 0x8e2406a0  lw          $a0, 0x6A0($s1)
    ctx->pc = 0x10c02cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1696)));
label_10c030:
    // 0x10c030: 0x10800011  beqz        $a0, . + 4 + (0x11 << 2)
    ctx->pc = 0x10C030u;
    {
        const bool branch_taken_0x10c030 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x10C034u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10C030u;
        // 0x10c034: 0x2407000a  addiu       $a3, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10c030) {
            ctx->pc = 0x10C078u;
            goto label_10c078;
        }
    }
    ctx->pc = 0x10C038u;
    // 0x10c038: 0x8e220304  lw          $v0, 0x304($s1)
    ctx->pc = 0x10c038u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
    // 0x10c03c: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x10c03cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x10c040: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x10c040u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10c044: 0x8c45036c  lw          $a1, 0x36C($v0)
    ctx->pc = 0x10c044u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 876)));
    // 0x10c048: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x10c048u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10c04c: 0x8c460388  lw          $a2, 0x388($v0)
    ctx->pc = 0x10c04cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 904)));
    // 0x10c050: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x10c050u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x10c054: 0xc0aa15e  jal         func_2A8578
    ctx->pc = 0x10C054u;
    SET_GPR_U32(ctx, 31, 0x10C05Cu);
    ctx->pc = 0x10C058u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10C054u;
    // 0x10c058: 0xc23021  addu        $a2, $a2, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A8578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8578u, 0x10C054u, 0x10C05Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10C05Cu;
label_10c05c:
    // 0x10c05c: 0x8e220304  lw          $v0, 0x304($s1)
    ctx->pc = 0x10c05cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
    // 0x10c060: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x10c060u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x10c064: 0x8c440344  lw          $a0, 0x344($v0)
    ctx->pc = 0x10c064u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 836)));
    // 0x10c068: 0x8c450348  lw          $a1, 0x348($v0)
    ctx->pc = 0x10c068u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 840)));
    // 0x10c06c: 0xa22302f7  sb          $v1, 0x2F7($s1)
    ctx->pc = 0x10c06cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 759), (uint8_t)GPR_U32(ctx, 3));
    // 0x10c070: 0x829021  addu        $s2, $a0, $v0
    ctx->pc = 0x10c070u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x10c074: 0xa28021  addu        $s0, $a1, $v0
    ctx->pc = 0x10c074u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
label_10c078:
    // 0x10c078: 0x8e220698  lw          $v0, 0x698($s1)
    ctx->pc = 0x10c078u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1688)));
    // 0x10c07c: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x10C07Cu;
    {
        const bool branch_taken_0x10c07c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x10c07c) {
            ctx->pc = 0x10C0C4u;
            goto label_10c0c4;
        }
    }
    ctx->pc = 0x10C084u;
    // 0x10c084: 0x944302fe  lhu         $v1, 0x2FE($v0)
    ctx->pc = 0x10c084u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 766)));
    // 0x10c088: 0x28620379  slti        $v0, $v1, 0x379
    ctx->pc = 0x10c088u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)889) ? 1 : 0);
    // 0x10c08c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x10C08Cu;
    {
        const bool branch_taken_0x10c08c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x10C090u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10C08Cu;
        // 0x10c090: 0x28620377  slti        $v0, $v1, 0x377 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)887) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x10c08c) {
            ctx->pc = 0x10C09Cu;
            goto label_10c09c;
        }
    }
    ctx->pc = 0x10C094u;
    // 0x10c094: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x10C094u;
    {
        const bool branch_taken_0x10c094 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x10c094) {
            ctx->pc = 0x10C098u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x10C094u;
            // 0x10c098: 0x8e220304  lw          $v0, 0x304($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x10C0ACu;
            goto label_10c0ac;
        }
    }
    ctx->pc = 0x10C09Cu;
label_10c09c:
    // 0x10c09c: 0x8e220304  lw          $v0, 0x304($s1)
    ctx->pc = 0x10c09cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
    // 0x10c0a0: 0x8c4303ac  lw          $v1, 0x3AC($v0)
    ctx->pc = 0x10c0a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 940)));
    // 0x10c0a4: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x10C0A4u;
    {
        const bool branch_taken_0x10c0a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10C0A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10C0A4u;
        // 0x10c0a8: 0x8c4403b0  lw          $a0, 0x3B0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 944)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10c0a4) {
            ctx->pc = 0x10C0B4u;
            goto label_10c0b4;
        }
    }
    ctx->pc = 0x10C0ACu;
label_10c0ac:
    // 0x10c0ac: 0x8c430904  lw          $v1, 0x904($v0)
    ctx->pc = 0x10c0acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2308)));
    // 0x10c0b0: 0x8c440908  lw          $a0, 0x908($v0)
    ctx->pc = 0x10c0b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2312)));
label_10c0b4:
    // 0x10c0b4: 0x629021  addu        $s2, $v1, $v0
    ctx->pc = 0x10c0b4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x10c0b8: 0x828021  addu        $s0, $a0, $v0
    ctx->pc = 0x10c0b8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x10c0bc: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x10c0bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x10c0c0: 0xa22202f7  sb          $v0, 0x2F7($s1)
    ctx->pc = 0x10c0c0u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 759), (uint8_t)GPR_U32(ctx, 2));
label_10c0c4:
    // 0x10c0c4: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x10c0c4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x10c0c8: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x10c0c8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10c0cc: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x10c0ccu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10c0d0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x10c0d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10c0d4: 0x2407000a  addiu       $a3, $zero, 0xA
    ctx->pc = 0x10c0d4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x10c0d8: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x10c0d8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10c0dc: 0xc0aa15e  jal         func_2A8578
    ctx->pc = 0x10C0DCu;
    SET_GPR_U32(ctx, 31, 0x10C0E4u);
    ctx->pc = 0x10C0E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10C0DCu;
    // 0x10c0e0: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A8578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8578u, 0x10C0DCu, 0x10C0E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10C0E4u;
label_10c0e4:
    // 0x10c0e4: 0x922202f6  lbu         $v0, 0x2F6($s1)
    ctx->pc = 0x10c0e4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 758)));
    // 0x10c0e8: 0x2403005a  addiu       $v1, $zero, 0x5A
    ctx->pc = 0x10c0e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 90));
    // 0x10c0ec: 0xae2315b0  sw          $v1, 0x15B0($s1)
    ctx->pc = 0x10c0ecu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 5552), GPR_U32(ctx, 3));
    // 0x10c0f0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x10c0f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x10c0f4: 0xa22202f6  sb          $v0, 0x2F6($s1)
    ctx->pc = 0x10c0f4u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 758), (uint8_t)GPR_U32(ctx, 2));
    // 0x10c0f8: 0x3c020074  lui         $v0, 0x74
    ctx->pc = 0x10c0f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)116 << 16));
label_10c0fc:
    // 0x10c0fc: 0x3c040200  lui         $a0, 0x200
    ctx->pc = 0x10c0fcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)512 << 16));
    // 0x10c100: 0x8c437a78  lw          $v1, 0x7A78($v0)
    ctx->pc = 0x10c100u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 31352)));
    // 0x10c104: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x10c104u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x10c108: 0x1460002d  bnez        $v1, . + 4 + (0x2D << 2)
    ctx->pc = 0x10C108u;
    {
        const bool branch_taken_0x10c108 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x10C10Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10C108u;
        // 0x10c10c: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10c108) {
            ctx->pc = 0x10C1C0u;
            goto label_10c1c0;
        }
    }
    ctx->pc = 0x10C110u;
    // 0x10c110: 0x8e2305d8  lw          $v1, 0x5D8($s1)
    ctx->pc = 0x10c110u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1496)));
    // 0x10c114: 0x1062002a  beq         $v1, $v0, . + 4 + (0x2A << 2)
    ctx->pc = 0x10C114u;
    {
        const bool branch_taken_0x10c114 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x10c114) {
            ctx->pc = 0x10C1C0u;
            goto label_10c1c0;
        }
    }
    ctx->pc = 0x10C11Cu;
    // 0x10c11c: 0x9222061f  lbu         $v0, 0x61F($s1)
    ctx->pc = 0x10c11cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1567)));
    // 0x10c120: 0x10400027  beqz        $v0, . + 4 + (0x27 << 2)
    ctx->pc = 0x10C120u;
    {
        const bool branch_taken_0x10c120 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x10C124u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10C120u;
        // 0x10c124: 0x3c02003c  lui         $v0, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10c120) {
            ctx->pc = 0x10C1C0u;
            goto label_10c1c0;
        }
    }
    ctx->pc = 0x10C128u;
    // 0x10c128: 0x82230648  lb          $v1, 0x648($s1)
    ctx->pc = 0x10c128u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 1608)));
    // 0x10c12c: 0xc440d47c  lwc1        $f0, -0x2B84($v0)
    ctx->pc = 0x10c12cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294956156)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x10c130: 0x2863000b  slti        $v1, $v1, 0xB
    ctx->pc = 0x10c130u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)11) ? 1 : 0);
    // 0x10c134: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x10C134u;
    {
        const bool branch_taken_0x10c134 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x10C138u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10C134u;
        // 0x10c138: 0xe62015f0  swc1        $f0, 0x15F0($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 5616), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x10c134) {
            ctx->pc = 0x10C144u;
            goto label_10c144;
        }
    }
    ctx->pc = 0x10C13Cu;
    // 0x10c13c: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x10c13cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x10c140: 0xa2220648  sb          $v0, 0x648($s1)
    ctx->pc = 0x10c140u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1608), (uint8_t)GPR_U32(ctx, 2));
label_10c144:
    // 0x10c144: 0xc6210608  lwc1        $f1, 0x608($s1)
    ctx->pc = 0x10c144u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1544)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x10c148: 0x3c013f06  lui         $at, 0x3F06
    ctx->pc = 0x10c148u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16134 << 16));
    // 0x10c14c: 0x34210a92  ori         $at, $at, 0xA92
    ctx->pc = 0x10c14cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)2706);
    // 0x10c150: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x10c150u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x10c154: 0x44801800  mtc1        $zero, $f3
    ctx->pc = 0x10c154u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x10c158: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x10c158u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x10c15c: 0x46030834  c.lt.s      $f1, $f3
    ctx->pc = 0x10c15cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x10c160: 0x0  nop
    ctx->pc = 0x10c160u;
    // NOP
    // 0x10c164: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x10C164u;
    {
        const bool branch_taken_0x10c164 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x10c164) {
            ctx->pc = 0x10C168u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x10C164u;
            // 0x10c168: 0x46001846  mov.s       $f1, $f3 (Delay Slot)
            ctx->f[1] = FPU_MOV_S(ctx->f[3]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x10C16Cu;
            goto label_10c16c;
        }
    }
    ctx->pc = 0x10C16Cu;
label_10c16c:
    // 0x10c16c: 0x3c013e4c  lui         $at, 0x3E4C
    ctx->pc = 0x10c16cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15948 << 16));
    // 0x10c170: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x10c170u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x10c174: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x10c174u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x10c178: 0x3c02003c  lui         $v0, 0x3C
    ctx->pc = 0x10c178u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
    // 0x10c17c: 0xc442d474  lwc1        $f2, -0x2B8C($v0)
    ctx->pc = 0x10c17cu;
    { uint32_t bits = FAST_READ32(0x3BD474u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x10c180: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x10c180u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x10c184: 0x46011034  c.lt.s      $f2, $f1
    ctx->pc = 0x10c184u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x10c188: 0x0  nop
    ctx->pc = 0x10c188u;
    // NOP
    // 0x10c18c: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x10C18Cu;
    {
        const bool branch_taken_0x10c18c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x10c18c) {
            ctx->pc = 0x10C190u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x10C18Cu;
            // 0x10c190: 0x46001046  mov.s       $f1, $f2 (Delay Slot)
            ctx->f[1] = FPU_MOV_S(ctx->f[2]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x10C194u;
            goto label_10c194;
        }
    }
    ctx->pc = 0x10C194u;
label_10c194:
    // 0x10c194: 0xc6200604  lwc1        $f0, 0x604($s1)
    ctx->pc = 0x10c194u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1540)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x10c198: 0x46030034  c.lt.s      $f0, $f3
    ctx->pc = 0x10c198u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x10c19c: 0x0  nop
    ctx->pc = 0x10c19cu;
    // NOP
    // 0x10c1a0: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x10C1A0u;
    {
        const bool branch_taken_0x10c1a0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x10c1a0) {
            ctx->pc = 0x10C1A4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x10C1A0u;
            // 0x10c1a4: 0x46000847  neg.s       $f1, $f1 (Delay Slot)
            ctx->f[1] = FPU_NEG_S(ctx->f[1]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x10C1A8u;
            goto label_10c1a8;
        }
    }
    ctx->pc = 0x10C1A8u;
label_10c1a8:
    // 0x10c1a8: 0xc6200104  lwc1        $f0, 0x104($s1)
    ctx->pc = 0x10c1a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x10c1ac: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x10c1acu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x10c1b0: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x10c1b0u;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    // 0x10c1b4: 0xc07df52  jal         func_1F7D48
    ctx->pc = 0x10C1B4u;
    SET_GPR_U32(ctx, 31, 0x10C1BCu);
    ctx->pc = 0x10C1B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10C1B4u;
    // 0x10c1b8: 0xe6200104  swc1        $f0, 0x104($s1) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 260), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7D48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F7D48u, 0x10C1B4u, 0x10C1BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10C1BCu;
label_10c1bc:
    // 0x10c1bc: 0xe6200104  swc1        $f0, 0x104($s1)
    ctx->pc = 0x10c1bcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 260), bits); }
label_10c1c0:
    // 0x10c1c0: 0xc055f06  jal         func_157C18
    ctx->pc = 0x10C1C0u;
    SET_GPR_U32(ctx, 31, 0x10C1C8u);
    ctx->pc = 0x10C1C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10C1C0u;
    // 0x10c1c4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x157C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157C18u, 0x10C1C0u, 0x10C1C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10C1C8u;
label_10c1c8:
    // 0x10c1c8: 0x1040001b  beqz        $v0, . + 4 + (0x1B << 2)
    ctx->pc = 0x10C1C8u;
    {
        const bool branch_taken_0x10c1c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x10c1c8) {
            ctx->pc = 0x10C238u;
            goto label_10c238;
        }
    }
    ctx->pc = 0x10C1D0u;
    // 0x10c1d0: 0x8e2215b4  lw          $v0, 0x15B4($s1)
    ctx->pc = 0x10c1d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 5556)));
    // 0x10c1d4: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x10C1D4u;
    {
        const bool branch_taken_0x10c1d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x10C1D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10C1D4u;
        // 0x10c1d8: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10c1d4) {
            ctx->pc = 0x10C1E0u;
            goto label_10c1e0;
        }
    }
    ctx->pc = 0x10C1DCu;
    // 0x10c1dc: 0xae2215b4  sw          $v0, 0x15B4($s1)
    ctx->pc = 0x10c1dcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 5556), GPR_U32(ctx, 2));
label_10c1e0:
    // 0x10c1e0: 0x922302f7  lbu         $v1, 0x2F7($s1)
    ctx->pc = 0x10c1e0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 759)));
    // 0x10c1e4: 0x24100002  addiu       $s0, $zero, 0x2
    ctx->pc = 0x10c1e4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x10c1e8: 0x10700010  beq         $v1, $s0, . + 4 + (0x10 << 2)
    ctx->pc = 0x10C1E8u;
    {
        const bool branch_taken_0x10c1e8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 16));
        ctx->pc = 0x10C1ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10C1E8u;
        // 0x10c1ec: 0x28620003  slti        $v0, $v1, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)3) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x10c1e8) {
            ctx->pc = 0x10C22Cu;
            goto label_10c22c;
        }
    }
    ctx->pc = 0x10C1F0u;
    // 0x10c1f0: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x10C1F0u;
    {
        const bool branch_taken_0x10c1f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x10c1f0) {
            ctx->pc = 0x10C238u;
            goto label_10c238;
        }
    }
    ctx->pc = 0x10C1F8u;
    // 0x10c1f8: 0x460000f  bltz        $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x10C1F8u;
    {
        const bool branch_taken_0x10c1f8 = (GPR_S64(ctx, 3) < 0);
        if (branch_taken_0x10c1f8) {
            ctx->pc = 0x10C238u;
            goto label_10c238;
        }
    }
    ctx->pc = 0x10C200u;
    // 0x10c200: 0xc0c73f8  jal         func_31CFE0
    ctx->pc = 0x10C200u;
    SET_GPR_U32(ctx, 31, 0x10C208u);
    ctx->pc = 0x31CFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31CFE0u, 0x10C200u, 0x10C208u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10C208u;
label_10c208:
    // 0x10c208: 0x30420003  andi        $v0, $v0, 0x3
    ctx->pc = 0x10c208u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
    // 0x10c20c: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x10C20Cu;
    {
        const bool branch_taken_0x10c20c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x10c20c) {
            ctx->pc = 0x10C238u;
            goto label_10c238;
        }
    }
    ctx->pc = 0x10C214u;
    // 0x10c214: 0x8e2215b4  lw          $v0, 0x15B4($s1)
    ctx->pc = 0x10c214u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 5556)));
    // 0x10c218: 0x1c400007  bgtz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x10C218u;
    {
        const bool branch_taken_0x10c218 = (GPR_S64(ctx, 2) > 0);
        if (branch_taken_0x10c218) {
            ctx->pc = 0x10C238u;
            goto label_10c238;
        }
    }
    ctx->pc = 0x10C220u;
    // 0x10c220: 0xa23002f7  sb          $s0, 0x2F7($s1)
    ctx->pc = 0x10c220u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 759), (uint8_t)GPR_U32(ctx, 16));
    // 0x10c224: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x10C224u;
    {
        const bool branch_taken_0x10c224 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10C228u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10C224u;
        // 0x10c228: 0xa22002f6  sb          $zero, 0x2F6($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 758), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10c224) {
            ctx->pc = 0x10C238u;
            goto label_10c238;
        }
    }
    ctx->pc = 0x10C22Cu;
label_10c22c:
    // 0x10c22c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x10c22cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x10c230: 0xa22002f6  sb          $zero, 0x2F6($s1)
    ctx->pc = 0x10c230u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 758), (uint8_t)GPR_U32(ctx, 0));
    // 0x10c234: 0xa22202f7  sb          $v0, 0x2F7($s1)
    ctx->pc = 0x10c234u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 759), (uint8_t)GPR_U32(ctx, 2));
label_10c238:
    // 0x10c238: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x10c238u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x10c23c: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x10c23cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x10c240: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x10c240u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10c244: 0xc053e7c  jal         func_14F9F0
    ctx->pc = 0x10C244u;
    SET_GPR_U32(ctx, 31, 0x10C24Cu);
    ctx->pc = 0x10C248u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10C244u;
    // 0x10c248: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F9F0u, 0x10C244u, 0x10C24Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10C24Cu;
label_10c24c:
    // 0x10c24c: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x10c24cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x10c250: 0xc053e4a  jal         func_14F928
    ctx->pc = 0x10C250u;
    SET_GPR_U32(ctx, 31, 0x10C258u);
    ctx->pc = 0x10C254u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10C250u;
    // 0x10c254: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F928u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F928u, 0x10C250u, 0x10C258u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10C258u;
label_10c258:
    // 0x10c258: 0x8e2200f0  lw          $v0, 0xF0($s1)
    ctx->pc = 0x10c258u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 240)));
    // 0x10c25c: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x10c25cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x10c260: 0xfba40000  sqc2        $vf4, 0x0($sp)
    ctx->pc = 0x10c260u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x10c264: 0x3c040058  lui         $a0, 0x58
    ctx->pc = 0x10c264u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)88 << 16));
    // 0x10c268: 0xc62c0104  lwc1        $f12, 0x104($s1)
    ctx->pc = 0x10c268u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x10c26c: 0x3c014040  lui         $at, 0x4040
    ctx->pc = 0x10c26cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16448 << 16));
    // 0x10c270: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x10c270u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x10c274: 0x248464f0  addiu       $a0, $a0, 0x64F0
    ctx->pc = 0x10c274u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 25840));
    // 0x10c278: 0x3c014049  lui         $at, 0x4049
    ctx->pc = 0x10c278u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16457 << 16));
    // 0x10c27c: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x10c27cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
    // 0x10c280: 0x44817000  mtc1        $at, $f14
    ctx->pc = 0x10c280u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x10c284: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x10c284u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10c288: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x10c288u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10c28c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x10c28cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10c290: 0xc0a4404  jal         func_291010
    ctx->pc = 0x10C290u;
    SET_GPR_U32(ctx, 31, 0x10C298u);
    ctx->pc = 0x10C294u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10C290u;
    // 0x10c294: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x291010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x291010u, 0x10C290u, 0x10C298u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10C298u;
label_10c298:
    // 0x10c298: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x10C298u;
    {
        const bool branch_taken_0x10c298 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x10C29Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10C298u;
        // 0x10c29c: 0x2402005a  addiu       $v0, $zero, 0x5A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 90));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10c298) {
            ctx->pc = 0x10C2ACu;
            goto label_10c2ac;
        }
    }
    ctx->pc = 0x10C2A0u;
    // 0x10c2a0: 0x8e2215b0  lw          $v0, 0x15B0($s1)
    ctx->pc = 0x10c2a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 5552)));
    // 0x10c2a4: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x10C2A4u;
    {
        const bool branch_taken_0x10c2a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x10C2A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10C2A4u;
        // 0x10c2a8: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10c2a4) {
            ctx->pc = 0x10C2B0u;
            goto label_10c2b0;
        }
    }
    ctx->pc = 0x10C2ACu;
label_10c2ac:
    // 0x10c2ac: 0xae2215b0  sw          $v0, 0x15B0($s1)
    ctx->pc = 0x10c2acu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 5552), GPR_U32(ctx, 2));
label_10c2b0:
    // 0x10c2b0: 0x9222061f  lbu         $v0, 0x61F($s1)
    ctx->pc = 0x10c2b0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1567)));
label_10c2b4:
    // 0x10c2b4: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x10C2B4u;
    {
        const bool branch_taken_0x10c2b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x10C2B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10C2B4u;
        // 0x10c2b8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10c2b4) {
            ctx->pc = 0x10C2C4u;
            goto label_10c2c4;
        }
    }
    ctx->pc = 0x10C2BCu;
    // 0x10c2bc: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x10c2bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x10c2c0: 0xa2221600  sb          $v0, 0x1600($s1)
    ctx->pc = 0x10c2c0u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 5632), (uint8_t)GPR_U32(ctx, 2));
label_10c2c4:
    // 0x10c2c4: 0xc048e4e  jal         func_123938
    ctx->pc = 0x10C2C4u;
    SET_GPR_U32(ctx, 31, 0x10C2CCu);
    ctx->pc = 0x10C2C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10C2C4u;
    // 0x10c2c8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x123938u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x123938u, 0x10C2C4u, 0x10C2CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10C2CCu;
label_10c2cc:
    // 0x10c2cc: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x10C2CCu;
    {
        const bool branch_taken_0x10c2cc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x10C2D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10C2CCu;
        // 0x10c2d0: 0x7bb00060  lq          $s0, 0x60($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10c2cc) {
            ctx->pc = 0x10C2E0u;
            goto label_10c2e0;
        }
    }
    ctx->pc = 0x10C2D4u;
    // 0x10c2d4: 0xc04afee  jal         func_12BFB8
    ctx->pc = 0x10C2D4u;
    SET_GPR_U32(ctx, 31, 0x10C2DCu);
    ctx->pc = 0x10C2D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10C2D4u;
    // 0x10c2d8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12BFB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12BFB8u, 0x10C2D4u, 0x10C2DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10C2DCu;
label_10c2dc:
    // 0x10c2dc: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x10c2dcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_10c2e0:
    // 0x10c2e0: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x10c2e0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x10c2e4: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x10c2e4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x10c2e8: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x10c2e8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x10c2ec: 0x7bb40020  lq          $s4, 0x20($sp)
    ctx->pc = 0x10c2ecu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x10c2f0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x10c2f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x10c2f4: 0xc7b40070  lwc1        $f20, 0x70($sp)
    ctx->pc = 0x10c2f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x10c2f8: 0x3e00008  jr          $ra
    ctx->pc = 0x10C2F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10C2FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10C2F8u;
        // 0x10c2fc: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10C2F8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10C300u;
}
