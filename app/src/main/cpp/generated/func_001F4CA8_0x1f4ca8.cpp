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

// Function: func_001F4CA8
// Address: 0x1f4ca8 - 0x1f4ff0
void func_001F4CA8_0x1f4ca8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_001F4CA8_0x1f4ca8");
#endif

    switch (ctx->pc) {
        case 0x1f4d88u: goto label_1f4d88;
        case 0x1f4d94u: goto label_1f4d94;
        case 0x1f4da0u: goto label_1f4da0;
        case 0x1f4e20u: goto label_1f4e20;
        case 0x1f4e2cu: goto label_1f4e2c;
        case 0x1f4e38u: goto label_1f4e38;
        case 0x1f4ee4u: goto label_1f4ee4;
        case 0x1f4ef0u: goto label_1f4ef0;
        case 0x1f4efcu: goto label_1f4efc;
        case 0x1f4f48u: goto label_1f4f48;
        case 0x1f4f54u: goto label_1f4f54;
        case 0x1f4f60u: goto label_1f4f60;
        case 0x1f4fa8u: goto label_1f4fa8;
        case 0x1f4fb4u: goto label_1f4fb4;
        case 0x1f4fc0u: goto label_1f4fc0;
        case 0x1f4fd0u: goto label_1f4fd0;
        default: break;
    }

    ctx->pc = 0x1f4ca8u;

    // 0x1f4ca8: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1f4ca8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1f4cac: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x1f4cacu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x1f4cb0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1f4cb0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1f4cb4: 0x30b1ffff  andi        $s1, $a1, 0xFFFF
    ctx->pc = 0x1f4cb4u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
    // 0x1f4cb8: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x1f4cb8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x1f4cbc: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1f4cbcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f4cc0: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x1f4cc0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x1f4cc4: 0xe0982d  daddu       $s3, $a3, $zero
    ctx->pc = 0x1f4cc4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f4cc8: 0x2e220007  sltiu       $v0, $s1, 0x7
    ctx->pc = 0x1f4cc8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)7) ? 1 : 0);
    // 0x1f4ccc: 0x104000c0  beqz        $v0, . + 4 + (0xC0 << 2)
    ctx->pc = 0x1F4CCCu;
    {
        const bool branch_taken_0x1f4ccc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F4CD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F4CCCu;
        // 0x1f4cd0: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f4ccc) {
            ctx->pc = 0x1F4FD0u;
            goto label_1f4fd0;
        }
    }
    ctx->pc = 0x1F4CD4u;
    // 0x1f4cd4: 0x3c020074  lui         $v0, 0x74
    ctx->pc = 0x1f4cd4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)116 << 16));
    // 0x1f4cd8: 0x8c437a0c  lw          $v1, 0x7A0C($v0)
    ctx->pc = 0x1f4cd8u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x747A0Cu));
    // 0x1f4cdc: 0x14600058  bnez        $v1, . + 4 + (0x58 << 2)
    ctx->pc = 0x1F4CDCu;
    {
        const bool branch_taken_0x1f4cdc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F4CE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F4CDCu;
        // 0x1f4ce0: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f4cdc) {
            ctx->pc = 0x1F4E40u;
            goto label_1f4e40;
        }
    }
    ctx->pc = 0x1F4CE4u;
    // 0x1f4ce4: 0x10c20016  beq         $a2, $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x1F4CE4u;
    {
        const bool branch_taken_0x1f4ce4 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 2));
        ctx->pc = 0x1F4CE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F4CE4u;
        // 0x1f4ce8: 0x28c20003  slti        $v0, $a2, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)3) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f4ce4) {
            ctx->pc = 0x1F4D40u;
            goto label_1f4d40;
        }
    }
    ctx->pc = 0x1F4CECu;
    // 0x1f4cec: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1F4CECu;
    {
        const bool branch_taken_0x1f4cec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F4CF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F4CECu;
        // 0x1f4cf0: 0x2410007c  addiu       $s0, $zero, 0x7C (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 124));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f4cec) {
            ctx->pc = 0x1F4D08u;
            goto label_1f4d08;
        }
    }
    ctx->pc = 0x1F4CF4u;
    // 0x1f4cf4: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x1f4cf4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1f4cf8: 0x10c2002b  beq         $a2, $v0, . + 4 + (0x2B << 2)
    ctx->pc = 0x1F4CF8u;
    {
        const bool branch_taken_0x1f4cf8 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 2));
        ctx->pc = 0x1F4CFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F4CF8u;
        // 0x1f4cfc: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f4cf8) {
            ctx->pc = 0x1F4DA8u;
            goto label_1f4da8;
        }
    }
    ctx->pc = 0x1F4D00u;
    // 0x1f4d00: 0x50c20037  beql        $a2, $v0, . + 4 + (0x37 << 2)
    ctx->pc = 0x1F4D00u;
    {
        const bool branch_taken_0x1f4d00 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 2));
        if (branch_taken_0x1f4d00) {
            ctx->pc = 0x1F4D04u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F4D00u;
            // 0x1f4d04: 0x2308018  mult        $s0, $s1, $s0 (Delay Slot)
            { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 16); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 16, (int32_t)result); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F4DE0u;
            goto label_1f4de0;
        }
    }
    ctx->pc = 0x1F4D08u;
