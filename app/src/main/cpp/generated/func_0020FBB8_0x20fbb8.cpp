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

// Function: func_0020FBB8
// Address: 0x20fbb8 - 0x210ee8
void func_0020FBB8_0x20fbb8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0020FBB8_0x20fbb8");
#endif

    switch (ctx->pc) {
        case 0x20fc44u: goto label_20fc44;
        case 0x2101acu: goto label_2101ac;
        case 0x2101d8u: goto label_2101d8;
        case 0x210520u: goto label_210520;
        case 0x2105e8u: goto label_2105e8;
        case 0x21060cu: goto label_21060c;
        case 0x2106b4u: goto label_2106b4;
        case 0x2106c0u: goto label_2106c0;
        case 0x2106ccu: goto label_2106cc;
        case 0x210768u: goto label_210768;
        case 0x21079cu: goto label_21079c;
        case 0x21084cu: goto label_21084c;
        case 0x21085cu: goto label_21085c;
        case 0x210868u: goto label_210868;
        case 0x21090cu: goto label_21090c;
        case 0x210930u: goto label_210930;
        case 0x2109a0u: goto label_2109a0;
        case 0x2109d0u: goto label_2109d0;
        case 0x210a50u: goto label_210a50;
        case 0x210aa0u: goto label_210aa0;
        case 0x210d7cu: goto label_210d7c;
        case 0x210e08u: goto label_210e08;
        case 0x210e38u: goto label_210e38;
        case 0x210e48u: goto label_210e48;
        case 0x210e98u: goto label_210e98;
        case 0x210eacu: goto label_210eac;
        case 0x210eb8u: goto label_210eb8;
        default: break;
    }

    ctx->pc = 0x20fbb8u;

    // 0x20fbb8: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x20fbb8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x20fbbc: 0x7fb20050  sq          $s2, 0x50($sp)
    ctx->pc = 0x20fbbcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 18));
    // 0x20fbc0: 0x7fb40030  sq          $s4, 0x30($sp)
    ctx->pc = 0x20fbc0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 20));
    // 0x20fbc4: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x20fbc4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20fbc8: 0x7fb50020  sq          $s5, 0x20($sp)
    ctx->pc = 0x20fbc8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 21));
    // 0x20fbcc: 0x24140001  addiu       $s4, $zero, 0x1
    ctx->pc = 0x20fbccu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x20fbd0: 0x7fb60010  sq          $s6, 0x10($sp)
    ctx->pc = 0x20fbd0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 22));
    // 0x20fbd4: 0x241504e2  addiu       $s5, $zero, 0x4E2
    ctx->pc = 0x20fbd4u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 1250));
    // 0x20fbd8: 0xe7b40080  swc1        $f20, 0x80($sp)
    ctx->pc = 0x20fbd8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
    // 0x20fbdc: 0xb02d  daddu       $s6, $zero, $zero
    ctx->pc = 0x20fbdcu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20fbe0: 0x7fb00070  sq          $s0, 0x70($sp)
    ctx->pc = 0x20fbe0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 16));
    // 0x20fbe4: 0x7fb10060  sq          $s1, 0x60($sp)
    ctx->pc = 0x20fbe4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 17));
    // 0x20fbe8: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x20fbe8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x20fbec: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x20fbecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x20fbf0: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x20fbf0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x20fbf4: 0x8e4516d0  lw          $a1, 0x16D0($s2)
    ctx->pc = 0x20fbf4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 5840)));
    // 0x20fbf8: 0x924302f6  lbu         $v1, 0x2F6($s2)
    ctx->pc = 0x20fbf8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 758)));
    // 0x20fbfc: 0x34a40400  ori         $a0, $a1, 0x400
    ctx->pc = 0x20fbfcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)1024);
    // 0x20fc00: 0x10740291  beq         $v1, $s4, . + 4 + (0x291 << 2)
    ctx->pc = 0x20FC00u;
    {
        const bool branch_taken_0x20fc00 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 20));
        ctx->pc = 0x20FC04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20FC00u;
        // 0x20fc04: 0xae4416d0  sw          $a0, 0x16D0($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 5840), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20fc00) {
            ctx->pc = 0x210648u;
            goto label_210648;
        }
    }
    ctx->pc = 0x20FC08u;
    // 0x20fc08: 0x28620002  slti        $v0, $v1, 0x2
    ctx->pc = 0x20fc08u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x20fc0c: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x20FC0Cu;
    {
        const bool branch_taken_0x20fc0c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x20fc0c) {
            ctx->pc = 0x20FC10u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x20FC0Cu;
            // 0x20fc10: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x20FC24u;
            goto label_20fc24;
        }
    }
    ctx->pc = 0x20FC14u;
    // 0x20fc14: 0x10600009  beqz        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x20FC14u;
    {
        const bool branch_taken_0x20fc14 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x20FC18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20FC14u;
        // 0x20fc18: 0x7bb00070  lq          $s0, 0x70($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20fc14) {
            ctx->pc = 0x20FC3Cu;
            goto label_20fc3c;
        }
    }
    ctx->pc = 0x20FC1Cu;
    // 0x20fc1c: 0x100004a8  b           . + 4 + (0x4A8 << 2)
    ctx->pc = 0x20FC1Cu;
    {
        const bool branch_taken_0x20fc1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20FC20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20FC1Cu;
        // 0x20fc20: 0x7bb10060  lq          $s1, 0x60($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20fc1c) {
            ctx->pc = 0x210EC0u;
            goto label_210ec0;
        }
    }
    ctx->pc = 0x20FC24u;
label_20fc24:
    // 0x20fc24: 0x1062038c  beq         $v1, $v0, . + 4 + (0x38C << 2)
    ctx->pc = 0x20FC24u;
    {
        const bool branch_taken_0x20fc24 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x20FC28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20FC24u;
        // 0x20fc28: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20fc24) {
            ctx->pc = 0x210A58u;
            goto label_210a58;
        }
    }
    ctx->pc = 0x20FC2Cu;
    // 0x20fc2c: 0x10620479  beq         $v1, $v0, . + 4 + (0x479 << 2)
    ctx->pc = 0x20FC2Cu;
    {
        const bool branch_taken_0x20fc2c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x20FC30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20FC2Cu;
        // 0x20fc30: 0x7bb00070  lq          $s0, 0x70($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20fc2c) {
            ctx->pc = 0x210E14u;
            goto label_210e14;
        }
    }
    ctx->pc = 0x20FC34u;
    // 0x20fc34: 0x100004a2  b           . + 4 + (0x4A2 << 2)
    ctx->pc = 0x20FC34u;
    {
        const bool branch_taken_0x20fc34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20FC38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20FC34u;
        // 0x20fc38: 0x7bb10060  lq          $s1, 0x60($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20fc34) {
            ctx->pc = 0x210EC0u;
            goto label_210ec0;
        }
    }
    ctx->pc = 0x20FC3Cu;
label_20fc3c:
    // 0x20fc3c: 0xc09d91a  jal         func_276468
    ctx->pc = 0x20FC3Cu;
    SET_GPR_U32(ctx, 31, 0x20FC44u);
    ctx->pc = 0x20FC40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20FC3Cu;
    // 0x20fc40: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x276468u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x276468u, 0x20FC3Cu, 0x20FC44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20FC44u;
label_20fc44:
    // 0x20fc44: 0x3053ffff  andi        $s3, $v0, 0xFFFF
    ctx->pc = 0x20fc44u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x20fc48: 0x92441650  lbu         $a0, 0x1650($s2)
    ctx->pc = 0x20fc48u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 5712)));
    // 0x20fc4c: 0x8e4216d0  lw          $v0, 0x16D0($s2)
    ctx->pc = 0x20fc4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 5840)));
    // 0x20fc50: 0x2c83001a  sltiu       $v1, $a0, 0x1A
    ctx->pc = 0x20fc50u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)26) ? 1 : 0);
    // 0x20fc54: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x20fc54u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
    // 0x20fc58: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x20FC58u;
    {
        const bool branch_taken_0x20fc58 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x20FC5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20FC58u;
        // 0x20fc5c: 0xae4216d0  sw          $v0, 0x16D0($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 5840), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20fc58) {
            ctx->pc = 0x20FC7Cu;
            goto label_20fc7c;
        }
    }
    ctx->pc = 0x20FC60u;
    // 0x20fc60: 0x3c020043  lui         $v0, 0x43
    ctx->pc = 0x20fc60u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)67 << 16));
    // 0x20fc64: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x20fc64u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x20fc68: 0x24423170  addiu       $v0, $v0, 0x3170
    ctx->pc = 0x20fc68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 12656));
    // 0x20fc6c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x20fc6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x20fc70: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x20fc70u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x20fc74: 0x800008  jr          $a0
    ctx->pc = 0x20FC74u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x20FC7Cu: goto label_20fc7c;
            case 0x20FE28u: goto label_20fe28;
            case 0x210048u: goto label_210048;
            case 0x21025Cu: goto label_21025c;
            case 0x210350u: goto label_210350;
            case 0x21044Cu: goto label_21044c;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20FC74u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x20FC7Cu;
label_20fc7c:
    // 0x20fc7c: 0x8e420564  lw          $v0, 0x564($s2)
    ctx->pc = 0x20fc7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1380)));
    // 0x20fc80: 0x2444fdfe  addiu       $a0, $v0, -0x202
    ctx->pc = 0x20fc80u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294966782));
    // 0x20fc84: 0x2c83007d  sltiu       $v1, $a0, 0x7D
    ctx->pc = 0x20fc84u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)125) ? 1 : 0);
    // 0x20fc88: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x20FC88u;
    {
        const bool branch_taken_0x20fc88 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x20FC8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20FC88u;
        // 0x20fc8c: 0x3c020043  lui         $v0, 0x43 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)67 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20fc88) {
            ctx->pc = 0x20FCA8u;
            goto label_20fca8;
        }
    }
    ctx->pc = 0x20FC90u;
    // 0x20fc90: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x20fc90u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x20fc94: 0x244231e0  addiu       $v0, $v0, 0x31E0
    ctx->pc = 0x20fc94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 12768));
    // 0x20fc98: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x20fc98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x20fc9c: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x20fc9cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x20fca0: 0x800008  jr          $a0
    ctx->pc = 0x20FCA0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x20FCA8u: goto label_20fca8;
            case 0x20FCB8u: goto label_20fcb8;
            case 0x20FCC8u: goto label_20fcc8;
            case 0x20FCD8u: goto label_20fcd8;
            case 0x20FCE8u: goto label_20fce8;
            case 0x20FCF8u: goto label_20fcf8;
            case 0x20FD08u: goto label_20fd08;
            case 0x20FD18u: goto label_20fd18;
            case 0x20FD28u: goto label_20fd28;
            case 0x20FD38u: goto label_20fd38;
            case 0x20FD48u: goto label_20fd48;
            case 0x20FD74u: goto label_20fd74;
            case 0x20FD84u: goto label_20fd84;
            case 0x20FD94u: goto label_20fd94;
            case 0x20FDA4u: goto label_20fda4;
            case 0x20FDB4u: goto label_20fdb4;
            case 0x20FDC4u: goto label_20fdc4;
            case 0x20FDD4u: goto label_20fdd4;
            case 0x20FDE4u: goto label_20fde4;
            case 0x20FE08u: goto label_20fe08;
            case 0x20FE18u: goto label_20fe18;
            case 0x2104F8u: goto label_2104f8;
            case 0x210578u: goto label_210578;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20FCA0u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x20FCA8u;
label_20fca8:
    // 0x20fca8: 0x8e420304  lw          $v0, 0x304($s2)
    ctx->pc = 0x20fca8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
    // 0x20fcac: 0x8c430098  lw          $v1, 0x98($v0)
    ctx->pc = 0x20fcacu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 152)));
    // 0x20fcb0: 0x10000234  b           . + 4 + (0x234 << 2)
    ctx->pc = 0x20FCB0u;
    {
        const bool branch_taken_0x20fcb0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20FCB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20FCB0u;
        // 0x20fcb4: 0x8c44009c  lw          $a0, 0x9C($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 156)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20fcb0) {
            ctx->pc = 0x210584u;
            goto label_210584;
        }
    }
    ctx->pc = 0x20FCB8u;
label_20fcb8:
    // 0x20fcb8: 0x8e420304  lw          $v0, 0x304($s2)
    ctx->pc = 0x20fcb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
    // 0x20fcbc: 0x8c430648  lw          $v1, 0x648($v0)
    ctx->pc = 0x20fcbcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1608)));
    // 0x20fcc0: 0x10000230  b           . + 4 + (0x230 << 2)
    ctx->pc = 0x20FCC0u;
    {
        const bool branch_taken_0x20fcc0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20FCC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20FCC0u;
        // 0x20fcc4: 0x8c44009c  lw          $a0, 0x9C($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 156)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20fcc0) {
            ctx->pc = 0x210584u;
            goto label_210584;
        }
    }
    ctx->pc = 0x20FCC8u;
label_20fcc8:
    // 0x20fcc8: 0x8e420304  lw          $v0, 0x304($s2)
    ctx->pc = 0x20fcc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
    // 0x20fccc: 0x8c4335cc  lw          $v1, 0x35CC($v0)
    ctx->pc = 0x20fcccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 13772)));
    // 0x20fcd0: 0x1000022c  b           . + 4 + (0x22C << 2)
    ctx->pc = 0x20FCD0u;
    {
        const bool branch_taken_0x20fcd0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20FCD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20FCD0u;
        // 0x20fcd4: 0x8c4435d0  lw          $a0, 0x35D0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 13776)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20fcd0) {
            ctx->pc = 0x210584u;
            goto label_210584;
        }
    }
    ctx->pc = 0x20FCD8u;
label_20fcd8:
    // 0x20fcd8: 0x8e420304  lw          $v0, 0x304($s2)
    ctx->pc = 0x20fcd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
    // 0x20fcdc: 0x8c4325ac  lw          $v1, 0x25AC($v0)
    ctx->pc = 0x20fcdcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 9644)));
    // 0x20fce0: 0x10000228  b           . + 4 + (0x228 << 2)
    ctx->pc = 0x20FCE0u;
    {
        const bool branch_taken_0x20fce0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20FCE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20FCE0u;
        // 0x20fce4: 0x8c4425b0  lw          $a0, 0x25B0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 9648)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20fce0) {
            ctx->pc = 0x210584u;
            goto label_210584;
        }
    }
    ctx->pc = 0x20FCE8u;
label_20fce8:
    // 0x20fce8: 0x8e420304  lw          $v0, 0x304($s2)
    ctx->pc = 0x20fce8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
    // 0x20fcec: 0x8c4310a8  lw          $v1, 0x10A8($v0)
    ctx->pc = 0x20fcecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4264)));
    // 0x20fcf0: 0x10000224  b           . + 4 + (0x224 << 2)
    ctx->pc = 0x20FCF0u;
    {
        const bool branch_taken_0x20fcf0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20FCF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20FCF0u;
        // 0x20fcf4: 0x8c4410ac  lw          $a0, 0x10AC($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4268)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20fcf0) {
            ctx->pc = 0x210584u;
            goto label_210584;
        }
    }
    ctx->pc = 0x20FCF8u;
label_20fcf8:
    // 0x20fcf8: 0x8e420304  lw          $v0, 0x304($s2)
    ctx->pc = 0x20fcf8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
    // 0x20fcfc: 0x8c433c88  lw          $v1, 0x3C88($v0)
    ctx->pc = 0x20fcfcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 15496)));
    // 0x20fd00: 0x10000220  b           . + 4 + (0x220 << 2)
    ctx->pc = 0x20FD00u;
    {
        const bool branch_taken_0x20fd00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20FD04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20FD00u;
        // 0x20fd04: 0x8c443c8c  lw          $a0, 0x3C8C($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 15500)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20fd00) {
            ctx->pc = 0x210584u;
            goto label_210584;
        }
    }
    ctx->pc = 0x20FD08u;
label_20fd08:
    // 0x20fd08: 0x8e420304  lw          $v0, 0x304($s2)
    ctx->pc = 0x20fd08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
    // 0x20fd0c: 0x8c4324ec  lw          $v1, 0x24EC($v0)
    ctx->pc = 0x20fd0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 9452)));
    // 0x20fd10: 0x1000021c  b           . + 4 + (0x21C << 2)
    ctx->pc = 0x20FD10u;
    {
        const bool branch_taken_0x20fd10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20FD14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20FD10u;
        // 0x20fd14: 0x8c4424f0  lw          $a0, 0x24F0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 9456)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20fd10) {
            ctx->pc = 0x210584u;
            goto label_210584;
        }
    }
    ctx->pc = 0x20FD18u;
label_20fd18:
    // 0x20fd18: 0x8e420304  lw          $v0, 0x304($s2)
    ctx->pc = 0x20fd18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
    // 0x20fd1c: 0x8c430828  lw          $v1, 0x828($v0)
    ctx->pc = 0x20fd1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2088)));
    // 0x20fd20: 0x10000218  b           . + 4 + (0x218 << 2)
    ctx->pc = 0x20FD20u;
    {
        const bool branch_taken_0x20fd20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20FD24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20FD20u;
        // 0x20fd24: 0x8c44082c  lw          $a0, 0x82C($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2092)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20fd20) {
            ctx->pc = 0x210584u;
            goto label_210584;
        }
    }
    ctx->pc = 0x20FD28u;
label_20fd28:
    // 0x20fd28: 0x8e420304  lw          $v0, 0x304($s2)
    ctx->pc = 0x20fd28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
    // 0x20fd2c: 0x8c431fb0  lw          $v1, 0x1FB0($v0)
    ctx->pc = 0x20fd2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8112)));
    // 0x20fd30: 0x10000214  b           . + 4 + (0x214 << 2)
    ctx->pc = 0x20FD30u;
    {
        const bool branch_taken_0x20fd30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20FD34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20FD30u;
        // 0x20fd34: 0x8c441fb4  lw          $a0, 0x1FB4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8116)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20fd30) {
            ctx->pc = 0x210584u;
            goto label_210584;
        }
    }
    ctx->pc = 0x20FD38u;
label_20fd38:
    // 0x20fd38: 0x8e420304  lw          $v0, 0x304($s2)
    ctx->pc = 0x20fd38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
    // 0x20fd3c: 0x8c433bb4  lw          $v1, 0x3BB4($v0)
    ctx->pc = 0x20fd3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 15284)));
    // 0x20fd40: 0x10000210  b           . + 4 + (0x210 << 2)
    ctx->pc = 0x20FD40u;
    {
        const bool branch_taken_0x20fd40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20FD44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20FD40u;
        // 0x20fd44: 0x8c443bb8  lw          $a0, 0x3BB8($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 15288)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20fd40) {
            ctx->pc = 0x210584u;
            goto label_210584;
        }
    }
    ctx->pc = 0x20FD48u;
label_20fd48:
    // 0x20fd48: 0x3c020074  lui         $v0, 0x74
    ctx->pc = 0x20fd48u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)116 << 16));
    // 0x20fd4c: 0x24040504  addiu       $a0, $zero, 0x504
    ctx->pc = 0x20fd4cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1284));
    // 0x20fd50: 0x94437a50  lhu         $v1, 0x7A50($v0)
    ctx->pc = 0x20fd50u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)FAST_READ16(0x747A50u));
    // 0x20fd54: 0x14640004  bne         $v1, $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x20FD54u;
    {
        const bool branch_taken_0x20fd54 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        ctx->pc = 0x20FD58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20FD54u;
        // 0x20fd58: 0x8e420304  lw          $v0, 0x304($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20fd54) {
            ctx->pc = 0x20FD68u;
            goto label_20fd68;
        }
    }
    ctx->pc = 0x20FD5Cu;
    // 0x20fd5c: 0x8c431a48  lw          $v1, 0x1A48($v0)
    ctx->pc = 0x20fd5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 6728)));
    // 0x20fd60: 0x10000208  b           . + 4 + (0x208 << 2)
    ctx->pc = 0x20FD60u;
    {
        const bool branch_taken_0x20fd60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20FD64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20FD60u;
        // 0x20fd64: 0x8c441a4c  lw          $a0, 0x1A4C($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 6732)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20fd60) {
            ctx->pc = 0x210584u;
            goto label_210584;
        }
    }
    ctx->pc = 0x20FD68u;
label_20fd68:
    // 0x20fd68: 0x8c4318f0  lw          $v1, 0x18F0($v0)
    ctx->pc = 0x20fd68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 6384)));
    // 0x20fd6c: 0x10000205  b           . + 4 + (0x205 << 2)
    ctx->pc = 0x20FD6Cu;
    {
        const bool branch_taken_0x20fd6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20FD70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20FD6Cu;
        // 0x20fd70: 0x8c4418f4  lw          $a0, 0x18F4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 6388)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20fd6c) {
            ctx->pc = 0x210584u;
            goto label_210584;
        }
    }
    ctx->pc = 0x20FD74u;
label_20fd74:
    // 0x20fd74: 0x8e420304  lw          $v0, 0x304($s2)
    ctx->pc = 0x20fd74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
    // 0x20fd78: 0x8c433038  lw          $v1, 0x3038($v0)
    ctx->pc = 0x20fd78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12344)));
    // 0x20fd7c: 0x10000201  b           . + 4 + (0x201 << 2)
    ctx->pc = 0x20FD7Cu;
    {
        const bool branch_taken_0x20fd7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20FD80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20FD7Cu;
        // 0x20fd80: 0x8c44303c  lw          $a0, 0x303C($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12348)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20fd7c) {
            ctx->pc = 0x210584u;
            goto label_210584;
        }
    }
    ctx->pc = 0x20FD84u;
label_20fd84:
    // 0x20fd84: 0x8e420304  lw          $v0, 0x304($s2)
    ctx->pc = 0x20fd84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
    // 0x20fd88: 0x8c43326c  lw          $v1, 0x326C($v0)
    ctx->pc = 0x20fd88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12908)));
    // 0x20fd8c: 0x100001fd  b           . + 4 + (0x1FD << 2)
    ctx->pc = 0x20FD8Cu;
    {
        const bool branch_taken_0x20fd8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20FD90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20FD8Cu;
        // 0x20fd90: 0x8c443270  lw          $a0, 0x3270($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12912)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20fd8c) {
            ctx->pc = 0x210584u;
            goto label_210584;
        }
    }
    ctx->pc = 0x20FD94u;
label_20fd94:
    // 0x20fd94: 0x8e420304  lw          $v0, 0x304($s2)
    ctx->pc = 0x20fd94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
    // 0x20fd98: 0x8c433d34  lw          $v1, 0x3D34($v0)
    ctx->pc = 0x20fd98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 15668)));
    // 0x20fd9c: 0x100001f9  b           . + 4 + (0x1F9 << 2)
    ctx->pc = 0x20FD9Cu;
    {
        const bool branch_taken_0x20fd9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20FDA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20FD9Cu;
        // 0x20fda0: 0x8c443d38  lw          $a0, 0x3D38($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 15672)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20fd9c) {
            ctx->pc = 0x210584u;
            goto label_210584;
        }
    }
    ctx->pc = 0x20FDA4u;
label_20fda4:
    // 0x20fda4: 0x8e420304  lw          $v0, 0x304($s2)
    ctx->pc = 0x20fda4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
    // 0x20fda8: 0x8c431eac  lw          $v1, 0x1EAC($v0)
    ctx->pc = 0x20fda8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 7852)));
    // 0x20fdac: 0x100001f5  b           . + 4 + (0x1F5 << 2)
    ctx->pc = 0x20FDACu;
    {
        const bool branch_taken_0x20fdac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20FDB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20FDACu;
        // 0x20fdb0: 0x8c441eb0  lw          $a0, 0x1EB0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 7856)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20fdac) {
            ctx->pc = 0x210584u;
            goto label_210584;
        }
    }
    ctx->pc = 0x20FDB4u;
label_20fdb4:
    // 0x20fdb4: 0x8e420304  lw          $v0, 0x304($s2)
    ctx->pc = 0x20fdb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
    // 0x20fdb8: 0x8c431560  lw          $v1, 0x1560($v0)
    ctx->pc = 0x20fdb8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 5472)));
    // 0x20fdbc: 0x100001f1  b           . + 4 + (0x1F1 << 2)
    ctx->pc = 0x20FDBCu;
    {
        const bool branch_taken_0x20fdbc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20FDC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20FDBCu;
        // 0x20fdc0: 0x8c441564  lw          $a0, 0x1564($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 5476)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20fdbc) {
            ctx->pc = 0x210584u;
            goto label_210584;
        }
    }
    ctx->pc = 0x20FDC4u;
