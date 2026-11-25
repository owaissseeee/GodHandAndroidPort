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

// Function: func_00343E28
// Address: 0x343e28 - 0x3441d0
void func_00343E28_0x343e28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00343E28_0x343e28");
#endif

    if (__builtin_expect(ctx->pc != 0x343e28u, 0)) {
        switch (ctx->pc) {
            case 0x343e68u: goto label_343e68;
            case 0x343e80u: goto label_343e80;
            case 0x343ea8u: goto label_343ea8;
            case 0x343ee0u: goto label_343ee0;
            case 0x343ef8u: goto label_343ef8;
            case 0x343f10u: goto label_343f10;
            case 0x343f24u: goto label_343f24;
            case 0x343f30u: goto label_343f30;
            case 0x343f9cu: goto label_343f9c;
            case 0x343fc0u: goto label_343fc0;
            case 0x343fc8u: goto label_343fc8;
            case 0x343fe8u: goto label_343fe8;
            case 0x343ffcu: goto label_343ffc;
            case 0x344004u: goto label_344004;
            case 0x344024u: goto label_344024;
            case 0x344074u: goto label_344074;
            case 0x3440a0u: goto label_3440a0;
            case 0x3440acu: goto label_3440ac;
            case 0x3440bcu: goto label_3440bc;
            case 0x3440ccu: goto label_3440cc;
            case 0x3440d4u: goto label_3440d4;
            case 0x3440e8u: goto label_3440e8;
            case 0x3440f0u: goto label_3440f0;
            case 0x344110u: goto label_344110;
            case 0x344134u: goto label_344134;
            case 0x34413cu: goto label_34413c;
            case 0x344148u: goto label_344148;
            case 0x344160u: goto label_344160;
            case 0x344168u: goto label_344168;
            case 0x344178u: goto label_344178;
            case 0x344180u: goto label_344180;
            case 0x344188u: goto label_344188;
            default: break;
        }
    }


    // 0x343e28: 0x27bdffa0  addiu       $sp, $sp, -0x60
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x343e2c: 0xffb10028  sd          $s1, 0x28($sp)
    ctx->pc = 0x343e2cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 17));
    // 0x343e30: 0x80882d  daddu       $s1, $a0, $zero
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x343e34: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x343e34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x343e38: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x343e38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x343e3c: 0xffb30038  sd          $s3, 0x38($sp)
    ctx->pc = 0x343e3cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 19));
    // 0x343e40: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x343e40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x343e44: 0xffb50048  sd          $s5, 0x48($sp)
    ctx->pc = 0x343e44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 21));
    // 0x343e48: 0x16200005  bnez        $s1, . + 4 + (0x5 << 2)
    ctx->pc = 0x343E48u;
    {
        const bool branch_taken_0x343e48 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x343E4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x343E48u;
        // 0x343e4c: 0xffbf0050  sd          $ra, 0x50($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x343e48) {
            ctx->pc = 0x343E60u;
            goto label_343e60;
        }
    }
    // 0x343e50: 0x3c040045  lui         $a0, 0x45
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)69 << 16));
    // 0x343e54: 0x1000002c  b           . + 4 + (0x2C << 2)
    ctx->pc = 0x343E54u;
    {
        const bool branch_taken_0x343e54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x343E58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x343E54u;
        // 0x343e58: 0x24847448  addiu       $a0, $a0, 0x7448 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 29768));
        ctx->in_delay_slot = false;
        if (branch_taken_0x343e54) {
            ctx->pc = 0x343F08u;
            goto label_343f08;
        }
    }
    // 0x343e5c: 0x0  nop
    ctx->pc = 0x343e5cu;
    // NOP
label_343e60:
    // 0x343e60: 0xc0d109e  jal         func_344278
    ctx->pc = 0x343E60u;
    SET_GPR_U32(ctx, 31, 0x343E68u);
    if (!runtime->callDirectStatic(rdram, ctx, &func_00344278_0x344278, 0x344278u, 0x343e68u)) {
        return;
    }
    ctx->pc = 0x343E68u;
label_343e68:
    // 0x343e68: 0x24030001  addiu       $v1, $zero, 0x1
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x343e6c: 0x40902d  daddu       $s2, $v0, $zero
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x343e70: 0x164300cd  bne         $s2, $v1, . + 4 + (0xCD << 2)
    ctx->pc = 0x343E70u;
    {
        const bool branch_taken_0x343e70 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 3));
        ctx->pc = 0x343E74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x343E70u;
        // 0x343e74: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x343e70) {
            ctx->pc = 0x3441A8u;
            goto label_3441a8;
        }
    }
    // 0x343e78: 0xc0d14ac  jal         func_3452B0
    ctx->pc = 0x343E78u;
    SET_GPR_U32(ctx, 31, 0x343E80u);
    if (!runtime->callDirectStatic(rdram, ctx, &GetD003EC7E0_3452B0_0x3452b0, 0x3452b0u, 0x343e80u)) {
        return;
    }
    ctx->pc = 0x343E80u;