label_1f4d08:
    // 0x1f4d08: 0x3c013e2e  lui         $at, 0x3E2E
    ctx->pc = 0x1f4d08u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15918 << 16));
    // 0x1f4d0c: 0x3421147b  ori         $at, $at, 0x147B
    ctx->pc = 0x1f4d0cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)5243);
    // 0x1f4d10: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x1f4d10u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1f4d14: 0x3c013eb3  lui         $at, 0x3EB3
    ctx->pc = 0x1f4d14u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16051 << 16));
    // 0x1f4d18: 0x34213333  ori         $at, $at, 0x3333
    ctx->pc = 0x1f4d18u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)13107);
    // 0x1f4d1c: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x1f4d1cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x1f4d20: 0x3c013e8a  lui         $at, 0x3E8A
    ctx->pc = 0x1f4d20u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16010 << 16));
    // 0x1f4d24: 0x34213d71  ori         $at, $at, 0x3D71
    ctx->pc = 0x1f4d24u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)15729);
    // 0x1f4d28: 0x44817000  mtc1        $at, $f14
    ctx->pc = 0x1f4d28u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x1f4d2c: 0x3c013eeb  lui         $at, 0x3EEB
    ctx->pc = 0x1f4d2cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16107 << 16));
    // 0x1f4d30: 0x3421851f  ori         $at, $at, 0x851F
    ctx->pc = 0x1f4d30u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)34079);
    // 0x1f4d34: 0x44817800  mtc1        $at, $f15
    ctx->pc = 0x1f4d34u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[15], &bits, sizeof(bits)); }
    // 0x1f4d38: 0x10000035  b           . + 4 + (0x35 << 2)
    ctx->pc = 0x1F4D38u;
    {
        const bool branch_taken_0x1f4d38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F4D3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F4D38u;
        // 0x1f4d3c: 0x2308018  mult        $s0, $s1, $s0 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 16); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 16, (int32_t)result); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f4d38) {
            ctx->pc = 0x1F4E10u;
            goto label_1f4e10;
        }
    }
    ctx->pc = 0x1F4D40u;