label_20fdc4:
    // 0x20fdc4: 0x8e420304  lw          $v0, 0x304($s2)
    ctx->pc = 0x20fdc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
    // 0x20fdc8: 0x8c433a00  lw          $v1, 0x3A00($v0)
    ctx->pc = 0x20fdc8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 14848)));
    // 0x20fdcc: 0x100001ed  b           . + 4 + (0x1ED << 2)
    ctx->pc = 0x20FDCCu;
    {
        const bool branch_taken_0x20fdcc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20FDD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20FDCCu;
        // 0x20fdd0: 0x8c443a04  lw          $a0, 0x3A04($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 14852)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20fdcc) {
            ctx->pc = 0x210584u;
            goto label_210584;
        }
    }
    ctx->pc = 0x20FDD4u;
label_20fdd4:
    // 0x20fdd4: 0x8e420304  lw          $v0, 0x304($s2)
    ctx->pc = 0x20fdd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
    // 0x20fdd8: 0x8c433418  lw          $v1, 0x3418($v0)
    ctx->pc = 0x20fdd8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 13336)));
    // 0x20fddc: 0x100001e9  b           . + 4 + (0x1E9 << 2)
    ctx->pc = 0x20FDDCu;
    {
        const bool branch_taken_0x20fddc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20FDE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20FDDCu;
        // 0x20fde0: 0x8c44341c  lw          $a0, 0x341C($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 13340)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20fddc) {
            ctx->pc = 0x210584u;
            goto label_210584;
        }
    }
    ctx->pc = 0x20FDE4u;
label_20fde4:
    // 0x20fde4: 0x8e421644  lw          $v0, 0x1644($s2)
    ctx->pc = 0x20fde4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 5700)));
    // 0x20fde8: 0x3c030020  lui         $v1, 0x20
    ctx->pc = 0x20fde8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32 << 16));
    // 0x20fdec: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x20fdecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x20fdf0: 0x54400086  bnel        $v0, $zero, . + 4 + (0x86 << 2)
    ctx->pc = 0x20FDF0u;
    {
        const bool branch_taken_0x20fdf0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x20fdf0) {
            ctx->pc = 0x20FDF4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x20FDF0u;
            // 0x20fdf4: 0x8e430304  lw          $v1, 0x304($s2) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x21000Cu;
            goto label_21000c;
        }
    }
    ctx->pc = 0x20FDF8u;
    // 0x20fdf8: 0x8e420304  lw          $v0, 0x304($s2)
    ctx->pc = 0x20fdf8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
    // 0x20fdfc: 0x8c430cf8  lw          $v1, 0xCF8($v0)
    ctx->pc = 0x20fdfcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3320)));
    // 0x20fe00: 0x100001e0  b           . + 4 + (0x1E0 << 2)
    ctx->pc = 0x20FE00u;
    {
        const bool branch_taken_0x20fe00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20FE04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20FE00u;
        // 0x20fe04: 0x8c440cfc  lw          $a0, 0xCFC($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3324)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20fe00) {
            ctx->pc = 0x210584u;
            goto label_210584;
        }
    }
    ctx->pc = 0x20FE08u;
label_20fe08:
    // 0x20fe08: 0x8e420304  lw          $v0, 0x304($s2)
    ctx->pc = 0x20fe08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
    // 0x20fe0c: 0x8c431bc0  lw          $v1, 0x1BC0($v0)
    ctx->pc = 0x20fe0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 7104)));
    // 0x20fe10: 0x100001dc  b           . + 4 + (0x1DC << 2)
    ctx->pc = 0x20FE10u;
    {
        const bool branch_taken_0x20fe10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20FE14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20FE10u;
        // 0x20fe14: 0x8c441bc4  lw          $a0, 0x1BC4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 7108)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20fe10) {
            ctx->pc = 0x210584u;
            goto label_210584;
        }
    }
    ctx->pc = 0x20FE18u;
label_20fe18:
    // 0x20fe18: 0x8e420304  lw          $v0, 0x304($s2)
    ctx->pc = 0x20fe18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
    // 0x20fe1c: 0x8c432274  lw          $v1, 0x2274($v0)
    ctx->pc = 0x20fe1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8820)));
    // 0x20fe20: 0x100001d8  b           . + 4 + (0x1D8 << 2)
    ctx->pc = 0x20FE20u;
    {
        const bool branch_taken_0x20fe20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20FE24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20FE20u;
        // 0x20fe24: 0x8c442278  lw          $a0, 0x2278($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8824)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20fe20) {
            ctx->pc = 0x210584u;
            goto label_210584;
        }
    }
    ctx->pc = 0x20FE28u;
label_20fe28:
    // 0x20fe28: 0x96420640  lhu         $v0, 0x640($s2)
    ctx->pc = 0x20fe28u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 1600)));
    // 0x20fe2c: 0x30440007  andi        $a0, $v0, 0x7
    ctx->pc = 0x20fe2cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)7);
    // 0x20fe30: 0x2c830008  sltiu       $v1, $a0, 0x8
    ctx->pc = 0x20fe30u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
    // 0x20fe34: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x20FE34u;
    {
        const bool branch_taken_0x20fe34 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x20FE38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20FE34u;
        // 0x20fe38: 0x3c020043  lui         $v0, 0x43 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)67 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20fe34) {
            ctx->pc = 0x20FE54u;
            goto label_20fe54;
        }
    }
    ctx->pc = 0x20FE3Cu;
    // 0x20fe3c: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x20fe3cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x20fe40: 0x244233e0  addiu       $v0, $v0, 0x33E0
    ctx->pc = 0x20fe40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 13280));
    // 0x20fe44: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x20fe44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x20fe48: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x20fe48u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x20fe4c: 0x800008  jr          $a0
    ctx->pc = 0x20FE4Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x20FE54u: goto label_20fe54;
            case 0x20FE64u: goto label_20fe64;
            case 0x20FE74u: goto label_20fe74;
            case 0x20FE84u: goto label_20fe84;
            case 0x20FE94u: goto label_20fe94;
            case 0x20FEA4u: goto label_20fea4;
            case 0x20FEB4u: goto label_20feb4;
            case 0x20FEC4u: goto label_20fec4;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20FE4Cu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x20FE54u;
label_20fe54:
    // 0x20fe54: 0x3c0140e0  lui         $at, 0x40E0
    ctx->pc = 0x20fe54u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16608 << 16));
    // 0x20fe58: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x20fe58u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x20fe5c: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x20FE5Cu;
    {
        const bool branch_taken_0x20fe5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20FE60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20FE5Cu;
        // 0x20fe60: 0x8e420564  lw          $v0, 0x564($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1380)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20fe5c) {
            ctx->pc = 0x20FECCu;
            goto label_20fecc;
        }
    }
    ctx->pc = 0x20FE64u;
label_20fe64:
    // 0x20fe64: 0x3c0140c0  lui         $at, 0x40C0
    ctx->pc = 0x20fe64u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16576 << 16));
    // 0x20fe68: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x20fe68u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x20fe6c: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x20FE6Cu;
    {
        const bool branch_taken_0x20fe6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20FE70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20FE6Cu;
        // 0x20fe70: 0x8e420564  lw          $v0, 0x564($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1380)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20fe6c) {
            ctx->pc = 0x20FECCu;
            goto label_20fecc;
        }
    }
    ctx->pc = 0x20FE74u;
label_20fe74:
    // 0x20fe74: 0x3c0140a0  lui         $at, 0x40A0
    ctx->pc = 0x20fe74u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16544 << 16));
    // 0x20fe78: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x20fe78u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x20fe7c: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x20FE7Cu;
    {
        const bool branch_taken_0x20fe7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20FE80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20FE7Cu;
        // 0x20fe80: 0x8e420564  lw          $v0, 0x564($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1380)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20fe7c) {
            ctx->pc = 0x20FECCu;
            goto label_20fecc;
        }
    }
    ctx->pc = 0x20FE84u;
label_20fe84:
    // 0x20fe84: 0x3c014080  lui         $at, 0x4080
    ctx->pc = 0x20fe84u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16512 << 16));
    // 0x20fe88: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x20fe88u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x20fe8c: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x20FE8Cu;
    {
        const bool branch_taken_0x20fe8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20FE90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20FE8Cu;
        // 0x20fe90: 0x8e420564  lw          $v0, 0x564($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1380)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20fe8c) {
            ctx->pc = 0x20FECCu;
            goto label_20fecc;
        }
    }
    ctx->pc = 0x20FE94u;
label_20fe94:
    // 0x20fe94: 0x3c014040  lui         $at, 0x4040
    ctx->pc = 0x20fe94u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16448 << 16));
    // 0x20fe98: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x20fe98u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x20fe9c: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x20FE9Cu;
    {
        const bool branch_taken_0x20fe9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20FEA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20FE9Cu;
        // 0x20fea0: 0x8e420564  lw          $v0, 0x564($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1380)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20fe9c) {
            ctx->pc = 0x20FECCu;
            goto label_20fecc;
        }
    }
    ctx->pc = 0x20FEA4u;
label_20fea4:
    // 0x20fea4: 0x3c014000  lui         $at, 0x4000
    ctx->pc = 0x20fea4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16384 << 16));
    // 0x20fea8: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x20fea8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x20feac: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x20FEACu;
    {
        const bool branch_taken_0x20feac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20FEB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20FEACu;
        // 0x20feb0: 0x8e420564  lw          $v0, 0x564($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1380)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20feac) {
            ctx->pc = 0x20FECCu;
            goto label_20fecc;
        }
    }
    ctx->pc = 0x20FEB4u;
label_20feb4:
    // 0x20feb4: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x20feb4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x20feb8: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x20feb8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x20febc: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x20FEBCu;
    {
        const bool branch_taken_0x20febc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20FEC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20FEBCu;
        // 0x20fec0: 0x8e420564  lw          $v0, 0x564($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1380)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20febc) {
            ctx->pc = 0x20FECCu;
            goto label_20fecc;
        }
    }
    ctx->pc = 0x20FEC4u;
label_20fec4:
    // 0x20fec4: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x20fec4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x20fec8: 0x8e420564  lw          $v0, 0x564($s2)
    ctx->pc = 0x20fec8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1380)));
label_20fecc:
    // 0x20fecc: 0x2444fdfe  addiu       $a0, $v0, -0x202
    ctx->pc = 0x20feccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294966782));
    // 0x20fed0: 0x2c83007d  sltiu       $v1, $a0, 0x7D
    ctx->pc = 0x20fed0u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)125) ? 1 : 0);
    // 0x20fed4: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x20FED4u;
    {
        const bool branch_taken_0x20fed4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x20FED8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20FED4u;
        // 0x20fed8: 0x3c020043  lui         $v0, 0x43 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)67 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20fed4) {
            ctx->pc = 0x20FEF4u;
            goto label_20fef4;
        }
    }
    ctx->pc = 0x20FEDCu;
    // 0x20fedc: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x20fedcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x20fee0: 0x24423400  addiu       $v0, $v0, 0x3400
    ctx->pc = 0x20fee0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 13312));
    // 0x20fee4: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x20fee4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x20fee8: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x20fee8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x20feec: 0x800008  jr          $a0
    ctx->pc = 0x20FEECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x20FEF4u: goto label_20fef4;
            case 0x20FF04u: goto label_20ff04;
            case 0x20FF14u: goto label_20ff14;
            case 0x20FF24u: goto label_20ff24;
            case 0x20FF34u: goto label_20ff34;
            case 0x20FF44u: goto label_20ff44;
            case 0x20FF54u: goto label_20ff54;
            case 0x20FF64u: goto label_20ff64;
            case 0x20FF74u: goto label_20ff74;
            case 0x20FF84u: goto label_20ff84;
            case 0x20FF94u: goto label_20ff94;
            case 0x20FFA4u: goto label_20ffa4;
            case 0x20FFB4u: goto label_20ffb4;
            case 0x20FFC4u: goto label_20ffc4;
            case 0x20FFD4u: goto label_20ffd4;
            case 0x20FFE4u: goto label_20ffe4;
            case 0x20FFF4u: goto label_20fff4;
            case 0x210028u: goto label_210028;
            case 0x210038u: goto label_210038;
            case 0x2104F8u: goto label_2104f8;
            case 0x210578u: goto label_210578;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20FEECu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x20FEF4u;
label_20fef4:
    // 0x20fef4: 0x8e420304  lw          $v0, 0x304($s2)
    ctx->pc = 0x20fef4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
    // 0x20fef8: 0x8c4303f4  lw          $v1, 0x3F4($v0)
    ctx->pc = 0x20fef8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1012)));
    // 0x20fefc: 0x100001a1  b           . + 4 + (0x1A1 << 2)
    ctx->pc = 0x20FEFCu;
    {
        const bool branch_taken_0x20fefc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20FF00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20FEFCu;
        // 0x20ff00: 0x8c4403f8  lw          $a0, 0x3F8($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1016)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20fefc) {
            ctx->pc = 0x210584u;
            goto label_210584;
        }
    }
    ctx->pc = 0x20FF04u;
label_20ff04:
    // 0x20ff04: 0x8e420304  lw          $v0, 0x304($s2)
    ctx->pc = 0x20ff04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
    // 0x20ff08: 0x8c4303f4  lw          $v1, 0x3F4($v0)
    ctx->pc = 0x20ff08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1012)));
    // 0x20ff0c: 0x1000019d  b           . + 4 + (0x19D << 2)
    ctx->pc = 0x20FF0Cu;
    {
        const bool branch_taken_0x20ff0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20FF10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20FF0Cu;
        // 0x20ff10: 0x8c4403f8  lw          $a0, 0x3F8($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1016)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20ff0c) {
            ctx->pc = 0x210584u;
            goto label_210584;
        }
    }
    ctx->pc = 0x20FF14u;
label_20ff14:
    // 0x20ff14: 0x8e420304  lw          $v0, 0x304($s2)
    ctx->pc = 0x20ff14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
    // 0x20ff18: 0x8c4303f4  lw          $v1, 0x3F4($v0)
    ctx->pc = 0x20ff18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1012)));
    // 0x20ff1c: 0x10000199  b           . + 4 + (0x199 << 2)
    ctx->pc = 0x20FF1Cu;
    {
        const bool branch_taken_0x20ff1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20FF20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20FF1Cu;
        // 0x20ff20: 0x8c4403f8  lw          $a0, 0x3F8($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1016)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20ff1c) {
            ctx->pc = 0x210584u;
            goto label_210584;
        }
    }
    ctx->pc = 0x20FF24u;
label_20ff24:
    // 0x20ff24: 0x8e420304  lw          $v0, 0x304($s2)
    ctx->pc = 0x20ff24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
    // 0x20ff28: 0x8c4313f8  lw          $v1, 0x13F8($v0)
    ctx->pc = 0x20ff28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 5112)));
    // 0x20ff2c: 0x10000195  b           . + 4 + (0x195 << 2)
    ctx->pc = 0x20FF2Cu;
    {
        const bool branch_taken_0x20ff2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20FF30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20FF2Cu;
        // 0x20ff30: 0x8c4413fc  lw          $a0, 0x13FC($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 5116)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20ff2c) {
            ctx->pc = 0x210584u;
            goto label_210584;
        }
    }
    ctx->pc = 0x20FF34u;
label_20ff34:
    // 0x20ff34: 0x8e420304  lw          $v0, 0x304($s2)
    ctx->pc = 0x20ff34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
    // 0x20ff38: 0x8c431448  lw          $v1, 0x1448($v0)
    ctx->pc = 0x20ff38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 5192)));
    // 0x20ff3c: 0x10000191  b           . + 4 + (0x191 << 2)
    ctx->pc = 0x20FF3Cu;
    {
        const bool branch_taken_0x20ff3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20FF40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20FF3Cu;
        // 0x20ff40: 0x8c44144c  lw          $a0, 0x144C($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 5196)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20ff3c) {
            ctx->pc = 0x210584u;
            goto label_210584;
        }
    }
    ctx->pc = 0x20FF44u;
label_20ff44:
    // 0x20ff44: 0x8e420304  lw          $v0, 0x304($s2)
    ctx->pc = 0x20ff44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
    // 0x20ff48: 0x8c431450  lw          $v1, 0x1450($v0)
    ctx->pc = 0x20ff48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 5200)));
    // 0x20ff4c: 0x1000018d  b           . + 4 + (0x18D << 2)
    ctx->pc = 0x20FF4Cu;
    {
        const bool branch_taken_0x20ff4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20FF50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20FF4Cu;
        // 0x20ff50: 0x8c441454  lw          $a0, 0x1454($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 5204)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20ff4c) {
            ctx->pc = 0x210584u;
            goto label_210584;
        }
    }
    ctx->pc = 0x20FF54u;
label_20ff54:
    // 0x20ff54: 0x8e420304  lw          $v0, 0x304($s2)
    ctx->pc = 0x20ff54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
    // 0x20ff58: 0x8c430bcc  lw          $v1, 0xBCC($v0)
    ctx->pc = 0x20ff58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3020)));
    // 0x20ff5c: 0x10000189  b           . + 4 + (0x189 << 2)
    ctx->pc = 0x20FF5Cu;
    {
        const bool branch_taken_0x20ff5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20FF60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20FF5Cu;
        // 0x20ff60: 0x8c440bd0  lw          $a0, 0xBD0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3024)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20ff5c) {
            ctx->pc = 0x210584u;
            goto label_210584;
        }
    }
    ctx->pc = 0x20FF64u;
label_20ff64:
    // 0x20ff64: 0x8e420304  lw          $v0, 0x304($s2)
    ctx->pc = 0x20ff64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
    // 0x20ff68: 0x8c430bcc  lw          $v1, 0xBCC($v0)
    ctx->pc = 0x20ff68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3020)));
    // 0x20ff6c: 0x10000185  b           . + 4 + (0x185 << 2)
    ctx->pc = 0x20FF6Cu;
    {
        const bool branch_taken_0x20ff6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20FF70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20FF6Cu;
        // 0x20ff70: 0x8c440bd4  lw          $a0, 0xBD4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3028)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20ff6c) {
            ctx->pc = 0x210584u;
            goto label_210584;
        }
    }
    ctx->pc = 0x20FF74u;
label_20ff74:
    // 0x20ff74: 0x8e420304  lw          $v0, 0x304($s2)
    ctx->pc = 0x20ff74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
    // 0x20ff78: 0x8c430bcc  lw          $v1, 0xBCC($v0)
    ctx->pc = 0x20ff78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3020)));
    // 0x20ff7c: 0x10000181  b           . + 4 + (0x181 << 2)
    ctx->pc = 0x20FF7Cu;
    {
        const bool branch_taken_0x20ff7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20FF80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20FF7Cu;
        // 0x20ff80: 0x8c440bd0  lw          $a0, 0xBD0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3024)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20ff7c) {
            ctx->pc = 0x210584u;
            goto label_210584;
        }
    }
    ctx->pc = 0x20FF84u;
label_20ff84:
    // 0x20ff84: 0x8e420304  lw          $v0, 0x304($s2)
    ctx->pc = 0x20ff84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
    // 0x20ff88: 0x8c433038  lw          $v1, 0x3038($v0)
    ctx->pc = 0x20ff88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12344)));
    // 0x20ff8c: 0x1000017d  b           . + 4 + (0x17D << 2)
    ctx->pc = 0x20FF8Cu;
    {
        const bool branch_taken_0x20ff8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20FF90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20FF8Cu;
        // 0x20ff90: 0x8c44303c  lw          $a0, 0x303C($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12348)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20ff8c) {
            ctx->pc = 0x210584u;
            goto label_210584;
        }
    }
    ctx->pc = 0x20FF94u;
label_20ff94:
    // 0x20ff94: 0x8e420304  lw          $v0, 0x304($s2)
    ctx->pc = 0x20ff94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
    // 0x20ff98: 0x8c43326c  lw          $v1, 0x326C($v0)
    ctx->pc = 0x20ff98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12908)));
    // 0x20ff9c: 0x10000179  b           . + 4 + (0x179 << 2)
    ctx->pc = 0x20FF9Cu;
    {
        const bool branch_taken_0x20ff9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20FFA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20FF9Cu;
        // 0x20ffa0: 0x8c443270  lw          $a0, 0x3270($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12912)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20ff9c) {
            ctx->pc = 0x210584u;
            goto label_210584;
        }
    }
    ctx->pc = 0x20FFA4u;
label_20ffa4:
    // 0x20ffa4: 0x8e420304  lw          $v0, 0x304($s2)
    ctx->pc = 0x20ffa4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
    // 0x20ffa8: 0x8c433d34  lw          $v1, 0x3D34($v0)
    ctx->pc = 0x20ffa8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 15668)));
    // 0x20ffac: 0x10000175  b           . + 4 + (0x175 << 2)
    ctx->pc = 0x20FFACu;
    {
        const bool branch_taken_0x20ffac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20FFB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20FFACu;
        // 0x20ffb0: 0x8c443d38  lw          $a0, 0x3D38($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 15672)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20ffac) {
            ctx->pc = 0x210584u;
            goto label_210584;
        }
    }
    ctx->pc = 0x20FFB4u;
label_20ffb4:
    // 0x20ffb4: 0x8e420304  lw          $v0, 0x304($s2)
    ctx->pc = 0x20ffb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
    // 0x20ffb8: 0x8c430bcc  lw          $v1, 0xBCC($v0)
    ctx->pc = 0x20ffb8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3020)));
    // 0x20ffbc: 0x10000171  b           . + 4 + (0x171 << 2)
    ctx->pc = 0x20FFBCu;
    {
        const bool branch_taken_0x20ffbc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20FFC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20FFBCu;
        // 0x20ffc0: 0x8c440bd0  lw          $a0, 0xBD0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3024)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20ffbc) {
            ctx->pc = 0x210584u;
            goto label_210584;
        }
    }
    ctx->pc = 0x20FFC4u;
label_20ffc4:
    // 0x20ffc4: 0x8e420304  lw          $v0, 0x304($s2)
    ctx->pc = 0x20ffc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
    // 0x20ffc8: 0x8c431560  lw          $v1, 0x1560($v0)
    ctx->pc = 0x20ffc8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 5472)));
    // 0x20ffcc: 0x1000016d  b           . + 4 + (0x16D << 2)
    ctx->pc = 0x20FFCCu;
    {
        const bool branch_taken_0x20ffcc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20FFD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20FFCCu;
        // 0x20ffd0: 0x8c441564  lw          $a0, 0x1564($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 5476)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20ffcc) {
            ctx->pc = 0x210584u;
            goto label_210584;
        }
    }
    ctx->pc = 0x20FFD4u;
label_20ffd4:
    // 0x20ffd4: 0x8e420304  lw          $v0, 0x304($s2)
    ctx->pc = 0x20ffd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
    // 0x20ffd8: 0x8c433a00  lw          $v1, 0x3A00($v0)
    ctx->pc = 0x20ffd8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 14848)));
    // 0x20ffdc: 0x10000169  b           . + 4 + (0x169 << 2)
    ctx->pc = 0x20FFDCu;
    {
        const bool branch_taken_0x20ffdc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20FFE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20FFDCu;
        // 0x20ffe0: 0x8c443a04  lw          $a0, 0x3A04($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 14852)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20ffdc) {
            ctx->pc = 0x210584u;
            goto label_210584;
        }
    }
    ctx->pc = 0x20FFE4u;
label_20ffe4:
    // 0x20ffe4: 0x8e420304  lw          $v0, 0x304($s2)
    ctx->pc = 0x20ffe4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
    // 0x20ffe8: 0x8c433418  lw          $v1, 0x3418($v0)
    ctx->pc = 0x20ffe8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 13336)));
    // 0x20ffec: 0x10000165  b           . + 4 + (0x165 << 2)
    ctx->pc = 0x20FFECu;
    {
        const bool branch_taken_0x20ffec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20FFF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20FFECu;
        // 0x20fff0: 0x8c44341c  lw          $a0, 0x341C($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 13340)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20ffec) {
            ctx->pc = 0x210584u;
            goto label_210584;
        }
    }
    ctx->pc = 0x20FFF4u;