label_343e80:
    // 0x343e80: 0x202d  daddu       $a0, $zero, $zero
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x343e84: 0x2450006c  addiu       $s0, $v0, 0x6C
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 108));
    // 0x343e88: 0x24530004  addiu       $s3, $v0, 0x4
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x343e8c: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x343e8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x343e90: 0x1452000f  bne         $v0, $s2, . + 4 + (0xF << 2)
    ctx->pc = 0x343E90u;
    {
        const bool branch_taken_0x343e90 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 18));
        ctx->pc = 0x343E94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x343E90u;
        // 0x343e94: 0x24020008  addiu       $v0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x343e90) {
            ctx->pc = 0x343ED0u;
            goto label_343ed0;
        }
    }
    // 0x343e98: 0x24050001  addiu       $a1, $zero, 0x1
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x343e9c: 0x200182d  daddu       $v1, $s0, $zero
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x343ea0: 0x24840001  addiu       $a0, $a0, 0x1
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x343ea4: 0x0  nop
    ctx->pc = 0x343ea4u;
    // NOP
label_343ea8:
    // 0x343ea8: 0x28820008  slti        $v0, $a0, 0x8
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x343eac: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x343EACu;
    {
        const bool branch_taken_0x343eac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x343EB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x343EACu;
        // 0x343eb0: 0x24630304  addiu       $v1, $v1, 0x304 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 772));
        ctx->in_delay_slot = false;
        if (branch_taken_0x343eac) {
            ctx->pc = 0x343ECCu;
            goto label_343ecc;
        }
    }
    // 0x343eb4: 0x60802d  daddu       $s0, $v1, $zero
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x343eb8: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x343eb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x343ebc: 0x0  nop
    // NOP
    // 0x343ec0: 0x0  nop
    // NOP
    // 0x343ec4: 0x5045fff8  beql        $v0, $a1, . + 4 + (-0x8 << 2)
    ctx->pc = 0x343EC4u;
    {
        const bool branch_taken_0x343ec4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 5));
        if (branch_taken_0x343ec4) {
            ctx->pc = 0x343EC8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x343EC4u;
            // 0x343ec8: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x343EA8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_343ea8;
        }
    }
    ctx->pc = 0x343ECCu;
label_343ecc:
    // 0x343ecc: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x343eccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_343ed0:
    // 0x343ed0: 0x54820007  bnel        $a0, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x343ED0u;
    {
        const bool branch_taken_0x343ed0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x343ed0) {
            ctx->pc = 0x343ED4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x343ED0u;
            // 0x343ed4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x343EF0u;
            goto label_343ef0;
        }
    }
    // 0x343ed8: 0xc0d15d4  jal         func_345750
    SET_GPR_U32(ctx, 31, 0x343EE0u);
    ctx->pc = 0x343EDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x343ED8u;
    // 0x343edc: 0x2404fff5  addiu       $a0, $zero, -0xB (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967285));
    ctx->in_delay_slot = false;
    if (!runtime->callDirectStatic(rdram, ctx, &func_00345750_0x345750, 0x345750u, 0x343ee0u)) {
        return;
    }
    ctx->pc = 0x343EE0u;
label_343ee0:
    // 0x343ee0: 0x3c040045  lui         $a0, 0x45
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)69 << 16));
    // 0x343ee4: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x343EE4u;
    {
        const bool branch_taken_0x343ee4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x343EE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x343EE4u;
        // 0x343ee8: 0x24847478  addiu       $a0, $a0, 0x7478 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 29816));
        ctx->in_delay_slot = false;
        if (branch_taken_0x343ee4) {
            ctx->pc = 0x343F08u;
            goto label_343f08;
        }
    }
    // 0x343eec: 0x0  nop
    ctx->pc = 0x343eecu;
    // NOP
label_343ef0:
    // 0x343ef0: 0xc0d1074  jal         func_3441D0
    SET_GPR_U32(ctx, 31, 0x343EF8u);
    ctx->pc = 0x343EF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x343EF0u;
    // 0x343ef4: 0x2415ffff  addiu       $s5, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    if (!runtime->callDirectStatic(rdram, ctx, &mwsfcre_IsOkUsrMalloc_0x3441d0, 0x3441d0u, 0x343ef8u)) {
        return;
    }
    ctx->pc = 0x343EF8u;
label_343ef8:
    // 0x343ef8: 0x14550007  bne         $v0, $s5, . + 4 + (0x7 << 2)
    ctx->pc = 0x343EF8u;
    {
        const bool branch_taken_0x343ef8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 21));
        ctx->pc = 0x343EFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x343EF8u;
        // 0x343efc: 0x24060304  addiu       $a2, $zero, 0x304 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 772));
        ctx->in_delay_slot = false;
        if (branch_taken_0x343ef8) {
            ctx->pc = 0x343F18u;
            goto label_343f18;
        }
    }
    // 0x343f00: 0x3c040045  lui         $a0, 0x45
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)69 << 16));
    // 0x343f04: 0x248474c8  addiu       $a0, $a0, 0x74C8
    ctx->pc = 0x343f04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 29896));
