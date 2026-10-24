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
// Function: func_007CCAB0
// Address: 0x7ccab0 - 0x7cce48
void func_007CCAB0_0x7ccab0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_007CCAB0_0x7ccab0");
#endif

    switch (ctx->pc) {
        case 0x7ccbc0u: goto label_7ccbc0;
        case 0x7ccbccu: goto label_7ccbcc;
        case 0x7ccc10u: goto label_7ccc10;
        case 0x7ccc30u: goto label_7ccc30;
        case 0x7ccc3cu: goto label_7ccc3c;
        case 0x7ccc78u: goto label_7ccc78;
        case 0x7ccc84u: goto label_7ccc84;
        case 0x7ccca8u: goto label_7ccca8;
        case 0x7cccc4u: goto label_7cccc4;
        case 0x7cccdcu: goto label_7cccdc;
        case 0x7ccce8u: goto label_7ccce8;
        case 0x7ccd4cu: goto label_7ccd4c;
        case 0x7ccd9cu: goto label_7ccd9c;
        case 0x7ccdc0u: goto label_7ccdc0;
        case 0x7cce14u: goto label_7cce14;
        case 0x7cce2cu: goto label_7cce2c;
        default: break;
    }

    ctx->pc = 0x7ccab0u;

    // 0x7ccab0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x7ccab0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x7ccab4: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x7ccab4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x7ccab8: 0xffb10020  sd          $s1, 0x20($sp)
    ctx->pc = 0x7ccab8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    // 0x7ccabc: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x7ccabcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7ccac0: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x7ccac0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x7ccac4: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x7ccac4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7ccac8: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x7ccac8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x7ccacc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x7ccaccu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7ccad0: 0x92030000  lbu         $v1, 0x0($s0)
    ctx->pc = 0x7ccad0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x7ccad4: 0x30620040  andi        $v0, $v1, 0x40
    ctx->pc = 0x7ccad4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)64);
    // 0x7ccad8: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x7CCAD8u;
    {
        const bool branch_taken_0x7ccad8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x7CCADCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7CCAD8u;
        // 0x7ccadc: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7ccad8) {
            ctx->pc = 0x7CCAF4u;
            goto label_7ccaf4;
        }
    }
    ctx->pc = 0x7CCAE0u;
    // 0x7ccae0: 0x8e440008  lw          $a0, 0x8($s2)
    ctx->pc = 0x7ccae0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x7ccae4: 0x3062003f  andi        $v0, $v1, 0x3F
    ctx->pc = 0x7ccae4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)63);
    // 0x7ccae8: 0x8ce30000  lw          $v1, 0x0($a3)
    ctx->pc = 0x7ccae8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x7ccaec: 0x10000027  b           . + 4 + (0x27 << 2)
    ctx->pc = 0x7CCAECu;
    {
        const bool branch_taken_0x7ccaec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x7CCAF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7CCAECu;
        // 0x7ccaf0: 0x441018  mult        $v0, $v0, $a0 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x7ccaec) {
            ctx->pc = 0x7CCB8Cu;
            goto label_7ccb8c;
        }
    }
    ctx->pc = 0x7CCAF4u;
label_7ccaf4:
    // 0x7ccaf4: 0x30620080  andi        $v0, $v1, 0x80
    ctx->pc = 0x7ccaf4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)128);
    // 0x7ccaf8: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x7CCAF8u;
    {
        const bool branch_taken_0x7ccaf8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x7CCAFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7CCAF8u;
        // 0x7ccafc: 0x3062003f  andi        $v0, $v1, 0x3F (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)63);
        ctx->in_delay_slot = false;
        if (branch_taken_0x7ccaf8) {
            ctx->pc = 0x7CCB0Cu;
            goto label_7ccb0c;
        }
    }
    ctx->pc = 0x7CCB00u;
    // 0x7ccb00: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x7ccb00u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7ccb04: 0x1000002f  b           . + 4 + (0x2F << 2)
    ctx->pc = 0x7CCB04u;
    {
        const bool branch_taken_0x7ccb04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x7CCB08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7CCB04u;
        // 0x7ccb08: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7ccb04) {
            ctx->pc = 0x7CCBC4u;
            goto label_7ccbc4;
        }
    }
    ctx->pc = 0x7CCB0Cu;