label_20fff4:
    // 0x20fff4: 0x8e421644  lw          $v0, 0x1644($s2)
    ctx->pc = 0x20fff4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 5700)));
    // 0x20fff8: 0x3c030020  lui         $v1, 0x20
    ctx->pc = 0x20fff8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32 << 16));
    // 0x20fffc: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x20fffcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x210000: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x210000u;
    {
        const bool branch_taken_0x210000 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x210000) {
            ctx->pc = 0x210004u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x210000u;
            // 0x210004: 0x8e420304  lw          $v0, 0x304($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x21001Cu;
            goto label_21001c;
        }
    }
    ctx->pc = 0x210008u;
    // 0x210008: 0x8e430304  lw          $v1, 0x304($s2)
    ctx->pc = 0x210008u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
label_21000c:
    // 0x21000c: 0x8c620fbc  lw          $v0, 0xFBC($v1)
    ctx->pc = 0x21000cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4028)));
    // 0x210010: 0x438021  addu        $s0, $v0, $v1
    ctx->pc = 0x210010u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x210014: 0x1000015d  b           . + 4 + (0x15D << 2)
    ctx->pc = 0x210014u;
    {
        const bool branch_taken_0x210014 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x210018u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x210014u;
        // 0x210018: 0x200882d  daddu       $s1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x210014) {
            ctx->pc = 0x21058Cu;
            goto label_21058c;
        }
    }
    ctx->pc = 0x21001Cu;
label_21001c:
    // 0x21001c: 0x8c430cf8  lw          $v1, 0xCF8($v0)
    ctx->pc = 0x21001cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3320)));
    // 0x210020: 0x10000158  b           . + 4 + (0x158 << 2)
    ctx->pc = 0x210020u;
    {
        const bool branch_taken_0x210020 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x210024u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x210020u;
        // 0x210024: 0x8c440cfc  lw          $a0, 0xCFC($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3324)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x210020) {
            ctx->pc = 0x210584u;
            goto label_210584;
        }
    }
    ctx->pc = 0x210028u;
label_210028:
    // 0x210028: 0x8e420304  lw          $v0, 0x304($s2)
    ctx->pc = 0x210028u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
    // 0x21002c: 0x8c431bc0  lw          $v1, 0x1BC0($v0)
    ctx->pc = 0x21002cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 7104)));
    // 0x210030: 0x10000154  b           . + 4 + (0x154 << 2)
    ctx->pc = 0x210030u;
    {
        const bool branch_taken_0x210030 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x210034u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x210030u;
        // 0x210034: 0x8c441bc4  lw          $a0, 0x1BC4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 7108)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x210030) {
            ctx->pc = 0x210584u;
            goto label_210584;
        }
    }
    ctx->pc = 0x210038u;
label_210038:
    // 0x210038: 0x8e420304  lw          $v0, 0x304($s2)
    ctx->pc = 0x210038u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
    // 0x21003c: 0x8c4303f4  lw          $v1, 0x3F4($v0)
    ctx->pc = 0x21003cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1012)));
    // 0x210040: 0x10000150  b           . + 4 + (0x150 << 2)
    ctx->pc = 0x210040u;
    {
        const bool branch_taken_0x210040 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x210044u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x210040u;
        // 0x210044: 0x8c4403f8  lw          $a0, 0x3F8($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1016)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x210040) {
            ctx->pc = 0x210584u;
            goto label_210584;
        }
    }
    ctx->pc = 0x210048u;
label_210048:
    // 0x210048: 0x96420640  lhu         $v0, 0x640($s2)
    ctx->pc = 0x210048u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 1600)));
    // 0x21004c: 0x30440007  andi        $a0, $v0, 0x7
    ctx->pc = 0x21004cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)7);
    // 0x210050: 0x2c830008  sltiu       $v1, $a0, 0x8
    ctx->pc = 0x210050u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
    // 0x210054: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x210054u;
    {
        const bool branch_taken_0x210054 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x210058u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x210054u;
        // 0x210058: 0x3c020043  lui         $v0, 0x43 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)67 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x210054) {
            ctx->pc = 0x210074u;
            goto label_210074;
        }
    }
    ctx->pc = 0x21005Cu;
    // 0x21005c: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x21005cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x210060: 0x24423600  addiu       $v0, $v0, 0x3600
    ctx->pc = 0x210060u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 13824));
    // 0x210064: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x210064u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x210068: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x210068u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x21006c: 0x800008  jr          $a0
    ctx->pc = 0x21006Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x210074u: goto label_210074;
            case 0x210080u: goto label_210080;
            case 0x210090u: goto label_210090;
            case 0x2100A0u: goto label_2100a0;
            case 0x2100B0u: goto label_2100b0;
            case 0x2100C0u: goto label_2100c0;
            case 0x2100D0u: goto label_2100d0;
            case 0x2100E0u: goto label_2100e0;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21006Cu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x210074u;
label_210074:
    // 0x210074: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x210074u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x210078: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x210078u;
    {
        const bool branch_taken_0x210078 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21007Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x210078u;
        // 0x21007c: 0x8e420564  lw          $v0, 0x564($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1380)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x210078) {
            ctx->pc = 0x2100ECu;
            goto label_2100ec;
        }
    }
    ctx->pc = 0x210080u;
label_210080:
    // 0x210080: 0x3c0141f0  lui         $at, 0x41F0
    ctx->pc = 0x210080u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16880 << 16));
    // 0x210084: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x210084u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x210088: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x210088u;
    {
        const bool branch_taken_0x210088 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21008Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x210088u;
        // 0x21008c: 0x8e420564  lw          $v0, 0x564($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1380)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x210088) {
            ctx->pc = 0x2100ECu;
            goto label_2100ec;
        }
    }
    ctx->pc = 0x210090u;
label_210090:
    // 0x210090: 0x3c014170  lui         $at, 0x4170
    ctx->pc = 0x210090u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16752 << 16));
    // 0x210094: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x210094u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x210098: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x210098u;
    {
        const bool branch_taken_0x210098 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21009Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x210098u;
        // 0x21009c: 0x8e420564  lw          $v0, 0x564($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1380)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x210098) {
            ctx->pc = 0x2100ECu;
            goto label_2100ec;
        }
    }
    ctx->pc = 0x2100A0u;
label_2100a0:
    // 0x2100a0: 0x3c014234  lui         $at, 0x4234
    ctx->pc = 0x2100a0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16948 << 16));
    // 0x2100a4: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x2100a4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x2100a8: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x2100A8u;
    {
        const bool branch_taken_0x2100a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2100ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2100A8u;
        // 0x2100ac: 0x8e420564  lw          $v0, 0x564($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1380)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2100a8) {
            ctx->pc = 0x2100ECu;
            goto label_2100ec;
        }
    }
    ctx->pc = 0x2100B0u;
label_2100b0:
    // 0x2100b0: 0x3c014120  lui         $at, 0x4120
    ctx->pc = 0x2100b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16672 << 16));
    // 0x2100b4: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x2100b4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x2100b8: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x2100B8u;
    {
        const bool branch_taken_0x2100b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2100BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2100B8u;
        // 0x2100bc: 0x8e420564  lw          $v0, 0x564($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1380)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2100b8) {
            ctx->pc = 0x2100ECu;
            goto label_2100ec;
        }
    }
    ctx->pc = 0x2100C0u;
label_2100c0:
    // 0x2100c0: 0x3c014220  lui         $at, 0x4220
    ctx->pc = 0x2100c0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16928 << 16));
    // 0x2100c4: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x2100c4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x2100c8: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2100C8u;
    {
        const bool branch_taken_0x2100c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2100CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2100C8u;
        // 0x2100cc: 0x8e420564  lw          $v0, 0x564($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1380)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2100c8) {
            ctx->pc = 0x2100ECu;
            goto label_2100ec;
        }
    }
    ctx->pc = 0x2100D0u;
label_2100d0:
    // 0x2100d0: 0x3c0140a0  lui         $at, 0x40A0
    ctx->pc = 0x2100d0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16544 << 16));
    // 0x2100d4: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x2100d4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x2100d8: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2100D8u;
    {
        const bool branch_taken_0x2100d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2100DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2100D8u;
        // 0x2100dc: 0x8e420564  lw          $v0, 0x564($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1380)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2100d8) {
            ctx->pc = 0x2100ECu;
            goto label_2100ec;
        }
    }
    ctx->pc = 0x2100E0u;
label_2100e0:
    // 0x2100e0: 0x3c0141c8  lui         $at, 0x41C8
    ctx->pc = 0x2100e0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16840 << 16));
    // 0x2100e4: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x2100e4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x2100e8: 0x8e420564  lw          $v0, 0x564($s2)
    ctx->pc = 0x2100e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1380)));
label_2100ec:
    // 0x2100ec: 0x2444fdfb  addiu       $a0, $v0, -0x205
    ctx->pc = 0x2100ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294966779));
    // 0x2100f0: 0x2c830075  sltiu       $v1, $a0, 0x75
    ctx->pc = 0x2100f0u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)117) ? 1 : 0);
    // 0x2100f4: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x2100F4u;
    {
        const bool branch_taken_0x2100f4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2100F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2100F4u;
        // 0x2100f8: 0x3c020043  lui         $v0, 0x43 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)67 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2100f4) {
            ctx->pc = 0x210114u;
            goto label_210114;
        }
    }
    ctx->pc = 0x2100FCu;
    // 0x2100fc: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x2100fcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x210100: 0x24423620  addiu       $v0, $v0, 0x3620
    ctx->pc = 0x210100u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 13856));
    // 0x210104: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x210104u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x210108: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x210108u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x21010c: 0x800008  jr          $a0
    ctx->pc = 0x21010Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x210114u: goto label_210114;
            case 0x210124u: goto label_210124;
            case 0x210134u: goto label_210134;
            case 0x210144u: goto label_210144;
            case 0x210154u: goto label_210154;
            case 0x210164u: goto label_210164;
            case 0x210174u: goto label_210174;
            case 0x210184u: goto label_210184;
            case 0x210194u: goto label_210194;
            case 0x2101A4u: goto label_2101a4;
            case 0x2101D0u: goto label_2101d0;
            case 0x2101FCu: goto label_2101fc;
            case 0x21020Cu: goto label_21020c;
            case 0x21021Cu: goto label_21021c;
            case 0x21022Cu: goto label_21022c;
            case 0x21023Cu: goto label_21023c;
            case 0x21024Cu: goto label_21024c;
            case 0x2104F8u: goto label_2104f8;
            case 0x210578u: goto label_210578;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21010Cu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x210114u;
label_210114:
    // 0x210114: 0x8e420304  lw          $v0, 0x304($s2)
    ctx->pc = 0x210114u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
    // 0x210118: 0x8c43043c  lw          $v1, 0x43C($v0)
    ctx->pc = 0x210118u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1084)));
    // 0x21011c: 0x10000119  b           . + 4 + (0x119 << 2)
    ctx->pc = 0x21011Cu;
    {
        const bool branch_taken_0x21011c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x210120u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21011Cu;
        // 0x210120: 0x8c440440  lw          $a0, 0x440($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1088)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21011c) {
            ctx->pc = 0x210584u;
            goto label_210584;
        }
    }
    ctx->pc = 0x210124u;
label_210124:
    // 0x210124: 0x8e420304  lw          $v0, 0x304($s2)
    ctx->pc = 0x210124u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
    // 0x210128: 0x8c431458  lw          $v1, 0x1458($v0)
    ctx->pc = 0x210128u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 5208)));
    // 0x21012c: 0x10000115  b           . + 4 + (0x115 << 2)
    ctx->pc = 0x21012Cu;
    {
        const bool branch_taken_0x21012c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x210130u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21012Cu;
        // 0x210130: 0x8c44145c  lw          $a0, 0x145C($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 5212)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21012c) {
            ctx->pc = 0x210584u;
            goto label_210584;
        }
    }
    ctx->pc = 0x210134u;
label_210134:
    // 0x210134: 0x8e420304  lw          $v0, 0x304($s2)
    ctx->pc = 0x210134u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
    // 0x210138: 0x8c430bf8  lw          $v1, 0xBF8($v0)
    ctx->pc = 0x210138u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3064)));
    // 0x21013c: 0x10000111  b           . + 4 + (0x111 << 2)
    ctx->pc = 0x21013Cu;
    {
        const bool branch_taken_0x21013c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x210140u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21013Cu;
        // 0x210140: 0x8c440bfc  lw          $a0, 0xBFC($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3068)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21013c) {
            ctx->pc = 0x210584u;
            goto label_210584;
        }
    }
    ctx->pc = 0x210144u;
label_210144:
    // 0x210144: 0x8e420304  lw          $v0, 0x304($s2)
    ctx->pc = 0x210144u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
    // 0x210148: 0x8c430b84  lw          $v1, 0xB84($v0)
    ctx->pc = 0x210148u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2948)));
    // 0x21014c: 0x1000010d  b           . + 4 + (0x10D << 2)
    ctx->pc = 0x21014Cu;
    {
        const bool branch_taken_0x21014c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x210150u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21014Cu;
        // 0x210150: 0x8c440b88  lw          $a0, 0xB88($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2952)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21014c) {
            ctx->pc = 0x210584u;
            goto label_210584;
        }
    }
    ctx->pc = 0x210154u;
label_210154:
    // 0x210154: 0x8e420304  lw          $v0, 0x304($s2)
    ctx->pc = 0x210154u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
    // 0x210158: 0x8c433038  lw          $v1, 0x3038($v0)
    ctx->pc = 0x210158u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12344)));
    // 0x21015c: 0x10000109  b           . + 4 + (0x109 << 2)
    ctx->pc = 0x21015Cu;
    {
        const bool branch_taken_0x21015c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x210160u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21015Cu;
        // 0x210160: 0x8c44303c  lw          $a0, 0x303C($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12348)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21015c) {
            ctx->pc = 0x210584u;
            goto label_210584;
        }
    }
    ctx->pc = 0x210164u;
label_210164:
    // 0x210164: 0x8e420304  lw          $v0, 0x304($s2)
    ctx->pc = 0x210164u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
    // 0x210168: 0x8c43326c  lw          $v1, 0x326C($v0)
    ctx->pc = 0x210168u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12908)));
    // 0x21016c: 0x10000105  b           . + 4 + (0x105 << 2)
    ctx->pc = 0x21016Cu;
    {
        const bool branch_taken_0x21016c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x210170u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21016Cu;
        // 0x210170: 0x8c443270  lw          $a0, 0x3270($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12912)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21016c) {
            ctx->pc = 0x210584u;
            goto label_210584;
        }
    }
    ctx->pc = 0x210174u;
label_210174:
    // 0x210174: 0x8e420304  lw          $v0, 0x304($s2)
    ctx->pc = 0x210174u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
    // 0x210178: 0x8c433d34  lw          $v1, 0x3D34($v0)
    ctx->pc = 0x210178u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 15668)));
    // 0x21017c: 0x10000101  b           . + 4 + (0x101 << 2)
    ctx->pc = 0x21017Cu;
    {
        const bool branch_taken_0x21017c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x210180u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21017Cu;
        // 0x210180: 0x8c443d38  lw          $a0, 0x3D38($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 15672)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21017c) {
            ctx->pc = 0x210584u;
            goto label_210584;
        }
    }
    ctx->pc = 0x210184u;
label_210184:
    // 0x210184: 0x8e420304  lw          $v0, 0x304($s2)
    ctx->pc = 0x210184u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
    // 0x210188: 0x8c430b84  lw          $v1, 0xB84($v0)
    ctx->pc = 0x210188u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2948)));
    // 0x21018c: 0x100000fd  b           . + 4 + (0xFD << 2)
    ctx->pc = 0x21018Cu;
    {
        const bool branch_taken_0x21018c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x210190u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21018Cu;
        // 0x210190: 0x8c440b88  lw          $a0, 0xB88($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2952)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21018c) {
            ctx->pc = 0x210584u;
            goto label_210584;
        }
    }
    ctx->pc = 0x210194u;
label_210194:
    // 0x210194: 0x8e420304  lw          $v0, 0x304($s2)
    ctx->pc = 0x210194u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
    // 0x210198: 0x8c4317f8  lw          $v1, 0x17F8($v0)
    ctx->pc = 0x210198u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 6136)));
    // 0x21019c: 0x100000f9  b           . + 4 + (0xF9 << 2)
    ctx->pc = 0x21019Cu;
    {
        const bool branch_taken_0x21019c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2101A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21019Cu;
        // 0x2101a0: 0x8c4417fc  lw          $a0, 0x17FC($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 6140)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21019c) {
            ctx->pc = 0x210584u;
            goto label_210584;
        }
    }
    ctx->pc = 0x2101A4u;
label_2101a4:
    // 0x2101a4: 0xc0c73f8  jal         func_31CFE0
    ctx->pc = 0x2101A4u;
    SET_GPR_U32(ctx, 31, 0x2101ACu);
    ctx->pc = 0x31CFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31CFE0u, 0x2101A4u, 0x2101ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2101ACu;
label_2101ac:
    // 0x2101ac: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2101acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2101b0: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2101B0u;
    {
        const bool branch_taken_0x2101b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2101B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2101B0u;
        // 0x2101b4: 0x8e420304  lw          $v0, 0x304($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2101b0) {
            ctx->pc = 0x2101C4u;
            goto label_2101c4;
        }
    }
    ctx->pc = 0x2101B8u;
    // 0x2101b8: 0x8c4318dc  lw          $v1, 0x18DC($v0)
    ctx->pc = 0x2101b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 6364)));
    // 0x2101bc: 0x100000f1  b           . + 4 + (0xF1 << 2)
    ctx->pc = 0x2101BCu;
    {
        const bool branch_taken_0x2101bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2101C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2101BCu;
        // 0x2101c0: 0x8c4418e0  lw          $a0, 0x18E0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 6368)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2101bc) {
            ctx->pc = 0x210584u;
            goto label_210584;
        }
    }
    ctx->pc = 0x2101C4u;
label_2101c4:
    // 0x2101c4: 0x8c4318e4  lw          $v1, 0x18E4($v0)
    ctx->pc = 0x2101c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 6372)));
    // 0x2101c8: 0x100000ee  b           . + 4 + (0xEE << 2)
    ctx->pc = 0x2101C8u;
    {
        const bool branch_taken_0x2101c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2101CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2101C8u;
        // 0x2101cc: 0x8c4418e8  lw          $a0, 0x18E8($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 6376)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2101c8) {
            ctx->pc = 0x210584u;
            goto label_210584;
        }
    }
    ctx->pc = 0x2101D0u;
label_2101d0:
    // 0x2101d0: 0xc0c73f8  jal         func_31CFE0
    ctx->pc = 0x2101D0u;
    SET_GPR_U32(ctx, 31, 0x2101D8u);
    ctx->pc = 0x31CFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31CFE0u, 0x2101D0u, 0x2101D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2101D8u;
label_2101d8:
    // 0x2101d8: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2101d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2101dc: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2101DCu;
    {
        const bool branch_taken_0x2101dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2101E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2101DCu;
        // 0x2101e0: 0x8e420304  lw          $v0, 0x304($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2101dc) {
            ctx->pc = 0x2101F0u;
            goto label_2101f0;
        }
    }
    ctx->pc = 0x2101E4u;
    // 0x2101e4: 0x8c433b1c  lw          $v1, 0x3B1C($v0)
    ctx->pc = 0x2101e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 15132)));
    // 0x2101e8: 0x100000e6  b           . + 4 + (0xE6 << 2)
    ctx->pc = 0x2101E8u;
    {
        const bool branch_taken_0x2101e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2101ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2101E8u;
        // 0x2101ec: 0x8c443b20  lw          $a0, 0x3B20($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 15136)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2101e8) {
            ctx->pc = 0x210584u;
            goto label_210584;
        }
    }
    ctx->pc = 0x2101F0u;
label_2101f0:
    // 0x2101f0: 0x8c433b24  lw          $v1, 0x3B24($v0)
    ctx->pc = 0x2101f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 15140)));
    // 0x2101f4: 0x100000e3  b           . + 4 + (0xE3 << 2)
    ctx->pc = 0x2101F4u;
    {
        const bool branch_taken_0x2101f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2101F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2101F4u;
        // 0x2101f8: 0x8c443b28  lw          $a0, 0x3B28($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 15144)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2101f4) {
            ctx->pc = 0x210584u;
            goto label_210584;
        }
    }
    ctx->pc = 0x2101FCu;
label_2101fc:
    // 0x2101fc: 0x8e420304  lw          $v0, 0x304($s2)
    ctx->pc = 0x2101fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
    // 0x210200: 0x8c431890  lw          $v1, 0x1890($v0)
    ctx->pc = 0x210200u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 6288)));
    // 0x210204: 0x100000df  b           . + 4 + (0xDF << 2)
    ctx->pc = 0x210204u;
    {
        const bool branch_taken_0x210204 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x210208u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x210204u;
        // 0x210208: 0x8c441894  lw          $a0, 0x1894($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 6292)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x210204) {
            ctx->pc = 0x210584u;
            goto label_210584;
        }
    }
    ctx->pc = 0x21020Cu;
label_21020c:
    // 0x21020c: 0x8e420304  lw          $v0, 0x304($s2)
    ctx->pc = 0x21020cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
    // 0x210210: 0x8c431ea0  lw          $v1, 0x1EA0($v0)
    ctx->pc = 0x210210u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 7840)));
    // 0x210214: 0x100000db  b           . + 4 + (0xDB << 2)
    ctx->pc = 0x210214u;
    {
        const bool branch_taken_0x210214 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x210218u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x210214u;
        // 0x210218: 0x8c441ea4  lw          $a0, 0x1EA4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 7844)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x210214) {
            ctx->pc = 0x210584u;
            goto label_210584;
        }
    }
    ctx->pc = 0x21021Cu;
label_21021c:
    // 0x21021c: 0x8e420304  lw          $v0, 0x304($s2)
    ctx->pc = 0x21021cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
    // 0x210220: 0x8c433418  lw          $v1, 0x3418($v0)
    ctx->pc = 0x210220u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 13336)));
    // 0x210224: 0x100000d7  b           . + 4 + (0xD7 << 2)
    ctx->pc = 0x210224u;
    {
        const bool branch_taken_0x210224 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x210228u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x210224u;
        // 0x210228: 0x8c44341c  lw          $a0, 0x341C($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 13340)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x210224) {
            ctx->pc = 0x210584u;
            goto label_210584;
        }
    }
    ctx->pc = 0x21022Cu;
label_21022c:
    // 0x21022c: 0x8e420304  lw          $v0, 0x304($s2)
    ctx->pc = 0x21022cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
    // 0x210230: 0x8c430f94  lw          $v1, 0xF94($v0)
    ctx->pc = 0x210230u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3988)));
    // 0x210234: 0x100000d3  b           . + 4 + (0xD3 << 2)
    ctx->pc = 0x210234u;
    {
        const bool branch_taken_0x210234 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x210238u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x210234u;
        // 0x210238: 0x8c440f98  lw          $a0, 0xF98($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3992)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x210234) {
            ctx->pc = 0x210584u;
            goto label_210584;
        }
    }
    ctx->pc = 0x21023Cu;
label_21023c:
    // 0x21023c: 0x8e420304  lw          $v0, 0x304($s2)
    ctx->pc = 0x21023cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
    // 0x210240: 0x8c431bc0  lw          $v1, 0x1BC0($v0)
    ctx->pc = 0x210240u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 7104)));
    // 0x210244: 0x100000cf  b           . + 4 + (0xCF << 2)
    ctx->pc = 0x210244u;
    {
        const bool branch_taken_0x210244 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x210248u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x210244u;
        // 0x210248: 0x8c441bc4  lw          $a0, 0x1BC4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 7108)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x210244) {
            ctx->pc = 0x210584u;
            goto label_210584;
        }
    }
    ctx->pc = 0x21024Cu;
