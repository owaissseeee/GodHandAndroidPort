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

// Function: func_003AD158
// Address: 0x3ad158 - 0x3ad348
void func_003AD158_0x3ad158(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_003AD158_0x3ad158");
#endif

    switch (ctx->pc) {
        case 0x3ad1b0u: goto label_3ad1b0;
        case 0x3ad1bcu: goto label_3ad1bc;
        case 0x3ad21cu: goto label_3ad21c;
        case 0x3ad228u: goto label_3ad228;
        case 0x3ad274u: goto label_3ad274;
        case 0x3ad2a0u: goto label_3ad2a0;
        case 0x3ad2acu: goto label_3ad2ac;
        default: break;
    }

    ctx->pc = 0x3ad158u;

    // 0x3ad158: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x3ad158u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x3ad15c: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x3ad15cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ad160: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x3ad160u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x3ad164: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x3ad164u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x3ad168: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x3ad168u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x3ad16c: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x3ad16cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
    // 0x3ad170: 0x7fb40010  sq          $s4, 0x10($sp)
    ctx->pc = 0x3ad170u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 20));
    // 0x3ad174: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x3ad174u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ad178: 0x2903c  dsll32      $s2, $v0, 0
    ctx->pc = 0x3ad178u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 2) << (32 + 0));
    // 0x3ad17c: 0x12903f  dsra32      $s2, $s2, 0
    ctx->pc = 0x3ad17cu;
    SET_GPR_S64(ctx, 18, GPR_S64(ctx, 18) >> (32 + 0));
    // 0x3ad180: 0x2803f  dsra32      $s0, $v0, 0
    ctx->pc = 0x3ad180u;
    SET_GPR_S64(ctx, 16, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x3ad184: 0x101d03  sra         $v1, $s0, 20
    ctx->pc = 0x3ad184u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 16), 20));
    // 0x3ad188: 0x306307ff  andi        $v1, $v1, 0x7FF
    ctx->pc = 0x3ad188u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2047);
    // 0x3ad18c: 0x2471fc01  addiu       $s1, $v1, -0x3FF
    ctx->pc = 0x3ad18cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), 4294966273));
    // 0x3ad190: 0x2a220014  slti        $v0, $s1, 0x14
    ctx->pc = 0x3ad190u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)20) ? 1 : 0);
    // 0x3ad194: 0x1040002f  beqz        $v0, . + 4 + (0x2F << 2)
    ctx->pc = 0x3AD194u;
    {
        const bool branch_taken_0x3ad194 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3AD198u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AD194u;
        // 0x3ad198: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ad194) {
            ctx->pc = 0x3AD254u;
            goto label_3ad254;
        }
    }
    ctx->pc = 0x3AD19Cu;
    // 0x3ad19c: 0x6210016  bgez        $s1, . + 4 + (0x16 << 2)
    ctx->pc = 0x3AD19Cu;
    {
        const bool branch_taken_0x3ad19c = (GPR_S64(ctx, 17) >= 0);
        ctx->pc = 0x3AD1A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AD19Cu;
        // 0x3ad1a0: 0x3c02000f  lui         $v0, 0xF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ad19c) {
            ctx->pc = 0x3AD1F8u;
            goto label_3ad1f8;
        }
    }
    ctx->pc = 0x3AD1A4u;
    // 0x3ad1a4: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x3ad1a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
    // 0x3ad1a8: 0xc0c78a2  jal         func_31E288
    ctx->pc = 0x3AD1A8u;
    SET_GPR_U32(ctx, 31, 0x3AD1B0u);
    ctx->pc = 0x3AD1ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AD1A8u;
    // 0x3ad1ac: 0xdc45fbe8  ld          $a1, -0x418($v0) (Delay Slot)
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 2), 4294966248)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31E288u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31E288u, 0x3AD1A8u, 0x3AD1B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AD1B0u;
label_3ad1b0:
    // 0x3ad1b0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x3ad1b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ad1b4: 0xc0c7a1c  jal         func_31E870
    ctx->pc = 0x3AD1B4u;
    SET_GPR_U32(ctx, 31, 0x3AD1BCu);
    ctx->pc = 0x3AD1B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AD1B4u;
    // 0x3ad1b8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31E870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31E870u, 0x3AD1B4u, 0x3AD1BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AD1BCu;