label_343f08:
    // 0x343f08: 0xc0d22f8  jal         func_348BE0
    ctx->pc = 0x343F08u;
    SET_GPR_U32(ctx, 31, 0x343F10u);
    if (!runtime->callDirectStatic(rdram, ctx, &MWSFSVM_Error_0x348be0, 0x348be0u, 0x343f10u)) {
        return;
    }
    ctx->pc = 0x343F10u;
label_343f10:
    // 0x343f10: 0x100000a5  b           . + 4 + (0xA5 << 2)
    ctx->pc = 0x343F10u;
    {
        const bool branch_taken_0x343f10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x343F14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x343F10u;
        // 0x343f14: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x343f10) {
            ctx->pc = 0x3441A8u;
            goto label_3441a8;
        }
    }
    ctx->pc = 0x343F18u;
label_343f18:
    // 0x343f18: 0x200202d  daddu       $a0, $s0, $zero
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x343f1c: 0xc0e94bc  jal         func_3A52F0
    SET_GPR_U32(ctx, 31, 0x343F24u);
    ctx->pc = 0x343F20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x343F1Cu;
    // 0x343f20: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    if (!runtime->callDirectStatic(rdram, ctx, &memset_0x3a52f0, 0x3a52f0u, 0x343f24u)) {
        return;
    }
    ctx->pc = 0x343F24u;
label_343f24:
    // 0x343f24: 0x200202d  daddu       $a0, $s0, $zero
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x343f28: 0xc0d1088  jal         func_344220
    SET_GPR_U32(ctx, 31, 0x343F30u);
    ctx->pc = 0x343F2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x343F28u;
    // 0x343f2c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    if (!runtime->callDirectStatic(rdram, ctx, &Obj0000_Set_Fields_1EC_280_Zero_0x344220, 0x344220u, 0x343f30u)) {
        return;
    }
    ctx->pc = 0x343F30u;
label_343f30:
    // 0x343f30: 0x6a220007  ldl         $v0, 0x7($s1)
    ctx->pc = 0x343f30u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x343f34: 0x6e220000  ldr         $v0, 0x0($s1)
    ctx->pc = 0x343f34u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x343f38: 0x6a23000f  ldl         $v1, 0xF($s1)
    ctx->pc = 0x343f38u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x343f3c: 0x6e230008  ldr         $v1, 0x8($s1)
    ctx->pc = 0x343f3cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x343f40: 0x6a240017  ldl         $a0, 0x17($s1)
    ctx->pc = 0x343f40u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
    // 0x343f44: 0x6e240010  ldr         $a0, 0x10($s1)
    ctx->pc = 0x343f44u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
    // 0x343f48: 0x6a25001f  ldl         $a1, 0x1F($s1)
    ctx->pc = 0x343f48u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
    // 0x343f4c: 0x6e250018  ldr         $a1, 0x18($s1)
    ctx->pc = 0x343f4cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
    // 0x343f50: 0xb202000f  sdl         $v0, 0xF($s0)
    ctx->pc = 0x343f50u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x343f54: 0xb6020008  sdr         $v0, 0x8($s0)
    ctx->pc = 0x343f54u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x343f58: 0xb2030017  sdl         $v1, 0x17($s0)
    ctx->pc = 0x343f58u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x343f5c: 0xb6030010  sdr         $v1, 0x10($s0)
    ctx->pc = 0x343f5cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x343f60: 0xb204001f  sdl         $a0, 0x1F($s0)
    ctx->pc = 0x343f60u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x343f64: 0xb6040018  sdr         $a0, 0x18($s0)
    ctx->pc = 0x343f64u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x343f68: 0xb2050027  sdl         $a1, 0x27($s0)
    ctx->pc = 0x343f68u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x343f6c: 0xb6050020  sdr         $a1, 0x20($s0)
    ctx->pc = 0x343f6cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x343f70: 0x6a220027  ldl         $v0, 0x27($s1)
    ctx->pc = 0x343f70u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x343f74: 0x6e220020  ldr         $v0, 0x20($s1)
    ctx->pc = 0x343f74u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x343f78: 0x6a23002f  ldl         $v1, 0x2F($s1)
    ctx->pc = 0x343f78u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 47); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x343f7c: 0x6e230028  ldr         $v1, 0x28($s1)
    ctx->pc = 0x343f7cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 40); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x343f80: 0xb202002f  sdl         $v0, 0x2F($s0)
    ctx->pc = 0x343f80u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 47); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x343f84: 0xb6020028  sdr         $v0, 0x28($s0)
    ctx->pc = 0x343f84u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 40); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x343f88: 0xb2030037  sdl         $v1, 0x37($s0)
    ctx->pc = 0x343f88u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 55); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x343f8c: 0xb6030030  sdr         $v1, 0x30($s0)
    ctx->pc = 0x343f8cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 48); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x343f90: 0x200202d  daddu       $a0, $s0, $zero
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x343f94: 0xc0d0cd0  jal         func_343340
    SET_GPR_U32(ctx, 31, 0x343F9Cu);
    ctx->pc = 0x343F98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x343F94u;
    // 0x343f98: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    if (!runtime->callDirectStatic(rdram, ctx, &func_00343340_0x343340, 0x343340u, 0x343f9cu)) {
        return;
    }
    ctx->pc = 0x343F9Cu;