label_7ccb0c:
    // 0x7ccb0c: 0x306200c0  andi        $v0, $v1, 0xC0
    ctx->pc = 0x7ccb0cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)192);
    // 0x7ccb10: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x7CCB10u;
    {
        const bool branch_taken_0x7ccb10 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x7CCB14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7CCB10u;
        // 0x7ccb14: 0x3062003f  andi        $v0, $v1, 0x3F (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)63);
        ctx->in_delay_slot = false;
        if (branch_taken_0x7ccb10) {
            ctx->pc = 0x7CCB28u;
            goto label_7ccb28;
        }
    }
    ctx->pc = 0x7CCB18u;
    // 0x7ccb18: 0x2221821  addu        $v1, $s1, $v0
    ctx->pc = 0x7ccb18u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x7ccb1c: 0xafa20004  sw          $v0, 0x4($sp)
    ctx->pc = 0x7ccb1cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    // 0x7ccb20: 0x100000c2  b           . + 4 + (0xC2 << 2)
    ctx->pc = 0x7CCB20u;
    {
        const bool branch_taken_0x7ccb20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x7CCB24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7CCB20u;
        // 0x7ccb24: 0xa060029c  sb          $zero, 0x29C($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 668), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7ccb20) {
            ctx->pc = 0x7CCE2Cu;
            goto label_7cce2c;
        }
    }
    ctx->pc = 0x7CCB28u;
label_7ccb28:
    // 0x7ccb28: 0x2c62002f  sltiu       $v0, $v1, 0x2F
    ctx->pc = 0x7ccb28u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)47) ? 1 : 0);
    // 0x7ccb2c: 0x104000bd  beqz        $v0, . + 4 + (0xBD << 2)
    ctx->pc = 0x7CCB2Cu;
    {
        const bool branch_taken_0x7ccb2c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x7CCB30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7CCB2Cu;
        // 0x7ccb30: 0x3c02007d  lui         $v0, 0x7D (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)125 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7ccb2c) {
            ctx->pc = 0x7CCE24u;
            goto label_7cce24;
        }
    }
    ctx->pc = 0x7CCB34u;
    // 0x7ccb34: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x7ccb34u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x7ccb38: 0x24421250  addiu       $v0, $v0, 0x1250
    ctx->pc = 0x7ccb38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4688));
    // 0x7ccb3c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x7ccb3cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x7ccb40: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x7ccb40u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x7ccb44: 0x800008  jr          $a0
    ctx->pc = 0x7CCB44u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x7CCB4Cu: goto label_7ccb4c;
            case 0x7CCB60u: goto label_7ccb60;
            case 0x7CCB70u: goto label_7ccb70;
            case 0x7CCB98u: goto label_7ccb98;
            case 0x7CCBB4u: goto label_7ccbb4;
            case 0x7CCC04u: goto label_7ccc04;
            case 0x7CCC24u: goto label_7ccc24;
            case 0x7CCC6Cu: goto label_7ccc6c;
            case 0x7CCC9Cu: goto label_7ccc9c;
            case 0x7CCCB8u: goto label_7cccb8;
            case 0x7CCCD4u: goto label_7cccd4;
            case 0x7CCD3Cu: goto label_7ccd3c;
            case 0x7CCDA4u: goto label_7ccda4;
            case 0x7CCE08u: goto label_7cce08;
            case 0x7CCE24u: goto label_7cce24;
            case 0x7CCE2Cu: goto label_7cce2c;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x7CCB44u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x7CCB4Cu;
label_7ccb4c:
    // 0x7ccb4c: 0x8a020003  lwl         $v0, 0x3($s0)
    ctx->pc = 0x7ccb4cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 3); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 2) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 2, (int32_t)merged); }
    // 0x7ccb50: 0x9a020000  lwr         $v0, 0x0($s0)
    ctx->pc = 0x7ccb50u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 0); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 2) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 2) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 2, merged64); }
    // 0x7ccb54: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x7ccb54u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x7ccb58: 0x100000b4  b           . + 4 + (0xB4 << 2)
    ctx->pc = 0x7CCB58u;
    {
        const bool branch_taken_0x7ccb58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x7CCB5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7CCB58u;
        // 0x7ccb5c: 0xace20000  sw          $v0, 0x0($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7ccb58) {
            ctx->pc = 0x7CCE2Cu;
            goto label_7cce2c;
        }
    }
    ctx->pc = 0x7CCB60u;
label_7ccb60:
    // 0x7ccb60: 0x92030000  lbu         $v1, 0x0($s0)
    ctx->pc = 0x7ccb60u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x7ccb64: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x7ccb64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x7ccb68: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x7CCB68u;
    {
        const bool branch_taken_0x7ccb68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x7CCB6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7CCB68u;
        // 0x7ccb6c: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7ccb68) {
            ctx->pc = 0x7CCBA8u;
            goto label_7ccba8;
        }
    }
    ctx->pc = 0x7CCB70u;