label_3ad1bc:
    // 0x3ad1bc: 0x1840004d  blez        $v0, . + 4 + (0x4D << 2)
    ctx->pc = 0x3AD1BCu;
    {
        const bool branch_taken_0x3ad1bc = (GPR_S64(ctx, 2) <= 0);
        if (branch_taken_0x3ad1bc) {
            ctx->pc = 0x3AD2F4u;
            goto label_3ad2f4;
        }
    }
    ctx->pc = 0x3AD1C4u;
    // 0x3ad1c4: 0x6000004  bltz        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3AD1C4u;
    {
        const bool branch_taken_0x3ad1c4 = (GPR_S64(ctx, 16) < 0);
        ctx->pc = 0x3AD1C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AD1C4u;
        // 0x3ad1c8: 0x3c027fff  lui         $v0, 0x7FFF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32767 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ad1c4) {
            ctx->pc = 0x3AD1D8u;
            goto label_3ad1d8;
        }
    }
    ctx->pc = 0x3AD1CCu;
    // 0x3ad1cc: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x3ad1ccu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ad1d0: 0x10000048  b           . + 4 + (0x48 << 2)
    ctx->pc = 0x3AD1D0u;
    {
        const bool branch_taken_0x3ad1d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3AD1D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AD1D0u;
        // 0x3ad1d4: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ad1d0) {
            ctx->pc = 0x3AD2F4u;
            goto label_3ad2f4;
        }
    }
    ctx->pc = 0x3AD1D8u;
label_3ad1d8:
    // 0x3ad1d8: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x3ad1d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x3ad1dc: 0x2021024  and         $v0, $s0, $v0
    ctx->pc = 0x3ad1dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & GPR_U64(ctx, 2));
    // 0x3ad1e0: 0x521025  or          $v0, $v0, $s2
    ctx->pc = 0x3ad1e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 18));
    // 0x3ad1e4: 0x10400043  beqz        $v0, . + 4 + (0x43 << 2)
    ctx->pc = 0x3AD1E4u;
    {
        const bool branch_taken_0x3ad1e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3ad1e4) {
            ctx->pc = 0x3AD2F4u;
            goto label_3ad2f4;
        }
    }
    ctx->pc = 0x3AD1ECu;
    // 0x3ad1ec: 0x3c10bff0  lui         $s0, 0xBFF0
    ctx->pc = 0x3ad1ecu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)49136 << 16));
    // 0x3ad1f0: 0x10000040  b           . + 4 + (0x40 << 2)
    ctx->pc = 0x3AD1F0u;
    {
        const bool branch_taken_0x3ad1f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3AD1F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AD1F0u;
        // 0x3ad1f4: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ad1f0) {
            ctx->pc = 0x3AD2F4u;
            goto label_3ad2f4;
        }
    }
    ctx->pc = 0x3AD1F8u;