label_1f4d40:
    // 0x1f4d40: 0x2410007c  addiu       $s0, $zero, 0x7C
    ctx->pc = 0x1f4d40u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 124));
    // 0x1f4d44: 0x3c013e99  lui         $at, 0x3E99
    ctx->pc = 0x1f4d44u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16025 << 16));
    // 0x1f4d48: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x1f4d48u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
    // 0x1f4d4c: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x1f4d4cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1f4d50: 0x2308018  mult        $s0, $s1, $s0
    ctx->pc = 0x1f4d50u;
    { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 16); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 16, (int32_t)result); }
    // 0x1f4d54: 0x3c013eb8  lui         $at, 0x3EB8
    ctx->pc = 0x1f4d54u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16056 << 16));
    // 0x1f4d58: 0x342151ec  ori         $at, $at, 0x51EC
    ctx->pc = 0x1f4d58u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)20972);
    // 0x1f4d5c: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x1f4d5cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x1f4d60: 0x3c013ed1  lui         $at, 0x3ED1
    ctx->pc = 0x1f4d60u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16081 << 16));
    // 0x1f4d64: 0x3421eb85  ori         $at, $at, 0xEB85
    ctx->pc = 0x1f4d64u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)60293);
    // 0x1f4d68: 0x44817000  mtc1        $at, $f14
    ctx->pc = 0x1f4d68u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x1f4d6c: 0x3c013eeb  lui         $at, 0x3EEB
    ctx->pc = 0x1f4d6cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16107 << 16));
    // 0x1f4d70: 0x3421851f  ori         $at, $at, 0x851F
    ctx->pc = 0x1f4d70u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)34079);
    // 0x1f4d74: 0x44817800  mtc1        $at, $f15
    ctx->pc = 0x1f4d74u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[15], &bits, sizeof(bits)); }
    // 0x1f4d78: 0x26100f64  addiu       $s0, $s0, 0xF64
    ctx->pc = 0x1f4d78u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 3940));
    // 0x1f4d7c: 0x2508021  addu        $s0, $s2, $s0
    ctx->pc = 0x1f4d7cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 16)));
    // 0x1f4d80: 0xc0b597e  jal         func_2D65F8
    ctx->pc = 0x1F4D80u;
    SET_GPR_U32(ctx, 31, 0x1F4D88u);
    ctx->pc = 0x1F4D84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F4D80u;
    // 0x1f4d84: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D65F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D65F8u, 0x1F4D80u, 0x1F4D88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F4D88u;
label_1f4d88:
    // 0x1f4d88: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1f4d88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f4d8c: 0xc0b595e  jal         func_2D6578
    ctx->pc = 0x1F4D8Cu;
    SET_GPR_U32(ctx, 31, 0x1F4D94u);
    ctx->pc = 0x1F4D90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F4D8Cu;
    // 0x1f4d90: 0x24050032  addiu       $a1, $zero, 0x32 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 50));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D6578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D6578u, 0x1F4D8Cu, 0x1F4D94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F4D94u;
label_1f4d94:
    // 0x1f4d94: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1f4d94u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f4d98: 0xc0b598c  jal         func_2D6630
    ctx->pc = 0x1F4D98u;
    SET_GPR_U32(ctx, 31, 0x1F4DA0u);
    ctx->pc = 0x1F4D9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F4D98u;
    // 0x1f4d9c: 0x240500ae  addiu       $a1, $zero, 0xAE (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 174));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D6630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D6630u, 0x1F4D98u, 0x1F4DA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F4DA0u;
label_1f4da0:
    // 0x1f4da0: 0x10000088  b           . + 4 + (0x88 << 2)
    ctx->pc = 0x1F4DA0u;
    {
        const bool branch_taken_0x1f4da0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F4DA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F4DA0u;
        // 0x1f4da4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f4da0) {
            ctx->pc = 0x1F4FC4u;
            goto label_1f4fc4;
        }
    }
    ctx->pc = 0x1F4DA8u;
label_1f4da8:
    // 0x1f4da8: 0x3c013e2e  lui         $at, 0x3E2E
    ctx->pc = 0x1f4da8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15918 << 16));
    // 0x1f4dac: 0x3421147b  ori         $at, $at, 0x147B
    ctx->pc = 0x1f4dacu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)5243);
    // 0x1f4db0: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x1f4db0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1f4db4: 0x3c013ef5  lui         $at, 0x3EF5
    ctx->pc = 0x1f4db4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16117 << 16));
    // 0x1f4db8: 0x3421c28f  ori         $at, $at, 0xC28F
    ctx->pc = 0x1f4db8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)49807);
    // 0x1f4dbc: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x1f4dbcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x1f4dc0: 0x3c013e8a  lui         $at, 0x3E8A
    ctx->pc = 0x1f4dc0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16010 << 16));
    // 0x1f4dc4: 0x34213d71  ori         $at, $at, 0x3D71
    ctx->pc = 0x1f4dc4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)15729);
    // 0x1f4dc8: 0x44817000  mtc1        $at, $f14
    ctx->pc = 0x1f4dc8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x1f4dcc: 0x3c013f14  lui         $at, 0x3F14
    ctx->pc = 0x1f4dccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16148 << 16));
    // 0x1f4dd0: 0x34217ae1  ori         $at, $at, 0x7AE1
    ctx->pc = 0x1f4dd0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)31457);
    // 0x1f4dd4: 0x44817800  mtc1        $at, $f15
    ctx->pc = 0x1f4dd4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[15], &bits, sizeof(bits)); }
    // 0x1f4dd8: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x1F4DD8u;
    {
        const bool branch_taken_0x1f4dd8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F4DDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F4DD8u;
        // 0x1f4ddc: 0x2308018  mult        $s0, $s1, $s0 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 16); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 16, (int32_t)result); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f4dd8) {
            ctx->pc = 0x1F4E10u;
            goto label_1f4e10;
        }
    }
    ctx->pc = 0x1F4DE0u;