label_21024c:
    // 0x21024c: 0x8e420304  lw          $v0, 0x304($s2)
    ctx->pc = 0x21024cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
    // 0x210250: 0x8c4303f4  lw          $v1, 0x3F4($v0)
    ctx->pc = 0x210250u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1012)));
    // 0x210254: 0x100000cb  b           . + 4 + (0xCB << 2)
    ctx->pc = 0x210254u;
    {
        const bool branch_taken_0x210254 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x210258u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x210254u;
        // 0x210258: 0x8c4403f8  lw          $a0, 0x3F8($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1016)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x210254) {
            ctx->pc = 0x210584u;
            goto label_210584;
        }
    }
    ctx->pc = 0x21025Cu;
label_21025c:
    // 0x21025c: 0x8e420564  lw          $v0, 0x564($s2)
    ctx->pc = 0x21025cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1380)));
    // 0x210260: 0x2444fdfe  addiu       $a0, $v0, -0x202
    ctx->pc = 0x210260u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294966782));
    // 0x210264: 0x2c83007d  sltiu       $v1, $a0, 0x7D
    ctx->pc = 0x210264u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)125) ? 1 : 0);
    // 0x210268: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x210268u;
    {
        const bool branch_taken_0x210268 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x21026Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x210268u;
        // 0x21026c: 0x3c020043  lui         $v0, 0x43 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)67 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x210268) {
            ctx->pc = 0x210288u;
            goto label_210288;
        }
    }
    ctx->pc = 0x210270u;
    // 0x210270: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x210270u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x210274: 0x24423800  addiu       $v0, $v0, 0x3800
    ctx->pc = 0x210274u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 14336));
    // 0x210278: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x210278u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x21027c: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x21027cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x210280: 0x800008  jr          $a0
    ctx->pc = 0x210280u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x210288u: goto label_210288;
            case 0x210298u: goto label_210298;
            case 0x2102A8u: goto label_2102a8;
            case 0x2102B8u: goto label_2102b8;
            case 0x2102C8u: goto label_2102c8;
            case 0x2102D8u: goto label_2102d8;
            case 0x2102E8u: goto label_2102e8;
            case 0x2102F8u: goto label_2102f8;
            case 0x210308u: goto label_210308;
            case 0x210318u: goto label_210318;
            case 0x210328u: goto label_210328;
            case 0x210340u: goto label_210340;
            case 0x2104F8u: goto label_2104f8;
            case 0x210578u: goto label_210578;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x210280u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x210288u;
label_210288:
    // 0x210288: 0x8e420304  lw          $v0, 0x304($s2)
    ctx->pc = 0x210288u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
    // 0x21028c: 0x8c43040c  lw          $v1, 0x40C($v0)
    ctx->pc = 0x21028cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1036)));
    // 0x210290: 0x100000bc  b           . + 4 + (0xBC << 2)
    ctx->pc = 0x210290u;
    {
        const bool branch_taken_0x210290 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x210294u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x210290u;
        // 0x210294: 0x8c440410  lw          $a0, 0x410($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1040)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x210290) {
            ctx->pc = 0x210584u;
            goto label_210584;
        }
    }
    ctx->pc = 0x210298u;
label_210298:
    // 0x210298: 0x8e420304  lw          $v0, 0x304($s2)
    ctx->pc = 0x210298u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
    // 0x21029c: 0x8c43040c  lw          $v1, 0x40C($v0)
    ctx->pc = 0x21029cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1036)));
    // 0x2102a0: 0x100000b8  b           . + 4 + (0xB8 << 2)
    ctx->pc = 0x2102A0u;
    {
        const bool branch_taken_0x2102a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2102A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2102A0u;
        // 0x2102a4: 0x8c440410  lw          $a0, 0x410($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1040)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2102a0) {
            ctx->pc = 0x210584u;
            goto label_210584;
        }
    }
    ctx->pc = 0x2102A8u;
label_2102a8:
    // 0x2102a8: 0x8e420304  lw          $v0, 0x304($s2)
    ctx->pc = 0x2102a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
    // 0x2102ac: 0x8c431418  lw          $v1, 0x1418($v0)
    ctx->pc = 0x2102acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 5144)));
    // 0x2102b0: 0x100000b4  b           . + 4 + (0xB4 << 2)
    ctx->pc = 0x2102B0u;
    {
        const bool branch_taken_0x2102b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2102B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2102B0u;
        // 0x2102b4: 0x8c44141c  lw          $a0, 0x141C($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 5148)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2102b0) {
            ctx->pc = 0x210584u;
            goto label_210584;
        }
    }
    ctx->pc = 0x2102B8u;
label_2102b8:
    // 0x2102b8: 0x8e420304  lw          $v0, 0x304($s2)
    ctx->pc = 0x2102b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
    // 0x2102bc: 0x8c43040c  lw          $v1, 0x40C($v0)
    ctx->pc = 0x2102bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1036)));
    // 0x2102c0: 0x100000b0  b           . + 4 + (0xB0 << 2)
    ctx->pc = 0x2102C0u;
    {
        const bool branch_taken_0x2102c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2102C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2102C0u;
        // 0x2102c4: 0x8c440410  lw          $a0, 0x410($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1040)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2102c0) {
            ctx->pc = 0x210584u;
            goto label_210584;
        }
    }
    ctx->pc = 0x2102C8u;
label_2102c8:
    // 0x2102c8: 0x8e420304  lw          $v0, 0x304($s2)
    ctx->pc = 0x2102c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
    // 0x2102cc: 0x8c4318f0  lw          $v1, 0x18F0($v0)
    ctx->pc = 0x2102ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 6384)));
    // 0x2102d0: 0x100000ac  b           . + 4 + (0xAC << 2)
    ctx->pc = 0x2102D0u;
    {
        const bool branch_taken_0x2102d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2102D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2102D0u;
        // 0x2102d4: 0x8c4418f4  lw          $a0, 0x18F4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 6388)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2102d0) {
            ctx->pc = 0x210584u;
            goto label_210584;
        }
    }
    ctx->pc = 0x2102D8u;
label_2102d8:
    // 0x2102d8: 0x8e420304  lw          $v0, 0x304($s2)
    ctx->pc = 0x2102d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
    // 0x2102dc: 0x8c433038  lw          $v1, 0x3038($v0)
    ctx->pc = 0x2102dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12344)));
    // 0x2102e0: 0x100000a8  b           . + 4 + (0xA8 << 2)
    ctx->pc = 0x2102E0u;
    {
        const bool branch_taken_0x2102e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2102E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2102E0u;
        // 0x2102e4: 0x8c44303c  lw          $a0, 0x303C($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12348)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2102e0) {
            ctx->pc = 0x210584u;
            goto label_210584;
        }
    }
    ctx->pc = 0x2102E8u;
label_2102e8:
    // 0x2102e8: 0x8e420304  lw          $v0, 0x304($s2)
    ctx->pc = 0x2102e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
    // 0x2102ec: 0x8c43326c  lw          $v1, 0x326C($v0)
    ctx->pc = 0x2102ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12908)));
    // 0x2102f0: 0x100000a4  b           . + 4 + (0xA4 << 2)
    ctx->pc = 0x2102F0u;
    {
        const bool branch_taken_0x2102f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2102F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2102F0u;
        // 0x2102f4: 0x8c443270  lw          $a0, 0x3270($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12912)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2102f0) {
            ctx->pc = 0x210584u;
            goto label_210584;
        }
    }
    ctx->pc = 0x2102F8u;
label_2102f8:
    // 0x2102f8: 0x8e420304  lw          $v0, 0x304($s2)
    ctx->pc = 0x2102f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
    // 0x2102fc: 0x8c433d34  lw          $v1, 0x3D34($v0)
    ctx->pc = 0x2102fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 15668)));
    // 0x210300: 0x100000a0  b           . + 4 + (0xA0 << 2)
    ctx->pc = 0x210300u;
    {
        const bool branch_taken_0x210300 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x210304u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x210300u;
        // 0x210304: 0x8c443d38  lw          $a0, 0x3D38($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 15672)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x210300) {
            ctx->pc = 0x210584u;
            goto label_210584;
        }
    }
    ctx->pc = 0x210308u;
label_210308:
    // 0x210308: 0x8e420304  lw          $v0, 0x304($s2)
    ctx->pc = 0x210308u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
    // 0x21030c: 0x8c431800  lw          $v1, 0x1800($v0)
    ctx->pc = 0x21030cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 6144)));
    // 0x210310: 0x1000009c  b           . + 4 + (0x9C << 2)
    ctx->pc = 0x210310u;
    {
        const bool branch_taken_0x210310 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x210314u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x210310u;
        // 0x210314: 0x8c441804  lw          $a0, 0x1804($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 6148)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x210310) {
            ctx->pc = 0x210584u;
            goto label_210584;
        }
    }
    ctx->pc = 0x210318u;
label_210318:
    // 0x210318: 0x8e420304  lw          $v0, 0x304($s2)
    ctx->pc = 0x210318u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
    // 0x21031c: 0x8c433418  lw          $v1, 0x3418($v0)
    ctx->pc = 0x21031cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 13336)));
    // 0x210320: 0x10000098  b           . + 4 + (0x98 << 2)
    ctx->pc = 0x210320u;
    {
        const bool branch_taken_0x210320 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x210324u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x210320u;
        // 0x210324: 0x8c44341c  lw          $a0, 0x341C($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 13340)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x210320) {
            ctx->pc = 0x210584u;
            goto label_210584;
        }
    }
    ctx->pc = 0x210328u;
label_210328:
    // 0x210328: 0x8e420304  lw          $v0, 0x304($s2)
    ctx->pc = 0x210328u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
    // 0x21032c: 0x24150058  addiu       $s5, $zero, 0x58
    ctx->pc = 0x21032cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 88));
    // 0x210330: 0x24140047  addiu       $s4, $zero, 0x47
    ctx->pc = 0x210330u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 71));
    // 0x210334: 0x8c430fc4  lw          $v1, 0xFC4($v0)
    ctx->pc = 0x210334u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4036)));
    // 0x210338: 0x10000092  b           . + 4 + (0x92 << 2)
    ctx->pc = 0x210338u;
    {
        const bool branch_taken_0x210338 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21033Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x210338u;
        // 0x21033c: 0x8c440fc8  lw          $a0, 0xFC8($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4040)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x210338) {
            ctx->pc = 0x210584u;
            goto label_210584;
        }
    }
    ctx->pc = 0x210340u;
label_210340:
    // 0x210340: 0x8e420304  lw          $v0, 0x304($s2)
    ctx->pc = 0x210340u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
    // 0x210344: 0x8c431bc0  lw          $v1, 0x1BC0($v0)
    ctx->pc = 0x210344u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 7104)));
    // 0x210348: 0x1000008e  b           . + 4 + (0x8E << 2)
    ctx->pc = 0x210348u;
    {
        const bool branch_taken_0x210348 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21034Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x210348u;
        // 0x21034c: 0x8c441bc4  lw          $a0, 0x1BC4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 7108)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x210348) {
            ctx->pc = 0x210584u;
            goto label_210584;
        }
    }
    ctx->pc = 0x210350u;
label_210350:
    // 0x210350: 0x8e420564  lw          $v0, 0x564($s2)
    ctx->pc = 0x210350u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1380)));
    // 0x210354: 0x2444fdfe  addiu       $a0, $v0, -0x202
    ctx->pc = 0x210354u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294966782));
    // 0x210358: 0x2c83007d  sltiu       $v1, $a0, 0x7D
    ctx->pc = 0x210358u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)125) ? 1 : 0);
    // 0x21035c: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x21035Cu;
    {
        const bool branch_taken_0x21035c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x210360u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21035Cu;
        // 0x210360: 0x3c020043  lui         $v0, 0x43 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)67 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21035c) {
            ctx->pc = 0x21037Cu;
            goto label_21037c;
        }
    }
    ctx->pc = 0x210364u;
    // 0x210364: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x210364u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x210368: 0x24423a00  addiu       $v0, $v0, 0x3A00
    ctx->pc = 0x210368u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 14848));
    // 0x21036c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x21036cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x210370: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x210370u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x210374: 0x800008  jr          $a0
    ctx->pc = 0x210374u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x21037Cu: goto label_21037c;
            case 0x21038Cu: goto label_21038c;
            case 0x21039Cu: goto label_21039c;
            case 0x2103ACu: goto label_2103ac;
            case 0x2103BCu: goto label_2103bc;
            case 0x2103CCu: goto label_2103cc;
            case 0x2103DCu: goto label_2103dc;
            case 0x2103ECu: goto label_2103ec;
            case 0x2103FCu: goto label_2103fc;
            case 0x21040Cu: goto label_21040c;
            case 0x21041Cu: goto label_21041c;
            case 0x21042Cu: goto label_21042c;
            case 0x21043Cu: goto label_21043c;
            case 0x2104F8u: goto label_2104f8;
            case 0x210578u: goto label_210578;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x210374u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x21037Cu;
label_21037c:
    // 0x21037c: 0x8e420304  lw          $v0, 0x304($s2)
    ctx->pc = 0x21037cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
    // 0x210380: 0x8c4303fc  lw          $v1, 0x3FC($v0)
    ctx->pc = 0x210380u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1020)));
    // 0x210384: 0x1000007f  b           . + 4 + (0x7F << 2)
    ctx->pc = 0x210384u;
    {
        const bool branch_taken_0x210384 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x210388u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x210384u;
        // 0x210388: 0x8c440400  lw          $a0, 0x400($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1024)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x210384) {
            ctx->pc = 0x210584u;
            goto label_210584;
        }
    }
    ctx->pc = 0x21038Cu;
label_21038c:
    // 0x21038c: 0x8e420304  lw          $v0, 0x304($s2)
    ctx->pc = 0x21038cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
    // 0x210390: 0x8c4303fc  lw          $v1, 0x3FC($v0)
    ctx->pc = 0x210390u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1020)));
    // 0x210394: 0x1000007b  b           . + 4 + (0x7B << 2)
    ctx->pc = 0x210394u;
    {
        const bool branch_taken_0x210394 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x210398u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x210394u;
        // 0x210398: 0x8c440400  lw          $a0, 0x400($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1024)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x210394) {
            ctx->pc = 0x210584u;
            goto label_210584;
        }
    }
    ctx->pc = 0x21039Cu;
label_21039c:
    // 0x21039c: 0x8e420304  lw          $v0, 0x304($s2)
    ctx->pc = 0x21039cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
    // 0x2103a0: 0x8c4336f8  lw          $v1, 0x36F8($v0)
    ctx->pc = 0x2103a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 14072)));
    // 0x2103a4: 0x10000077  b           . + 4 + (0x77 << 2)
    ctx->pc = 0x2103A4u;
    {
        const bool branch_taken_0x2103a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2103A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2103A4u;
        // 0x2103a8: 0x8c4436fc  lw          $a0, 0x36FC($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 14076)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2103a4) {
            ctx->pc = 0x210584u;
            goto label_210584;
        }
    }
    ctx->pc = 0x2103ACu;
label_2103ac:
    // 0x2103ac: 0x8e420304  lw          $v0, 0x304($s2)
    ctx->pc = 0x2103acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
    // 0x2103b0: 0x8c431438  lw          $v1, 0x1438($v0)
    ctx->pc = 0x2103b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 5176)));
    // 0x2103b4: 0x10000073  b           . + 4 + (0x73 << 2)
    ctx->pc = 0x2103B4u;
    {
        const bool branch_taken_0x2103b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2103B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2103B4u;
        // 0x2103b8: 0x8c44143c  lw          $a0, 0x143C($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 5180)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2103b4) {
            ctx->pc = 0x210584u;
            goto label_210584;
        }
    }
    ctx->pc = 0x2103BCu;
label_2103bc:
    // 0x2103bc: 0x8e420304  lw          $v0, 0x304($s2)
    ctx->pc = 0x2103bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
    // 0x2103c0: 0x8c430bd8  lw          $v1, 0xBD8($v0)
    ctx->pc = 0x2103c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3032)));
    // 0x2103c4: 0x1000006f  b           . + 4 + (0x6F << 2)
    ctx->pc = 0x2103C4u;
    {
        const bool branch_taken_0x2103c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2103C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2103C4u;
        // 0x2103c8: 0x8c440bdc  lw          $a0, 0xBDC($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3036)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2103c4) {
            ctx->pc = 0x210584u;
            goto label_210584;
        }
    }
    ctx->pc = 0x2103CCu;
label_2103cc:
    // 0x2103cc: 0x8e420304  lw          $v0, 0x304($s2)
    ctx->pc = 0x2103ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
    // 0x2103d0: 0x8c4318f0  lw          $v1, 0x18F0($v0)
    ctx->pc = 0x2103d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 6384)));
    // 0x2103d4: 0x1000006b  b           . + 4 + (0x6B << 2)
    ctx->pc = 0x2103D4u;
    {
        const bool branch_taken_0x2103d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2103D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2103D4u;
        // 0x2103d8: 0x8c4418f4  lw          $a0, 0x18F4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 6388)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2103d4) {
            ctx->pc = 0x210584u;
            goto label_210584;
        }
    }
    ctx->pc = 0x2103DCu;
label_2103dc:
    // 0x2103dc: 0x8e420304  lw          $v0, 0x304($s2)
    ctx->pc = 0x2103dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
    // 0x2103e0: 0x8c433038  lw          $v1, 0x3038($v0)
    ctx->pc = 0x2103e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12344)));
    // 0x2103e4: 0x10000067  b           . + 4 + (0x67 << 2)
    ctx->pc = 0x2103E4u;
    {
        const bool branch_taken_0x2103e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2103E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2103E4u;
        // 0x2103e8: 0x8c44303c  lw          $a0, 0x303C($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12348)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2103e4) {
            ctx->pc = 0x210584u;
            goto label_210584;
        }
    }
    ctx->pc = 0x2103ECu;
label_2103ec:
    // 0x2103ec: 0x8e420304  lw          $v0, 0x304($s2)
    ctx->pc = 0x2103ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
    // 0x2103f0: 0x8c43326c  lw          $v1, 0x326C($v0)
    ctx->pc = 0x2103f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12908)));
    // 0x2103f4: 0x10000063  b           . + 4 + (0x63 << 2)
    ctx->pc = 0x2103F4u;
    {
        const bool branch_taken_0x2103f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2103F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2103F4u;
        // 0x2103f8: 0x8c443270  lw          $a0, 0x3270($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12912)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2103f4) {
            ctx->pc = 0x210584u;
            goto label_210584;
        }
    }
    ctx->pc = 0x2103FCu;
label_2103fc:
    // 0x2103fc: 0x8e420304  lw          $v0, 0x304($s2)
    ctx->pc = 0x2103fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
    // 0x210400: 0x8c433d34  lw          $v1, 0x3D34($v0)
    ctx->pc = 0x210400u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 15668)));
    // 0x210404: 0x1000005f  b           . + 4 + (0x5F << 2)
    ctx->pc = 0x210404u;
    {
        const bool branch_taken_0x210404 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x210408u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x210404u;
        // 0x210408: 0x8c443d38  lw          $a0, 0x3D38($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 15672)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x210404) {
            ctx->pc = 0x210584u;
            goto label_210584;
        }
    }
    ctx->pc = 0x21040Cu;
label_21040c:
    // 0x21040c: 0x8e420304  lw          $v0, 0x304($s2)
    ctx->pc = 0x21040cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
    // 0x210410: 0x8c431810  lw          $v1, 0x1810($v0)
    ctx->pc = 0x210410u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 6160)));
    // 0x210414: 0x1000005b  b           . + 4 + (0x5B << 2)
    ctx->pc = 0x210414u;
    {
        const bool branch_taken_0x210414 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x210418u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x210414u;
        // 0x210418: 0x8c441814  lw          $a0, 0x1814($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 6164)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x210414) {
            ctx->pc = 0x210584u;
            goto label_210584;
        }
    }
    ctx->pc = 0x21041Cu;
label_21041c:
    // 0x21041c: 0x8e420304  lw          $v0, 0x304($s2)
    ctx->pc = 0x21041cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
    // 0x210420: 0x8c431810  lw          $v1, 0x1810($v0)
    ctx->pc = 0x210420u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 6160)));
    // 0x210424: 0x10000057  b           . + 4 + (0x57 << 2)
    ctx->pc = 0x210424u;
    {
        const bool branch_taken_0x210424 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x210428u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x210424u;
        // 0x210428: 0x8c441814  lw          $a0, 0x1814($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 6164)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x210424) {
            ctx->pc = 0x210584u;
            goto label_210584;
        }
    }
    ctx->pc = 0x21042Cu;
label_21042c:
    // 0x21042c: 0x8e420304  lw          $v0, 0x304($s2)
    ctx->pc = 0x21042cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
    // 0x210430: 0x8c430fac  lw          $v1, 0xFAC($v0)
    ctx->pc = 0x210430u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4012)));
    // 0x210434: 0x10000053  b           . + 4 + (0x53 << 2)
    ctx->pc = 0x210434u;
    {
        const bool branch_taken_0x210434 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x210438u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x210434u;
        // 0x210438: 0x8c440fb0  lw          $a0, 0xFB0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4016)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x210434) {
            ctx->pc = 0x210584u;
            goto label_210584;
        }
    }
    ctx->pc = 0x21043Cu;
label_21043c:
    // 0x21043c: 0x8e420304  lw          $v0, 0x304($s2)
    ctx->pc = 0x21043cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
    // 0x210440: 0x8c431bc0  lw          $v1, 0x1BC0($v0)
    ctx->pc = 0x210440u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 7104)));
    // 0x210444: 0x1000004f  b           . + 4 + (0x4F << 2)
    ctx->pc = 0x210444u;
    {
        const bool branch_taken_0x210444 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x210448u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x210444u;
        // 0x210448: 0x8c441bc4  lw          $a0, 0x1BC4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 7108)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x210444) {
            ctx->pc = 0x210584u;
            goto label_210584;
        }
    }
    ctx->pc = 0x21044Cu;
label_21044c:
    // 0x21044c: 0x8e420564  lw          $v0, 0x564($s2)
    ctx->pc = 0x21044cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1380)));
    // 0x210450: 0x2444fdfe  addiu       $a0, $v0, -0x202
    ctx->pc = 0x210450u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294966782));
    // 0x210454: 0x2c83007d  sltiu       $v1, $a0, 0x7D
    ctx->pc = 0x210454u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)125) ? 1 : 0);
    // 0x210458: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x210458u;
    {
        const bool branch_taken_0x210458 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x21045Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x210458u;
        // 0x21045c: 0x3c020043  lui         $v0, 0x43 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)67 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x210458) {
            ctx->pc = 0x210478u;
            goto label_210478;
        }
    }
    ctx->pc = 0x210460u;
    // 0x210460: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x210460u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x210464: 0x24423c00  addiu       $v0, $v0, 0x3C00
    ctx->pc = 0x210464u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 15360));
    // 0x210468: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x210468u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x21046c: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x21046cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x210470: 0x800008  jr          $a0
    ctx->pc = 0x210470u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x210478u: goto label_210478;
            case 0x210488u: goto label_210488;
            case 0x210498u: goto label_210498;
            case 0x2104A8u: goto label_2104a8;
            case 0x2104B8u: goto label_2104b8;
            case 0x2104C8u: goto label_2104c8;
            case 0x2104D8u: goto label_2104d8;
            case 0x2104E8u: goto label_2104e8;
            case 0x2104F8u: goto label_2104f8;
            case 0x210528u: goto label_210528;
            case 0x210538u: goto label_210538;
            case 0x210548u: goto label_210548;
            case 0x210558u: goto label_210558;
            case 0x210568u: goto label_210568;
            case 0x210578u: goto label_210578;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x210470u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x210478u;
label_210478:
    // 0x210478: 0x8e420304  lw          $v0, 0x304($s2)
    ctx->pc = 0x210478u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
    // 0x21047c: 0x8c430424  lw          $v1, 0x424($v0)
    ctx->pc = 0x21047cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1060)));
    // 0x210480: 0x10000040  b           . + 4 + (0x40 << 2)
    ctx->pc = 0x210480u;
    {
        const bool branch_taken_0x210480 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x210484u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x210480u;
        // 0x210484: 0x8c440428  lw          $a0, 0x428($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1064)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x210480) {
            ctx->pc = 0x210584u;
            goto label_210584;
        }
    }
    ctx->pc = 0x210488u;