label_3ad1f8:
    // 0x3ad1f8: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x3ad1f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x3ad1fc: 0x222a007  srav        $s4, $v0, $s1
    ctx->pc = 0x3ad1fcu;
    SET_GPR_S32(ctx, 20, SRA32(GPR_S32(ctx, 2), GPR_U32(ctx, 17) & 0x1F));
    // 0x3ad200: 0x2141824  and         $v1, $s0, $s4
    ctx->pc = 0x3ad200u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & GPR_U64(ctx, 20));
    // 0x3ad204: 0x721825  or          $v1, $v1, $s2
    ctx->pc = 0x3ad204u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 18));
    // 0x3ad208: 0x10600045  beqz        $v1, . + 4 + (0x45 << 2)
    ctx->pc = 0x3AD208u;
    {
        const bool branch_taken_0x3ad208 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3AD20Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AD208u;
        // 0x3ad20c: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ad208) {
            ctx->pc = 0x3AD320u;
            goto label_3ad320;
        }
    }
    ctx->pc = 0x3AD210u;
    // 0x3ad210: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x3ad210u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
    // 0x3ad214: 0xc0c78a2  jal         func_31E288
    ctx->pc = 0x3AD214u;
    SET_GPR_U32(ctx, 31, 0x3AD21Cu);
    ctx->pc = 0x3AD218u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AD214u;
    // 0x3ad218: 0xdc45fbe8  ld          $a1, -0x418($v0) (Delay Slot)
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 2), 4294966248)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31E288u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31E288u, 0x3AD214u, 0x3AD21Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AD21Cu;
label_3ad21c:
    // 0x3ad21c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x3ad21cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ad220: 0xc0c7a1c  jal         func_31E870
    ctx->pc = 0x3AD220u;
    SET_GPR_U32(ctx, 31, 0x3AD228u);
    ctx->pc = 0x3AD224u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AD220u;
    // 0x3ad224: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31E870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31E870u, 0x3AD220u, 0x3AD228u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AD228u;
label_3ad228:
    // 0x3ad228: 0x18400032  blez        $v0, . + 4 + (0x32 << 2)
    ctx->pc = 0x3AD228u;
    {
        const bool branch_taken_0x3ad228 = (GPR_S64(ctx, 2) <= 0);
        if (branch_taken_0x3ad228) {
            ctx->pc = 0x3AD2F4u;
            goto label_3ad2f4;
        }
    }
    ctx->pc = 0x3AD230u;
    // 0x3ad230: 0x6010005  bgez        $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x3AD230u;
    {
        const bool branch_taken_0x3ad230 = (GPR_S64(ctx, 16) >= 0);
        ctx->pc = 0x3AD234u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AD230u;
        // 0x3ad234: 0x141027  nor         $v0, $zero, $s4 (Delay Slot)
        SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ad230) {
            ctx->pc = 0x3AD248u;
            goto label_3ad248;
        }
    }
    ctx->pc = 0x3AD238u;
    // 0x3ad238: 0x3c020010  lui         $v0, 0x10
    ctx->pc = 0x3ad238u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16 << 16));
    // 0x3ad23c: 0x2221007  srav        $v0, $v0, $s1
    ctx->pc = 0x3ad23cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), GPR_U32(ctx, 17) & 0x1F));
    // 0x3ad240: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x3ad240u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x3ad244: 0x141027  nor         $v0, $zero, $s4
    ctx->pc = 0x3ad244u;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 20)));
label_3ad248:
    // 0x3ad248: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x3ad248u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ad24c: 0x10000029  b           . + 4 + (0x29 << 2)
    ctx->pc = 0x3AD24Cu;
    {
        const bool branch_taken_0x3ad24c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3AD250u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AD24Cu;
        // 0x3ad250: 0x2028024  and         $s0, $s0, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) & GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ad24c) {
            ctx->pc = 0x3AD2F4u;
            goto label_3ad2f4;
        }
    }
    ctx->pc = 0x3AD254u;
label_3ad254:
    // 0x3ad254: 0x2a220034  slti        $v0, $s1, 0x34
    ctx->pc = 0x3ad254u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)52) ? 1 : 0);
    // 0x3ad258: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x3AD258u;
    {
        const bool branch_taken_0x3ad258 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3AD25Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AD258u;
        // 0x3ad25c: 0x2464fbed  addiu       $a0, $v1, -0x413 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294966253));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ad258) {
            ctx->pc = 0x3AD27Cu;
            goto label_3ad27c;
        }
    }
    ctx->pc = 0x3AD260u;
    // 0x3ad260: 0x24020400  addiu       $v0, $zero, 0x400
    ctx->pc = 0x3ad260u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
    // 0x3ad264: 0x1622002f  bne         $s1, $v0, . + 4 + (0x2F << 2)
    ctx->pc = 0x3AD264u;
    {
        const bool branch_taken_0x3ad264 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        ctx->pc = 0x3AD268u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AD264u;
        // 0x3ad268: 0xa0102d  daddu       $v0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ad264) {
            ctx->pc = 0x3AD324u;
            goto label_3ad324;
        }
    }
    ctx->pc = 0x3AD26Cu;
    // 0x3ad26c: 0xc0c78a2  jal         func_31E288
    ctx->pc = 0x3AD26Cu;
    SET_GPR_U32(ctx, 31, 0x3AD274u);
    ctx->pc = 0x3AD270u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AD26Cu;
    // 0x3ad270: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31E288u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31E288u, 0x3AD26Cu, 0x3AD274u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AD274u;
