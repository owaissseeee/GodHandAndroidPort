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

// Function: execute_cfa_insn
// Address: 0x322138 - 0x3224d0
void execute_cfa_insn_0x322138(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("execute_cfa_insn_0x322138");
#endif

    switch (ctx->pc) {
        case 0x322248u: goto label_322248;
        case 0x322254u: goto label_322254;
        case 0x322298u: goto label_322298;
        case 0x3222b8u: goto label_3222b8;
        case 0x3222c4u: goto label_3222c4;
        case 0x322300u: goto label_322300;
        case 0x32230cu: goto label_32230c;
        case 0x322330u: goto label_322330;
        case 0x32234cu: goto label_32234c;
        case 0x322364u: goto label_322364;
        case 0x322370u: goto label_322370;
        case 0x3223d4u: goto label_3223d4;
        case 0x322424u: goto label_322424;
        case 0x322448u: goto label_322448;
        case 0x32249cu: goto label_32249c;
        case 0x3224b4u: goto label_3224b4;
        default: break;
    }

    ctx->pc = 0x322138u;

    // 0x322138: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x322138u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x32213c: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x32213cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x322140: 0xffb10020  sd          $s1, 0x20($sp)
    ctx->pc = 0x322140u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    // 0x322144: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x322144u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x322148: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x322148u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x32214c: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x32214cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x322150: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x322150u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x322154: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x322154u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x322158: 0x92030000  lbu         $v1, 0x0($s0)
    ctx->pc = 0x322158u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x32215c: 0x30620040  andi        $v0, $v1, 0x40
    ctx->pc = 0x32215cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)64);
    // 0x322160: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x322160u;
    {
        const bool branch_taken_0x322160 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x322164u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x322160u;
        // 0x322164: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x322160) {
            ctx->pc = 0x32217Cu;
            goto label_32217c;
        }
    }
    ctx->pc = 0x322168u;
    // 0x322168: 0x8e440008  lw          $a0, 0x8($s2)
    ctx->pc = 0x322168u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x32216c: 0x3062003f  andi        $v0, $v1, 0x3F
    ctx->pc = 0x32216cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)63);
    // 0x322170: 0x8ce30000  lw          $v1, 0x0($a3)
    ctx->pc = 0x322170u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x322174: 0x10000027  b           . + 4 + (0x27 << 2)
    ctx->pc = 0x322174u;
    {
        const bool branch_taken_0x322174 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x322178u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x322174u;
        // 0x322178: 0x441018  mult        $v0, $v0, $a0 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x322174) {
            ctx->pc = 0x322214u;
            goto label_322214;
        }
    }
    ctx->pc = 0x32217Cu;
label_32217c:
    // 0x32217c: 0x30620080  andi        $v0, $v1, 0x80
    ctx->pc = 0x32217cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)128);
    // 0x322180: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x322180u;
    {
        const bool branch_taken_0x322180 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x322184u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x322180u;
        // 0x322184: 0x3062003f  andi        $v0, $v1, 0x3F (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)63);
        ctx->in_delay_slot = false;
        if (branch_taken_0x322180) {
            ctx->pc = 0x322194u;
            goto label_322194;
        }
    }
    ctx->pc = 0x322188u;
    // 0x322188: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x322188u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32218c: 0x1000002f  b           . + 4 + (0x2F << 2)
    ctx->pc = 0x32218Cu;
    {
        const bool branch_taken_0x32218c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x322190u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32218Cu;
        // 0x322190: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32218c) {
            ctx->pc = 0x32224Cu;
            goto label_32224c;
        }
    }
    ctx->pc = 0x322194u;