label_1f4de0:
    // 0x1f4de0: 0x3c013e99  lui         $at, 0x3E99
    ctx->pc = 0x1f4de0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16025 << 16));
    // 0x1f4de4: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x1f4de4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
    // 0x1f4de8: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x1f4de8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1f4dec: 0x3c013ef5  lui         $at, 0x3EF5
    ctx->pc = 0x1f4decu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16117 << 16));
    // 0x1f4df0: 0x3421c28f  ori         $at, $at, 0xC28F
    ctx->pc = 0x1f4df0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)49807);
    // 0x1f4df4: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x1f4df4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x1f4df8: 0x3c013ed1  lui         $at, 0x3ED1
    ctx->pc = 0x1f4df8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16081 << 16));
    // 0x1f4dfc: 0x3421eb85  ori         $at, $at, 0xEB85
    ctx->pc = 0x1f4dfcu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)60293);
    // 0x1f4e00: 0x44817000  mtc1        $at, $f14
    ctx->pc = 0x1f4e00u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x1f4e04: 0x3c013f17  lui         $at, 0x3F17
    ctx->pc = 0x1f4e04u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16151 << 16));
    // 0x1f4e08: 0x34210a3d  ori         $at, $at, 0xA3D
    ctx->pc = 0x1f4e08u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)2621);
    // 0x1f4e0c: 0x44817800  mtc1        $at, $f15
    ctx->pc = 0x1f4e0cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[15], &bits, sizeof(bits)); }
label_1f4e10:
    // 0x1f4e10: 0x26100f64  addiu       $s0, $s0, 0xF64
    ctx->pc = 0x1f4e10u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 3940));
    // 0x1f4e14: 0x2508021  addu        $s0, $s2, $s0
    ctx->pc = 0x1f4e14u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 16)));
    // 0x1f4e18: 0xc0b597e  jal         func_2D65F8
    ctx->pc = 0x1F4E18u;
    SET_GPR_U32(ctx, 31, 0x1F4E20u);
    ctx->pc = 0x1F4E1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F4E18u;
    // 0x1f4e1c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D65F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D65F8u, 0x1F4E18u, 0x1F4E20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F4E20u;
label_1f4e20:
    // 0x1f4e20: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1f4e20u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f4e24: 0xc0b595e  jal         func_2D6578
    ctx->pc = 0x1F4E24u;
    SET_GPR_U32(ctx, 31, 0x1F4E2Cu);
    ctx->pc = 0x1F4E28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F4E24u;
    // 0x1f4e28: 0x2405002f  addiu       $a1, $zero, 0x2F (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 47));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D6578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D6578u, 0x1F4E24u, 0x1F4E2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F4E2Cu;
label_1f4e2c:
    // 0x1f4e2c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1f4e2cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f4e30: 0xc0b598c  jal         func_2D6630
    ctx->pc = 0x1F4E30u;
    SET_GPR_U32(ctx, 31, 0x1F4E38u);
    ctx->pc = 0x1F4E34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F4E30u;
    // 0x1f4e34: 0x240500ac  addiu       $a1, $zero, 0xAC (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 172));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D6630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D6630u, 0x1F4E30u, 0x1F4E38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F4E38u;