label_7ccb70:
    // 0x7ccb70: 0x92020001  lbu         $v0, 0x1($s0)
    ctx->pc = 0x7ccb70u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1)));
    // 0x7ccb74: 0x92040000  lbu         $a0, 0x0($s0)
    ctx->pc = 0x7ccb74u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x7ccb78: 0x21238  dsll        $v0, $v0, 8
    ctx->pc = 0x7ccb78u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 8);
    // 0x7ccb7c: 0x8ce30000  lw          $v1, 0x0($a3)
    ctx->pc = 0x7ccb7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x7ccb80: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x7ccb80u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x7ccb84: 0x26100002  addiu       $s0, $s0, 0x2
    ctx->pc = 0x7ccb84u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 2));
    // 0x7ccb88: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x7ccb88u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
label_7ccb8c:
    // 0x7ccb8c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x7ccb8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x7ccb90: 0x100000a6  b           . + 4 + (0xA6 << 2)
    ctx->pc = 0x7CCB90u;
    {
        const bool branch_taken_0x7ccb90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x7CCB94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7CCB90u;
        // 0x7ccb94: 0xace30000  sw          $v1, 0x0($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7ccb90) {
            ctx->pc = 0x7CCE2Cu;
            goto label_7cce2c;
        }
    }
    ctx->pc = 0x7CCB98u;
label_7ccb98:
    // 0x7ccb98: 0x8a030003  lwl         $v1, 0x3($s0)
    ctx->pc = 0x7ccb98u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 3); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 3) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 3, (int32_t)merged); }
    // 0x7ccb9c: 0x9a030000  lwr         $v1, 0x0($s0)
    ctx->pc = 0x7ccb9cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 0); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 3) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 3) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 3, merged64); }
    // 0x7ccba0: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x7ccba0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x7ccba4: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x7ccba4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
label_7ccba8:
    // 0x7ccba8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x7ccba8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x7ccbac: 0x1000009f  b           . + 4 + (0x9F << 2)
    ctx->pc = 0x7CCBACu;
    {
        const bool branch_taken_0x7ccbac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x7CCBB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7CCBACu;
        // 0x7ccbb0: 0xace20000  sw          $v0, 0x0($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7ccbac) {
            ctx->pc = 0x7CCE2Cu;
            goto label_7cce2c;
        }
    }
    ctx->pc = 0x7CCBB4u;
label_7ccbb4:
    // 0x7ccbb4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x7ccbb4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7ccbb8: 0xc1f30ac  jal         func_7CC2B0
    ctx->pc = 0x7CCBB8u;
    SET_GPR_U32(ctx, 31, 0x7CCBC0u);
    ctx->pc = 0x7CCBBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7CCBB8u;
    // 0x7ccbbc: 0x37a50004  ori         $a1, $sp, 0x4 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 29) | (uint64_t)(uint16_t)4);
    ctx->in_delay_slot = false;
    ctx->pc = 0x7CC2B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7CC2B0u, 0x7CCBB8u, 0x7CCBC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7CCBC0u;
label_7ccbc0:
    // 0x7ccbc0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x7ccbc0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_7ccbc4:
    // 0x7ccbc4: 0xc1f30ac  jal         func_7CC2B0
    ctx->pc = 0x7CCBC4u;
    SET_GPR_U32(ctx, 31, 0x7CCBCCu);
    ctx->pc = 0x7CCBC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7CCBC4u;
    // 0x7ccbc8: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7CC2B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7CC2B0u, 0x7CCBC4u, 0x7CCBCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7CCBCCu;
label_7ccbcc:
    // 0x7ccbcc: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x7ccbccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x7ccbd0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x7ccbd0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7ccbd4: 0x8e45000c  lw          $a1, 0xC($s2)
    ctx->pc = 0x7ccbd4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x7ccbd8: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x7ccbd8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x7ccbdc: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x7ccbdcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x7ccbe0: 0x852018  mult        $a0, $a0, $a1
    ctx->pc = 0x7ccbe0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x7ccbe4: 0x218c0  sll         $v1, $v0, 3
    ctx->pc = 0x7ccbe4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x7ccbe8: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x7ccbe8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x7ccbec: 0x2231821  addu        $v1, $s1, $v1
    ctx->pc = 0x7ccbecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
    // 0x7ccbf0: 0xa046029c  sb          $a2, 0x29C($v0)
    ctx->pc = 0x7ccbf0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 668), (uint8_t)GPR_U32(ctx, 6));
    // 0x7ccbf4: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x7ccbf4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x7ccbf8: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x7ccbf8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7ccbfc: 0x1000008b  b           . + 4 + (0x8B << 2)
    ctx->pc = 0x7CCBFCu;
    {
        const bool branch_taken_0x7ccbfc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x7CCC00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7CCBFCu;
        // 0x7ccc00: 0xfc620018  sd          $v0, 0x18($v1) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 3), 24), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7ccbfc) {
            ctx->pc = 0x7CCE2Cu;
            goto label_7cce2c;
        }
    }
    ctx->pc = 0x7CCC04u;