label_322194:
    // 0x322194: 0x306200c0  andi        $v0, $v1, 0xC0
    ctx->pc = 0x322194u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)192);
    // 0x322198: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x322198u;
    {
        const bool branch_taken_0x322198 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x32219Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x322198u;
        // 0x32219c: 0x3062003f  andi        $v0, $v1, 0x3F (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)63);
        ctx->in_delay_slot = false;
        if (branch_taken_0x322198) {
            ctx->pc = 0x3221B0u;
            goto label_3221b0;
        }
    }
    ctx->pc = 0x3221A0u;
    // 0x3221a0: 0x2221821  addu        $v1, $s1, $v0
    ctx->pc = 0x3221a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x3221a4: 0xafa20004  sw          $v0, 0x4($sp)
    ctx->pc = 0x3221a4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    // 0x3221a8: 0x100000c2  b           . + 4 + (0xC2 << 2)
    ctx->pc = 0x3221A8u;
    {
        const bool branch_taken_0x3221a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3221ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3221A8u;
        // 0x3221ac: 0xa060029c  sb          $zero, 0x29C($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 668), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3221a8) {
            ctx->pc = 0x3224B4u;
            goto label_3224b4;
        }
    }
    ctx->pc = 0x3221B0u;
label_3221b0:
    // 0x3221b0: 0x2c62002f  sltiu       $v0, $v1, 0x2F
    ctx->pc = 0x3221b0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)47) ? 1 : 0);
    // 0x3221b4: 0x104000bd  beqz        $v0, . + 4 + (0xBD << 2)
    ctx->pc = 0x3221B4u;
    {
        const bool branch_taken_0x3221b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3221B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3221B4u;
        // 0x3221b8: 0x3c020045  lui         $v0, 0x45 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)69 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3221b4) {
            ctx->pc = 0x3224ACu;
            goto label_3224ac;
        }
    }
    ctx->pc = 0x3221BCu;
    // 0x3221bc: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x3221bcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x3221c0: 0x244212d0  addiu       $v0, $v0, 0x12D0
    ctx->pc = 0x3221c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4816));
    // 0x3221c4: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x3221c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x3221c8: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x3221c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x3221cc: 0x800008  jr          $a0
    ctx->pc = 0x3221CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x3221D4u: goto label_3221d4;
            case 0x3221E8u: goto label_3221e8;
            case 0x3221F8u: goto label_3221f8;
            case 0x322220u: goto label_322220;
            case 0x32223Cu: goto label_32223c;
            case 0x32228Cu: goto label_32228c;
            case 0x3222ACu: goto label_3222ac;
            case 0x3222F4u: goto label_3222f4;
            case 0x322324u: goto label_322324;
            case 0x322340u: goto label_322340;
            case 0x32235Cu: goto label_32235c;
            case 0x3223C4u: goto label_3223c4;
            case 0x32242Cu: goto label_32242c;
            case 0x322490u: goto label_322490;
            case 0x3224ACu: goto label_3224ac;
            case 0x3224B4u: goto label_3224b4;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3221CCu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x3221D4u;
label_3221d4:
    // 0x3221d4: 0x8a020003  lwl         $v0, 0x3($s0)
    ctx->pc = 0x3221d4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 3); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 2) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 2, (int32_t)merged); }
    // 0x3221d8: 0x9a020000  lwr         $v0, 0x0($s0)
    ctx->pc = 0x3221d8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 0); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 2) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 2) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 2, merged64); }
    // 0x3221dc: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x3221dcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x3221e0: 0x100000b4  b           . + 4 + (0xB4 << 2)
    ctx->pc = 0x3221E0u;
    {
        const bool branch_taken_0x3221e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3221E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3221E0u;
        // 0x3221e4: 0xace20000  sw          $v0, 0x0($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3221e0) {
            ctx->pc = 0x3224B4u;
            goto label_3224b4;
        }
    }
    ctx->pc = 0x3221E8u;
label_3221e8:
    // 0x3221e8: 0x92030000  lbu         $v1, 0x0($s0)
    ctx->pc = 0x3221e8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x3221ec: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x3221ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x3221f0: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x3221F0u;
    {
        const bool branch_taken_0x3221f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3221F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3221F0u;
        // 0x3221f4: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3221f0) {
            ctx->pc = 0x322230u;
            goto label_322230;
        }
    }
    ctx->pc = 0x3221F8u;