label_343f9c:
    // 0x343f9c: 0x40902d  daddu       $s2, $v0, $zero
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x343fa0: 0x16400005  bnez        $s2, . + 4 + (0x5 << 2)
    ctx->pc = 0x343FA0u;
    {
        const bool branch_taken_0x343fa0 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x343FA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x343FA0u;
        // 0x343fa4: 0xae12003c  sw          $s2, 0x3C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 60), GPR_U32(ctx, 18));
        ctx->in_delay_slot = false;
        if (branch_taken_0x343fa0) {
            ctx->pc = 0x343FB8u;
            goto label_343fb8;
        }
    }
    // 0x343fa8: 0x3c040045  lui         $a0, 0x45
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)69 << 16));
    // 0x343fac: 0x1000006a  b           . + 4 + (0x6A << 2)
    ctx->pc = 0x343FACu;
    {
        const bool branch_taken_0x343fac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x343FB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x343FACu;
        // 0x343fb0: 0x24847508  addiu       $a0, $a0, 0x7508 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 29960));
        ctx->in_delay_slot = false;
        if (branch_taken_0x343fac) {
            ctx->pc = 0x344158u;
            goto label_344158;
        }
    }
    // 0x343fb4: 0x0  nop
    ctx->pc = 0x343fb4u;
    // NOP
label_343fb8:
    // 0x343fb8: 0xc0d1904  jal         func_346410
    SET_GPR_U32(ctx, 31, 0x343FC0u);
    ctx->pc = 0x343FBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x343FB8u;
    // 0x343fbc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    if (!runtime->callDirectStatic(rdram, ctx, &func_00346410_0x346410, 0x346410u, 0x343fc0u)) {
        return;
    }
    ctx->pc = 0x343FC0u;
label_343fc0:
    // 0x343fc0: 0xc0d0eba  jal         func_343AE8
    SET_GPR_U32(ctx, 31, 0x343FC8u);
    ctx->pc = 0x343FC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x343FC0u;
    // 0x343fc4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    if (!runtime->callDirectStatic(rdram, ctx, &func_00343AE8_0x343ae8, 0x343ae8u, 0x343fc8u)) {
        return;
    }
    ctx->pc = 0x343FC8u;
label_343fc8:
    // 0x343fc8: 0x220202d  daddu       $a0, $s1, $zero
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x343fcc: 0x3a0282d  daddu       $a1, $sp, $zero
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x343fd0: 0x27a60004  addiu       $a2, $sp, 0x4
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
    // 0x343fd4: 0x27a70008  addiu       $a3, $sp, 0x8
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 8));
    // 0x343fd8: 0x27a8000c  addiu       $t0, $sp, 0xC
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 12));
    // 0x343fdc: 0x27a90010  addiu       $t1, $sp, 0x10
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x343fe0: 0xc0d0af2  jal         func_342BC8
    SET_GPR_U32(ctx, 31, 0x343FE8u);
    ctx->pc = 0x343FE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x343FE0u;
    // 0x343fe4: 0x27aa0014  addiu       $t2, $sp, 0x14 (Delay Slot)
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 20));
    ctx->in_delay_slot = false;
    if (!runtime->callDirectStatic(rdram, ctx, &mwsfcre_CalcWorkStmBuf_0x342bc8, 0x342bc8u, 0x343fe8u)) {
        return;
    }
    ctx->pc = 0x343FE8u;
label_343fe8:
    // 0x343fe8: 0x200202d  daddu       $a0, $s0, $zero
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x343fec: 0x8e660004  lw          $a2, 0x4($s3)
    ctx->pc = 0x343fecu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x343ff0: 0x220282d  daddu       $a1, $s1, $zero
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x343ff4: 0xc0d0f06  jal         func_343C18
    SET_GPR_U32(ctx, 31, 0x343FFCu);
    ctx->pc = 0x343FF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x343FF4u;
    // 0x343ff8: 0x8e670008  lw          $a3, 0x8($s3) (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
    ctx->in_delay_slot = false;
    if (!runtime->callDirectStatic(rdram, ctx, &func_00343C18_0x343c18, 0x343c18u, 0x343ffcu)) {
        return;
    }
    ctx->pc = 0x343FFCu;