label_7ccc04:
    // 0x7ccc04: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x7ccc04u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7ccc08: 0xc1f30ac  jal         func_7CC2B0
    ctx->pc = 0x7CCC08u;
    SET_GPR_U32(ctx, 31, 0x7CCC10u);
    ctx->pc = 0x7CCC0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7CCC08u;
    // 0x7ccc0c: 0x37a50004  ori         $a1, $sp, 0x4 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 29) | (uint64_t)(uint16_t)4);
    ctx->in_delay_slot = false;
    ctx->pc = 0x7CC2B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7CC2B0u, 0x7CCC08u, 0x7CCC10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7CCC10u;
label_7ccc10:
    // 0x7ccc10: 0x8fa30004  lw          $v1, 0x4($sp)
    ctx->pc = 0x7ccc10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x7ccc14: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x7ccc14u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7ccc18: 0x2231821  addu        $v1, $s1, $v1
    ctx->pc = 0x7ccc18u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
    // 0x7ccc1c: 0x10000083  b           . + 4 + (0x83 << 2)
    ctx->pc = 0x7CCC1Cu;
    {
        const bool branch_taken_0x7ccc1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x7CCC20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7CCC1Cu;
        // 0x7ccc20: 0xa060029c  sb          $zero, 0x29C($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 668), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7ccc1c) {
            ctx->pc = 0x7CCE2Cu;
            goto label_7cce2c;
        }
    }
    ctx->pc = 0x7CCC24u;
label_7ccc24:
    // 0x7ccc24: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x7ccc24u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7ccc28: 0xc1f30ac  jal         func_7CC2B0
    ctx->pc = 0x7CCC28u;
    SET_GPR_U32(ctx, 31, 0x7CCC30u);
    ctx->pc = 0x7CCC2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7CCC28u;
    // 0x7ccc2c: 0x37a50004  ori         $a1, $sp, 0x4 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 29) | (uint64_t)(uint16_t)4);
    ctx->in_delay_slot = false;
    ctx->pc = 0x7CC2B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7CC2B0u, 0x7CCC28u, 0x7CCC30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7CCC30u;
label_7ccc30:
    // 0x7ccc30: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x7ccc30u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7ccc34: 0xc1f30ac  jal         func_7CC2B0
    ctx->pc = 0x7CCC34u;
    SET_GPR_U32(ctx, 31, 0x7CCC3Cu);
    ctx->pc = 0x7CCC38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7CCC34u;
    // 0x7ccc38: 0x37a50008  ori         $a1, $sp, 0x8 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 29) | (uint64_t)(uint16_t)8);
    ctx->in_delay_slot = false;
    ctx->pc = 0x7CC2B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7CC2B0u, 0x7CCC34u, 0x7CCC3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7CCC3Cu;
label_7ccc3c:
    // 0x7ccc3c: 0x8fa40004  lw          $a0, 0x4($sp)
    ctx->pc = 0x7ccc3cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x7ccc40: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x7ccc40u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7ccc44: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x7ccc44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x7ccc48: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x7ccc48u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x7ccc4c: 0x410c0  sll         $v0, $a0, 3
    ctx->pc = 0x7ccc4cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x7ccc50: 0x2242021  addu        $a0, $s1, $a0
    ctx->pc = 0x7ccc50u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
    // 0x7ccc54: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x7ccc54u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x7ccc58: 0xa085029c  sb          $a1, 0x29C($a0)
    ctx->pc = 0x7ccc58u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 668), (uint8_t)GPR_U32(ctx, 5));
    // 0x7ccc5c: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x7ccc5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x7ccc60: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x7ccc60u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x7ccc64: 0x10000071  b           . + 4 + (0x71 << 2)
    ctx->pc = 0x7CCC64u;
    {
        const bool branch_taken_0x7ccc64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x7CCC68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7CCC64u;
        // 0x7ccc68: 0xfc430018  sd          $v1, 0x18($v0) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 2), 24), GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7ccc64) {
            ctx->pc = 0x7CCE2Cu;
            goto label_7cce2c;
        }
    }
    ctx->pc = 0x7CCC6Cu;