label_3221f8:
    // 0x3221f8: 0x92020001  lbu         $v0, 0x1($s0)
    ctx->pc = 0x3221f8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1)));
    // 0x3221fc: 0x92040000  lbu         $a0, 0x0($s0)
    ctx->pc = 0x3221fcu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x322200: 0x21238  dsll        $v0, $v0, 8
    ctx->pc = 0x322200u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 8);
    // 0x322204: 0x8ce30000  lw          $v1, 0x0($a3)
    ctx->pc = 0x322204u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x322208: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x322208u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x32220c: 0x26100002  addiu       $s0, $s0, 0x2
    ctx->pc = 0x32220cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 2));
    // 0x322210: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x322210u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
label_322214:
    // 0x322214: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x322214u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x322218: 0x100000a6  b           . + 4 + (0xA6 << 2)
    ctx->pc = 0x322218u;
    {
        const bool branch_taken_0x322218 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x32221Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x322218u;
        // 0x32221c: 0xace30000  sw          $v1, 0x0($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x322218) {
            ctx->pc = 0x3224B4u;
            goto label_3224b4;
        }
    }
    ctx->pc = 0x322220u;
label_322220:
    // 0x322220: 0x8a030003  lwl         $v1, 0x3($s0)
    ctx->pc = 0x322220u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 3); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 3) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 3, (int32_t)merged); }
    // 0x322224: 0x9a030000  lwr         $v1, 0x0($s0)
    ctx->pc = 0x322224u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 0); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 3) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 3) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 3, merged64); }
    // 0x322228: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x322228u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x32222c: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x32222cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
label_322230:
    // 0x322230: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x322230u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x322234: 0x1000009f  b           . + 4 + (0x9F << 2)
    ctx->pc = 0x322234u;
    {
        const bool branch_taken_0x322234 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x322238u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x322234u;
        // 0x322238: 0xace20000  sw          $v0, 0x0($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x322234) {
            ctx->pc = 0x3224B4u;
            goto label_3224b4;
        }
    }
    ctx->pc = 0x32223Cu;
label_32223c:
    // 0x32223c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x32223cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x322240: 0xc0c864e  jal         func_321938
    ctx->pc = 0x322240u;
    SET_GPR_U32(ctx, 31, 0x322248u);
    ctx->pc = 0x322244u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x322240u;
    // 0x322244: 0x37a50004  ori         $a1, $sp, 0x4 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 29) | (uint64_t)(uint16_t)4);
    ctx->in_delay_slot = false;
    ctx->pc = 0x321938u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x321938u, 0x322240u, 0x322248u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x322248u;
label_322248:
    // 0x322248: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x322248u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_32224c:
    // 0x32224c: 0xc0c864e  jal         func_321938
    ctx->pc = 0x32224Cu;
    SET_GPR_U32(ctx, 31, 0x322254u);
    ctx->pc = 0x322250u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32224Cu;
    // 0x322250: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x321938u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x321938u, 0x32224Cu, 0x322254u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x322254u;
label_322254:
    // 0x322254: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x322254u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x322258: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x322258u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32225c: 0x8e45000c  lw          $a1, 0xC($s2)
    ctx->pc = 0x32225cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x322260: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x322260u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x322264: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x322264u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x322268: 0x852018  mult        $a0, $a0, $a1
    ctx->pc = 0x322268u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x32226c: 0x218c0  sll         $v1, $v0, 3
    ctx->pc = 0x32226cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x322270: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x322270u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x322274: 0x2231821  addu        $v1, $s1, $v1
    ctx->pc = 0x322274u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
    // 0x322278: 0xa046029c  sb          $a2, 0x29C($v0)
    ctx->pc = 0x322278u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 668), (uint8_t)GPR_U32(ctx, 6));
    // 0x32227c: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x32227cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x322280: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x322280u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x322284: 0x1000008b  b           . + 4 + (0x8B << 2)
    ctx->pc = 0x322284u;
    {
        const bool branch_taken_0x322284 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x322288u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x322284u;
        // 0x322288: 0xfc620018  sd          $v0, 0x18($v1) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 3), 24), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x322284) {
            ctx->pc = 0x3224B4u;
            goto label_3224b4;
        }
    }
    ctx->pc = 0x32228Cu;