label_210488:
    // 0x210488: 0x8e420304  lw          $v0, 0x304($s2)
    ctx->pc = 0x210488u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
    // 0x21048c: 0x8c430424  lw          $v1, 0x424($v0)
    ctx->pc = 0x21048cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1060)));
    // 0x210490: 0x1000003c  b           . + 4 + (0x3C << 2)
    ctx->pc = 0x210490u;
    {
        const bool branch_taken_0x210490 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x210494u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x210490u;
        // 0x210494: 0x8c440428  lw          $a0, 0x428($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1064)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x210490) {
            ctx->pc = 0x210584u;
            goto label_210584;
        }
    }
    ctx->pc = 0x210498u;
label_210498:
    // 0x210498: 0x8e420304  lw          $v0, 0x304($s2)
    ctx->pc = 0x210498u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
    // 0x21049c: 0x8c4336f8  lw          $v1, 0x36F8($v0)
    ctx->pc = 0x21049cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 14072)));
    // 0x2104a0: 0x10000038  b           . + 4 + (0x38 << 2)
    ctx->pc = 0x2104A0u;
    {
        const bool branch_taken_0x2104a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2104A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2104A0u;
        // 0x2104a4: 0x8c4436fc  lw          $a0, 0x36FC($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 14076)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2104a0) {
            ctx->pc = 0x210584u;
            goto label_210584;
        }
    }
    ctx->pc = 0x2104A8u;
label_2104a8:
    // 0x2104a8: 0x8e420304  lw          $v0, 0x304($s2)
    ctx->pc = 0x2104a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
    // 0x2104ac: 0x8c431438  lw          $v1, 0x1438($v0)
    ctx->pc = 0x2104acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 5176)));
    // 0x2104b0: 0x10000034  b           . + 4 + (0x34 << 2)
    ctx->pc = 0x2104B0u;
    {
        const bool branch_taken_0x2104b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2104B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2104B0u;
        // 0x2104b4: 0x8c44143c  lw          $a0, 0x143C($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 5180)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2104b0) {
            ctx->pc = 0x210584u;
            goto label_210584;
        }
    }
    ctx->pc = 0x2104B8u;
label_2104b8:
    // 0x2104b8: 0x8e420304  lw          $v0, 0x304($s2)
    ctx->pc = 0x2104b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
    // 0x2104bc: 0x8c430bd8  lw          $v1, 0xBD8($v0)
    ctx->pc = 0x2104bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3032)));
    // 0x2104c0: 0x10000030  b           . + 4 + (0x30 << 2)
    ctx->pc = 0x2104C0u;
    {
        const bool branch_taken_0x2104c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2104C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2104C0u;
        // 0x2104c4: 0x8c440bdc  lw          $a0, 0xBDC($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3036)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2104c0) {
            ctx->pc = 0x210584u;
            goto label_210584;
        }
    }
    ctx->pc = 0x2104C8u;
label_2104c8:
    // 0x2104c8: 0x8e420304  lw          $v0, 0x304($s2)
    ctx->pc = 0x2104c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
    // 0x2104cc: 0x8c4318f0  lw          $v1, 0x18F0($v0)
    ctx->pc = 0x2104ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 6384)));
    // 0x2104d0: 0x1000002c  b           . + 4 + (0x2C << 2)
    ctx->pc = 0x2104D0u;
    {
        const bool branch_taken_0x2104d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2104D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2104D0u;
        // 0x2104d4: 0x8c4418f4  lw          $a0, 0x18F4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 6388)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2104d0) {
            ctx->pc = 0x210584u;
            goto label_210584;
        }
    }
    ctx->pc = 0x2104D8u;
label_2104d8:
    // 0x2104d8: 0x8e420304  lw          $v0, 0x304($s2)
    ctx->pc = 0x2104d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
    // 0x2104dc: 0x8c433038  lw          $v1, 0x3038($v0)
    ctx->pc = 0x2104dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12344)));
    // 0x2104e0: 0x10000028  b           . + 4 + (0x28 << 2)
    ctx->pc = 0x2104E0u;
    {
        const bool branch_taken_0x2104e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2104E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2104E0u;
        // 0x2104e4: 0x8c44303c  lw          $a0, 0x303C($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12348)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2104e0) {
            ctx->pc = 0x210584u;
            goto label_210584;
        }
    }
    ctx->pc = 0x2104E8u;
label_2104e8:
    // 0x2104e8: 0x8e420304  lw          $v0, 0x304($s2)
    ctx->pc = 0x2104e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
    // 0x2104ec: 0x8c43326c  lw          $v1, 0x326C($v0)
    ctx->pc = 0x2104ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12908)));
    // 0x2104f0: 0x10000024  b           . + 4 + (0x24 << 2)
    ctx->pc = 0x2104F0u;
    {
        const bool branch_taken_0x2104f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2104F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2104F0u;
        // 0x2104f4: 0x8c443270  lw          $a0, 0x3270($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12912)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2104f0) {
            ctx->pc = 0x210584u;
            goto label_210584;
        }
    }
    ctx->pc = 0x2104F8u;
label_2104f8:
    // 0x2104f8: 0x8e420304  lw          $v0, 0x304($s2)
    ctx->pc = 0x2104f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
    // 0x2104fc: 0x8e470744  lw          $a3, 0x744($s2)
    ctx->pc = 0x2104fcu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1860)));
    // 0x210500: 0x8c433724  lw          $v1, 0x3724($v0)
    ctx->pc = 0x210500u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 14116)));
    // 0x210504: 0x8c443728  lw          $a0, 0x3728($v0)
    ctx->pc = 0x210504u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 14120)));
    // 0x210508: 0x628821  addu        $s1, $v1, $v0
    ctx->pc = 0x210508u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x21050c: 0x10e0001f  beqz        $a3, . + 4 + (0x1F << 2)
    ctx->pc = 0x21050Cu;
    {
        const bool branch_taken_0x21050c = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x210510u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21050Cu;
        // 0x210510: 0x828021  addu        $s0, $a0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21050c) {
            ctx->pc = 0x21058Cu;
            goto label_21058c;
        }
    }
    ctx->pc = 0x210514u;
    // 0x210514: 0xe0202d  daddu       $a0, $a3, $zero
    ctx->pc = 0x210514u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x210518: 0xc09fa94  jal         func_27EA50
    ctx->pc = 0x210518u;
    SET_GPR_U32(ctx, 31, 0x210520u);
    ctx->pc = 0x21051Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x210518u;
    // 0x21051c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x27EA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27EA50u, 0x210518u, 0x210520u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x210520u;
label_210520:
    // 0x210520: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x210520u;
    {
        const bool branch_taken_0x210520 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x210524u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x210520u;
        // 0x210524: 0x8e4206ec  lw          $v0, 0x6EC($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1772)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x210520) {
            ctx->pc = 0x210590u;
            goto label_210590;
        }
    }
    ctx->pc = 0x210528u;
label_210528:
    // 0x210528: 0x8e420304  lw          $v0, 0x304($s2)
    ctx->pc = 0x210528u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
    // 0x21052c: 0x8c433d34  lw          $v1, 0x3D34($v0)
    ctx->pc = 0x21052cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 15668)));
    // 0x210530: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x210530u;
    {
        const bool branch_taken_0x210530 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x210534u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x210530u;
        // 0x210534: 0x8c443d38  lw          $a0, 0x3D38($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 15672)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x210530) {
            ctx->pc = 0x210584u;
            goto label_210584;
        }
    }
    ctx->pc = 0x210538u;
label_210538:
    // 0x210538: 0x8e420304  lw          $v0, 0x304($s2)
    ctx->pc = 0x210538u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
    // 0x21053c: 0x8c431810  lw          $v1, 0x1810($v0)
    ctx->pc = 0x21053cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 6160)));
    // 0x210540: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x210540u;
    {
        const bool branch_taken_0x210540 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x210544u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x210540u;
        // 0x210544: 0x8c441814  lw          $a0, 0x1814($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 6164)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x210540) {
            ctx->pc = 0x210584u;
            goto label_210584;
        }
    }
    ctx->pc = 0x210548u;
label_210548:
    // 0x210548: 0x8e420304  lw          $v0, 0x304($s2)
    ctx->pc = 0x210548u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
    // 0x21054c: 0x8c431810  lw          $v1, 0x1810($v0)
    ctx->pc = 0x21054cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 6160)));
    // 0x210550: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x210550u;
    {
        const bool branch_taken_0x210550 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x210554u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x210550u;
        // 0x210554: 0x8c441814  lw          $a0, 0x1814($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 6164)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x210550) {
            ctx->pc = 0x210584u;
            goto label_210584;
        }
    }
    ctx->pc = 0x210558u;
label_210558:
    // 0x210558: 0x8e420304  lw          $v0, 0x304($s2)
    ctx->pc = 0x210558u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
    // 0x21055c: 0x8c430fd4  lw          $v1, 0xFD4($v0)
    ctx->pc = 0x21055cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4052)));
    // 0x210560: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x210560u;
    {
        const bool branch_taken_0x210560 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x210564u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x210560u;
        // 0x210564: 0x8c440fd8  lw          $a0, 0xFD8($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4056)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x210560) {
            ctx->pc = 0x210584u;
            goto label_210584;
        }
    }
    ctx->pc = 0x210568u;
label_210568:
    // 0x210568: 0x8e420304  lw          $v0, 0x304($s2)
    ctx->pc = 0x210568u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
    // 0x21056c: 0x8c431bc0  lw          $v1, 0x1BC0($v0)
    ctx->pc = 0x21056cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 7104)));
    // 0x210570: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x210570u;
    {
        const bool branch_taken_0x210570 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x210574u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x210570u;
        // 0x210574: 0x8c441bc4  lw          $a0, 0x1BC4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 7108)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x210570) {
            ctx->pc = 0x210584u;
            goto label_210584;
        }
    }
    ctx->pc = 0x210578u;
label_210578:
    // 0x210578: 0x8e420304  lw          $v0, 0x304($s2)
    ctx->pc = 0x210578u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
    // 0x21057c: 0x8c432d38  lw          $v1, 0x2D38($v0)
    ctx->pc = 0x21057cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11576)));
    // 0x210580: 0x8c442d3c  lw          $a0, 0x2D3C($v0)
    ctx->pc = 0x210580u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11580)));
label_210584:
    // 0x210584: 0x628821  addu        $s1, $v1, $v0
    ctx->pc = 0x210584u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x210588: 0x828021  addu        $s0, $a0, $v0
    ctx->pc = 0x210588u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_21058c:
    // 0x21058c: 0x8e4206ec  lw          $v0, 0x6EC($s2)
    ctx->pc = 0x21058cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1772)));
label_210590:
    // 0x210590: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x210590u;
    {
        const bool branch_taken_0x210590 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x210594u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x210590u;
        // 0x210594: 0x24020009  addiu       $v0, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
        if (branch_taken_0x210590) {
            ctx->pc = 0x2105C8u;
            goto label_2105c8;
        }
    }
    ctx->pc = 0x210598u;
    // 0x210598: 0x92431650  lbu         $v1, 0x1650($s2)
    ctx->pc = 0x210598u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 5712)));
    // 0x21059c: 0x14620005  bne         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x21059Cu;
    {
        const bool branch_taken_0x21059c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2105A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21059Cu;
        // 0x2105a0: 0x8e420304  lw          $v0, 0x304($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21059c) {
            ctx->pc = 0x2105B4u;
            goto label_2105b4;
        }
    }
    ctx->pc = 0x2105A4u;
    // 0x2105a4: 0xa24002f7  sb          $zero, 0x2F7($s2)
    ctx->pc = 0x2105a4u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 759), (uint8_t)GPR_U32(ctx, 0));
    // 0x2105a8: 0x8c430490  lw          $v1, 0x490($v0)
    ctx->pc = 0x2105a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1168)));
    // 0x2105ac: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2105ACu;
    {
        const bool branch_taken_0x2105ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2105B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2105ACu;
        // 0x2105b0: 0x8c440494  lw          $a0, 0x494($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1172)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2105ac) {
            ctx->pc = 0x2105C0u;
            goto label_2105c0;
        }
    }
    ctx->pc = 0x2105B4u;
label_2105b4:
    // 0x2105b4: 0xa24002f7  sb          $zero, 0x2F7($s2)
    ctx->pc = 0x2105b4u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 759), (uint8_t)GPR_U32(ctx, 0));
    // 0x2105b8: 0x8c43044c  lw          $v1, 0x44C($v0)
    ctx->pc = 0x2105b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1100)));
    // 0x2105bc: 0x8c440450  lw          $a0, 0x450($v0)
    ctx->pc = 0x2105bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1104)));
label_2105c0:
    // 0x2105c0: 0x628821  addu        $s1, $v1, $v0
    ctx->pc = 0x2105c0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2105c4: 0x828021  addu        $s0, $a0, $v0
    ctx->pc = 0x2105c4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_2105c8:
    // 0x2105c8: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2105c8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2105cc: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x2105ccu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2105d0: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x2105d0u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x2105d4: 0x260402d  daddu       $t0, $s3, $zero
    ctx->pc = 0x2105d4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2105d8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2105d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2105dc: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2105dcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2105e0: 0xc0aa15e  jal         func_2A8578
    ctx->pc = 0x2105E0u;
    SET_GPR_U32(ctx, 31, 0x2105E8u);
    ctx->pc = 0x2105E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2105E0u;
    // 0x2105e4: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A8578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8578u, 0x2105E0u, 0x2105E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2105E8u;
label_2105e8:
    // 0x2105e8: 0x3aa204e2  xori        $v0, $s5, 0x4E2
    ctx->pc = 0x2105e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 21) ^ (uint64_t)(uint16_t)1250);
    // 0x2105ec: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2105ECu;
    {
        const bool branch_taken_0x2105ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2105F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2105ECu;
        // 0x2105f0: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2105ec) {
            ctx->pc = 0x21060Cu;
            goto label_21060c;
        }
    }
    ctx->pc = 0x2105F4u;
    // 0x2105f4: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x2105f4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2105f8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2105f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2105fc: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2105fcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x210600: 0x24080002  addiu       $t0, $zero, 0x2
    ctx->pc = 0x210600u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x210604: 0xc0aa182  jal         func_2A8608
    ctx->pc = 0x210604u;
    SET_GPR_U32(ctx, 31, 0x21060Cu);
    ctx->pc = 0x210608u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x210604u;
    // 0x210608: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A8608u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8608u, 0x210604u, 0x21060Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21060Cu;
label_21060c:
    // 0x21060c: 0x8e4200f0  lw          $v0, 0xF0($s2)
    ctx->pc = 0x21060cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 240)));
    // 0x210610: 0x264305c0  addiu       $v1, $s2, 0x5C0
    ctx->pc = 0x210610u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 1472));
    // 0x210614: 0x50620008  beql        $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x210614u;
    {
        const bool branch_taken_0x210614 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x210614) {
            ctx->pc = 0x210618u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x210614u;
            // 0x210618: 0x924202f6  lbu         $v0, 0x2F6($s2) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 758)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x210638u;
            goto label_210638;
        }
    }
    ctx->pc = 0x21061Cu;
    // 0x21061c: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x21061cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x210620: 0xe64005c0  swc1        $f0, 0x5C0($s2)
    ctx->pc = 0x210620u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 1472), bits); }
    // 0x210624: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x210624u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x210628: 0xe4610004  swc1        $f1, 0x4($v1)
    ctx->pc = 0x210628u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x21062c: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x21062cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x210630: 0xe4600008  swc1        $f0, 0x8($v1)
    ctx->pc = 0x210630u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
    // 0x210634: 0x924202f6  lbu         $v0, 0x2F6($s2)
    ctx->pc = 0x210634u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 758)));
label_210638:
    // 0x210638: 0x2403001e  addiu       $v1, $zero, 0x1E
    ctx->pc = 0x210638u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x21063c: 0xae4305f0  sw          $v1, 0x5F0($s2)
    ctx->pc = 0x21063cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 1520), GPR_U32(ctx, 3));
    // 0x210640: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x210640u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x210644: 0xa24202f6  sb          $v0, 0x2F6($s2)
    ctx->pc = 0x210644u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 758), (uint8_t)GPR_U32(ctx, 2));
label_210648:
    // 0x210648: 0x92431650  lbu         $v1, 0x1650($s2)
    ctx->pc = 0x210648u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 5712)));
    // 0x21064c: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x21064cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x210650: 0x54620006  bnel        $v1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x210650u;
    {
        const bool branch_taken_0x210650 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x210650) {
            ctx->pc = 0x210654u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x210650u;
            // 0x210654: 0x8e421644  lw          $v0, 0x1644($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 5700)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x21066Cu;
            goto label_21066c;
        }
    }
    ctx->pc = 0x210658u;
    // 0x210658: 0x8e4216d0  lw          $v0, 0x16D0($s2)
    ctx->pc = 0x210658u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 5840)));
    // 0x21065c: 0x3c030002  lui         $v1, 0x2
    ctx->pc = 0x21065cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2 << 16));
    // 0x210660: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x210660u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x210664: 0xae4216d0  sw          $v0, 0x16D0($s2)
    ctx->pc = 0x210664u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 5840), GPR_U32(ctx, 2));
    // 0x210668: 0x8e421644  lw          $v0, 0x1644($s2)
    ctx->pc = 0x210668u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 5700)));
label_21066c:
    // 0x21066c: 0x3c030010  lui         $v1, 0x10
    ctx->pc = 0x21066cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16 << 16));
    // 0x210670: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x210670u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x210674: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x210674u;
    {
        const bool branch_taken_0x210674 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x210678u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x210674u;
        // 0x210678: 0x3c030001  lui         $v1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x210674) {
            ctx->pc = 0x210688u;
            goto label_210688;
        }
    }
    ctx->pc = 0x21067Cu;
    // 0x21067c: 0x8e4216d0  lw          $v0, 0x16D0($s2)
    ctx->pc = 0x21067cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 5840)));
    // 0x210680: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x210680u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x210684: 0xae4216d0  sw          $v0, 0x16D0($s2)
    ctx->pc = 0x210684u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 5840), GPR_U32(ctx, 2));
label_210688:
    // 0x210688: 0xc641024c  lwc1        $f1, 0x24C($s2)
    ctx->pc = 0x210688u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 588)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x21068c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x21068cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x210690: 0x0  nop
    ctx->pc = 0x210690u;
    // NOP
    // 0x210694: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x210694u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x210698: 0x0  nop
    ctx->pc = 0x210698u;
    // NOP
    // 0x21069c: 0x45000020  bc1f        . + 4 + (0x20 << 2)
    ctx->pc = 0x21069Cu;
    {
        const bool branch_taken_0x21069c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2106A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21069Cu;
        // 0x2106a0: 0x3c020074  lui         $v0, 0x74 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)116 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21069c) {
            ctx->pc = 0x210720u;
            goto label_210720;
        }
    }
    ctx->pc = 0x2106A4u;
    // 0x2106a4: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2106a4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2106a8: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x2106a8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x2106ac: 0xc055f06  jal         func_157C18
    ctx->pc = 0x2106ACu;
    SET_GPR_U32(ctx, 31, 0x2106B4u);
    ctx->pc = 0x2106B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2106ACu;
    // 0x2106b0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x157C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157C18u, 0x2106ACu, 0x2106B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2106B4u;
label_2106b4:
    // 0x2106b4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2106b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2106b8: 0xc053e7c  jal         func_14F9F0
    ctx->pc = 0x2106B8u;
    SET_GPR_U32(ctx, 31, 0x2106C0u);
    ctx->pc = 0x2106BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2106B8u;
    // 0x2106bc: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F9F0u, 0x2106B8u, 0x2106C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2106C0u;
label_2106c0:
    // 0x2106c0: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x2106c0u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x2106c4: 0xc053e4a  jal         func_14F928
    ctx->pc = 0x2106C4u;
    SET_GPR_U32(ctx, 31, 0x2106CCu);
    ctx->pc = 0x2106C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2106C4u;
    // 0x2106c8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F928u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F928u, 0x2106C4u, 0x2106CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2106CCu;
label_2106cc:
    // 0x2106cc: 0x8e4300f0  lw          $v1, 0xF0($s2)
    ctx->pc = 0x2106ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 240)));
    // 0x2106d0: 0xc64105c0  lwc1        $f1, 0x5C0($s2)
    ctx->pc = 0x2106d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 1472)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2106d4: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x2106d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2106d8: 0x3c013f7e  lui         $at, 0x3F7E
    ctx->pc = 0x2106d8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16254 << 16));
    // 0x2106dc: 0x3421b852  ori         $at, $at, 0xB852
    ctx->pc = 0x2106dcu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)47186);
    // 0x2106e0: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x2106e0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x2106e4: 0x3c013ba3  lui         $at, 0x3BA3
    ctx->pc = 0x2106e4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15267 << 16));
    // 0x2106e8: 0x3421d70a  ori         $at, $at, 0xD70A
    ctx->pc = 0x2106e8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55050);
    // 0x2106ec: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x2106ecu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2106f0: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x2106f0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x2106f4: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x2106f4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x2106f8: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2106f8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2106fc: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x2106fcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x210700: 0x8e4200f0  lw          $v0, 0xF0($s2)
    ctx->pc = 0x210700u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 240)));
    // 0x210704: 0xc64105c8  lwc1        $f1, 0x5C8($s2)
    ctx->pc = 0x210704u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 1480)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x210708: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x210708u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x21070c: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x21070cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x210710: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x210710u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x210714: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x210714u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x210718: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x210718u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    // 0x21071c: 0x3c020074  lui         $v0, 0x74
    ctx->pc = 0x21071cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)116 << 16));
label_210720:
    // 0x210720: 0x8e4417d0  lw          $a0, 0x17D0($s2)
    ctx->pc = 0x210720u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 6096)));
    // 0x210724: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x210724u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x210728: 0x244274a0  addiu       $v0, $v0, 0x74A0
    ctx->pc = 0x210728u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 29856));
    // 0x21072c: 0x30840007  andi        $a0, $a0, 0x7
    ctx->pc = 0x21072cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)7);
    // 0x210730: 0x8c430210  lw          $v1, 0x210($v0)
    ctx->pc = 0x210730u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 528)));
    // 0x210734: 0x30630007  andi        $v1, $v1, 0x7
    ctx->pc = 0x210734u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)7);
    // 0x210738: 0x5464000c  bnel        $v1, $a0, . + 4 + (0xC << 2)
    ctx->pc = 0x210738u;
    {
        const bool branch_taken_0x210738 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        if (branch_taken_0x210738) {
            ctx->pc = 0x21073Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x210738u;
            // 0x21073c: 0x8e431644  lw          $v1, 0x1644($s2) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 5700)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x21076Cu;
            goto label_21076c;
        }
    }
    ctx->pc = 0x210740u;
    // 0x210740: 0xc6410618  lwc1        $f1, 0x618($s2)
    ctx->pc = 0x210740u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 1560)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x210744: 0x3c014280  lui         $at, 0x4280
    ctx->pc = 0x210744u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17024 << 16));
    // 0x210748: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x210748u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x21074c: 0x0  nop
    ctx->pc = 0x21074cu;
    // NOP
    // 0x210750: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x210750u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x210754: 0x0  nop
    ctx->pc = 0x210754u;
    // NOP
    // 0x210758: 0x45020004  bc1fl       . + 4 + (0x4 << 2)
    ctx->pc = 0x210758u;
    {
        const bool branch_taken_0x210758 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x210758) {
            ctx->pc = 0x21075Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x210758u;
            // 0x21075c: 0x8e431644  lw          $v1, 0x1644($s2) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 5700)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x21076Cu;
            goto label_21076c;
        }
    }
    ctx->pc = 0x210760u;
    // 0x210760: 0xc09bcca  jal         func_26F328
    ctx->pc = 0x210760u;
    SET_GPR_U32(ctx, 31, 0x210768u);
    ctx->pc = 0x210764u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x210760u;
    // 0x210764: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x26F328u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26F328u, 0x210760u, 0x210768u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x210768u;
label_210768:
    // 0x210768: 0x8e431644  lw          $v1, 0x1644($s2)
    ctx->pc = 0x210768u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 5700)));