label_3ad274:
    // 0x3ad274: 0x1000002c  b           . + 4 + (0x2C << 2)
    ctx->pc = 0x3AD274u;
    {
        const bool branch_taken_0x3ad274 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3AD278u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AD274u;
        // 0x3ad278: 0x7bb00050  lq          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ad274) {
            ctx->pc = 0x3AD328u;
            goto label_3ad328;
        }
    }
    ctx->pc = 0x3AD27Cu;
label_3ad27c:
    // 0x3ad27c: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x3ad27cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x3ad280: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x3ad280u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x3ad284: 0x82a006  srlv        $s4, $v0, $a0
    ctx->pc = 0x3ad284u;
    SET_GPR_S32(ctx, 20, (int32_t)SRL32(GPR_U32(ctx, 2), GPR_U32(ctx, 4) & 0x1F));
    // 0x3ad288: 0x2541824  and         $v1, $s2, $s4
    ctx->pc = 0x3ad288u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 18) & GPR_U64(ctx, 20));
    // 0x3ad28c: 0x10600024  beqz        $v1, . + 4 + (0x24 << 2)
    ctx->pc = 0x3AD28Cu;
    {
        const bool branch_taken_0x3ad28c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3AD290u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AD28Cu;
        // 0x3ad290: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ad28c) {
            ctx->pc = 0x3AD320u;
            goto label_3ad320;
        }
    }
    ctx->pc = 0x3AD294u;
    // 0x3ad294: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x3ad294u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
    // 0x3ad298: 0xc0c78a2  jal         func_31E288
    ctx->pc = 0x3AD298u;
    SET_GPR_U32(ctx, 31, 0x3AD2A0u);
    ctx->pc = 0x3AD29Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AD298u;
    // 0x3ad29c: 0xdc45fbe8  ld          $a1, -0x418($v0) (Delay Slot)
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 2), 4294966248)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31E288u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31E288u, 0x3AD298u, 0x3AD2A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AD2A0u;
label_3ad2a0:
    // 0x3ad2a0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x3ad2a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3ad2a4: 0xc0c7a1c  jal         func_31E870
    ctx->pc = 0x3AD2A4u;
    SET_GPR_U32(ctx, 31, 0x3AD2ACu);
    ctx->pc = 0x3AD2A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AD2A4u;
    // 0x3ad2a8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31E870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31E870u, 0x3AD2A4u, 0x3AD2ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AD2ACu;
label_3ad2ac:
    // 0x3ad2ac: 0x18400011  blez        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x3AD2ACu;
    {
        const bool branch_taken_0x3ad2ac = (GPR_S64(ctx, 2) <= 0);
        if (branch_taken_0x3ad2ac) {
            ctx->pc = 0x3AD2F4u;
            goto label_3ad2f4;
        }
    }
    ctx->pc = 0x3AD2B4u;
    // 0x3ad2b4: 0x601000e  bgez        $s0, . + 4 + (0xE << 2)
    ctx->pc = 0x3AD2B4u;
    {
        const bool branch_taken_0x3ad2b4 = (GPR_S64(ctx, 16) >= 0);
        ctx->pc = 0x3AD2B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AD2B4u;
        // 0x3ad2b8: 0x141027  nor         $v0, $zero, $s4 (Delay Slot)
        SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ad2b4) {
            ctx->pc = 0x3AD2F0u;
            goto label_3ad2f0;
        }
    }
    ctx->pc = 0x3AD2BCu;
    // 0x3ad2bc: 0x24020014  addiu       $v0, $zero, 0x14
    ctx->pc = 0x3ad2bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x3ad2c0: 0x16220003  bne         $s1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3AD2C0u;
    {
        const bool branch_taken_0x3ad2c0 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        ctx->pc = 0x3AD2C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AD2C0u;
        // 0x3ad2c4: 0x24020034  addiu       $v0, $zero, 0x34 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 52));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ad2c0) {
            ctx->pc = 0x3AD2D0u;
            goto label_3ad2d0;
        }
    }
    ctx->pc = 0x3AD2C8u;
    // 0x3ad2c8: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x3AD2C8u;
    {
        const bool branch_taken_0x3ad2c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3AD2CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AD2C8u;
        // 0x3ad2cc: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ad2c8) {
            ctx->pc = 0x3AD2ECu;
            goto label_3ad2ec;
        }
    }
    ctx->pc = 0x3AD2D0u;