label_32228c:
    // 0x32228c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x32228cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x322290: 0xc0c864e  jal         func_321938
    ctx->pc = 0x322290u;
    SET_GPR_U32(ctx, 31, 0x322298u);
    ctx->pc = 0x322294u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x322290u;
    // 0x322294: 0x37a50004  ori         $a1, $sp, 0x4 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 29) | (uint64_t)(uint16_t)4);
    ctx->in_delay_slot = false;
    ctx->pc = 0x321938u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x321938u, 0x322290u, 0x322298u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x322298u;
label_322298:
    // 0x322298: 0x8fa30004  lw          $v1, 0x4($sp)
    ctx->pc = 0x322298u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x32229c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x32229cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3222a0: 0x2231821  addu        $v1, $s1, $v1
    ctx->pc = 0x3222a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
    // 0x3222a4: 0x10000083  b           . + 4 + (0x83 << 2)
    ctx->pc = 0x3222A4u;
    {
        const bool branch_taken_0x3222a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3222A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3222A4u;
        // 0x3222a8: 0xa060029c  sb          $zero, 0x29C($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 668), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3222a4) {
            ctx->pc = 0x3224B4u;
            goto label_3224b4;
        }
    }
    ctx->pc = 0x3222ACu;
label_3222ac:
    // 0x3222ac: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3222acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3222b0: 0xc0c864e  jal         func_321938
    ctx->pc = 0x3222B0u;
    SET_GPR_U32(ctx, 31, 0x3222B8u);
    ctx->pc = 0x3222B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3222B0u;
    // 0x3222b4: 0x37a50004  ori         $a1, $sp, 0x4 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 29) | (uint64_t)(uint16_t)4);
    ctx->in_delay_slot = false;
    ctx->pc = 0x321938u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x321938u, 0x3222B0u, 0x3222B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3222B8u;
label_3222b8:
    // 0x3222b8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x3222b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3222bc: 0xc0c864e  jal         func_321938
    ctx->pc = 0x3222BCu;
    SET_GPR_U32(ctx, 31, 0x3222C4u);
    ctx->pc = 0x3222C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3222BCu;
    // 0x3222c0: 0x37a50008  ori         $a1, $sp, 0x8 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 29) | (uint64_t)(uint16_t)8);
    ctx->in_delay_slot = false;
    ctx->pc = 0x321938u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x321938u, 0x3222BCu, 0x3222C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3222C4u;
label_3222c4:
    // 0x3222c4: 0x8fa40004  lw          $a0, 0x4($sp)
    ctx->pc = 0x3222c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x3222c8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x3222c8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3222cc: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x3222ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x3222d0: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x3222d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3222d4: 0x410c0  sll         $v0, $a0, 3
    ctx->pc = 0x3222d4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x3222d8: 0x2242021  addu        $a0, $s1, $a0
    ctx->pc = 0x3222d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
    // 0x3222dc: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x3222dcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x3222e0: 0xa085029c  sb          $a1, 0x29C($a0)
    ctx->pc = 0x3222e0u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 668), (uint8_t)GPR_U32(ctx, 5));
    // 0x3222e4: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x3222e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x3222e8: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x3222e8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x3222ec: 0x10000071  b           . + 4 + (0x71 << 2)
    ctx->pc = 0x3222ECu;
    {
        const bool branch_taken_0x3222ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3222F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3222ECu;
        // 0x3222f0: 0xfc430018  sd          $v1, 0x18($v0) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 2), 24), GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3222ec) {
            ctx->pc = 0x3224B4u;
            goto label_3224b4;
        }
    }
    ctx->pc = 0x3222F4u;
label_3222f4:
    // 0x3222f4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3222f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3222f8: 0xc0c864e  jal         func_321938
    ctx->pc = 0x3222F8u;
    SET_GPR_U32(ctx, 31, 0x322300u);
    ctx->pc = 0x3222FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3222F8u;
    // 0x3222fc: 0x37a50004  ori         $a1, $sp, 0x4 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 29) | (uint64_t)(uint16_t)4);
    ctx->in_delay_slot = false;
    ctx->pc = 0x321938u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x321938u, 0x3222F8u, 0x322300u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x322300u;