label_1f4e38:
    // 0x1f4e38: 0x10000062  b           . + 4 + (0x62 << 2)
    ctx->pc = 0x1F4E38u;
    {
        const bool branch_taken_0x1f4e38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F4E3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F4E38u;
        // 0x1f4e3c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f4e38) {
            ctx->pc = 0x1F4FC4u;
            goto label_1f4fc4;
        }
    }
    ctx->pc = 0x1F4E40u;
label_1f4e40:
    // 0x1f4e40: 0x10c20016  beq         $a2, $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x1F4E40u;
    {
        const bool branch_taken_0x1f4e40 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 2));
        ctx->pc = 0x1F4E44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F4E40u;
        // 0x1f4e44: 0x28c20003  slti        $v0, $a2, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)3) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f4e40) {
            ctx->pc = 0x1F4E9Cu;
            goto label_1f4e9c;
        }
    }
    ctx->pc = 0x1F4E48u;
    // 0x1f4e48: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1F4E48u;
    {
        const bool branch_taken_0x1f4e48 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F4E4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F4E48u;
        // 0x1f4e4c: 0x2410007c  addiu       $s0, $zero, 0x7C (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 124));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f4e48) {
            ctx->pc = 0x1F4E64u;
            goto label_1f4e64;
        }
    }
    ctx->pc = 0x1F4E50u;
    // 0x1f4e50: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x1f4e50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1f4e54: 0x10c2002b  beq         $a2, $v0, . + 4 + (0x2B << 2)
    ctx->pc = 0x1F4E54u;
    {
        const bool branch_taken_0x1f4e54 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 2));
        ctx->pc = 0x1F4E58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F4E54u;
        // 0x1f4e58: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f4e54) {
            ctx->pc = 0x1F4F04u;
            goto label_1f4f04;
        }
    }
    ctx->pc = 0x1F4E5Cu;
    // 0x1f4e5c: 0x50c20042  beql        $a2, $v0, . + 4 + (0x42 << 2)
    ctx->pc = 0x1F4E5Cu;
    {
        const bool branch_taken_0x1f4e5c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 2));
        if (branch_taken_0x1f4e5c) {
            ctx->pc = 0x1F4E60u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F4E5Cu;
            // 0x1f4e60: 0x2308018  mult        $s0, $s1, $s0 (Delay Slot)
            { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 16); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 16, (int32_t)result); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F4F68u;
            goto label_1f4f68;
        }
    }
    ctx->pc = 0x1F4E64u;
label_1f4e64:
    // 0x1f4e64: 0x3c013e2e  lui         $at, 0x3E2E
    ctx->pc = 0x1f4e64u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15918 << 16));
    // 0x1f4e68: 0x3421147b  ori         $at, $at, 0x147B
    ctx->pc = 0x1f4e68u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)5243);
    // 0x1f4e6c: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x1f4e6cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1f4e70: 0x3c013eb3  lui         $at, 0x3EB3
    ctx->pc = 0x1f4e70u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16051 << 16));
    // 0x1f4e74: 0x34213333  ori         $at, $at, 0x3333
    ctx->pc = 0x1f4e74u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)13107);
    // 0x1f4e78: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x1f4e78u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x1f4e7c: 0x3c013e8a  lui         $at, 0x3E8A
    ctx->pc = 0x1f4e7cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16010 << 16));
    // 0x1f4e80: 0x34213d71  ori         $at, $at, 0x3D71
    ctx->pc = 0x1f4e80u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)15729);
    // 0x1f4e84: 0x44817000  mtc1        $at, $f14
    ctx->pc = 0x1f4e84u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x1f4e88: 0x3c013eeb  lui         $at, 0x3EEB
    ctx->pc = 0x1f4e88u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16107 << 16));
    // 0x1f4e8c: 0x3421851f  ori         $at, $at, 0x851F
    ctx->pc = 0x1f4e8cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)34079);
    // 0x1f4e90: 0x44817800  mtc1        $at, $f15
    ctx->pc = 0x1f4e90u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[15], &bits, sizeof(bits)); }
    // 0x1f4e94: 0x10000028  b           . + 4 + (0x28 << 2)
    ctx->pc = 0x1F4E94u;
    {
        const bool branch_taken_0x1f4e94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F4E98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F4E94u;
        // 0x1f4e98: 0x2308018  mult        $s0, $s1, $s0 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 16); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 16, (int32_t)result); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f4e94) {
            ctx->pc = 0x1F4F38u;
            goto label_1f4f38;
        }
    }
    ctx->pc = 0x1F4E9Cu;