label_21076c:
    // 0x21076c: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x21076cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x210770: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x210770u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
    // 0x210774: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x210774u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x210778: 0x10400016  beqz        $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x210778u;
    {
        const bool branch_taken_0x210778 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x21077Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x210778u;
        // 0x21077c: 0x3c021000  lui         $v0, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x210778) {
            ctx->pc = 0x2107D4u;
            goto label_2107d4;
        }
    }
    ctx->pc = 0x210780u;
    // 0x210780: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x210780u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x210784: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x210784u;
    {
        const bool branch_taken_0x210784 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x210788u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x210784u;
        // 0x210788: 0x3c040046  lui         $a0, 0x46 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)70 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x210784) {
            ctx->pc = 0x2107A8u;
            goto label_2107a8;
        }
    }
    ctx->pc = 0x21078Cu;
    // 0x21078c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x21078cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x210790: 0x24842fc0  addiu       $a0, $a0, 0x2FC0
    ctx->pc = 0x210790u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 12224));
    // 0x210794: 0xc04d476  jal         func_1351D8
    ctx->pc = 0x210794u;
    SET_GPR_U32(ctx, 31, 0x21079Cu);
    ctx->pc = 0x210798u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x210794u;
    // 0x210798: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1351D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1351D8u, 0x210794u, 0x21079Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21079Cu;
label_21079c:
    // 0x21079c: 0x8e4216d0  lw          $v0, 0x16D0($s2)
    ctx->pc = 0x21079cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 5840)));
    // 0x2107a0: 0x34421000  ori         $v0, $v0, 0x1000
    ctx->pc = 0x2107a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4096);
    // 0x2107a4: 0xae4216d0  sw          $v0, 0x16D0($s2)
    ctx->pc = 0x2107a4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 5840), GPR_U32(ctx, 2));
label_2107a8:
    // 0x2107a8: 0x8e4216ec  lw          $v0, 0x16EC($s2)
    ctx->pc = 0x2107a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 5868)));
    // 0x2107ac: 0x10400067  beqz        $v0, . + 4 + (0x67 << 2)
    ctx->pc = 0x2107ACu;
    {
        const bool branch_taken_0x2107ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2107B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2107ACu;
        // 0x2107b0: 0x24020009  addiu       $v0, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2107ac) {
            ctx->pc = 0x21094Cu;
            goto label_21094c;
        }
    }
    ctx->pc = 0x2107B4u;
    // 0x2107b4: 0x92431650  lbu         $v1, 0x1650($s2)
    ctx->pc = 0x2107b4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 5712)));
    // 0x2107b8: 0x54620004  bnel        $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2107B8u;
    {
        const bool branch_taken_0x2107b8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2107b8) {
            ctx->pc = 0x2107BCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2107B8u;
            // 0x2107bc: 0x8e421644  lw          $v0, 0x1644($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 5700)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2107CCu;
            goto label_2107cc;
        }
    }
    ctx->pc = 0x2107C0u;
    // 0x2107c0: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2107c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2107c4: 0xa24202f6  sb          $v0, 0x2F6($s2)
    ctx->pc = 0x2107c4u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 758), (uint8_t)GPR_U32(ctx, 2));
    // 0x2107c8: 0x8e421644  lw          $v0, 0x1644($s2)
    ctx->pc = 0x2107c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 5700)));
label_2107cc:
    // 0x2107cc: 0x1000005c  b           . + 4 + (0x5C << 2)
    ctx->pc = 0x2107CCu;
    {
        const bool branch_taken_0x2107cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2107D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2107CCu;
        // 0x2107d0: 0x30428000  andi        $v0, $v0, 0x8000 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32768);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2107cc) {
            ctx->pc = 0x210940u;
            goto label_210940;
        }
    }
    ctx->pc = 0x2107D4u;
label_2107d4:
    // 0x2107d4: 0x8e4205f0  lw          $v0, 0x5F0($s2)
    ctx->pc = 0x2107d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1520)));
    // 0x2107d8: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2107D8u;
    {
        const bool branch_taken_0x2107d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2107DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2107D8u;
        // 0x2107dc: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2107d8) {
            ctx->pc = 0x2107E8u;
            goto label_2107e8;
        }
    }
    ctx->pc = 0x2107E0u;
    // 0x2107e0: 0x10000038  b           . + 4 + (0x38 << 2)
    ctx->pc = 0x2107E0u;
    {
        const bool branch_taken_0x2107e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2107E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2107E0u;
        // 0x2107e4: 0xae4205f0  sw          $v0, 0x5F0($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 1520), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2107e0) {
            ctx->pc = 0x2108C4u;
            goto label_2108c4;
        }
    }
    ctx->pc = 0x2107E8u;
label_2107e8:
    // 0x2107e8: 0x8e4216d0  lw          $v0, 0x16D0($s2)
    ctx->pc = 0x2107e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 5840)));
    // 0x2107ec: 0x3c030020  lui         $v1, 0x20
    ctx->pc = 0x2107ecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32 << 16));
    // 0x2107f0: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2107f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x2107f4: 0x50400052  beql        $v0, $zero, . + 4 + (0x52 << 2)
    ctx->pc = 0x2107F4u;
    {
        const bool branch_taken_0x2107f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2107f4) {
            ctx->pc = 0x2107F8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2107F4u;
            // 0x2107f8: 0x8e4216ec  lw          $v0, 0x16EC($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 5868)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x210940u;
            goto label_210940;
        }
    }
    ctx->pc = 0x2107FCu;
    // 0x2107fc: 0xc6410618  lwc1        $f1, 0x618($s2)
    ctx->pc = 0x2107fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 1560)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x210800: 0x3c014280  lui         $at, 0x4280
    ctx->pc = 0x210800u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17024 << 16));
    // 0x210804: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x210804u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x210808: 0x0  nop
    ctx->pc = 0x210808u;
    // NOP
    // 0x21080c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x21080cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x210810: 0x0  nop
    ctx->pc = 0x210810u;
    // NOP
    // 0x210814: 0x45000023  bc1f        . + 4 + (0x23 << 2)
    ctx->pc = 0x210814u;
    {
        const bool branch_taken_0x210814 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x210818u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x210814u;
        // 0x210818: 0x260474a0  addiu       $a0, $s0, 0x74A0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 29856));
        ctx->in_delay_slot = false;
        if (branch_taken_0x210814) {
            ctx->pc = 0x2108A4u;
            goto label_2108a4;
        }
    }
    ctx->pc = 0x21081Cu;
    // 0x21081c: 0x8e4317d0  lw          $v1, 0x17D0($s2)
    ctx->pc = 0x21081cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 6096)));
    // 0x210820: 0x8c820210  lw          $v0, 0x210($a0)
    ctx->pc = 0x210820u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 528)));
    // 0x210824: 0x30630007  andi        $v1, $v1, 0x7
    ctx->pc = 0x210824u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)7);
    // 0x210828: 0x30420007  andi        $v0, $v0, 0x7
    ctx->pc = 0x210828u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)7);
    // 0x21082c: 0x1443001d  bne         $v0, $v1, . + 4 + (0x1D << 2)
    ctx->pc = 0x21082Cu;
    {
        const bool branch_taken_0x21082c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x21082c) {
            ctx->pc = 0x2108A4u;
            goto label_2108a4;
        }
    }
    ctx->pc = 0x210834u;
    // 0x210834: 0x8e4316d4  lw          $v1, 0x16D4($s2)
    ctx->pc = 0x210834u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 5844)));
    // 0x210838: 0x3c02f7ff  lui         $v0, 0xF7FF
    ctx->pc = 0x210838u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63487 << 16));
    // 0x21083c: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x21083cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x210840: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x210840u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x210844: 0xc0b6dac  jal         func_2DB6B0
    ctx->pc = 0x210844u;
    SET_GPR_U32(ctx, 31, 0x21084Cu);
    ctx->pc = 0x210848u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x210844u;
    // 0x210848: 0xae4316d4  sw          $v1, 0x16D4($s2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 18), 5844), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DB6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DB6B0u, 0x210844u, 0x21084Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21084Cu;
label_21084c:
    // 0x21084c: 0x8c4500f0  lw          $a1, 0xF0($v0)
    ctx->pc = 0x21084cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 240)));
    // 0x210850: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x210850u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x210854: 0xc0a9d38  jal         func_2A74E0
    ctx->pc = 0x210854u;
    SET_GPR_U32(ctx, 31, 0x21085Cu);
    ctx->pc = 0x210858u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x210854u;
    // 0x210858: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A74E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A74E0u, 0x210854u, 0x21085Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21085Cu;
label_21085c:
    // 0x21085c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x21085cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x210860: 0xc0a9f28  jal         func_2A7CA0
    ctx->pc = 0x210860u;
    SET_GPR_U32(ctx, 31, 0x210868u);
    ctx->pc = 0x210864u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x210860u;
    // 0x210864: 0x264516a0  addiu       $a1, $s2, 0x16A0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 5792));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A7CA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A7CA0u, 0x210860u, 0x210868u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x210868u;
label_210868:
    // 0x210868: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x210868u;
    {
        const bool branch_taken_0x210868 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x21086Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x210868u;
        // 0x21086c: 0x3c030800  lui         $v1, 0x800 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2048 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x210868) {
            ctx->pc = 0x21087Cu;
            goto label_21087c;
        }
    }
    ctx->pc = 0x210870u;
    // 0x210870: 0x8e4216d4  lw          $v0, 0x16D4($s2)
    ctx->pc = 0x210870u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 5844)));
    // 0x210874: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x210874u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x210878: 0xae4216d4  sw          $v0, 0x16D4($s2)
    ctx->pc = 0x210878u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 5844), GPR_U32(ctx, 2));
label_21087c:
    // 0x21087c: 0xc6410510  lwc1        $f1, 0x510($s2)
    ctx->pc = 0x21087cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 1296)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x210880: 0x3c014100  lui         $at, 0x4100
    ctx->pc = 0x210880u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16640 << 16));
    // 0x210884: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x210884u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x210888: 0x0  nop
    ctx->pc = 0x210888u;
    // NOP
    // 0x21088c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x21088cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x210890: 0x0  nop
    ctx->pc = 0x210890u;
    // NOP
    // 0x210894: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x210894u;
    {
        const bool branch_taken_0x210894 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x210898u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x210894u;
        // 0x210898: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x210894) {
            ctx->pc = 0x2108A0u;
            goto label_2108a0;
        }
    }
    ctx->pc = 0x21089Cu;
    // 0x21089c: 0xa24202f6  sb          $v0, 0x2F6($s2)
    ctx->pc = 0x21089cu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 758), (uint8_t)GPR_U32(ctx, 2));
label_2108a0:
    // 0x2108a0: 0xc6410618  lwc1        $f1, 0x618($s2)
    ctx->pc = 0x2108a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 1560)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2108a4:
    // 0x2108a4: 0x3c014110  lui         $at, 0x4110
    ctx->pc = 0x2108a4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16656 << 16));
    // 0x2108a8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2108a8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2108ac: 0x0  nop
    ctx->pc = 0x2108acu;
    // NOP
    // 0x2108b0: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2108b0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2108b4: 0x0  nop
    ctx->pc = 0x2108b4u;
    // NOP
    // 0x2108b8: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x2108B8u;
    {
        const bool branch_taken_0x2108b8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2108BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2108B8u;
        // 0x2108bc: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2108b8) {
            ctx->pc = 0x2108C4u;
            goto label_2108c4;
        }
    }
    ctx->pc = 0x2108C0u;
    // 0x2108c0: 0xa24202f6  sb          $v0, 0x2F6($s2)
    ctx->pc = 0x2108c0u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 758), (uint8_t)GPR_U32(ctx, 2));
label_2108c4:
    // 0x2108c4: 0x8e4216d0  lw          $v0, 0x16D0($s2)
    ctx->pc = 0x2108c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 5840)));
    // 0x2108c8: 0x3c030020  lui         $v1, 0x20
    ctx->pc = 0x2108c8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32 << 16));
    // 0x2108cc: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2108ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x2108d0: 0x1040001a  beqz        $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x2108D0u;
    {
        const bool branch_taken_0x2108d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2108D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2108D0u;
        // 0x2108d4: 0x260474a0  addiu       $a0, $s0, 0x74A0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 29856));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2108d0) {
            ctx->pc = 0x21093Cu;
            goto label_21093c;
        }
    }
    ctx->pc = 0x2108D8u;
    // 0x2108d8: 0x8e4317d0  lw          $v1, 0x17D0($s2)
    ctx->pc = 0x2108d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 6096)));
    // 0x2108dc: 0x8c820210  lw          $v0, 0x210($a0)
    ctx->pc = 0x2108dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 528)));
    // 0x2108e0: 0x30630007  andi        $v1, $v1, 0x7
    ctx->pc = 0x2108e0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)7);
    // 0x2108e4: 0x30420007  andi        $v0, $v0, 0x7
    ctx->pc = 0x2108e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)7);
    // 0x2108e8: 0x54430015  bnel        $v0, $v1, . + 4 + (0x15 << 2)
    ctx->pc = 0x2108E8u;
    {
        const bool branch_taken_0x2108e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x2108e8) {
            ctx->pc = 0x2108ECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2108E8u;
            // 0x2108ec: 0x8e4216ec  lw          $v0, 0x16EC($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 5868)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x210940u;
            goto label_210940;
        }
    }
    ctx->pc = 0x2108F0u;
    // 0x2108f0: 0x3c020058  lui         $v0, 0x58
    ctx->pc = 0x2108f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)88 << 16));
    // 0x2108f4: 0x8e4500f0  lw          $a1, 0xF0($s2)
    ctx->pc = 0x2108f4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 240)));
    // 0x2108f8: 0x245064f0  addiu       $s0, $v0, 0x64F0
    ctx->pc = 0x2108f8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 25840));
    // 0x2108fc: 0x3c014080  lui         $at, 0x4080
    ctx->pc = 0x2108fcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16512 << 16));
    // 0x210900: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x210900u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x210904: 0xc0a467e  jal         func_2919F8
    ctx->pc = 0x210904u;
    SET_GPR_U32(ctx, 31, 0x21090Cu);
    ctx->pc = 0x210908u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x210904u;
    // 0x210908: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2919F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2919F8u, 0x210904u, 0x21090Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21090Cu;
label_21090c:
    // 0x21090c: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x21090Cu;
    {
        const bool branch_taken_0x21090c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x210910u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21090Cu;
        // 0x210910: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21090c) {
            ctx->pc = 0x210918u;
            goto label_210918;
        }
    }
    ctx->pc = 0x210914u;
    // 0x210914: 0xa24202f6  sb          $v0, 0x2F6($s2)
    ctx->pc = 0x210914u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 758), (uint8_t)GPR_U32(ctx, 2));
label_210918:
    // 0x210918: 0x8e4500f0  lw          $a1, 0xF0($s2)
    ctx->pc = 0x210918u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 240)));
    // 0x21091c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x21091cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x210920: 0x3c014040  lui         $at, 0x4040
    ctx->pc = 0x210920u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16448 << 16));
    // 0x210924: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x210924u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x210928: 0xc0a46b2  jal         func_291AC8
    ctx->pc = 0x210928u;
    SET_GPR_U32(ctx, 31, 0x210930u);
    ctx->pc = 0x21092Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x210928u;
    // 0x21092c: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x291AC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x291AC8u, 0x210928u, 0x210930u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x210930u;
label_210930:
    // 0x210930: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x210930u;
    {
        const bool branch_taken_0x210930 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x210934u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x210930u;
        // 0x210934: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x210930) {
            ctx->pc = 0x21093Cu;
            goto label_21093c;
        }
    }
    ctx->pc = 0x210938u;
    // 0x210938: 0xa24202f6  sb          $v0, 0x2F6($s2)
    ctx->pc = 0x210938u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 758), (uint8_t)GPR_U32(ctx, 2));
label_21093c:
    // 0x21093c: 0x8e4216ec  lw          $v0, 0x16EC($s2)
    ctx->pc = 0x21093cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 5868)));
label_210940:
    // 0x210940: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x210940u;
    {
        const bool branch_taken_0x210940 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x210944u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x210940u;
        // 0x210944: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x210940) {
            ctx->pc = 0x21094Cu;
            goto label_21094c;
        }
    }
    ctx->pc = 0x210948u;
    // 0x210948: 0xa24202f6  sb          $v0, 0x2F6($s2)
    ctx->pc = 0x210948u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 758), (uint8_t)GPR_U32(ctx, 2));
label_21094c:
    // 0x21094c: 0x8e4216d0  lw          $v0, 0x16D0($s2)
    ctx->pc = 0x21094cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 5840)));
    // 0x210950: 0x3c032000  lui         $v1, 0x2000
    ctx->pc = 0x210950u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)8192 << 16));
    // 0x210954: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x210954u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x210958: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x210958u;
    {
        const bool branch_taken_0x210958 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x21095Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x210958u;
        // 0x21095c: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x210958) {
            ctx->pc = 0x210968u;
            goto label_210968;
        }
    }
    ctx->pc = 0x210960u;
    // 0x210960: 0x24160001  addiu       $s6, $zero, 0x1
    ctx->pc = 0x210960u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x210964: 0xa24202f6  sb          $v0, 0x2F6($s2)
    ctx->pc = 0x210964u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 758), (uint8_t)GPR_U32(ctx, 2));
label_210968:
    // 0x210968: 0xc64116c0  lwc1        $f1, 0x16C0($s2)
    ctx->pc = 0x210968u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 5824)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x21096c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x21096cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x210970: 0x0  nop
    ctx->pc = 0x210970u;
    // NOP
    // 0x210974: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x210974u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x210978: 0x0  nop
    ctx->pc = 0x210978u;
    // NOP
    // 0x21097c: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x21097Cu;
    {
        const bool branch_taken_0x21097c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x210980u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21097Cu;
        // 0x210980: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21097c) {
            ctx->pc = 0x210988u;
            goto label_210988;
        }
    }
    ctx->pc = 0x210984u;
    // 0x210984: 0xa24202f6  sb          $v0, 0x2F6($s2)
    ctx->pc = 0x210984u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 758), (uint8_t)GPR_U32(ctx, 2));
label_210988:
    // 0x210988: 0x924302f6  lbu         $v1, 0x2F6($s2)
    ctx->pc = 0x210988u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 758)));
    // 0x21098c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x21098cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x210990: 0x1462014a  bne         $v1, $v0, . + 4 + (0x14A << 2)
    ctx->pc = 0x210990u;
    {
        const bool branch_taken_0x210990 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x210994u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x210990u;
        // 0x210994: 0x7bb00070  lq          $s0, 0x70($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x210990) {
            ctx->pc = 0x210EBCu;
            goto label_210ebc;
        }
    }
    ctx->pc = 0x210998u;
    // 0x210998: 0xc09cdbe  jal         func_2736F8
    ctx->pc = 0x210998u;
    SET_GPR_U32(ctx, 31, 0x2109A0u);
    ctx->pc = 0x21099Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x210998u;
    // 0x21099c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2736F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2736F8u, 0x210998u, 0x2109A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2109A0u;
label_2109a0:
    // 0x2109a0: 0x92431650  lbu         $v1, 0x1650($s2)
    ctx->pc = 0x2109a0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 5712)));
    // 0x2109a4: 0x2c62001a  sltiu       $v0, $v1, 0x1A
    ctx->pc = 0x2109a4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)26) ? 1 : 0);
    // 0x2109a8: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2109A8u;
    {
        const bool branch_taken_0x2109a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2109ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2109A8u;
        // 0x2109ac: 0x3c020043  lui         $v0, 0x43 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)67 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2109a8) {
            ctx->pc = 0x2109C8u;
            goto label_2109c8;
        }
    }
    ctx->pc = 0x2109B0u;
    // 0x2109b0: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2109b0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2109b4: 0x24423e00  addiu       $v0, $v0, 0x3E00
    ctx->pc = 0x2109b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 15872));
    // 0x2109b8: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2109b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2109bc: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x2109bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2109c0: 0x800008  jr          $a0
    ctx->pc = 0x2109C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2109C8u: goto label_2109c8;
            case 0x210A0Cu: goto label_210a0c;
            case 0x210EB8u: goto label_210eb8;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2109C0u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x2109C8u;
label_2109c8:
    // 0x2109c8: 0xc0c73f8  jal         func_31CFE0
    ctx->pc = 0x2109C8u;
    SET_GPR_U32(ctx, 31, 0x2109D0u);
    ctx->pc = 0x31CFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31CFE0u, 0x2109C8u, 0x2109D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2109D0u;
label_2109d0:
    // 0x2109d0: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2109d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2109d4: 0x1040001c  beqz        $v0, . + 4 + (0x1C << 2)
    ctx->pc = 0x2109D4u;
    {
        const bool branch_taken_0x2109d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2109d4) {
            ctx->pc = 0x210A48u;
            goto label_210a48;
        }
    }
    ctx->pc = 0x2109DCu;
    // 0x2109dc: 0xc64116c0  lwc1        $f1, 0x16C0($s2)
    ctx->pc = 0x2109dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 5824)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2109e0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2109e0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2109e4: 0x0  nop
    ctx->pc = 0x2109e4u;
    // NOP
    // 0x2109e8: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x2109e8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2109ec: 0x0  nop
    ctx->pc = 0x2109ecu;
    // NOP
    // 0x2109f0: 0x45000015  bc1f        . + 4 + (0x15 << 2)
    ctx->pc = 0x2109F0u;
    {
        const bool branch_taken_0x2109f0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2109f0) {
            ctx->pc = 0x210A48u;
            goto label_210a48;
        }
    }
    ctx->pc = 0x2109F8u;
    // 0x2109f8: 0x8e4216ec  lw          $v0, 0x16EC($s2)
    ctx->pc = 0x2109f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 5868)));
    // 0x2109fc: 0x1c400012  bgtz        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x2109FCu;
    {
        const bool branch_taken_0x2109fc = (GPR_S64(ctx, 2) > 0);
        ctx->pc = 0x210A00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2109FCu;
        // 0x210a00: 0x2402006b  addiu       $v0, $zero, 0x6B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 107));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2109fc) {
            ctx->pc = 0x210A48u;
            goto label_210a48;
        }
    }
    ctx->pc = 0x210A04u;
    // 0x210a04: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x210A04u;
    {
        const bool branch_taken_0x210a04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x210A08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x210A04u;
        // 0x210a08: 0xa24002f7  sb          $zero, 0x2F7($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 759), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x210a04) {
            ctx->pc = 0x210A38u;
            goto label_210a38;
        }
    }
    ctx->pc = 0x210A0Cu;
label_210a0c:
    // 0x210a0c: 0x12c0000e  beqz        $s6, . + 4 + (0xE << 2)
    ctx->pc = 0x210A0Cu;
    {
        const bool branch_taken_0x210a0c = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        if (branch_taken_0x210a0c) {
            ctx->pc = 0x210A48u;
            goto label_210a48;
        }
    }
    ctx->pc = 0x210A14u;
    // 0x210a14: 0x8e4206ec  lw          $v0, 0x6EC($s2)
    ctx->pc = 0x210a14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1772)));
    // 0x210a18: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x210A18u;
    {
        const bool branch_taken_0x210a18 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x210A1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x210A18u;
        // 0x210a1c: 0x24030047  addiu       $v1, $zero, 0x47 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 71));
        ctx->in_delay_slot = false;
        if (branch_taken_0x210a18) {
            ctx->pc = 0x210A30u;
            goto label_210a30;
        }
    }
    ctx->pc = 0x210A20u;
    // 0x210a20: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x210a20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x210a24: 0xa24202f7  sb          $v0, 0x2F7($s2)
    ctx->pc = 0x210a24u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 759), (uint8_t)GPR_U32(ctx, 2));
    // 0x210a28: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x210A28u;
    {
        const bool branch_taken_0x210a28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x210A2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x210A28u;
        // 0x210a2c: 0xa24302f5  sb          $v1, 0x2F5($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 757), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x210a28) {
            ctx->pc = 0x210A3Cu;
            goto label_210a3c;
        }
    }
    ctx->pc = 0x210A30u;
label_210a30:
    // 0x210a30: 0x24020015  addiu       $v0, $zero, 0x15
    ctx->pc = 0x210a30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
    // 0x210a34: 0xa24002f7  sb          $zero, 0x2F7($s2)
    ctx->pc = 0x210a34u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 759), (uint8_t)GPR_U32(ctx, 0));