label_322300:
    // 0x322300: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x322300u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x322304: 0xc0c864e  jal         func_321938
    ctx->pc = 0x322304u;
    SET_GPR_U32(ctx, 31, 0x32230Cu);
    ctx->pc = 0x322308u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x322304u;
    // 0x322308: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x321938u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x321938u, 0x322304u, 0x32230Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32230Cu;
label_32230c:
    // 0x32230c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x32230cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x322310: 0x97a30004  lhu         $v1, 0x4($sp)
    ctx->pc = 0x322310u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x322314: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x322314u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x322318: 0xa6230298  sh          $v1, 0x298($s1)
    ctx->pc = 0x322318u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 664), (uint16_t)GPR_U32(ctx, 3));
    // 0x32231c: 0x10000065  b           . + 4 + (0x65 << 2)
    ctx->pc = 0x32231Cu;
    {
        const bool branch_taken_0x32231c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x322320u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32231Cu;
        // 0x322320: 0xfe220008  sd          $v0, 0x8($s1) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 17), 8), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32231c) {
            ctx->pc = 0x3224B4u;
            goto label_3224b4;
        }
    }
    ctx->pc = 0x322324u;
label_322324:
    // 0x322324: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x322324u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x322328: 0xc0c864e  jal         func_321938
    ctx->pc = 0x322328u;
    SET_GPR_U32(ctx, 31, 0x322330u);
    ctx->pc = 0x32232Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x322328u;
    // 0x32232c: 0x37a50004  ori         $a1, $sp, 0x4 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 29) | (uint64_t)(uint16_t)4);
    ctx->in_delay_slot = false;
    ctx->pc = 0x321938u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x321938u, 0x322328u, 0x322330u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x322330u;
label_322330:
    // 0x322330: 0x97a30004  lhu         $v1, 0x4($sp)
    ctx->pc = 0x322330u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x322334: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x322334u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x322338: 0x1000005e  b           . + 4 + (0x5E << 2)
    ctx->pc = 0x322338u;
    {
        const bool branch_taken_0x322338 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x32233Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x322338u;
        // 0x32233c: 0xa6230298  sh          $v1, 0x298($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 664), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x322338) {
            ctx->pc = 0x3224B4u;
            goto label_3224b4;
        }
    }
    ctx->pc = 0x322340u;
label_322340:
    // 0x322340: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x322340u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x322344: 0xc0c864e  jal         func_321938
    ctx->pc = 0x322344u;
    SET_GPR_U32(ctx, 31, 0x32234Cu);
    ctx->pc = 0x322348u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x322344u;
    // 0x322348: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x321938u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x321938u, 0x322344u, 0x32234Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32234Cu;
label_32234c:
    // 0x32234c: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x32234cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x322350: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x322350u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x322354: 0x10000057  b           . + 4 + (0x57 << 2)
    ctx->pc = 0x322354u;
    {
        const bool branch_taken_0x322354 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x322358u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x322354u;
        // 0x322358: 0xfe230008  sd          $v1, 0x8($s1) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 17), 8), GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x322354) {
            ctx->pc = 0x3224B4u;
            goto label_3224b4;
        }
    }
    ctx->pc = 0x32235Cu;
label_32235c:
    // 0x32235c: 0xc0e9f1c  jal         func_3A7C70
    ctx->pc = 0x32235Cu;
    SET_GPR_U32(ctx, 31, 0x322364u);
    ctx->pc = 0x322360u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32235Cu;
    // 0x322360: 0x240402f8  addiu       $a0, $zero, 0x2F8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 760));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A7C70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A7C70u, 0x32235Cu, 0x322364u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x322364u;