label_343ffc:
    // 0x343ffc: 0xc0d0f80  jal         func_343E00
    SET_GPR_U32(ctx, 31, 0x344004u);
    ctx->pc = 0x344000u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x343FFCu;
    // 0x344000: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    if (!runtime->callDirectStatic(rdram, ctx, &Obj0000_Call_003395A0_Field_1C4_1C8_1CC_0x343e00, 0x343e00u, 0x344004u)) {
        return;
    }
    ctx->pc = 0x344004u;
label_344004:
    // 0x344004: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x344004u;
    {
        const bool branch_taken_0x344004 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x344008u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x344004u;
        // 0x344008: 0xae0201c0  sw          $v0, 0x1C0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 448), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x344004) {
            ctx->pc = 0x344018u;
            goto label_344018;
        }
    }
    // 0x34400c: 0x3c040045  lui         $a0, 0x45
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)69 << 16));
    // 0x344010: 0x10000051  b           . + 4 + (0x51 << 2)
    ctx->pc = 0x344010u;
    {
        const bool branch_taken_0x344010 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x344014u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x344010u;
        // 0x344014: 0x24847530  addiu       $a0, $a0, 0x7530 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30000));
        ctx->in_delay_slot = false;
        if (branch_taken_0x344010) {
            ctx->pc = 0x344158u;
            goto label_344158;
        }
    }
    ctx->pc = 0x344018u;
label_344018:
    // 0x344018: 0x202d  daddu       $a0, $zero, $zero
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34401c: 0xc0ce2e4  jal         func_338B90
    SET_GPR_U32(ctx, 31, 0x344024u);
    ctx->pc = 0x344020u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34401Cu;
    // 0x344020: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    if (!runtime->callDirectStatic(rdram, ctx, &func_00338B90_0x338b90, 0x338b90u, 0x344024u)) {
        return;
    }
    ctx->pc = 0x344024u;
label_344024:
    // 0x344024: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x344024u;
    {
        const bool branch_taken_0x344024 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x344028u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x344024u;
        // 0x344028: 0xae0201e0  sw          $v0, 0x1E0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 480), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x344024) {
            ctx->pc = 0x344038u;
            goto label_344038;
        }
    }
    // 0x34402c: 0x3c040045  lui         $a0, 0x45
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)69 << 16));
    // 0x344030: 0x10000049  b           . + 4 + (0x49 << 2)
    ctx->pc = 0x344030u;
    {
        const bool branch_taken_0x344030 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x344034u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x344030u;
        // 0x344034: 0x24847558  addiu       $a0, $a0, 0x7558 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30040));
        ctx->in_delay_slot = false;
        if (branch_taken_0x344030) {
            ctx->pc = 0x344158u;
            goto label_344158;
        }
    }
    ctx->pc = 0x344038u;
label_344038:
    // 0x344038: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x344038u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x34403c: 0x24140001  addiu       $s4, $zero, 0x1
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x344040: 0xae140038  sw          $s4, 0x38($s0)
    ctx->pc = 0x344040u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 56), GPR_U32(ctx, 20));
    // 0x344044: 0x26130044  addiu       $s3, $s0, 0x44
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 16), 68));
    // 0x344048: 0xae020058  sw          $v0, 0x58($s0)
    ctx->pc = 0x344048u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 88), GPR_U32(ctx, 2));
    // 0x34404c: 0x240202d  daddu       $a0, $s2, $zero
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x344050: 0xae000068  sw          $zero, 0x68($s0)
    ctx->pc = 0x344050u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 104), GPR_U32(ctx, 0));
    // 0x344054: 0x24050003  addiu       $a1, $zero, 0x3
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x344058: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x344058u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
    // 0x34405c: 0x260302d  daddu       $a2, $s3, $zero
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x344060: 0x8e220020  lw          $v0, 0x20($s1)
    ctx->pc = 0x344060u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
    // 0x344064: 0xae02004c  sw          $v0, 0x4C($s0)
    ctx->pc = 0x344064u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 76), GPR_U32(ctx, 2));
    // 0x344068: 0x8e230020  lw          $v1, 0x20($s1)
    ctx->pc = 0x344068u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
    // 0x34406c: 0xc0d6878  jal         func_35A1E0
    SET_GPR_U32(ctx, 31, 0x344074u);
    ctx->pc = 0x344070u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34406Cu;
    // 0x344070: 0xae030050  sw          $v1, 0x50($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    if (!runtime->callDirectStatic(rdram, ctx, &SFD_GetTrHn_0x35a1e0, 0x35a1e0u, 0x344074u)) {
        return;
    }
    ctx->pc = 0x344074u;