label_3ad2d0:
    // 0x3ad2d0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3ad2d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3ad2d4: 0x511023  subu        $v0, $v0, $s1
    ctx->pc = 0x3ad2d4u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x3ad2d8: 0x431804  sllv        $v1, $v1, $v0
    ctx->pc = 0x3ad2d8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), GPR_U32(ctx, 2) & 0x1F));
    // 0x3ad2dc: 0x2431821  addu        $v1, $s2, $v1
    ctx->pc = 0x3ad2dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 3)));
    // 0x3ad2e0: 0x72102b  sltu        $v0, $v1, $s2
    ctx->pc = 0x3ad2e0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 18)) ? 1 : 0);
    // 0x3ad2e4: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x3ad2e4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x3ad2e8: 0x60902d  daddu       $s2, $v1, $zero
    ctx->pc = 0x3ad2e8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_3ad2ec:
    // 0x3ad2ec: 0x141027  nor         $v0, $zero, $s4
    ctx->pc = 0x3ad2ecu;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 20)));
label_3ad2f0:
    // 0x3ad2f0: 0x2429024  and         $s2, $s2, $v0
    ctx->pc = 0x3ad2f0u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) & GPR_U64(ctx, 2));
label_3ad2f4:
    // 0x3ad2f4: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x3ad2f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x3ad2f8: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x3ad2f8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x3ad2fc: 0x10203c  dsll32      $a0, $s0, 0
    ctx->pc = 0x3ad2fcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 16) << (32 + 0));
    // 0x3ad300: 0x2639824  and         $s3, $s3, $v1
    ctx->pc = 0x3ad300u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) & GPR_U64(ctx, 3));
    // 0x3ad304: 0x12103c  dsll32      $v0, $s2, 0
    ctx->pc = 0x3ad304u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) << (32 + 0));
    // 0x3ad308: 0x2649825  or          $s3, $s3, $a0
    ctx->pc = 0x3ad308u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) | GPR_U64(ctx, 4));
    // 0x3ad30c: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x3ad30cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x3ad310: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x3ad310u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x3ad314: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x3ad314u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x3ad318: 0x2639824  and         $s3, $s3, $v1
    ctx->pc = 0x3ad318u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) & GPR_U64(ctx, 3));
    // 0x3ad31c: 0x2622825  or          $a1, $s3, $v0
    ctx->pc = 0x3ad31cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 19) | GPR_U64(ctx, 2));
label_3ad320:
    // 0x3ad320: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x3ad320u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_3ad324:
    // 0x3ad324: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x3ad324u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_3ad328:
    // 0x3ad328: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x3ad328u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x3ad32c: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x3ad32cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3ad330: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x3ad330u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3ad334: 0x7bb40010  lq          $s4, 0x10($sp)
    ctx->pc = 0x3ad334u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3ad338: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3ad338u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3ad33c: 0x3e00008  jr          $ra
    ctx->pc = 0x3AD33Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3AD340u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AD33Cu;
        // 0x3ad340: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3AD33Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3AD344u;
    // 0x3ad344: 0x0  nop
    ctx->pc = 0x3ad344u;
    // NOP
    ctx->pc = 0x3ad348u;
}