label_1f4e9c:
    // 0x1f4e9c: 0x2410007c  addiu       $s0, $zero, 0x7C
    ctx->pc = 0x1f4e9cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 124));
    // 0x1f4ea0: 0x3c013e99  lui         $at, 0x3E99
    ctx->pc = 0x1f4ea0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16025 << 16));
    // 0x1f4ea4: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x1f4ea4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
    // 0x1f4ea8: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x1f4ea8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1f4eac: 0x2308018  mult        $s0, $s1, $s0
    ctx->pc = 0x1f4eacu;
    { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 16); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 16, (int32_t)result); }
    // 0x1f4eb0: 0x3c013eb8  lui         $at, 0x3EB8
    ctx->pc = 0x1f4eb0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16056 << 16));
    // 0x1f4eb4: 0x342151ec  ori         $at, $at, 0x51EC
    ctx->pc = 0x1f4eb4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)20972);
    // 0x1f4eb8: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x1f4eb8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x1f4ebc: 0x3c013ed1  lui         $at, 0x3ED1
    ctx->pc = 0x1f4ebcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16081 << 16));
    // 0x1f4ec0: 0x3421eb85  ori         $at, $at, 0xEB85
    ctx->pc = 0x1f4ec0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)60293);
    // 0x1f4ec4: 0x44817000  mtc1        $at, $f14
    ctx->pc = 0x1f4ec4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x1f4ec8: 0x3c013eeb  lui         $at, 0x3EEB
    ctx->pc = 0x1f4ec8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16107 << 16));
    // 0x1f4ecc: 0x3421851f  ori         $at, $at, 0x851F
    ctx->pc = 0x1f4eccu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)34079);
    // 0x1f4ed0: 0x44817800  mtc1        $at, $f15
    ctx->pc = 0x1f4ed0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[15], &bits, sizeof(bits)); }
    // 0x1f4ed4: 0x26100f64  addiu       $s0, $s0, 0xF64
    ctx->pc = 0x1f4ed4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 3940));
    // 0x1f4ed8: 0x2508021  addu        $s0, $s2, $s0
    ctx->pc = 0x1f4ed8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 16)));
    // 0x1f4edc: 0xc0b597e  jal         func_2D65F8
    ctx->pc = 0x1F4EDCu;
    SET_GPR_U32(ctx, 31, 0x1F4EE4u);
    ctx->pc = 0x1F4EE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F4EDCu;
    // 0x1f4ee0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D65F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D65F8u, 0x1F4EDCu, 0x1F4EE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F4EE4u;
label_1f4ee4:
    // 0x1f4ee4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1f4ee4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f4ee8: 0xc0b595e  jal         func_2D6578
    ctx->pc = 0x1F4EE8u;
    SET_GPR_U32(ctx, 31, 0x1F4EF0u);
    ctx->pc = 0x1F4EECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F4EE8u;
    // 0x1f4eec: 0x24050032  addiu       $a1, $zero, 0x32 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 50));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D6578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D6578u, 0x1F4EE8u, 0x1F4EF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F4EF0u;
label_1f4ef0:
    // 0x1f4ef0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1f4ef0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f4ef4: 0xc0b598c  jal         func_2D6630
    ctx->pc = 0x1F4EF4u;
    SET_GPR_U32(ctx, 31, 0x1F4EFCu);
    ctx->pc = 0x1F4EF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F4EF4u;
    // 0x1f4ef8: 0x240500a7  addiu       $a1, $zero, 0xA7 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 167));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D6630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D6630u, 0x1F4EF4u, 0x1F4EFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F4EFCu;
label_1f4efc:
    // 0x1f4efc: 0x10000031  b           . + 4 + (0x31 << 2)
    ctx->pc = 0x1F4EFCu;
    {
        const bool branch_taken_0x1f4efc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F4F00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F4EFCu;
        // 0x1f4f00: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f4efc) {
            ctx->pc = 0x1F4FC4u;
            goto label_1f4fc4;
        }
    }
    ctx->pc = 0x1F4F04u;