label_344074:
    // 0x344074: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x344074u;
    {
        const bool branch_taken_0x344074 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x344074) {
            ctx->pc = 0x344078u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x344074u;
            // 0x344078: 0xae600000  sw          $zero, 0x0($s3) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x34407Cu;
            goto label_34407c;
        }
    }
    ctx->pc = 0x34407Cu;
label_34407c:
    // 0x34407c: 0xae14006c  sw          $s4, 0x6C($s0)
    ctx->pc = 0x34407cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 108), GPR_U32(ctx, 20));
    // 0x344080: 0x282d  daddu       $a1, $zero, $zero
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x344084: 0xa2000070  sb          $zero, 0x70($s0)
    ctx->pc = 0x344084u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 112), (uint8_t)GPR_U32(ctx, 0));
    // 0x344088: 0x200202d  daddu       $a0, $s0, $zero
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34408c: 0xa2000071  sb          $zero, 0x71($s0)
    ctx->pc = 0x34408cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 113), (uint8_t)GPR_U32(ctx, 0));
    // 0x344090: 0xa2000072  sb          $zero, 0x72($s0)
    ctx->pc = 0x344090u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 114), (uint8_t)GPR_U32(ctx, 0));
    // 0x344094: 0xa2000073  sb          $zero, 0x73($s0)
    ctx->pc = 0x344094u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 115), (uint8_t)GPR_U32(ctx, 0));
    // 0x344098: 0xc0d25c6  jal         func_349718
    SET_GPR_U32(ctx, 31, 0x3440A0u);
    ctx->pc = 0x34409Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x344098u;
    // 0x34409c: 0xae00005c  sw          $zero, 0x5C($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 92), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    if (!runtime->callDirectStatic(rdram, ctx, &func_00349718_0x349718, 0x349718u, 0x3440a0u)) {
        return;
    }
    ctx->pc = 0x3440A0u;
label_3440a0:
    // 0x3440a0: 0x200202d  daddu       $a0, $s0, $zero
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3440a4: 0xc0d25ca  jal         func_349728
    SET_GPR_U32(ctx, 31, 0x3440ACu);
    ctx->pc = 0x3440A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3440A4u;
    // 0x3440a8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    if (!runtime->callDirectStatic(rdram, ctx, &func_00349728_0x349728, 0x349728u, 0x3440acu)) {
        return;
    }
    ctx->pc = 0x3440ACu;
label_3440ac:
    // 0x3440ac: 0xae140054  sw          $s4, 0x54($s0)
    ctx->pc = 0x3440acu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 20));
    // 0x3440b0: 0xae000084  sw          $zero, 0x84($s0)
    ctx->pc = 0x3440b0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 132), GPR_U32(ctx, 0));
    // 0x3440b4: 0xc0d26a8  jal         func_349AA0
    SET_GPR_U32(ctx, 31, 0x3440BCu);
    ctx->pc = 0x3440B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3440B4u;
    // 0x3440b8: 0x8e0401c0  lw          $a0, 0x1C0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 448)));
    ctx->in_delay_slot = false;
    if (!runtime->callDirectStatic(rdram, ctx, &Forward327D00_349AA0_0x349aa0, 0x349aa0u, 0x3440bcu)) {
        return;
    }
    ctx->pc = 0x3440BCu;
label_3440bc:
    // 0x3440bc: 0x10400028  beqz        $v0, . + 4 + (0x28 << 2)
    ctx->pc = 0x3440BCu;
    {
        const bool branch_taken_0x3440bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3440C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3440BCu;
        // 0x3440c0: 0xae020040  sw          $v0, 0x40($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 64), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3440bc) {
            ctx->pc = 0x344160u;
            goto label_344160;
        }
    }
    // 0x3440c4: 0xc0d1840  jal         func_346100
    SET_GPR_U32(ctx, 31, 0x3440CCu);
    ctx->pc = 0x3440C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3440C4u;
    // 0x3440c8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    if (!runtime->callDirectStatic(rdram, ctx, &func_00346100_0x346100, 0x346100u, 0x3440ccu)) {
        return;
    }
    ctx->pc = 0x3440CCu;
label_3440cc:
    // 0x3440cc: 0xc0cd4f0  jal         func_3353C0
    SET_GPR_U32(ctx, 31, 0x3440D4u);
    ctx->pc = 0x3440D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3440CCu;
    // 0x3440d0: 0x8e0401c0  lw          $a0, 0x1C0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 448)));
    ctx->in_delay_slot = false;
    if (!runtime->callDirectStatic(rdram, ctx, &func_003353C0_0x3353c0, 0x3353c0u, 0x3440d4u)) {
        return;
    }
    ctx->pc = 0x3440D4u;