label_210a38:
    // 0x210a38: 0xa24202f5  sb          $v0, 0x2F5($s2)
    ctx->pc = 0x210a38u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 757), (uint8_t)GPR_U32(ctx, 2));
label_210a3c:
    // 0x210a3c: 0xa24002f4  sb          $zero, 0x2F4($s2)
    ctx->pc = 0x210a3cu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 756), (uint8_t)GPR_U32(ctx, 0));
    // 0x210a40: 0x1000011d  b           . + 4 + (0x11D << 2)
    ctx->pc = 0x210A40u;
    {
        const bool branch_taken_0x210a40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x210A44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x210A40u;
        // 0x210a44: 0xa24002f6  sb          $zero, 0x2F6($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 758), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x210a40) {
            ctx->pc = 0x210EB8u;
            goto label_210eb8;
        }
    }
    ctx->pc = 0x210A48u;
label_210a48:
    // 0x210a48: 0xc09c176  jal         func_2705D8
    ctx->pc = 0x210A48u;
    SET_GPR_U32(ctx, 31, 0x210A50u);
    ctx->pc = 0x210A4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x210A48u;
    // 0x210a4c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2705D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2705D8u, 0x210A48u, 0x210A50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x210A50u;
label_210a50:
    // 0x210a50: 0x1000011a  b           . + 4 + (0x11A << 2)
    ctx->pc = 0x210A50u;
    {
        const bool branch_taken_0x210a50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x210A54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x210A50u;
        // 0x210a54: 0x7bb00070  lq          $s0, 0x70($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x210a50) {
            ctx->pc = 0x210EBCu;
            goto label_210ebc;
        }
    }
    ctx->pc = 0x210A58u;
label_210a58:
    // 0x210a58: 0x3c022000  lui         $v0, 0x2000
    ctx->pc = 0x210a58u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8192 << 16));
    // 0x210a5c: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x210a5cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x210a60: 0x54400009  bnel        $v0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x210A60u;
    {
        const bool branch_taken_0x210a60 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x210a60) {
            ctx->pc = 0x210A64u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x210A60u;
            // 0x210a64: 0x8e4216d0  lw          $v0, 0x16D0($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 5840)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x210A88u;
            goto label_210a88;
        }
    }
    ctx->pc = 0x210A68u;
    // 0x210a68: 0xc64016c0  lwc1        $f0, 0x16C0($s2)
    ctx->pc = 0x210a68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 5824)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x210a6c: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x210a6cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x210a70: 0x0  nop
    ctx->pc = 0x210a70u;
    // NOP
    // 0x210a74: 0x45030004  bc1tl       . + 4 + (0x4 << 2)
    ctx->pc = 0x210A74u;
    {
        const bool branch_taken_0x210a74 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x210a74) {
            ctx->pc = 0x210A78u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x210A74u;
            // 0x210a78: 0x8e4216d0  lw          $v0, 0x16D0($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 5840)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x210A88u;
            goto label_210a88;
        }
    }
    ctx->pc = 0x210A7Cu;
    // 0x210a7c: 0x34a20402  ori         $v0, $a1, 0x402
    ctx->pc = 0x210a7cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)1026);
    // 0x210a80: 0xae4216d0  sw          $v0, 0x16D0($s2)
    ctx->pc = 0x210a80u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 5840), GPR_U32(ctx, 2));
    // 0x210a84: 0x8e4216d0  lw          $v0, 0x16D0($s2)
    ctx->pc = 0x210a84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 5840)));
label_210a88:
    // 0x210a88: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x210a88u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
    // 0x210a8c: 0x34637fff  ori         $v1, $v1, 0x7FFF
    ctx->pc = 0x210a8cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32767);
    // 0x210a90: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x210a90u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x210a94: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x210a94u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x210a98: 0xc09d91a  jal         func_276468
    ctx->pc = 0x210A98u;
    SET_GPR_U32(ctx, 31, 0x210AA0u);
    ctx->pc = 0x210A9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x210A98u;
    // 0x210a9c: 0xae4216d0  sw          $v0, 0x16D0($s2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 18), 5840), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x276468u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x276468u, 0x210A98u, 0x210AA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x210AA0u;
label_210aa0:
    // 0x210aa0: 0x3053ffff  andi        $s3, $v0, 0xFFFF
    ctx->pc = 0x210aa0u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x210aa4: 0x92431650  lbu         $v1, 0x1650($s2)
    ctx->pc = 0x210aa4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 5712)));
    // 0x210aa8: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x210aa8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x210aac: 0x1062000a  beq         $v1, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x210AACu;
    {
        const bool branch_taken_0x210aac = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x210AB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x210AACu;
        // 0x210ab0: 0x28620005  slti        $v0, $v1, 0x5 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)5) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x210aac) {
            ctx->pc = 0x210AD8u;
            goto label_210ad8;
        }
    }
    ctx->pc = 0x210AB4u;
    // 0x210ab4: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x210AB4u;
    {
        const bool branch_taken_0x210ab4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x210AB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x210AB4u;
        // 0x210ab8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x210ab4) {
            ctx->pc = 0x210ACCu;
            goto label_210acc;
        }
    }
    ctx->pc = 0x210ABCu;
    // 0x210abc: 0x10620041  beq         $v1, $v0, . + 4 + (0x41 << 2)
    ctx->pc = 0x210ABCu;
    {
        const bool branch_taken_0x210abc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x210AC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x210ABCu;
        // 0x210ac0: 0x8e420564  lw          $v0, 0x564($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1380)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x210abc) {
            ctx->pc = 0x210BC4u;
            goto label_210bc4;
        }
    }
    ctx->pc = 0x210AC4u;
    // 0x210ac4: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x210AC4u;
    {
        const bool branch_taken_0x210ac4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x210AC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x210AC4u;
        // 0x210ac8: 0x2444fdfe  addiu       $a0, $v0, -0x202 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294966782));
        ctx->in_delay_slot = false;
        if (branch_taken_0x210ac4) {
            ctx->pc = 0x210AE0u;
            goto label_210ae0;
        }
    }
    ctx->pc = 0x210ACCu;
label_210acc:
    // 0x210acc: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x210accu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x210ad0: 0x50620076  beql        $v1, $v0, . + 4 + (0x76 << 2)
    ctx->pc = 0x210AD0u;
    {
        const bool branch_taken_0x210ad0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x210ad0) {
            ctx->pc = 0x210AD4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x210AD0u;
            // 0x210ad4: 0x8e420564  lw          $v0, 0x564($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1380)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x210CACu;
            goto label_210cac;
        }
    }
    ctx->pc = 0x210AD8u;
label_210ad8:
    // 0x210ad8: 0x8e420564  lw          $v0, 0x564($s2)
    ctx->pc = 0x210ad8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1380)));
    // 0x210adc: 0x2444fdfe  addiu       $a0, $v0, -0x202
    ctx->pc = 0x210adcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294966782));
label_210ae0:
    // 0x210ae0: 0x2c83007d  sltiu       $v1, $a0, 0x7D
    ctx->pc = 0x210ae0u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)125) ? 1 : 0);
    // 0x210ae4: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x210AE4u;
    {
        const bool branch_taken_0x210ae4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x210AE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x210AE4u;
        // 0x210ae8: 0x3c020043  lui         $v0, 0x43 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)67 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x210ae4) {
            ctx->pc = 0x210B04u;
            goto label_210b04;
        }
    }
    ctx->pc = 0x210AECu;
    // 0x210aec: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x210aecu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x210af0: 0x24423e70  addiu       $v0, $v0, 0x3E70
    ctx->pc = 0x210af0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 15984));
    // 0x210af4: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x210af4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x210af8: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x210af8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x210afc: 0x800008  jr          $a0
    ctx->pc = 0x210AFCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x210B04u: goto label_210b04;
            case 0x210B14u: goto label_210b14;
            case 0x210B24u: goto label_210b24;
            case 0x210B34u: goto label_210b34;
            case 0x210B44u: goto label_210b44;
            case 0x210B54u: goto label_210b54;
            case 0x210B64u: goto label_210b64;
            case 0x210B74u: goto label_210b74;
            case 0x210B84u: goto label_210b84;
            case 0x210B94u: goto label_210b94;
            case 0x210BA4u: goto label_210ba4;
            case 0x210BB4u: goto label_210bb4;
            case 0x210D54u: goto label_210d54;
            case 0x210DD4u: goto label_210dd4;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x210AFCu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x210B04u;
label_210b04:
    // 0x210b04: 0x8e420304  lw          $v0, 0x304($s2)
    ctx->pc = 0x210b04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
    // 0x210b08: 0x8c430414  lw          $v1, 0x414($v0)
    ctx->pc = 0x210b08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1044)));
    // 0x210b0c: 0x100000b4  b           . + 4 + (0xB4 << 2)
    ctx->pc = 0x210B0Cu;
    {
        const bool branch_taken_0x210b0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x210B10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x210B0Cu;
        // 0x210b10: 0x8c440418  lw          $a0, 0x418($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1048)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x210b0c) {
            ctx->pc = 0x210DE0u;
            goto label_210de0;
        }
    }
    ctx->pc = 0x210B14u;
label_210b14:
    // 0x210b14: 0x8e420304  lw          $v0, 0x304($s2)
    ctx->pc = 0x210b14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
    // 0x210b18: 0x8c4307b4  lw          $v1, 0x7B4($v0)
    ctx->pc = 0x210b18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1972)));
    // 0x210b1c: 0x100000b0  b           . + 4 + (0xB0 << 2)
    ctx->pc = 0x210B1Cu;
    {
        const bool branch_taken_0x210b1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x210B20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x210B1Cu;
        // 0x210b20: 0x8c4407b8  lw          $a0, 0x7B8($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1976)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x210b1c) {
            ctx->pc = 0x210DE0u;
            goto label_210de0;
        }
    }
    ctx->pc = 0x210B24u;
label_210b24:
    // 0x210b24: 0x8e420304  lw          $v0, 0x304($s2)
    ctx->pc = 0x210b24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
    // 0x210b28: 0x8c431420  lw          $v1, 0x1420($v0)
    ctx->pc = 0x210b28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 5152)));
    // 0x210b2c: 0x100000ac  b           . + 4 + (0xAC << 2)
    ctx->pc = 0x210B2Cu;
    {
        const bool branch_taken_0x210b2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x210B30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x210B2Cu;
        // 0x210b30: 0x8c441424  lw          $a0, 0x1424($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 5156)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x210b2c) {
            ctx->pc = 0x210DE0u;
            goto label_210de0;
        }
    }
    ctx->pc = 0x210B34u;
label_210b34:
    // 0x210b34: 0x8e420304  lw          $v0, 0x304($s2)
    ctx->pc = 0x210b34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
    // 0x210b38: 0x8c430414  lw          $v1, 0x414($v0)
    ctx->pc = 0x210b38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1044)));
    // 0x210b3c: 0x100000a8  b           . + 4 + (0xA8 << 2)
    ctx->pc = 0x210B3Cu;
    {
        const bool branch_taken_0x210b3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x210B40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x210B3Cu;
        // 0x210b40: 0x8c440418  lw          $a0, 0x418($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1048)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x210b3c) {
            ctx->pc = 0x210DE0u;
            goto label_210de0;
        }
    }
    ctx->pc = 0x210B44u;
label_210b44:
    // 0x210b44: 0x8e420304  lw          $v0, 0x304($s2)
    ctx->pc = 0x210b44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
    // 0x210b48: 0x8c4318f0  lw          $v1, 0x18F0($v0)
    ctx->pc = 0x210b48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 6384)));
    // 0x210b4c: 0x100000a4  b           . + 4 + (0xA4 << 2)
    ctx->pc = 0x210B4Cu;
    {
        const bool branch_taken_0x210b4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x210B50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x210B4Cu;
        // 0x210b50: 0x8c4418f4  lw          $a0, 0x18F4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 6388)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x210b4c) {
            ctx->pc = 0x210DE0u;
            goto label_210de0;
        }
    }
    ctx->pc = 0x210B54u;
label_210b54:
    // 0x210b54: 0x8e420304  lw          $v0, 0x304($s2)
    ctx->pc = 0x210b54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
    // 0x210b58: 0x8c433038  lw          $v1, 0x3038($v0)
    ctx->pc = 0x210b58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12344)));
    // 0x210b5c: 0x100000a0  b           . + 4 + (0xA0 << 2)
    ctx->pc = 0x210B5Cu;
    {
        const bool branch_taken_0x210b5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x210B60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x210B5Cu;
        // 0x210b60: 0x8c44303c  lw          $a0, 0x303C($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12348)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x210b5c) {
            ctx->pc = 0x210DE0u;
            goto label_210de0;
        }
    }
    ctx->pc = 0x210B64u;
label_210b64:
    // 0x210b64: 0x8e420304  lw          $v0, 0x304($s2)
    ctx->pc = 0x210b64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
    // 0x210b68: 0x8c43326c  lw          $v1, 0x326C($v0)
    ctx->pc = 0x210b68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12908)));
    // 0x210b6c: 0x1000009c  b           . + 4 + (0x9C << 2)
    ctx->pc = 0x210B6Cu;
    {
        const bool branch_taken_0x210b6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x210B70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x210B6Cu;
        // 0x210b70: 0x8c443270  lw          $a0, 0x3270($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12912)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x210b6c) {
            ctx->pc = 0x210DE0u;
            goto label_210de0;
        }
    }
    ctx->pc = 0x210B74u;
label_210b74:
    // 0x210b74: 0x8e420304  lw          $v0, 0x304($s2)
    ctx->pc = 0x210b74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
    // 0x210b78: 0x8c433d34  lw          $v1, 0x3D34($v0)
    ctx->pc = 0x210b78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 15668)));
    // 0x210b7c: 0x10000098  b           . + 4 + (0x98 << 2)
    ctx->pc = 0x210B7Cu;
    {
        const bool branch_taken_0x210b7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x210B80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x210B7Cu;
        // 0x210b80: 0x8c443d38  lw          $a0, 0x3D38($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 15672)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x210b7c) {
            ctx->pc = 0x210DE0u;
            goto label_210de0;
        }
    }
    ctx->pc = 0x210B84u;
label_210b84:
    // 0x210b84: 0x8e420304  lw          $v0, 0x304($s2)
    ctx->pc = 0x210b84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
    // 0x210b88: 0x8c431808  lw          $v1, 0x1808($v0)
    ctx->pc = 0x210b88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 6152)));
    // 0x210b8c: 0x10000094  b           . + 4 + (0x94 << 2)
    ctx->pc = 0x210B8Cu;
    {
        const bool branch_taken_0x210b8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x210B90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x210B8Cu;
        // 0x210b90: 0x8c44180c  lw          $a0, 0x180C($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 6156)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x210b8c) {
            ctx->pc = 0x210DE0u;
            goto label_210de0;
        }
    }
    ctx->pc = 0x210B94u;
label_210b94:
    // 0x210b94: 0x8e420304  lw          $v0, 0x304($s2)
    ctx->pc = 0x210b94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
    // 0x210b98: 0x8c433418  lw          $v1, 0x3418($v0)
    ctx->pc = 0x210b98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 13336)));
    // 0x210b9c: 0x10000090  b           . + 4 + (0x90 << 2)
    ctx->pc = 0x210B9Cu;
    {
        const bool branch_taken_0x210b9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x210BA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x210B9Cu;
        // 0x210ba0: 0x8c44341c  lw          $a0, 0x341C($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 13340)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x210b9c) {
            ctx->pc = 0x210DE0u;
            goto label_210de0;
        }
    }
    ctx->pc = 0x210BA4u;
label_210ba4:
    // 0x210ba4: 0x8e420304  lw          $v0, 0x304($s2)
    ctx->pc = 0x210ba4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
    // 0x210ba8: 0x8c430fcc  lw          $v1, 0xFCC($v0)
    ctx->pc = 0x210ba8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4044)));
    // 0x210bac: 0x1000008c  b           . + 4 + (0x8C << 2)
    ctx->pc = 0x210BACu;
    {
        const bool branch_taken_0x210bac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x210BB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x210BACu;
        // 0x210bb0: 0x8c440fd0  lw          $a0, 0xFD0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4048)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x210bac) {
            ctx->pc = 0x210DE0u;
            goto label_210de0;
        }
    }
    ctx->pc = 0x210BB4u;
label_210bb4:
    // 0x210bb4: 0x8e420304  lw          $v0, 0x304($s2)
    ctx->pc = 0x210bb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
    // 0x210bb8: 0x8c431bc0  lw          $v1, 0x1BC0($v0)
    ctx->pc = 0x210bb8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 7104)));
    // 0x210bbc: 0x10000088  b           . + 4 + (0x88 << 2)
    ctx->pc = 0x210BBCu;
    {
        const bool branch_taken_0x210bbc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x210BC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x210BBCu;
        // 0x210bc0: 0x8c441bc4  lw          $a0, 0x1BC4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 7108)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x210bbc) {
            ctx->pc = 0x210DE0u;
            goto label_210de0;
        }
    }
    ctx->pc = 0x210BC4u;
label_210bc4:
    // 0x210bc4: 0x2444fdfe  addiu       $a0, $v0, -0x202
    ctx->pc = 0x210bc4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294966782));
    // 0x210bc8: 0x2c83007d  sltiu       $v1, $a0, 0x7D
    ctx->pc = 0x210bc8u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)125) ? 1 : 0);
    // 0x210bcc: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x210BCCu;
    {
        const bool branch_taken_0x210bcc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x210BD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x210BCCu;
        // 0x210bd0: 0x3c020043  lui         $v0, 0x43 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)67 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x210bcc) {
            ctx->pc = 0x210BECu;
            goto label_210bec;
        }
    }
    ctx->pc = 0x210BD4u;
    // 0x210bd4: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x210bd4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x210bd8: 0x24424070  addiu       $v0, $v0, 0x4070
    ctx->pc = 0x210bd8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16496));
    // 0x210bdc: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x210bdcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x210be0: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x210be0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x210be4: 0x800008  jr          $a0
    ctx->pc = 0x210BE4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x210BECu: goto label_210bec;
            case 0x210BFCu: goto label_210bfc;
            case 0x210C0Cu: goto label_210c0c;
            case 0x210C1Cu: goto label_210c1c;
            case 0x210C2Cu: goto label_210c2c;
            case 0x210C3Cu: goto label_210c3c;
            case 0x210C4Cu: goto label_210c4c;
            case 0x210C5Cu: goto label_210c5c;
            case 0x210C6Cu: goto label_210c6c;
            case 0x210C7Cu: goto label_210c7c;
            case 0x210C8Cu: goto label_210c8c;
            case 0x210C9Cu: goto label_210c9c;
            case 0x210D54u: goto label_210d54;
            case 0x210DD4u: goto label_210dd4;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x210BE4u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x210BECu;
label_210bec:
    // 0x210bec: 0x8e420304  lw          $v0, 0x304($s2)
    ctx->pc = 0x210becu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
    // 0x210bf0: 0x8c430404  lw          $v1, 0x404($v0)
    ctx->pc = 0x210bf0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1028)));
    // 0x210bf4: 0x1000007a  b           . + 4 + (0x7A << 2)
    ctx->pc = 0x210BF4u;
    {
        const bool branch_taken_0x210bf4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x210BF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x210BF4u;
        // 0x210bf8: 0x8c440408  lw          $a0, 0x408($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1032)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x210bf4) {
            ctx->pc = 0x210DE0u;
            goto label_210de0;
        }
    }
    ctx->pc = 0x210BFCu;
label_210bfc:
    // 0x210bfc: 0x8e420304  lw          $v0, 0x304($s2)
    ctx->pc = 0x210bfcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
    // 0x210c00: 0x8c430404  lw          $v1, 0x404($v0)
    ctx->pc = 0x210c00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1028)));
    // 0x210c04: 0x10000076  b           . + 4 + (0x76 << 2)
    ctx->pc = 0x210C04u;
    {
        const bool branch_taken_0x210c04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x210C08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x210C04u;
        // 0x210c08: 0x8c440408  lw          $a0, 0x408($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1032)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x210c04) {
            ctx->pc = 0x210DE0u;
            goto label_210de0;
        }
    }
    ctx->pc = 0x210C0Cu;
label_210c0c:
    // 0x210c0c: 0x8e420304  lw          $v0, 0x304($s2)
    ctx->pc = 0x210c0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
    // 0x210c10: 0x8c433700  lw          $v1, 0x3700($v0)
    ctx->pc = 0x210c10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 14080)));
    // 0x210c14: 0x10000072  b           . + 4 + (0x72 << 2)
    ctx->pc = 0x210C14u;
    {
        const bool branch_taken_0x210c14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x210C18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x210C14u;
        // 0x210c18: 0x8c443704  lw          $a0, 0x3704($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 14084)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x210c14) {
            ctx->pc = 0x210DE0u;
            goto label_210de0;
        }
    }
    ctx->pc = 0x210C1Cu;
label_210c1c:
    // 0x210c1c: 0x8e420304  lw          $v0, 0x304($s2)
    ctx->pc = 0x210c1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
    // 0x210c20: 0x8c430be0  lw          $v1, 0xBE0($v0)
    ctx->pc = 0x210c20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3040)));
    // 0x210c24: 0x1000006e  b           . + 4 + (0x6E << 2)
    ctx->pc = 0x210C24u;
    {
        const bool branch_taken_0x210c24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x210C28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x210C24u;
        // 0x210c28: 0x8c440be4  lw          $a0, 0xBE4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3044)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x210c24) {
            ctx->pc = 0x210DE0u;
            goto label_210de0;
        }
    }
    ctx->pc = 0x210C2Cu;
label_210c2c:
    // 0x210c2c: 0x8e420304  lw          $v0, 0x304($s2)
    ctx->pc = 0x210c2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
    // 0x210c30: 0x8c4318f0  lw          $v1, 0x18F0($v0)
    ctx->pc = 0x210c30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 6384)));
    // 0x210c34: 0x1000006a  b           . + 4 + (0x6A << 2)
    ctx->pc = 0x210C34u;
    {
        const bool branch_taken_0x210c34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x210C38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x210C34u;
        // 0x210c38: 0x8c4418f4  lw          $a0, 0x18F4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 6388)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x210c34) {
            ctx->pc = 0x210DE0u;
            goto label_210de0;
        }
    }
    ctx->pc = 0x210C3Cu;
label_210c3c:
    // 0x210c3c: 0x8e420304  lw          $v0, 0x304($s2)
    ctx->pc = 0x210c3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
    // 0x210c40: 0x8c433038  lw          $v1, 0x3038($v0)
    ctx->pc = 0x210c40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12344)));
    // 0x210c44: 0x10000066  b           . + 4 + (0x66 << 2)
    ctx->pc = 0x210C44u;
    {
        const bool branch_taken_0x210c44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x210C48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x210C44u;
        // 0x210c48: 0x8c44303c  lw          $a0, 0x303C($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12348)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x210c44) {
            ctx->pc = 0x210DE0u;
            goto label_210de0;
        }
    }
    ctx->pc = 0x210C4Cu;
label_210c4c:
    // 0x210c4c: 0x8e420304  lw          $v0, 0x304($s2)
    ctx->pc = 0x210c4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
    // 0x210c50: 0x8c43326c  lw          $v1, 0x326C($v0)
    ctx->pc = 0x210c50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12908)));
    // 0x210c54: 0x10000062  b           . + 4 + (0x62 << 2)
    ctx->pc = 0x210C54u;
    {
        const bool branch_taken_0x210c54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x210C58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x210C54u;
        // 0x210c58: 0x8c443270  lw          $a0, 0x3270($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12912)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x210c54) {
            ctx->pc = 0x210DE0u;
            goto label_210de0;
        }
    }
    ctx->pc = 0x210C5Cu;
label_210c5c:
    // 0x210c5c: 0x8e420304  lw          $v0, 0x304($s2)
    ctx->pc = 0x210c5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
    // 0x210c60: 0x8c433d34  lw          $v1, 0x3D34($v0)
    ctx->pc = 0x210c60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 15668)));
    // 0x210c64: 0x1000005e  b           . + 4 + (0x5E << 2)
    ctx->pc = 0x210C64u;
    {
        const bool branch_taken_0x210c64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x210C68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x210C64u;
        // 0x210c68: 0x8c443d38  lw          $a0, 0x3D38($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 15672)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x210c64) {
            ctx->pc = 0x210DE0u;
            goto label_210de0;
        }
    }
    ctx->pc = 0x210C6Cu;