label_1f4f04:
    // 0x1f4f04: 0x3c013e2e  lui         $at, 0x3E2E
    ctx->pc = 0x1f4f04u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15918 << 16));
    // 0x1f4f08: 0x3421147b  ori         $at, $at, 0x147B
    ctx->pc = 0x1f4f08u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)5243);
    // 0x1f4f0c: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x1f4f0cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1f4f10: 0x2308018  mult        $s0, $s1, $s0
    ctx->pc = 0x1f4f10u;
    { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 16); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 16, (int32_t)result); }
    // 0x1f4f14: 0x3c013ef5  lui         $at, 0x3EF5
    ctx->pc = 0x1f4f14u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16117 << 16));
    // 0x1f4f18: 0x3421c28f  ori         $at, $at, 0xC28F
    ctx->pc = 0x1f4f18u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)49807);
    // 0x1f4f1c: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x1f4f1cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x1f4f20: 0x3c013e8a  lui         $at, 0x3E8A
    ctx->pc = 0x1f4f20u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16010 << 16));
    // 0x1f4f24: 0x34213d71  ori         $at, $at, 0x3D71
    ctx->pc = 0x1f4f24u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)15729);
    // 0x1f4f28: 0x44817000  mtc1        $at, $f14
    ctx->pc = 0x1f4f28u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x1f4f2c: 0x3c013f14  lui         $at, 0x3F14
    ctx->pc = 0x1f4f2cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16148 << 16));
    // 0x1f4f30: 0x34217ae1  ori         $at, $at, 0x7AE1
    ctx->pc = 0x1f4f30u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)31457);
    // 0x1f4f34: 0x44817800  mtc1        $at, $f15
    ctx->pc = 0x1f4f34u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[15], &bits, sizeof(bits)); }
label_1f4f38:
    // 0x1f4f38: 0x26100f64  addiu       $s0, $s0, 0xF64
    ctx->pc = 0x1f4f38u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 3940));
    // 0x1f4f3c: 0x2508021  addu        $s0, $s2, $s0
    ctx->pc = 0x1f4f3cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 16)));
    // 0x1f4f40: 0xc0b597e  jal         func_2D65F8
    ctx->pc = 0x1F4F40u;
    SET_GPR_U32(ctx, 31, 0x1F4F48u);
    ctx->pc = 0x1F4F44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F4F40u;
    // 0x1f4f44: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D65F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D65F8u, 0x1F4F40u, 0x1F4F48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F4F48u;
label_1f4f48:
    // 0x1f4f48: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1f4f48u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f4f4c: 0xc0b595e  jal         func_2D6578
    ctx->pc = 0x1F4F4Cu;
    SET_GPR_U32(ctx, 31, 0x1F4F54u);
    ctx->pc = 0x1F4F50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F4F4Cu;
    // 0x1f4f50: 0x2405002f  addiu       $a1, $zero, 0x2F (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 47));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D6578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D6578u, 0x1F4F4Cu, 0x1F4F54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F4F54u;
label_1f4f54:
    // 0x1f4f54: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1f4f54u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f4f58: 0xc0b598c  jal         func_2D6630
    ctx->pc = 0x1F4F58u;
    SET_GPR_U32(ctx, 31, 0x1F4F60u);
    ctx->pc = 0x1F4F5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F4F58u;
    // 0x1f4f5c: 0x240500a5  addiu       $a1, $zero, 0xA5 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 165));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D6630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D6630u, 0x1F4F58u, 0x1F4F60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F4F60u;
label_1f4f60:
    // 0x1f4f60: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x1F4F60u;
    {
        const bool branch_taken_0x1f4f60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F4F64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F4F60u;
        // 0x1f4f64: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f4f60) {
            ctx->pc = 0x1F4FC4u;
            goto label_1f4fc4;
        }
    }
    ctx->pc = 0x1F4F68u;