label_3440d4:
    // 0x3440d4: 0xae000074  sw          $zero, 0x74($s0)
    ctx->pc = 0x3440d4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 116), GPR_U32(ctx, 0));
    // 0x3440d8: 0xae020048  sw          $v0, 0x48($s0)
    ctx->pc = 0x3440d8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 72), GPR_U32(ctx, 2));
    // 0x3440dc: 0x40202d  daddu       $a0, $v0, $zero
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3440e0: 0xc0cd560  jal         func_335580
    SET_GPR_U32(ctx, 31, 0x3440E8u);
    ctx->pc = 0x3440E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3440E0u;
    // 0x3440e4: 0x8e050040  lw          $a1, 0x40($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 64)));
    ctx->in_delay_slot = false;
    if (!runtime->callDirectStatic(rdram, ctx, &func_00335580_0x335580, 0x335580u, 0x3440e8u)) {
        return;
    }
    ctx->pc = 0x3440E8u;
label_3440e8:
    // 0x3440e8: 0xc0d10c0  jal         func_344300
    SET_GPR_U32(ctx, 31, 0x3440F0u);
    ctx->pc = 0x3440ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3440E8u;
    // 0x3440ec: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    if (!runtime->callDirectStatic(rdram, ctx, &func_00344300_0x344300, 0x344300u, 0x3440f0u)) {
        return;
    }
    ctx->pc = 0x3440F0u;
label_3440f0:
    // 0x3440f0: 0x2403ffff  addiu       $v1, $zero, -0x1
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x3440f4: 0x1043001a  beq         $v0, $v1, . + 4 + (0x1A << 2)
    ctx->pc = 0x3440F4u;
    {
        const bool branch_taken_0x3440f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x3440f4) {
            ctx->pc = 0x344160u;
            goto label_344160;
        }
    }
    // 0x3440fc: 0x8e27000c  lw          $a3, 0xC($s1)
    ctx->pc = 0x3440fcu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x344100: 0x8e0400ac  lw          $a0, 0xAC($s0)
    ctx->pc = 0x344100u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 172)));
    // 0x344104: 0x8e0500b0  lw          $a1, 0xB0($s0)
    ctx->pc = 0x344104u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 176)));
    // 0x344108: 0xc0d1b06  jal         func_346C18
    SET_GPR_U32(ctx, 31, 0x344110u);
    ctx->pc = 0x34410Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x344108u;
    // 0x34410c: 0x8e260008  lw          $a2, 0x8($s1) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    ctx->in_delay_slot = false;
    if (!runtime->callDirectStatic(rdram, ctx, &Forward35F970_346C18_0x346c18, 0x346c18u, 0x344110u)) {
        return;
    }
    ctx->pc = 0x344110u;
label_344110:
    // 0x344110: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x344110u;
    {
        const bool branch_taken_0x344110 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x344110) {
            ctx->pc = 0x344114u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x344110u;
            // 0x344114: 0xae0200a8  sw          $v0, 0xA8($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 168), GPR_U32(ctx, 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x344128u;
            goto label_344128;
        }
    }
    // 0x344118: 0x3c040045  lui         $a0, 0x45
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)69 << 16));
    // 0x34411c: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x34411Cu;
    {
        const bool branch_taken_0x34411c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x344120u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34411Cu;
        // 0x344120: 0x24847580  addiu       $a0, $a0, 0x7580 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30080));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34411c) {
            ctx->pc = 0x344158u;
            goto label_344158;
        }
    }
    // 0x344124: 0x0  nop
    ctx->pc = 0x344124u;
    // NOP
label_344128:
    // 0x344128: 0x200202d  daddu       $a0, $s0, $zero
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34412c: 0xc0d1c6e  jal         func_3471B8
    SET_GPR_U32(ctx, 31, 0x344134u);
    ctx->pc = 0x344130u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34412Cu;
    // 0x344130: 0x8e050028  lw          $a1, 0x28($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
    ctx->in_delay_slot = false;
    if (!runtime->callDirectStatic(rdram, ctx, &func_003471B8_0x3471b8, 0x3471b8u, 0x344134u)) {
        return;
    }
    ctx->pc = 0x344134u;
label_344134:
    // 0x344134: 0xc0d1cc4  jal         func_347310
    SET_GPR_U32(ctx, 31, 0x34413Cu);
    ctx->pc = 0x344138u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x344134u;
    // 0x344138: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    if (!runtime->callDirectStatic(rdram, ctx, &func_00347310_0x347310, 0x347310u, 0x34413cu)) {
        return;
    }
    ctx->pc = 0x34413Cu;
label_34413c:
    // 0x34413c: 0x200202d  daddu       $a0, $s0, $zero
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x344140: 0xc0d1ce8  jal         func_3473A0
    SET_GPR_U32(ctx, 31, 0x344148u);
    ctx->pc = 0x344144u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x344140u;
    // 0x344144: 0xae02017c  sw          $v0, 0x17C($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 380), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    if (!runtime->callDirectStatic(rdram, ctx, &func_003473A0_0x3473a0, 0x3473a0u, 0x344148u)) {
        return;
    }
    ctx->pc = 0x344148u;