label_7ccc6c:
    // 0x7ccc6c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x7ccc6cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7ccc70: 0xc1f30ac  jal         func_7CC2B0
    ctx->pc = 0x7CCC70u;
    SET_GPR_U32(ctx, 31, 0x7CCC78u);
    ctx->pc = 0x7CCC74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7CCC70u;
    // 0x7ccc74: 0x37a50004  ori         $a1, $sp, 0x4 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 29) | (uint64_t)(uint16_t)4);
    ctx->in_delay_slot = false;
    ctx->pc = 0x7CC2B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7CC2B0u, 0x7CCC70u, 0x7CCC78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7CCC78u;
label_7ccc78:
    // 0x7ccc78: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x7ccc78u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7ccc7c: 0xc1f30ac  jal         func_7CC2B0
    ctx->pc = 0x7CCC7Cu;
    SET_GPR_U32(ctx, 31, 0x7CCC84u);
    ctx->pc = 0x7CCC80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7CCC7Cu;
    // 0x7ccc80: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7CC2B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7CC2B0u, 0x7CCC7Cu, 0x7CCC84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7CCC84u;
label_7ccc84:
    // 0x7ccc84: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x7ccc84u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7ccc88: 0x97a30004  lhu         $v1, 0x4($sp)
    ctx->pc = 0x7ccc88u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x7ccc8c: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x7ccc8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x7ccc90: 0xa6230298  sh          $v1, 0x298($s1)
    ctx->pc = 0x7ccc90u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 664), (uint16_t)GPR_U32(ctx, 3));
    // 0x7ccc94: 0x10000065  b           . + 4 + (0x65 << 2)
    ctx->pc = 0x7CCC94u;
    {
        const bool branch_taken_0x7ccc94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x7CCC98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7CCC94u;
        // 0x7ccc98: 0xfe220008  sd          $v0, 0x8($s1) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 17), 8), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7ccc94) {
            ctx->pc = 0x7CCE2Cu;
            goto label_7cce2c;
        }
    }
    ctx->pc = 0x7CCC9Cu;
label_7ccc9c:
    // 0x7ccc9c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x7ccc9cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7ccca0: 0xc1f30ac  jal         func_7CC2B0
    ctx->pc = 0x7CCCA0u;
    SET_GPR_U32(ctx, 31, 0x7CCCA8u);
    ctx->pc = 0x7CCCA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7CCCA0u;
    // 0x7ccca4: 0x37a50004  ori         $a1, $sp, 0x4 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 29) | (uint64_t)(uint16_t)4);
    ctx->in_delay_slot = false;
    ctx->pc = 0x7CC2B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7CC2B0u, 0x7CCCA0u, 0x7CCCA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7CCCA8u;
label_7ccca8:
    // 0x7ccca8: 0x97a30004  lhu         $v1, 0x4($sp)
    ctx->pc = 0x7ccca8u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x7cccac: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x7cccacu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7cccb0: 0x1000005e  b           . + 4 + (0x5E << 2)
    ctx->pc = 0x7CCCB0u;
    {
        const bool branch_taken_0x7cccb0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x7CCCB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7CCCB0u;
        // 0x7cccb4: 0xa6230298  sh          $v1, 0x298($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 664), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7cccb0) {
            ctx->pc = 0x7CCE2Cu;
            goto label_7cce2c;
        }
    }
    ctx->pc = 0x7CCCB8u;
label_7cccb8:
    // 0x7cccb8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x7cccb8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7cccbc: 0xc1f30ac  jal         func_7CC2B0
    ctx->pc = 0x7CCCBCu;
    SET_GPR_U32(ctx, 31, 0x7CCCC4u);
    ctx->pc = 0x7CCCC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7CCCBCu;
    // 0x7cccc0: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7CC2B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7CC2B0u, 0x7CCCBCu, 0x7CCCC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7CCCC4u;
label_7cccc4:
    // 0x7cccc4: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x7cccc4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x7cccc8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x7cccc8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7ccccc: 0x10000057  b           . + 4 + (0x57 << 2)
    ctx->pc = 0x7CCCCCu;
    {
        const bool branch_taken_0x7ccccc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x7CCCD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7CCCCCu;
        // 0x7cccd0: 0xfe230008  sd          $v1, 0x8($s1) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 17), 8), GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7ccccc) {
            ctx->pc = 0x7CCE2Cu;
            goto label_7cce2c;
        }
    }
    ctx->pc = 0x7CCCD4u;
label_7cccd4:
    // 0x7cccd4: 0xc0e9f1c  jal         func_3A7C70
    ctx->pc = 0x7CCCD4u;
    SET_GPR_U32(ctx, 31, 0x7CCCDCu);
    ctx->pc = 0x7CCCD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7CCCD4u;
    // 0x7cccd8: 0x240402f8  addiu       $a0, $zero, 0x2F8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 760));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A7C70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A7C70u, 0x7CCCD4u, 0x7CCCDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7CCCDCu;