label_210c6c:
    // 0x210c6c: 0x8e420304  lw          $v0, 0x304($s2)
    ctx->pc = 0x210c6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
    // 0x210c70: 0x8c431818  lw          $v1, 0x1818($v0)
    ctx->pc = 0x210c70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 6168)));
    // 0x210c74: 0x1000005a  b           . + 4 + (0x5A << 2)
    ctx->pc = 0x210C74u;
    {
        const bool branch_taken_0x210c74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x210C78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x210C74u;
        // 0x210c78: 0x8c44181c  lw          $a0, 0x181C($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 6172)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x210c74) {
            ctx->pc = 0x210DE0u;
            goto label_210de0;
        }
    }
    ctx->pc = 0x210C7Cu;
label_210c7c:
    // 0x210c7c: 0x8e420304  lw          $v0, 0x304($s2)
    ctx->pc = 0x210c7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
    // 0x210c80: 0x8c431818  lw          $v1, 0x1818($v0)
    ctx->pc = 0x210c80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 6168)));
    // 0x210c84: 0x10000056  b           . + 4 + (0x56 << 2)
    ctx->pc = 0x210C84u;
    {
        const bool branch_taken_0x210c84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x210C88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x210C84u;
        // 0x210c88: 0x8c44181c  lw          $a0, 0x181C($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 6172)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x210c84) {
            ctx->pc = 0x210DE0u;
            goto label_210de0;
        }
    }
    ctx->pc = 0x210C8Cu;
label_210c8c:
    // 0x210c8c: 0x8e420304  lw          $v0, 0x304($s2)
    ctx->pc = 0x210c8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
    // 0x210c90: 0x8c430fb4  lw          $v1, 0xFB4($v0)
    ctx->pc = 0x210c90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4020)));
    // 0x210c94: 0x10000052  b           . + 4 + (0x52 << 2)
    ctx->pc = 0x210C94u;
    {
        const bool branch_taken_0x210c94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x210C98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x210C94u;
        // 0x210c98: 0x8c440fb8  lw          $a0, 0xFB8($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4024)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x210c94) {
            ctx->pc = 0x210DE0u;
            goto label_210de0;
        }
    }
    ctx->pc = 0x210C9Cu;
label_210c9c:
    // 0x210c9c: 0x8e420304  lw          $v0, 0x304($s2)
    ctx->pc = 0x210c9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
    // 0x210ca0: 0x8c431bc0  lw          $v1, 0x1BC0($v0)
    ctx->pc = 0x210ca0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 7104)));
    // 0x210ca4: 0x1000004e  b           . + 4 + (0x4E << 2)
    ctx->pc = 0x210CA4u;
    {
        const bool branch_taken_0x210ca4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x210CA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x210CA4u;
        // 0x210ca8: 0x8c441bc4  lw          $a0, 0x1BC4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 7108)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x210ca4) {
            ctx->pc = 0x210DE0u;
            goto label_210de0;
        }
    }
    ctx->pc = 0x210CACu;
label_210cac:
    // 0x210cac: 0x2444fdfe  addiu       $a0, $v0, -0x202
    ctx->pc = 0x210cacu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294966782));
    // 0x210cb0: 0x2c83007d  sltiu       $v1, $a0, 0x7D
    ctx->pc = 0x210cb0u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)125) ? 1 : 0);
    // 0x210cb4: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x210CB4u;
    {
        const bool branch_taken_0x210cb4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x210CB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x210CB4u;
        // 0x210cb8: 0x3c020043  lui         $v0, 0x43 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)67 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x210cb4) {
            ctx->pc = 0x210CD4u;
            goto label_210cd4;
        }
    }
    ctx->pc = 0x210CBCu;
    // 0x210cbc: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x210cbcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x210cc0: 0x24424270  addiu       $v0, $v0, 0x4270
    ctx->pc = 0x210cc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 17008));
    // 0x210cc4: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x210cc4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x210cc8: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x210cc8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x210ccc: 0x800008  jr          $a0
    ctx->pc = 0x210CCCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x210CD4u: goto label_210cd4;
            case 0x210CE4u: goto label_210ce4;
            case 0x210CF4u: goto label_210cf4;
            case 0x210D04u: goto label_210d04;
            case 0x210D14u: goto label_210d14;
            case 0x210D24u: goto label_210d24;
            case 0x210D34u: goto label_210d34;
            case 0x210D44u: goto label_210d44;
            case 0x210D54u: goto label_210d54;
            case 0x210D84u: goto label_210d84;
            case 0x210D94u: goto label_210d94;
            case 0x210DA4u: goto label_210da4;
            case 0x210DB4u: goto label_210db4;
            case 0x210DC4u: goto label_210dc4;
            case 0x210DD4u: goto label_210dd4;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x210CCCu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x210CD4u;
label_210cd4:
    // 0x210cd4: 0x8e420304  lw          $v0, 0x304($s2)
    ctx->pc = 0x210cd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
    // 0x210cd8: 0x8c43042c  lw          $v1, 0x42C($v0)
    ctx->pc = 0x210cd8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1068)));
    // 0x210cdc: 0x10000040  b           . + 4 + (0x40 << 2)
    ctx->pc = 0x210CDCu;
    {
        const bool branch_taken_0x210cdc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x210CE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x210CDCu;
        // 0x210ce0: 0x8c440430  lw          $a0, 0x430($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1072)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x210cdc) {
            ctx->pc = 0x210DE0u;
            goto label_210de0;
        }
    }
    ctx->pc = 0x210CE4u;
label_210ce4:
    // 0x210ce4: 0x8e420304  lw          $v0, 0x304($s2)
    ctx->pc = 0x210ce4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
    // 0x210ce8: 0x8c4307bc  lw          $v1, 0x7BC($v0)
    ctx->pc = 0x210ce8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1980)));
    // 0x210cec: 0x1000003c  b           . + 4 + (0x3C << 2)
    ctx->pc = 0x210CECu;
    {
        const bool branch_taken_0x210cec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x210CF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x210CECu;
        // 0x210cf0: 0x8c4407c0  lw          $a0, 0x7C0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1984)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x210cec) {
            ctx->pc = 0x210DE0u;
            goto label_210de0;
        }
    }
    ctx->pc = 0x210CF4u;
label_210cf4:
    // 0x210cf4: 0x8e420304  lw          $v0, 0x304($s2)
    ctx->pc = 0x210cf4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
    // 0x210cf8: 0x8c433700  lw          $v1, 0x3700($v0)
    ctx->pc = 0x210cf8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 14080)));
    // 0x210cfc: 0x10000038  b           . + 4 + (0x38 << 2)
    ctx->pc = 0x210CFCu;
    {
        const bool branch_taken_0x210cfc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x210D00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x210CFCu;
        // 0x210d00: 0x8c443704  lw          $a0, 0x3704($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 14084)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x210cfc) {
            ctx->pc = 0x210DE0u;
            goto label_210de0;
        }
    }
    ctx->pc = 0x210D04u;
label_210d04:
    // 0x210d04: 0x8e420304  lw          $v0, 0x304($s2)
    ctx->pc = 0x210d04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
    // 0x210d08: 0x8c431440  lw          $v1, 0x1440($v0)
    ctx->pc = 0x210d08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 5184)));
    // 0x210d0c: 0x10000034  b           . + 4 + (0x34 << 2)
    ctx->pc = 0x210D0Cu;
    {
        const bool branch_taken_0x210d0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x210D10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x210D0Cu;
        // 0x210d10: 0x8c441444  lw          $a0, 0x1444($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 5188)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x210d0c) {
            ctx->pc = 0x210DE0u;
            goto label_210de0;
        }
    }
    ctx->pc = 0x210D14u;
label_210d14:
    // 0x210d14: 0x8e420304  lw          $v0, 0x304($s2)
    ctx->pc = 0x210d14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
    // 0x210d18: 0x8c430be0  lw          $v1, 0xBE0($v0)
    ctx->pc = 0x210d18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3040)));
    // 0x210d1c: 0x10000030  b           . + 4 + (0x30 << 2)
    ctx->pc = 0x210D1Cu;
    {
        const bool branch_taken_0x210d1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x210D20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x210D1Cu;
        // 0x210d20: 0x8c440be4  lw          $a0, 0xBE4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3044)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x210d1c) {
            ctx->pc = 0x210DE0u;
            goto label_210de0;
        }
    }
    ctx->pc = 0x210D24u;
label_210d24:
    // 0x210d24: 0x8e420304  lw          $v0, 0x304($s2)
    ctx->pc = 0x210d24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
    // 0x210d28: 0x8c4318f0  lw          $v1, 0x18F0($v0)
    ctx->pc = 0x210d28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 6384)));
    // 0x210d2c: 0x1000002c  b           . + 4 + (0x2C << 2)
    ctx->pc = 0x210D2Cu;
    {
        const bool branch_taken_0x210d2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x210D30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x210D2Cu;
        // 0x210d30: 0x8c4418f4  lw          $a0, 0x18F4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 6388)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x210d2c) {
            ctx->pc = 0x210DE0u;
            goto label_210de0;
        }
    }
    ctx->pc = 0x210D34u;
label_210d34:
    // 0x210d34: 0x8e420304  lw          $v0, 0x304($s2)
    ctx->pc = 0x210d34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
    // 0x210d38: 0x8c433038  lw          $v1, 0x3038($v0)
    ctx->pc = 0x210d38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12344)));
    // 0x210d3c: 0x10000028  b           . + 4 + (0x28 << 2)
    ctx->pc = 0x210D3Cu;
    {
        const bool branch_taken_0x210d3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x210D40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x210D3Cu;
        // 0x210d40: 0x8c44303c  lw          $a0, 0x303C($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12348)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x210d3c) {
            ctx->pc = 0x210DE0u;
            goto label_210de0;
        }
    }
    ctx->pc = 0x210D44u;
label_210d44:
    // 0x210d44: 0x8e420304  lw          $v0, 0x304($s2)
    ctx->pc = 0x210d44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
    // 0x210d48: 0x8c43326c  lw          $v1, 0x326C($v0)
    ctx->pc = 0x210d48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12908)));
    // 0x210d4c: 0x10000024  b           . + 4 + (0x24 << 2)
    ctx->pc = 0x210D4Cu;
    {
        const bool branch_taken_0x210d4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x210D50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x210D4Cu;
        // 0x210d50: 0x8c443270  lw          $a0, 0x3270($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12912)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x210d4c) {
            ctx->pc = 0x210DE0u;
            goto label_210de0;
        }
    }
    ctx->pc = 0x210D54u;
label_210d54:
    // 0x210d54: 0x8e420304  lw          $v0, 0x304($s2)
    ctx->pc = 0x210d54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
    // 0x210d58: 0x8e470744  lw          $a3, 0x744($s2)
    ctx->pc = 0x210d58u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1860)));
    // 0x210d5c: 0x8c433724  lw          $v1, 0x3724($v0)
    ctx->pc = 0x210d5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 14116)));
    // 0x210d60: 0x8c443728  lw          $a0, 0x3728($v0)
    ctx->pc = 0x210d60u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 14120)));
    // 0x210d64: 0x628821  addu        $s1, $v1, $v0
    ctx->pc = 0x210d64u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x210d68: 0x10e0001f  beqz        $a3, . + 4 + (0x1F << 2)
    ctx->pc = 0x210D68u;
    {
        const bool branch_taken_0x210d68 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x210D6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x210D68u;
        // 0x210d6c: 0x828021  addu        $s0, $a0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x210d68) {
            ctx->pc = 0x210DE8u;
            goto label_210de8;
        }
    }
    ctx->pc = 0x210D70u;
    // 0x210d70: 0xe0202d  daddu       $a0, $a3, $zero
    ctx->pc = 0x210d70u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x210d74: 0xc09fa94  jal         func_27EA50
    ctx->pc = 0x210D74u;
    SET_GPR_U32(ctx, 31, 0x210D7Cu);
    ctx->pc = 0x210D78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x210D74u;
    // 0x210d78: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x27EA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27EA50u, 0x210D74u, 0x210D7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x210D7Cu;
label_210d7c:
    // 0x210d7c: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x210D7Cu;
    {
        const bool branch_taken_0x210d7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x210d7c) {
            ctx->pc = 0x210DE8u;
            goto label_210de8;
        }
    }
    ctx->pc = 0x210D84u;
label_210d84:
    // 0x210d84: 0x8e420304  lw          $v0, 0x304($s2)
    ctx->pc = 0x210d84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
    // 0x210d88: 0x8c433d34  lw          $v1, 0x3D34($v0)
    ctx->pc = 0x210d88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 15668)));
    // 0x210d8c: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x210D8Cu;
    {
        const bool branch_taken_0x210d8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x210D90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x210D8Cu;
        // 0x210d90: 0x8c443d38  lw          $a0, 0x3D38($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 15672)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x210d8c) {
            ctx->pc = 0x210DE0u;
            goto label_210de0;
        }
    }
    ctx->pc = 0x210D94u;
label_210d94:
    // 0x210d94: 0x8e420304  lw          $v0, 0x304($s2)
    ctx->pc = 0x210d94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
    // 0x210d98: 0x8c431818  lw          $v1, 0x1818($v0)
    ctx->pc = 0x210d98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 6168)));
    // 0x210d9c: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x210D9Cu;
    {
        const bool branch_taken_0x210d9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x210DA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x210D9Cu;
        // 0x210da0: 0x8c44181c  lw          $a0, 0x181C($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 6172)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x210d9c) {
            ctx->pc = 0x210DE0u;
            goto label_210de0;
        }
    }
    ctx->pc = 0x210DA4u;
label_210da4:
    // 0x210da4: 0x8e420304  lw          $v0, 0x304($s2)
    ctx->pc = 0x210da4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
    // 0x210da8: 0x8c431818  lw          $v1, 0x1818($v0)
    ctx->pc = 0x210da8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 6168)));
    // 0x210dac: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x210DACu;
    {
        const bool branch_taken_0x210dac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x210DB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x210DACu;
        // 0x210db0: 0x8c44181c  lw          $a0, 0x181C($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 6172)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x210dac) {
            ctx->pc = 0x210DE0u;
            goto label_210de0;
        }
    }
    ctx->pc = 0x210DB4u;
label_210db4:
    // 0x210db4: 0x8e420304  lw          $v0, 0x304($s2)
    ctx->pc = 0x210db4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
    // 0x210db8: 0x8c430fdc  lw          $v1, 0xFDC($v0)
    ctx->pc = 0x210db8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4060)));
    // 0x210dbc: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x210DBCu;
    {
        const bool branch_taken_0x210dbc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x210DC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x210DBCu;
        // 0x210dc0: 0x8c440fe0  lw          $a0, 0xFE0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4064)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x210dbc) {
            ctx->pc = 0x210DE0u;
            goto label_210de0;
        }
    }
    ctx->pc = 0x210DC4u;
label_210dc4:
    // 0x210dc4: 0x8e420304  lw          $v0, 0x304($s2)
    ctx->pc = 0x210dc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
    // 0x210dc8: 0x8c431bc0  lw          $v1, 0x1BC0($v0)
    ctx->pc = 0x210dc8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 7104)));
    // 0x210dcc: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x210DCCu;
    {
        const bool branch_taken_0x210dcc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x210DD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x210DCCu;
        // 0x210dd0: 0x8c441bc4  lw          $a0, 0x1BC4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 7108)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x210dcc) {
            ctx->pc = 0x210DE0u;
            goto label_210de0;
        }
    }
    ctx->pc = 0x210DD4u;
label_210dd4:
    // 0x210dd4: 0x8e420304  lw          $v0, 0x304($s2)
    ctx->pc = 0x210dd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 772)));
    // 0x210dd8: 0x8c432d38  lw          $v1, 0x2D38($v0)
    ctx->pc = 0x210dd8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11576)));
    // 0x210ddc: 0x8c442d3c  lw          $a0, 0x2D3C($v0)
    ctx->pc = 0x210ddcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11580)));
label_210de0:
    // 0x210de0: 0x628821  addu        $s1, $v1, $v0
    ctx->pc = 0x210de0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x210de4: 0x828021  addu        $s0, $a0, $v0
    ctx->pc = 0x210de4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_210de8:
    // 0x210de8: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x210de8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x210dec: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x210decu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x210df0: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x210df0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x210df4: 0x260402d  daddu       $t0, $s3, $zero
    ctx->pc = 0x210df4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x210df8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x210df8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x210dfc: 0x2407000a  addiu       $a3, $zero, 0xA
    ctx->pc = 0x210dfcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x210e00: 0xc0aa15e  jal         func_2A8578
    ctx->pc = 0x210E00u;
    SET_GPR_U32(ctx, 31, 0x210E08u);
    ctx->pc = 0x210E04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x210E00u;
    // 0x210e04: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A8578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8578u, 0x210E00u, 0x210E08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x210E08u;
label_210e08:
    // 0x210e08: 0x924202f6  lbu         $v0, 0x2F6($s2)
    ctx->pc = 0x210e08u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 758)));
    // 0x210e0c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x210e0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x210e10: 0xa24202f6  sb          $v0, 0x2F6($s2)
    ctx->pc = 0x210e10u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 758), (uint8_t)GPR_U32(ctx, 2));
label_210e14:
    // 0x210e14: 0x92431650  lbu         $v1, 0x1650($s2)
    ctx->pc = 0x210e14u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 5712)));
    // 0x210e18: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x210e18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x210e1c: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x210E1Cu;
    {
        const bool branch_taken_0x210e1c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x210E20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x210E1Cu;
        // 0x210e20: 0x3c030002  lui         $v1, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x210e1c) {
            ctx->pc = 0x210E30u;
            goto label_210e30;
        }
    }
    ctx->pc = 0x210E24u;
    // 0x210e24: 0x8e4216d0  lw          $v0, 0x16D0($s2)
    ctx->pc = 0x210e24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 5840)));
    // 0x210e28: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x210e28u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x210e2c: 0xae4216d0  sw          $v0, 0x16D0($s2)
    ctx->pc = 0x210e2cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 5840), GPR_U32(ctx, 2));
label_210e30:
    // 0x210e30: 0xc055f06  jal         func_157C18
    ctx->pc = 0x210E30u;
    SET_GPR_U32(ctx, 31, 0x210E38u);
    ctx->pc = 0x210E34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x210E30u;
    // 0x210e34: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x157C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157C18u, 0x210E30u, 0x210E38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x210E38u;
label_210e38:
    // 0x210e38: 0x10400017  beqz        $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x210E38u;
    {
        const bool branch_taken_0x210e38 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x210e38) {
            ctx->pc = 0x210E98u;
            goto label_210e98;
        }
    }
    ctx->pc = 0x210E40u;
    // 0x210e40: 0xc0c73f8  jal         func_31CFE0
    ctx->pc = 0x210E40u;
    SET_GPR_U32(ctx, 31, 0x210E48u);
    ctx->pc = 0x31CFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31CFE0u, 0x210E40u, 0x210E48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x210E48u;
label_210e48:
    // 0x210e48: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x210e48u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x210e4c: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x210E4Cu;
    {
        const bool branch_taken_0x210e4c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x210e4c) {
            ctx->pc = 0x210E90u;
            goto label_210e90;
        }
    }
    ctx->pc = 0x210E54u;
    // 0x210e54: 0xc64116c0  lwc1        $f1, 0x16C0($s2)
    ctx->pc = 0x210e54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 5824)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x210e58: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x210e58u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x210e5c: 0x0  nop
    ctx->pc = 0x210e5cu;
    // NOP
    // 0x210e60: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x210e60u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x210e64: 0x0  nop
    ctx->pc = 0x210e64u;
    // NOP
    // 0x210e68: 0x45000009  bc1f        . + 4 + (0x9 << 2)
    ctx->pc = 0x210E68u;
    {
        const bool branch_taken_0x210e68 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x210e68) {
            ctx->pc = 0x210E90u;
            goto label_210e90;
        }
    }
    ctx->pc = 0x210E70u;
    // 0x210e70: 0x8e4216ec  lw          $v0, 0x16EC($s2)
    ctx->pc = 0x210e70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 5868)));
    // 0x210e74: 0x1c400006  bgtz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x210E74u;
    {
        const bool branch_taken_0x210e74 = (GPR_S64(ctx, 2) > 0);
        ctx->pc = 0x210E78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x210E74u;
        // 0x210e78: 0x2402006b  addiu       $v0, $zero, 0x6B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 107));
        ctx->in_delay_slot = false;
        if (branch_taken_0x210e74) {
            ctx->pc = 0x210E90u;
            goto label_210e90;
        }
    }
    ctx->pc = 0x210E7Cu;
    // 0x210e7c: 0xa24002f4  sb          $zero, 0x2F4($s2)
    ctx->pc = 0x210e7cu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 756), (uint8_t)GPR_U32(ctx, 0));
    // 0x210e80: 0xa24202f5  sb          $v0, 0x2F5($s2)
    ctx->pc = 0x210e80u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 757), (uint8_t)GPR_U32(ctx, 2));
    // 0x210e84: 0xa24002f6  sb          $zero, 0x2F6($s2)
    ctx->pc = 0x210e84u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 758), (uint8_t)GPR_U32(ctx, 0));
    // 0x210e88: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x210E88u;
    {
        const bool branch_taken_0x210e88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x210E8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x210E88u;
        // 0x210e8c: 0xa24002f7  sb          $zero, 0x2F7($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 759), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x210e88) {
            ctx->pc = 0x210E98u;
            goto label_210e98;
        }
    }
    ctx->pc = 0x210E90u;
label_210e90:
    // 0x210e90: 0xc09c176  jal         func_2705D8
    ctx->pc = 0x210E90u;
    SET_GPR_U32(ctx, 31, 0x210E98u);
    ctx->pc = 0x210E94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x210E90u;
    // 0x210e94: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2705D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2705D8u, 0x210E90u, 0x210E98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x210E98u;
label_210e98:
    // 0x210e98: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x210e98u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x210e9c: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x210e9cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x210ea0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x210ea0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x210ea4: 0xc053e7c  jal         func_14F9F0
    ctx->pc = 0x210EA4u;
    SET_GPR_U32(ctx, 31, 0x210EACu);
    ctx->pc = 0x210EA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x210EA4u;
    // 0x210ea8: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F9F0u, 0x210EA4u, 0x210EACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x210EACu;
label_210eac:
    // 0x210eac: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x210eacu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x210eb0: 0xc053e4a  jal         func_14F928
    ctx->pc = 0x210EB0u;
    SET_GPR_U32(ctx, 31, 0x210EB8u);
    ctx->pc = 0x210EB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x210EB0u;
    // 0x210eb4: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F928u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F928u, 0x210EB0u, 0x210EB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x210EB8u;
label_210eb8:
    // 0x210eb8: 0x7bb00070  lq          $s0, 0x70($sp)
    ctx->pc = 0x210eb8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_210ebc:
    // 0x210ebc: 0x7bb10060  lq          $s1, 0x60($sp)
    ctx->pc = 0x210ebcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_210ec0:
    // 0x210ec0: 0x7bb20050  lq          $s2, 0x50($sp)
    ctx->pc = 0x210ec0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x210ec4: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x210ec4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x210ec8: 0x7bb40030  lq          $s4, 0x30($sp)
    ctx->pc = 0x210ec8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x210ecc: 0x7bb50020  lq          $s5, 0x20($sp)
    ctx->pc = 0x210eccu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x210ed0: 0x7bb60010  lq          $s6, 0x10($sp)
    ctx->pc = 0x210ed0u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x210ed4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x210ed4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x210ed8: 0xc7b40080  lwc1        $f20, 0x80($sp)
    ctx->pc = 0x210ed8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x210edc: 0x3e00008  jr          $ra
    ctx->pc = 0x210EDCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x210EE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x210EDCu;
        // 0x210ee0: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x210EDCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x210EE4u;
    // 0x210ee4: 0x0  nop
    ctx->pc = 0x210ee4u;
    // NOP
    ctx->pc = 0x210ee8u;
}