label_344148:
    // 0x344148: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x344148u;
    {
        const bool branch_taken_0x344148 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x344148) {
            ctx->pc = 0x344170u;
            goto label_344170;
        }
    }
    // 0x344150: 0x3c040045  lui         $a0, 0x45
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)69 << 16));
    // 0x344154: 0x248475a0  addiu       $a0, $a0, 0x75A0
    ctx->pc = 0x344154u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30112));
label_344158:
    // 0x344158: 0xc0d22f8  jal         func_348BE0
    ctx->pc = 0x344158u;
    SET_GPR_U32(ctx, 31, 0x344160u);
    if (!runtime->callDirectStatic(rdram, ctx, &MWSFSVM_Error_0x348be0, 0x348be0u, 0x344160u)) {
        return;
    }
    ctx->pc = 0x344160u;
label_344160:
    // 0x344160: 0xc0d10f2  jal         func_3443C8
    SET_GPR_U32(ctx, 31, 0x344168u);
    ctx->pc = 0x344164u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x344160u;
    // 0x344164: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    if (!runtime->callDirectStatic(rdram, ctx, &Forward3443E0_3443C8_0x3443c8, 0x3443c8u, 0x344168u)) {
        return;
    }
    ctx->pc = 0x344168u;
label_344168:
    // 0x344168: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x344168u;
    {
        const bool branch_taken_0x344168 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x34416Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x344168u;
        // 0x34416c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x344168) {
            ctx->pc = 0x3441A8u;
            goto label_3441a8;
        }
    }
    ctx->pc = 0x344170u;
label_344170:
    // 0x344170: 0xc0d1d00  jal         func_347400
    SET_GPR_U32(ctx, 31, 0x344178u);
    ctx->pc = 0x344174u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x344170u;
    // 0x344174: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    if (!runtime->callDirectStatic(rdram, ctx, &func_00347400_0x347400, 0x347400u, 0x344178u)) {
        return;
    }
    ctx->pc = 0x344178u;
label_344178:
    // 0x344178: 0xc0d13f6  jal         func_344FD8
    SET_GPR_U32(ctx, 31, 0x344180u);
    ctx->pc = 0x34417Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x344178u;
    // 0x34417c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    if (!runtime->callDirectStatic(rdram, ctx, &Obj0000_Init_Fields_B4_B8_BC_Entries_0x344fd8, 0x344fd8u, 0x344180u)) {
        return;
    }
    ctx->pc = 0x344180u;
label_344180:
    // 0x344180: 0xc0d1410  jal         func_345040
    SET_GPR_U32(ctx, 31, 0x344188u);
    ctx->pc = 0x344184u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x344180u;
    // 0x344184: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    if (!runtime->callDirectStatic(rdram, ctx, &func_00345040_0x345040, 0x345040u, 0x344188u)) {
        return;
    }
    ctx->pc = 0x344188u;
label_344188:
    // 0x344188: 0xae140000  sw          $s4, 0x0($s0)
    ctx->pc = 0x344188u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 20));
    // 0x34418c: 0xae1502fc  sw          $s5, 0x2FC($s0)
    ctx->pc = 0x34418cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 764), GPR_U32(ctx, 21));
    // 0x344190: 0x200102d  daddu       $v0, $s0, $zero
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x344194: 0xae0002e8  sw          $zero, 0x2E8($s0)
    ctx->pc = 0x344194u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 744), GPR_U32(ctx, 0));
    // 0x344198: 0xae0002d8  sw          $zero, 0x2D8($s0)
    ctx->pc = 0x344198u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 728), GPR_U32(ctx, 0));
    // 0x34419c: 0xae0002dc  sw          $zero, 0x2DC($s0)
    ctx->pc = 0x34419cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 732), GPR_U32(ctx, 0));
    // 0x3441a0: 0xae0002e0  sw          $zero, 0x2E0($s0)
    ctx->pc = 0x3441a0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 736), GPR_U32(ctx, 0));
    // 0x3441a4: 0xae000300  sw          $zero, 0x300($s0)
    ctx->pc = 0x3441a4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 768), GPR_U32(ctx, 0));
label_3441a8:
    // 0x3441a8: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x3441a8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3441ac: 0xdfb10028  ld          $s1, 0x28($sp)
    ctx->pc = 0x3441acu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x3441b0: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x3441b0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3441b4: 0xdfb30038  ld          $s3, 0x38($sp)
    ctx->pc = 0x3441b4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x3441b8: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x3441b8u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x3441bc: 0xdfb50048  ld          $s5, 0x48($sp)
    ctx->pc = 0x3441bcu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x3441c0: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x3441c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x3441c4: 0x3e00008  jr          $ra
    ctx->pc = 0x3441C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3441C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3441C4u;
        // 0x3441c8: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3441C4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    // 0x3441cc: 0x0  nop
    // NOP
    ctx->pc = 0x3441d0u;
}