label_322364:
    // 0x322364: 0x262502e0  addiu       $a1, $s1, 0x2E0
    ctx->pc = 0x322364u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 736));
    // 0x322368: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x322368u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32236c: 0x220182d  daddu       $v1, $s1, $zero
    ctx->pc = 0x32236cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_322370:
    // 0x322370: 0xdc660000  ld          $a2, 0x0($v1)
    ctx->pc = 0x322370u;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x322374: 0xdc670008  ld          $a3, 0x8($v1)
    ctx->pc = 0x322374u;
    SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x322378: 0xdc680010  ld          $t0, 0x10($v1)
    ctx->pc = 0x322378u;
    SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x32237c: 0xdc690018  ld          $t1, 0x18($v1)
    ctx->pc = 0x32237cu;
    SET_GPR_U64(ctx, 9, READ64(ADD32(GPR_U32(ctx, 3), 24)));
    // 0x322380: 0xfc860000  sd          $a2, 0x0($a0)
    ctx->pc = 0x322380u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 0), GPR_U64(ctx, 6));
    // 0x322384: 0xfc870008  sd          $a3, 0x8($a0)
    ctx->pc = 0x322384u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 8), GPR_U64(ctx, 7));
    // 0x322388: 0xfc880010  sd          $t0, 0x10($a0)
    ctx->pc = 0x322388u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 16), GPR_U64(ctx, 8));
    // 0x32238c: 0xfc890018  sd          $t1, 0x18($a0)
    ctx->pc = 0x32238cu;
    WRITE64(ADD32(GPR_U32(ctx, 4), 24), GPR_U64(ctx, 9));
    // 0x322390: 0x24630020  addiu       $v1, $v1, 0x20
    ctx->pc = 0x322390u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
    // 0x322394: 0x24840020  addiu       $a0, $a0, 0x20
    ctx->pc = 0x322394u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
    // 0x322398: 0x0  nop
    ctx->pc = 0x322398u;
    // NOP
    // 0x32239c: 0x1465fff4  bne         $v1, $a1, . + 4 + (-0xC << 2)
    ctx->pc = 0x32239Cu;
    {
        const bool branch_taken_0x32239c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 5));
        if (branch_taken_0x32239c) {
            ctx->pc = 0x322370u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_322370;
        }
    }
    ctx->pc = 0x3223A4u;
    // 0x3223a4: 0xdc650000  ld          $a1, 0x0($v1)
    ctx->pc = 0x3223a4u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x3223a8: 0xdc660008  ld          $a2, 0x8($v1)
    ctx->pc = 0x3223a8u;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x3223ac: 0xdc670010  ld          $a3, 0x10($v1)
    ctx->pc = 0x3223acu;
    SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x3223b0: 0xfc850000  sd          $a1, 0x0($a0)
    ctx->pc = 0x3223b0u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 0), GPR_U64(ctx, 5));
    // 0x3223b4: 0xfc860008  sd          $a2, 0x8($a0)
    ctx->pc = 0x3223b4u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 8), GPR_U64(ctx, 6));
    // 0x3223b8: 0xfc870010  sd          $a3, 0x10($a0)
    ctx->pc = 0x3223b8u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 16), GPR_U64(ctx, 7));
    // 0x3223bc: 0x1000003d  b           . + 4 + (0x3D << 2)
    ctx->pc = 0x3223BCu;
    {
        const bool branch_taken_0x3223bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3223C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3223BCu;
        // 0x3223c0: 0xae2202f0  sw          $v0, 0x2F0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 752), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3223bc) {
            ctx->pc = 0x3224B4u;
            goto label_3224b4;
        }
    }
    ctx->pc = 0x3223C4u;