label_7cccdc:
    // 0x7cccdc: 0x262502e0  addiu       $a1, $s1, 0x2E0
    ctx->pc = 0x7cccdcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 736));
    // 0x7ccce0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x7ccce0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7ccce4: 0x220182d  daddu       $v1, $s1, $zero
    ctx->pc = 0x7ccce4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_7ccce8:
    // 0x7ccce8: 0xdc660000  ld          $a2, 0x0($v1)
    ctx->pc = 0x7ccce8u;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x7cccec: 0xdc670008  ld          $a3, 0x8($v1)
    ctx->pc = 0x7cccecu;
    SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x7cccf0: 0xdc680010  ld          $t0, 0x10($v1)
    ctx->pc = 0x7cccf0u;
    SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x7cccf4: 0xdc690018  ld          $t1, 0x18($v1)
    ctx->pc = 0x7cccf4u;
    SET_GPR_U64(ctx, 9, READ64(ADD32(GPR_U32(ctx, 3), 24)));
    // 0x7cccf8: 0xfc860000  sd          $a2, 0x0($a0)
    ctx->pc = 0x7cccf8u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 0), GPR_U64(ctx, 6));
    // 0x7cccfc: 0xfc870008  sd          $a3, 0x8($a0)
    ctx->pc = 0x7cccfcu;
    WRITE64(ADD32(GPR_U32(ctx, 4), 8), GPR_U64(ctx, 7));
    // 0x7ccd00: 0xfc880010  sd          $t0, 0x10($a0)
    ctx->pc = 0x7ccd00u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 16), GPR_U64(ctx, 8));
    // 0x7ccd04: 0xfc890018  sd          $t1, 0x18($a0)
    ctx->pc = 0x7ccd04u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 24), GPR_U64(ctx, 9));
    // 0x7ccd08: 0x24630020  addiu       $v1, $v1, 0x20
    ctx->pc = 0x7ccd08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
    // 0x7ccd0c: 0x24840020  addiu       $a0, $a0, 0x20
    ctx->pc = 0x7ccd0cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
    // 0x7ccd10: 0x0  nop
    ctx->pc = 0x7ccd10u;
    // NOP
    // 0x7ccd14: 0x1465fff4  bne         $v1, $a1, . + 4 + (-0xC << 2)
    ctx->pc = 0x7CCD14u;
    {
        const bool branch_taken_0x7ccd14 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 5));
        if (branch_taken_0x7ccd14) {
            ctx->pc = 0x7CCCE8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_7ccce8;
        }
    }
    ctx->pc = 0x7CCD1Cu;
    // 0x7ccd1c: 0xdc650000  ld          $a1, 0x0($v1)
    ctx->pc = 0x7ccd1cu;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x7ccd20: 0xdc660008  ld          $a2, 0x8($v1)
    ctx->pc = 0x7ccd20u;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x7ccd24: 0xdc670010  ld          $a3, 0x10($v1)
    ctx->pc = 0x7ccd24u;
    SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x7ccd28: 0xfc850000  sd          $a1, 0x0($a0)
    ctx->pc = 0x7ccd28u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 0), GPR_U64(ctx, 5));
    // 0x7ccd2c: 0xfc860008  sd          $a2, 0x8($a0)
    ctx->pc = 0x7ccd2cu;
    WRITE64(ADD32(GPR_U32(ctx, 4), 8), GPR_U64(ctx, 6));
    // 0x7ccd30: 0xfc870010  sd          $a3, 0x10($a0)
    ctx->pc = 0x7ccd30u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 16), GPR_U64(ctx, 7));
    // 0x7ccd34: 0x1000003d  b           . + 4 + (0x3D << 2)
    ctx->pc = 0x7CCD34u;
    {
        const bool branch_taken_0x7ccd34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x7CCD38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7CCD34u;
        // 0x7ccd38: 0xae2202f0  sw          $v0, 0x2F0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 752), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7ccd34) {
            ctx->pc = 0x7CCE2Cu;
            goto label_7cce2c;
        }
    }
    ctx->pc = 0x7CCD3Cu;
