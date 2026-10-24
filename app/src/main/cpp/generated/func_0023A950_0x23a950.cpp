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

// Function: func_0023A950
// Address: 0x23a950 - 0x23aad0
void func_0023A950_0x23a950(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0023A950_0x23a950");
#endif

    switch (ctx->pc) {
        case 0x23a9a0u: goto label_23a9a0;
        case 0x23a9c8u: goto label_23a9c8;
        case 0x23aa54u: goto label_23aa54;
        case 0x23aa68u: goto label_23aa68;
        case 0x23aa78u: goto label_23aa78;
        case 0x23aa90u: goto label_23aa90;
        case 0x23aa9cu: goto label_23aa9c;
        case 0x23aab4u: goto label_23aab4;
        default: break;
    }

    ctx->pc = 0x23a950u;

    // 0x23a950: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x23a950u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x23a954: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x23a954u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x23a958: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x23a958u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x23a95c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x23a95cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23a960: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x23a960u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x23a964: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x23a964u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x23a968: 0xe7b40040  swc1        $f20, 0x40($sp)
    ctx->pc = 0x23a968u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x23a96c: 0x8e0216d0  lw          $v0, 0x16D0($s0)
    ctx->pc = 0x23a96cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5840)));
    // 0x23a970: 0x920302f6  lbu         $v1, 0x2F6($s0)
    ctx->pc = 0x23a970u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 758)));
    // 0x23a974: 0x34420400  ori         $v0, $v0, 0x400
    ctx->pc = 0x23a974u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1024);
    // 0x23a978: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x23A978u;
    {
        const bool branch_taken_0x23a978 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x23A97Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23A978u;
        // 0x23a97c: 0xae0216d0  sw          $v0, 0x16D0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 5840), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23a978) {
            ctx->pc = 0x23A994u;
            goto label_23a994;
        }
    }
    ctx->pc = 0x23A980u;
    // 0x23a980: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x23a980u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x23a984: 0x10620036  beq         $v1, $v0, . + 4 + (0x36 << 2)
    ctx->pc = 0x23A984u;
    {
        const bool branch_taken_0x23a984 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x23a984) {
            ctx->pc = 0x23AA60u;
            goto label_23aa60;
        }
    }
    ctx->pc = 0x23A98Cu;
    // 0x23a98c: 0x10000044  b           . + 4 + (0x44 << 2)
    ctx->pc = 0x23A98Cu;
    {
        const bool branch_taken_0x23a98c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23A990u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23A98Cu;
        // 0x23a990: 0x960203ac  lhu         $v0, 0x3AC($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 940)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23a98c) {
            ctx->pc = 0x23AAA0u;
            goto label_23aaa0;
        }
    }
    ctx->pc = 0x23A994u;
label_23a994:
    // 0x23a994: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x23a994u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23a998: 0xc09d91a  jal         func_276468
    ctx->pc = 0x23A998u;
    SET_GPR_U32(ctx, 31, 0x23A9A0u);
    ctx->pc = 0x23A99Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23A998u;
    // 0x23a99c: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x276468u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x276468u, 0x23A998u, 0x23A9A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23A9A0u;
label_23a9a0:
    // 0x23a9a0: 0x920302f7  lbu         $v1, 0x2F7($s0)
    ctx->pc = 0x23a9a0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 759)));
    // 0x23a9a4: 0x1071001d  beq         $v1, $s1, . + 4 + (0x1D << 2)
    ctx->pc = 0x23A9A4u;
    {
        const bool branch_taken_0x23a9a4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 17));
        ctx->pc = 0x23A9A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23A9A4u;
        // 0x23a9a8: 0x3052ffff  andi        $s2, $v0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 18, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x23a9a4) {
            ctx->pc = 0x23AA1Cu;
            goto label_23aa1c;
        }
    }
    ctx->pc = 0x23A9ACu;
    // 0x23a9ac: 0x28620002  slti        $v0, $v1, 0x2
    ctx->pc = 0x23a9acu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x23a9b0: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x23A9B0u;
    {
        const bool branch_taken_0x23a9b0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x23A9B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23A9B0u;
        // 0x23a9b4: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23a9b0) {
            ctx->pc = 0x23A9C0u;
            goto label_23a9c0;
        }
    }
    ctx->pc = 0x23A9B8u;
    // 0x23a9b8: 0x5062001c  beql        $v1, $v0, . + 4 + (0x1C << 2)
    ctx->pc = 0x23A9B8u;
    {
        const bool branch_taken_0x23a9b8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x23a9b8) {
            ctx->pc = 0x23A9BCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23A9B8u;
            // 0x23a9bc: 0x8e020304  lw          $v0, 0x304($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23AA2Cu;
            goto label_23aa2c;
        }
    }
    ctx->pc = 0x23A9C0u;
label_23a9c0:
    // 0x23a9c0: 0xc0c73f8  jal         func_31CFE0
    ctx->pc = 0x23A9C0u;
    SET_GPR_U32(ctx, 31, 0x23A9C8u);
    ctx->pc = 0x31CFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31CFE0u, 0x23A9C0u, 0x23A9C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23A9C8u;