label_3223c4:
    // 0x3223c4: 0x8e2402f0  lw          $a0, 0x2F0($s1)
    ctx->pc = 0x3223c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 752)));
    // 0x3223c8: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x3223c8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3223cc: 0x248202e0  addiu       $v0, $a0, 0x2E0
    ctx->pc = 0x3223ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 736));
    // 0x3223d0: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x3223d0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3223d4:
    // 0x3223d4: 0xdcc90000  ld          $t1, 0x0($a2)
    ctx->pc = 0x3223d4u;
    SET_GPR_U64(ctx, 9, READ64(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x3223d8: 0xdcc30008  ld          $v1, 0x8($a2)
    ctx->pc = 0x3223d8u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x3223dc: 0xdcc70010  ld          $a3, 0x10($a2)
    ctx->pc = 0x3223dcu;
    SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 6), 16)));
    // 0x3223e0: 0xdcc80018  ld          $t0, 0x18($a2)
    ctx->pc = 0x3223e0u;
    SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 6), 24)));
    // 0x3223e4: 0xfca90000  sd          $t1, 0x0($a1)
    ctx->pc = 0x3223e4u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 0), GPR_U64(ctx, 9));
    // 0x3223e8: 0xfca30008  sd          $v1, 0x8($a1)
    ctx->pc = 0x3223e8u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 8), GPR_U64(ctx, 3));
    // 0x3223ec: 0xfca70010  sd          $a3, 0x10($a1)
    ctx->pc = 0x3223ecu;
    WRITE64(ADD32(GPR_U32(ctx, 5), 16), GPR_U64(ctx, 7));
    // 0x3223f0: 0xfca80018  sd          $t0, 0x18($a1)
    ctx->pc = 0x3223f0u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 24), GPR_U64(ctx, 8));
    // 0x3223f4: 0x24c60020  addiu       $a2, $a2, 0x20
    ctx->pc = 0x3223f4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 32));
    // 0x3223f8: 0x24a50020  addiu       $a1, $a1, 0x20
    ctx->pc = 0x3223f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 32));
    // 0x3223fc: 0x0  nop
    ctx->pc = 0x3223fcu;
    // NOP
    // 0x322400: 0x14c2fff4  bne         $a2, $v0, . + 4 + (-0xC << 2)
    ctx->pc = 0x322400u;
    {
        const bool branch_taken_0x322400 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 2));
        if (branch_taken_0x322400) {
            ctx->pc = 0x3223D4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3223d4;
        }
    }
    ctx->pc = 0x322408u;
    // 0x322408: 0xdcc90000  ld          $t1, 0x0($a2)
    ctx->pc = 0x322408u;
    SET_GPR_U64(ctx, 9, READ64(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x32240c: 0xdcc20008  ld          $v0, 0x8($a2)
    ctx->pc = 0x32240cu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x322410: 0xdcc30010  ld          $v1, 0x10($a2)
    ctx->pc = 0x322410u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 6), 16)));
    // 0x322414: 0xfca90000  sd          $t1, 0x0($a1)
    ctx->pc = 0x322414u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 0), GPR_U64(ctx, 9));
    // 0x322418: 0xfca20008  sd          $v0, 0x8($a1)
    ctx->pc = 0x322418u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 8), GPR_U64(ctx, 2));
    // 0x32241c: 0xc0e9f30  jal         func_3A7CC0
    ctx->pc = 0x32241Cu;
    SET_GPR_U32(ctx, 31, 0x322424u);
    ctx->pc = 0x322420u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32241Cu;
    // 0x322420: 0xfca30010  sd          $v1, 0x10($a1) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 5), 16), GPR_U64(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A7CC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A7CC0u, 0x32241Cu, 0x322424u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x322424u;
label_322424:
    // 0x322424: 0x10000024  b           . + 4 + (0x24 << 2)
    ctx->pc = 0x322424u;
    {
        const bool branch_taken_0x322424 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x322428u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x322424u;
        // 0x322428: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x322424) {
            ctx->pc = 0x3224B8u;
            goto label_3224b8;
        }
    }
    ctx->pc = 0x32242Cu;
label_32242c:
    // 0x32242c: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x32242cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x322430: 0x24040010  addiu       $a0, $zero, 0x10
    ctx->pc = 0x322430u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x322434: 0xafa20004  sw          $v0, 0x4($sp)
    ctx->pc = 0x322434u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    // 0x322438: 0x24070010  addiu       $a3, $zero, 0x10
    ctx->pc = 0x322438u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x32243c: 0x2629029c  addiu       $t1, $s1, 0x29C
    ctx->pc = 0x32243cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 17), 668));
    // 0x322440: 0x26280018  addiu       $t0, $s1, 0x18
    ctx->pc = 0x322440u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 17), 24));
    // 0x322444: 0x0  nop
    ctx->pc = 0x322444u;
    // NOP