label_7ccd3c:
    // 0x7ccd3c: 0x8e2402f0  lw          $a0, 0x2F0($s1)
    ctx->pc = 0x7ccd3cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 752)));
    // 0x7ccd40: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x7ccd40u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7ccd44: 0x248202e0  addiu       $v0, $a0, 0x2E0
    ctx->pc = 0x7ccd44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 736));
    // 0x7ccd48: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x7ccd48u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_7ccd4c:
    // 0x7ccd4c: 0xdcc90000  ld          $t1, 0x0($a2)
    ctx->pc = 0x7ccd4cu;
    SET_GPR_U64(ctx, 9, READ64(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x7ccd50: 0xdcc30008  ld          $v1, 0x8($a2)
    ctx->pc = 0x7ccd50u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x7ccd54: 0xdcc70010  ld          $a3, 0x10($a2)
    ctx->pc = 0x7ccd54u;
    SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 6), 16)));
    // 0x7ccd58: 0xdcc80018  ld          $t0, 0x18($a2)
    ctx->pc = 0x7ccd58u;
    SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 6), 24)));
    // 0x7ccd5c: 0xfca90000  sd          $t1, 0x0($a1)
    ctx->pc = 0x7ccd5cu;
    WRITE64(ADD32(GPR_U32(ctx, 5), 0), GPR_U64(ctx, 9));
    // 0x7ccd60: 0xfca30008  sd          $v1, 0x8($a1)
    ctx->pc = 0x7ccd60u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 8), GPR_U64(ctx, 3));
    // 0x7ccd64: 0xfca70010  sd          $a3, 0x10($a1)
    ctx->pc = 0x7ccd64u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 16), GPR_U64(ctx, 7));
    // 0x7ccd68: 0xfca80018  sd          $t0, 0x18($a1)
    ctx->pc = 0x7ccd68u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 24), GPR_U64(ctx, 8));
    // 0x7ccd6c: 0x24c60020  addiu       $a2, $a2, 0x20
    ctx->pc = 0x7ccd6cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 32));
    // 0x7ccd70: 0x24a50020  addiu       $a1, $a1, 0x20
    ctx->pc = 0x7ccd70u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 32));
    // 0x7ccd74: 0x0  nop
    ctx->pc = 0x7ccd74u;
    // NOP
    // 0x7ccd78: 0x14c2fff4  bne         $a2, $v0, . + 4 + (-0xC << 2)
    ctx->pc = 0x7CCD78u;
    {
        const bool branch_taken_0x7ccd78 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 2));
        if (branch_taken_0x7ccd78) {
            ctx->pc = 0x7CCD4Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_7ccd4c;
        }
    }
    ctx->pc = 0x7CCD80u;
    // 0x7ccd80: 0xdcc90000  ld          $t1, 0x0($a2)
    ctx->pc = 0x7ccd80u;
    SET_GPR_U64(ctx, 9, READ64(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x7ccd84: 0xdcc20008  ld          $v0, 0x8($a2)
    ctx->pc = 0x7ccd84u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x7ccd88: 0xdcc30010  ld          $v1, 0x10($a2)
    ctx->pc = 0x7ccd88u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 6), 16)));
    // 0x7ccd8c: 0xfca90000  sd          $t1, 0x0($a1)
    ctx->pc = 0x7ccd8cu;
    WRITE64(ADD32(GPR_U32(ctx, 5), 0), GPR_U64(ctx, 9));
    // 0x7ccd90: 0xfca20008  sd          $v0, 0x8($a1)
    ctx->pc = 0x7ccd90u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 8), GPR_U64(ctx, 2));
    // 0x7ccd94: 0xc0e9f30  jal         func_3A7CC0
    ctx->pc = 0x7CCD94u;
    SET_GPR_U32(ctx, 31, 0x7CCD9Cu);
    ctx->pc = 0x7CCD98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7CCD94u;
    // 0x7ccd98: 0xfca30010  sd          $v1, 0x10($a1) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 5), 16), GPR_U64(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A7CC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A7CC0u, 0x7CCD94u, 0x7CCD9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7CCD9Cu;
label_7ccd9c:
    // 0x7ccd9c: 0x10000024  b           . + 4 + (0x24 << 2)
    ctx->pc = 0x7CCD9Cu;
    {
        const bool branch_taken_0x7ccd9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x7CCDA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7CCD9Cu;
        // 0x7ccda0: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7ccd9c) {
            ctx->pc = 0x7CCE30u;
            goto label_7cce30;
        }
    }
    ctx->pc = 0x7CCDA4u;
label_7ccda4:
    // 0x7ccda4: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x7ccda4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x7ccda8: 0x24040010  addiu       $a0, $zero, 0x10
    ctx->pc = 0x7ccda8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x7ccdac: 0xafa20004  sw          $v0, 0x4($sp)
    ctx->pc = 0x7ccdacu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    // 0x7ccdb0: 0x24070010  addiu       $a3, $zero, 0x10
    ctx->pc = 0x7ccdb0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x7ccdb4: 0x2629029c  addiu       $t1, $s1, 0x29C
    ctx->pc = 0x7ccdb4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 17), 668));
    // 0x7ccdb8: 0x26280018  addiu       $t0, $s1, 0x18
    ctx->pc = 0x7ccdb8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 17), 24));
    // 0x7ccdbc: 0x0  nop
    ctx->pc = 0x7ccdbcu;
    // NOP