label_23a9c8:
    // 0x23a9c8: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x23a9c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x23a9cc: 0x43001b  divu        $zero, $v0, $v1
    ctx->pc = 0x23a9ccu;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x23a9d0: 0x50600001  beql        $v1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x23A9D0u;
    {
        const bool branch_taken_0x23a9d0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x23a9d0) {
            ctx->pc = 0x23A9D4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23A9D0u;
            // 0x23a9d4: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x23A9D8u;
            goto label_23a9d8;
        }
    }
    ctx->pc = 0x23A9D8u;
label_23a9d8:
    // 0x23a9d8: 0x2010  mfhi        $a0
    ctx->pc = 0x23a9d8u;
    SET_GPR_U64(ctx, 4, ctx->hi);
    // 0x23a9dc: 0x50910009  beql        $a0, $s1, . + 4 + (0x9 << 2)
    ctx->pc = 0x23A9DCu;
    {
        const bool branch_taken_0x23a9dc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 17));
        if (branch_taken_0x23a9dc) {
            ctx->pc = 0x23A9E0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23A9DCu;
            // 0x23a9e0: 0x8e020304  lw          $v0, 0x304($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23AA04u;
            goto label_23aa04;
        }
    }
    ctx->pc = 0x23A9E4u;
    // 0x23a9e4: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x23A9E4u;
    {
        const bool branch_taken_0x23a9e4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x23A9E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23A9E4u;
        // 0x23a9e8: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23a9e4) {
            ctx->pc = 0x23A9F4u;
            goto label_23a9f4;
        }
    }
    ctx->pc = 0x23A9ECu;
    // 0x23a9ec: 0x50820008  beql        $a0, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x23A9ECu;
    {
        const bool branch_taken_0x23a9ec = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x23a9ec) {
            ctx->pc = 0x23A9F0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23A9ECu;
            // 0x23a9f0: 0x8e020304  lw          $v0, 0x304($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23AA10u;
            goto label_23aa10;
        }
    }
    ctx->pc = 0x23A9F4u;
label_23a9f4:
    // 0x23a9f4: 0x8e020304  lw          $v0, 0x304($s0)
    ctx->pc = 0x23a9f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
    // 0x23a9f8: 0x8c430c00  lw          $v1, 0xC00($v0)
    ctx->pc = 0x23a9f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3072)));
    // 0x23a9fc: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x23A9FCu;
    {
        const bool branch_taken_0x23a9fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23AA00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23A9FCu;
        // 0x23aa00: 0x8c440c04  lw          $a0, 0xC04($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3076)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23a9fc) {
            ctx->pc = 0x23AA34u;
            goto label_23aa34;
        }
    }
    ctx->pc = 0x23AA04u;
label_23aa04:
    // 0x23aa04: 0x8c430c18  lw          $v1, 0xC18($v0)
    ctx->pc = 0x23aa04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3096)));
    // 0x23aa08: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x23AA08u;
    {
        const bool branch_taken_0x23aa08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23AA0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23AA08u;
        // 0x23aa0c: 0x8c440c1c  lw          $a0, 0xC1C($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3100)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23aa08) {
            ctx->pc = 0x23AA34u;
            goto label_23aa34;
        }
    }
    ctx->pc = 0x23AA10u;
label_23aa10:
    // 0x23aa10: 0x8c430c20  lw          $v1, 0xC20($v0)
    ctx->pc = 0x23aa10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3104)));
    // 0x23aa14: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x23AA14u;
    {
        const bool branch_taken_0x23aa14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23AA18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23AA14u;
        // 0x23aa18: 0x8c440c24  lw          $a0, 0xC24($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3108)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23aa14) {
            ctx->pc = 0x23AA34u;
            goto label_23aa34;
        }
    }
    ctx->pc = 0x23AA1Cu;
label_23aa1c:
    // 0x23aa1c: 0x8e020304  lw          $v0, 0x304($s0)
    ctx->pc = 0x23aa1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 772)));
    // 0x23aa20: 0x8c430c20  lw          $v1, 0xC20($v0)
    ctx->pc = 0x23aa20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3104)));
    // 0x23aa24: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x23AA24u;
    {
        const bool branch_taken_0x23aa24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23AA28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23AA24u;
        // 0x23aa28: 0x8c440c24  lw          $a0, 0xC24($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3108)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23aa24) {
            ctx->pc = 0x23AA34u;
            goto label_23aa34;
        }
    }
    ctx->pc = 0x23AA2Cu;
label_23aa2c:
    // 0x23aa2c: 0x8c430c20  lw          $v1, 0xC20($v0)
    ctx->pc = 0x23aa2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3104)));
    // 0x23aa30: 0x8c440c28  lw          $a0, 0xC28($v0)
    ctx->pc = 0x23aa30u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3112)));