label_1f4f68:
    // 0x1f4f68: 0x3c013e99  lui         $at, 0x3E99
    ctx->pc = 0x1f4f68u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16025 << 16));
    // 0x1f4f6c: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x1f4f6cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
    // 0x1f4f70: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x1f4f70u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1f4f74: 0x3c013ef5  lui         $at, 0x3EF5
    ctx->pc = 0x1f4f74u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16117 << 16));
    // 0x1f4f78: 0x3421c28f  ori         $at, $at, 0xC28F
    ctx->pc = 0x1f4f78u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)49807);
    // 0x1f4f7c: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x1f4f7cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x1f4f80: 0x3c013ed1  lui         $at, 0x3ED1
    ctx->pc = 0x1f4f80u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16081 << 16));
    // 0x1f4f84: 0x3421eb85  ori         $at, $at, 0xEB85
    ctx->pc = 0x1f4f84u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)60293);
    // 0x1f4f88: 0x44817000  mtc1        $at, $f14
    ctx->pc = 0x1f4f88u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x1f4f8c: 0x3c013f17  lui         $at, 0x3F17
    ctx->pc = 0x1f4f8cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16151 << 16));
    // 0x1f4f90: 0x34210a3d  ori         $at, $at, 0xA3D
    ctx->pc = 0x1f4f90u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)2621);
    // 0x1f4f94: 0x44817800  mtc1        $at, $f15
    ctx->pc = 0x1f4f94u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[15], &bits, sizeof(bits)); }
    // 0x1f4f98: 0x26100f64  addiu       $s0, $s0, 0xF64
    ctx->pc = 0x1f4f98u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 3940));
    // 0x1f4f9c: 0x2508021  addu        $s0, $s2, $s0
    ctx->pc = 0x1f4f9cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 16)));
    // 0x1f4fa0: 0xc0b597e  jal         func_2D65F8
    ctx->pc = 0x1F4FA0u;
    SET_GPR_U32(ctx, 31, 0x1F4FA8u);
    ctx->pc = 0x1F4FA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F4FA0u;
    // 0x1f4fa4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D65F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D65F8u, 0x1F4FA0u, 0x1F4FA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F4FA8u;
label_1f4fa8:
    // 0x1f4fa8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1f4fa8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f4fac: 0xc0b595e  jal         func_2D6578
    ctx->pc = 0x1F4FACu;
    SET_GPR_U32(ctx, 31, 0x1F4FB4u);
    ctx->pc = 0x1F4FB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F4FACu;
    // 0x1f4fb0: 0x2405002f  addiu       $a1, $zero, 0x2F (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 47));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D6578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D6578u, 0x1F4FACu, 0x1F4FB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F4FB4u;
label_1f4fb4:
    // 0x1f4fb4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1f4fb4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f4fb8: 0xc0b598c  jal         func_2D6630
    ctx->pc = 0x1F4FB8u;
    SET_GPR_U32(ctx, 31, 0x1F4FC0u);
    ctx->pc = 0x1F4FBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F4FB8u;
    // 0x1f4fbc: 0x240500a5  addiu       $a1, $zero, 0xA5 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 165));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D6630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D6630u, 0x1F4FB8u, 0x1F4FC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F4FC0u;
label_1f4fc0:
    // 0x1f4fc0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1f4fc0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1f4fc4:
    // 0x1f4fc4: 0x2625001f  addiu       $a1, $s1, 0x1F
    ctx->pc = 0x1f4fc4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 31));
    // 0x1f4fc8: 0xc07d1de  jal         func_1F4778
    ctx->pc = 0x1F4FC8u;
    SET_GPR_U32(ctx, 31, 0x1F4FD0u);
    ctx->pc = 0x1F4FCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F4FC8u;
    // 0x1f4fcc: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4778u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4778u, 0x1F4FC8u, 0x1F4FD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F4FD0u;
label_1f4fd0:
    // 0x1f4fd0: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x1f4fd0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1f4fd4: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x1f4fd4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1f4fd8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1f4fd8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1f4fdc: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x1f4fdcu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1f4fe0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1f4fe0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1f4fe4: 0x3e00008  jr          $ra
    ctx->pc = 0x1F4FE4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F4FE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F4FE4u;
        // 0x1f4fe8: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F4FE4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F4FECu;
    // 0x1f4fec: 0x0  nop
    ctx->pc = 0x1f4fecu;
    // NOP
    ctx->pc = 0x1f4ff0u;
}