label_322448:
    // 0x322448: 0x2482fff0  addiu       $v0, $a0, -0x10
    ctx->pc = 0x322448u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967280));
    // 0x32244c: 0x24860001  addiu       $a2, $a0, 0x1
    ctx->pc = 0x32244cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x322450: 0x1272821  addu        $a1, $t1, $a3
    ctx->pc = 0x322450u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 7)));
    // 0x322454: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x322454u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x322458: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x322458u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x32245c: 0x420c0  sll         $a0, $a0, 3
    ctx->pc = 0x32245cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x322460: 0xa0a30000  sb          $v1, 0x0($a1)
    ctx->pc = 0x322460u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x322464: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x322464u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x322468: 0x1042021  addu        $a0, $t0, $a0
    ctx->pc = 0x322468u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
    // 0x32246c: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x32246cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x322470: 0xafa60004  sw          $a2, 0x4($sp)
    ctx->pc = 0x322470u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 6));
    // 0x322474: 0xc0382d  daddu       $a3, $a2, $zero
    ctx->pc = 0x322474u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x322478: 0xfc820000  sd          $v0, 0x0($a0)
    ctx->pc = 0x322478u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 0), GPR_U64(ctx, 2));
    // 0x32247c: 0x2ce20020  sltiu       $v0, $a3, 0x20
    ctx->pc = 0x32247cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)(int64_t)(int32_t)32) ? 1 : 0);
    // 0x322480: 0x1440fff1  bnez        $v0, . + 4 + (-0xF << 2)
    ctx->pc = 0x322480u;
    {
        const bool branch_taken_0x322480 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x322484u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x322480u;
        // 0x322484: 0xe0202d  daddu       $a0, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x322480) {
            ctx->pc = 0x322448u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_322448;
        }
    }
    ctx->pc = 0x322488u;
    // 0x322488: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x322488u;
    {
        const bool branch_taken_0x322488 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x32248Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x322488u;
        // 0x32248c: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x322488) {
            ctx->pc = 0x3224B8u;
            goto label_3224b8;
        }
    }
    ctx->pc = 0x322490u;
label_322490:
    // 0x322490: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x322490u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x322494: 0xc0c864e  jal         func_321938
    ctx->pc = 0x322494u;
    SET_GPR_U32(ctx, 31, 0x32249Cu);
    ctx->pc = 0x322498u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x322494u;
    // 0x322498: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x321938u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x321938u, 0x322494u, 0x32249Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x32249Cu;
label_32249c:
    // 0x32249c: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x32249cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3224a0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x3224a0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3224a4: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x3224A4u;
    {
        const bool branch_taken_0x3224a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3224A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3224A4u;
        // 0x3224a8: 0xfe230010  sd          $v1, 0x10($s1) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 17), 16), GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3224a4) {
            ctx->pc = 0x3224B4u;
            goto label_3224b4;
        }
    }
    ctx->pc = 0x3224ACu;
label_3224ac:
    // 0x3224ac: 0xc0e9ed2  jal         func_3A7B48
    ctx->pc = 0x3224ACu;
    SET_GPR_U32(ctx, 31, 0x3224B4u);
    ctx->pc = 0x3A7B48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A7B48u, 0x3224ACu, 0x3224B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3224B4u;
label_3224b4:
    // 0x3224b4: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x3224b4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3224b8:
    // 0x3224b8: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x3224b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x3224bc: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x3224bcu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3224c0: 0xdfb10020  ld          $s1, 0x20($sp)
    ctx->pc = 0x3224c0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3224c4: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x3224c4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3224c8: 0x3e00008  jr          $ra
    ctx->pc = 0x3224C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3224CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3224C8u;
        // 0x3224cc: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3224C8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3224D0u;
}