label_7ccdc0:
    // 0x7ccdc0: 0x2482fff0  addiu       $v0, $a0, -0x10
    ctx->pc = 0x7ccdc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967280));
    // 0x7ccdc4: 0x24860001  addiu       $a2, $a0, 0x1
    ctx->pc = 0x7ccdc4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x7ccdc8: 0x1272821  addu        $a1, $t1, $a3
    ctx->pc = 0x7ccdc8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 7)));
    // 0x7ccdcc: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x7ccdccu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x7ccdd0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x7ccdd0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x7ccdd4: 0x420c0  sll         $a0, $a0, 3
    ctx->pc = 0x7ccdd4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x7ccdd8: 0xa0a30000  sb          $v1, 0x0($a1)
    ctx->pc = 0x7ccdd8u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x7ccddc: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x7ccddcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x7ccde0: 0x1042021  addu        $a0, $t0, $a0
    ctx->pc = 0x7ccde0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
    // 0x7ccde4: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x7ccde4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x7ccde8: 0xafa60004  sw          $a2, 0x4($sp)
    ctx->pc = 0x7ccde8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 6));
    // 0x7ccdec: 0xc0382d  daddu       $a3, $a2, $zero
    ctx->pc = 0x7ccdecu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7ccdf0: 0xfc820000  sd          $v0, 0x0($a0)
    ctx->pc = 0x7ccdf0u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 0), GPR_U64(ctx, 2));
    // 0x7ccdf4: 0x2ce20020  sltiu       $v0, $a3, 0x20
    ctx->pc = 0x7ccdf4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)(int64_t)(int32_t)32) ? 1 : 0);
    // 0x7ccdf8: 0x1440fff1  bnez        $v0, . + 4 + (-0xF << 2)
    ctx->pc = 0x7CCDF8u;
    {
        const bool branch_taken_0x7ccdf8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x7CCDFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7CCDF8u;
        // 0x7ccdfc: 0xe0202d  daddu       $a0, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7ccdf8) {
            ctx->pc = 0x7CCDC0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_7ccdc0;
        }
    }
    ctx->pc = 0x7CCE00u;
    // 0x7cce00: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x7CCE00u;
    {
        const bool branch_taken_0x7cce00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x7CCE04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7CCE00u;
        // 0x7cce04: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7cce00) {
            ctx->pc = 0x7CCE30u;
            goto label_7cce30;
        }
    }
    ctx->pc = 0x7CCE08u;
label_7cce08:
    // 0x7cce08: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x7cce08u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7cce0c: 0xc1f30ac  jal         func_7CC2B0
    ctx->pc = 0x7CCE0Cu;
    SET_GPR_U32(ctx, 31, 0x7CCE14u);
    ctx->pc = 0x7CCE10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x7CCE0Cu;
    // 0x7cce10: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x7CC2B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x7CC2B0u, 0x7CCE0Cu, 0x7CCE14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7CCE14u;
label_7cce14:
    // 0x7cce14: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x7cce14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x7cce18: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x7cce18u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x7cce1c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x7CCE1Cu;
    {
        const bool branch_taken_0x7cce1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x7CCE20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7CCE1Cu;
        // 0x7cce20: 0xfe230010  sd          $v1, 0x10($s1) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 17), 16), GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x7cce1c) {
            ctx->pc = 0x7CCE2Cu;
            goto label_7cce2c;
        }
    }
    ctx->pc = 0x7CCE24u;
label_7cce24:
    // 0x7cce24: 0xc0e9ed2  jal         func_3A7B48
    ctx->pc = 0x7CCE24u;
    SET_GPR_U32(ctx, 31, 0x7CCE2Cu);
    ctx->pc = 0x3A7B48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A7B48u, 0x7CCE24u, 0x7CCE2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x7CCE2Cu;
label_7cce2c:
    // 0x7cce2c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x7cce2cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_7cce30:
    // 0x7cce30: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x7cce30u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x7cce34: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x7cce34u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x7cce38: 0xdfb10020  ld          $s1, 0x20($sp)
    ctx->pc = 0x7cce38u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x7cce3c: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x7cce3cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x7cce40: 0x3e00008  jr          $ra
    ctx->pc = 0x7CCE40u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x7CCE44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x7CCE40u;
        // 0x7cce44: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x7CCE40u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x7CCE48u;
}
} // namespace gh_mcport