label_23aa34:
    // 0x23aa34: 0x622821  addu        $a1, $v1, $v0
    ctx->pc = 0x23aa34u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x23aa38: 0x823021  addu        $a2, $a0, $v0
    ctx->pc = 0x23aa38u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x23aa3c: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x23aa3cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x23aa40: 0x240402d  daddu       $t0, $s2, $zero
    ctx->pc = 0x23aa40u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23aa44: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x23aa44u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23aa48: 0x24070003  addiu       $a3, $zero, 0x3
    ctx->pc = 0x23aa48u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x23aa4c: 0xc0aa15e  jal         func_2A8578
    ctx->pc = 0x23AA4Cu;
    SET_GPR_U32(ctx, 31, 0x23AA54u);
    ctx->pc = 0x23AA50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23AA4Cu;
    // 0x23aa50: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A8578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8578u, 0x23AA4Cu, 0x23AA54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23AA54u;
label_23aa54:
    // 0x23aa54: 0x920202f6  lbu         $v0, 0x2F6($s0)
    ctx->pc = 0x23aa54u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 758)));
    // 0x23aa58: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x23aa58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x23aa5c: 0xa20202f6  sb          $v0, 0x2F6($s0)
    ctx->pc = 0x23aa5cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 758), (uint8_t)GPR_U32(ctx, 2));
label_23aa60:
    // 0x23aa60: 0xc055f06  jal         func_157C18
    ctx->pc = 0x23AA60u;
    SET_GPR_U32(ctx, 31, 0x23AA68u);
    ctx->pc = 0x23AA64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23AA60u;
    // 0x23aa64: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x157C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157C18u, 0x23AA60u, 0x23AA68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23AA68u;
label_23aa68:
    // 0x23aa68: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x23AA68u;
    {
        const bool branch_taken_0x23aa68 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x23AA6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23AA68u;
        // 0x23aa6c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23aa68) {
            ctx->pc = 0x23AA80u;
            goto label_23aa80;
        }
    }
    ctx->pc = 0x23AA70u;
    // 0x23aa70: 0xc09c176  jal         func_2705D8
    ctx->pc = 0x23AA70u;
    SET_GPR_U32(ctx, 31, 0x23AA78u);
    ctx->pc = 0x23AA74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23AA70u;
    // 0x23aa74: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2705D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2705D8u, 0x23AA70u, 0x23AA78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23AA78u;
label_23aa78:
    // 0x23aa78: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x23AA78u;
    {
        const bool branch_taken_0x23aa78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23AA7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23AA78u;
        // 0x23aa7c: 0x960203ac  lhu         $v0, 0x3AC($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 940)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23aa78) {
            ctx->pc = 0x23AAA0u;
            goto label_23aaa0;
        }
    }
    ctx->pc = 0x23AA80u;
label_23aa80:
    // 0x23aa80: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x23aa80u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x23aa84: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x23aa84u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x23aa88: 0xc053e7c  jal         func_14F9F0
    ctx->pc = 0x23AA88u;
    SET_GPR_U32(ctx, 31, 0x23AA90u);
    ctx->pc = 0x23AA8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23AA88u;
    // 0x23aa8c: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F9F0u, 0x23AA88u, 0x23AA90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23AA90u;
label_23aa90:
    // 0x23aa90: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x23aa90u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x23aa94: 0xc053e4a  jal         func_14F928
    ctx->pc = 0x23AA94u;
    SET_GPR_U32(ctx, 31, 0x23AA9Cu);
    ctx->pc = 0x23AA98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23AA94u;
    // 0x23aa98: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F928u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F928u, 0x23AA94u, 0x23AA9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23AA9Cu;
label_23aa9c:
    // 0x23aa9c: 0x960203ac  lhu         $v0, 0x3AC($s0)
    ctx->pc = 0x23aa9cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 940)));
label_23aaa0:
    // 0x23aaa0: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x23aaa0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x23aaa4: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x23AAA4u;
    {
        const bool branch_taken_0x23aaa4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x23AAA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23AAA4u;
        // 0x23aaa8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23aaa4) {
            ctx->pc = 0x23AAB4u;
            goto label_23aab4;
        }
    }
    ctx->pc = 0x23AAACu;
    // 0x23aaac: 0xc0989d4  jal         func_262750
    ctx->pc = 0x23AAACu;
    SET_GPR_U32(ctx, 31, 0x23AAB4u);
    ctx->pc = 0x23AAB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23AAACu;
    // 0x23aab0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x262750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x262750u, 0x23AAACu, 0x23AAB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23AAB4u;
label_23aab4:
    // 0x23aab4: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x23aab4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x23aab8: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x23aab8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x23aabc: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x23aabcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x23aac0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x23aac0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x23aac4: 0xc7b40040  lwc1        $f20, 0x40($sp)
    ctx->pc = 0x23aac4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x23aac8: 0x3e00008  jr          $ra
    ctx->pc = 0x23AAC8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x23AACCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23AAC8u;
        // 0x23aacc: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23AAC8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x23AAD0u;
}
