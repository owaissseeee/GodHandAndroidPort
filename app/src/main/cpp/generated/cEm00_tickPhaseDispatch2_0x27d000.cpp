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

// Function: cEm00_tickPhaseDispatch2
// Address: 0x27d000 - 0x27d0d8
void cEm00_tickPhaseDispatch2_0x27d000(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("cEm00_tickPhaseDispatch2_0x27d000");
#endif

    switch (ctx->pc) {
        case 0x27d000u: goto label_27d000;
        case 0x27d004u: goto label_27d004;
        case 0x27d008u: goto label_27d008;
        case 0x27d00cu: goto label_27d00c;
        case 0x27d010u: goto label_27d010;
        case 0x27d014u: goto label_27d014;
        case 0x27d018u: goto label_27d018;
        case 0x27d01cu: goto label_27d01c;
        case 0x27d020u: goto label_27d020;
        case 0x27d024u: goto label_27d024;
        case 0x27d028u: goto label_27d028;
        case 0x27d02cu: goto label_27d02c;
        case 0x27d030u: goto label_27d030;
        case 0x27d034u: goto label_27d034;
        case 0x27d038u: goto label_27d038;
        case 0x27d03cu: goto label_27d03c;
        case 0x27d040u: goto label_27d040;
        case 0x27d044u: goto label_27d044;
        case 0x27d048u: goto label_27d048;
        case 0x27d04cu: goto label_27d04c;
        case 0x27d050u: goto label_27d050;
        case 0x27d054u: goto label_27d054;
        case 0x27d058u: goto label_27d058;
        case 0x27d05cu: goto label_27d05c;
        case 0x27d060u: goto label_27d060;
        case 0x27d064u: goto label_27d064;
        case 0x27d068u: goto label_27d068;
        case 0x27d06cu: goto label_27d06c;
        case 0x27d070u: goto label_27d070;
        case 0x27d074u: goto label_27d074;
        case 0x27d078u: goto label_27d078;
        case 0x27d07cu: goto label_27d07c;
        case 0x27d080u: goto label_27d080;
        case 0x27d084u: goto label_27d084;
        case 0x27d088u: goto label_27d088;
        case 0x27d08cu: goto label_27d08c;
        case 0x27d090u: goto label_27d090;
        case 0x27d094u: goto label_27d094;
        case 0x27d098u: goto label_27d098;
        case 0x27d09cu: goto label_27d09c;
        case 0x27d0a0u: goto label_27d0a0;
        case 0x27d0a4u: goto label_27d0a4;
        case 0x27d0a8u: goto label_27d0a8;
        case 0x27d0acu: goto label_27d0ac;
        case 0x27d0b0u: goto label_27d0b0;
        case 0x27d0b4u: goto label_27d0b4;
        case 0x27d0b8u: goto label_27d0b8;
        case 0x27d0bcu: goto label_27d0bc;
        case 0x27d0c0u: goto label_27d0c0;
        case 0x27d0c4u: goto label_27d0c4;
        case 0x27d0c8u: goto label_27d0c8;
        case 0x27d0ccu: goto label_27d0cc;
        case 0x27d0d0u: goto label_27d0d0;
        case 0x27d0d4u: goto label_27d0d4;
        default: break;
    }

    ctx->pc = 0x27d000u;

label_27d000:
    // 0x27d000: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x27d000u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_27d004:
    // 0x27d004: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x27d004u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_27d008:
    // 0x27d008: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x27d008u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_27d00c:
    // 0x27d00c: 0x3c030045  lui         $v1, 0x45
    ctx->pc = 0x27d00cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)69 << 16));
label_27d010:
    // 0x27d010: 0x90c202f5  lbu         $v0, 0x2F5($a2)
    ctx->pc = 0x27d010u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 757)));
label_27d014:
    // 0x27d014: 0x24698170  addiu       $t1, $v1, -0x7E90
    ctx->pc = 0x27d014u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 3), 4294934896));
label_27d018:
    // 0x27d018: 0x69240007  ldl         $a0, 0x7($t1)
    ctx->pc = 0x27d018u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
label_27d01c:
    // 0x27d01c: 0x6d240000  ldr         $a0, 0x0($t1)
    ctx->pc = 0x27d01cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
label_27d020:
    // 0x27d020: 0x6925000f  ldl         $a1, 0xF($t1)
    ctx->pc = 0x27d020u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
label_27d024:
    // 0x27d024: 0x6d250008  ldr         $a1, 0x8($t1)
    ctx->pc = 0x27d024u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
label_27d028:
    // 0x27d028: 0xb3a40007  sdl         $a0, 0x7($sp)
    ctx->pc = 0x27d028u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_27d02c:
    // 0x27d02c: 0xb7a40000  sdr         $a0, 0x0($sp)
    ctx->pc = 0x27d02cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_27d030:
    // 0x27d030: 0xb3a5000f  sdl         $a1, 0xF($sp)
    ctx->pc = 0x27d030u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_27d034:
    // 0x27d034: 0xb7a50008  sdr         $a1, 0x8($sp)
    ctx->pc = 0x27d034u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_27d038:
    // 0x27d038: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x27d038u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
label_27d03c:
    // 0x27d03c: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
label_27d040:
    if (ctx->pc == 0x27D040u) {
        ctx->pc = 0x27D040u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27D03Cu;
        // 0x27d040: 0xa0c002f5  sb          $zero, 0x2F5($a2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 6), 757), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27D044u;
        goto label_27d044;
    }
    ctx->pc = 0x27D03Cu;
    {
        const bool branch_taken_0x27d03c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x27d03c) {
            ctx->pc = 0x27D040u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x27D03Cu;
            // 0x27d040: 0xa0c002f5  sb          $zero, 0x2F5($a2) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 6), 757), (uint8_t)GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x27D044u;
            goto label_27d044;
        }
    }
    ctx->pc = 0x27D044u;
label_27d044:
    // 0x27d044: 0x90c202f5  lbu         $v0, 0x2F5($a2)
    ctx->pc = 0x27d044u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 757)));
label_27d048:
    // 0x27d048: 0x220c0  sll         $a0, $v0, 3
    ctx->pc = 0x27d048u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
label_27d04c:
    // 0x27d04c: 0x40482d  daddu       $t1, $v0, $zero
    ctx->pc = 0x27d04cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_27d050:
    // 0x27d050: 0x3a41821  addu        $v1, $sp, $a0
    ctx->pc = 0x27d050u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 4)));
label_27d054:
    // 0x27d054: 0x94620002  lhu         $v0, 0x2($v1)
    ctx->pc = 0x27d054u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 2)));
label_27d058:
    // 0x27d058: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x27d058u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
label_27d05c:
    // 0x27d05c: 0x22c03  sra         $a1, $v0, 16
    ctx->pc = 0x27d05cu;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 2), 16));
label_27d060:
    // 0x27d060: 0x4a0000c  bltz        $a1, . + 4 + (0xC << 2)
label_27d064:
    if (ctx->pc == 0x27D064u) {
        ctx->pc = 0x27D064u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27D060u;
        // 0x27d064: 0x27a20004  addiu       $v0, $sp, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27D068u;
        goto label_27d068;
    }
    ctx->pc = 0x27D060u;
    {
        const bool branch_taken_0x27d060 = (GPR_S64(ctx, 5) < 0);
        ctx->pc = 0x27D064u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27D060u;
        // 0x27d064: 0x27a20004  addiu       $v0, $sp, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27d060) {
            ctx->pc = 0x27D094u;
            goto label_27d094;
        }
    }
    ctx->pc = 0x27D068u;
label_27d068:
    // 0x27d068: 0x94620004  lhu         $v0, 0x4($v1)
    ctx->pc = 0x27d068u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 4)));
label_27d06c:
    // 0x27d06c: 0x520c0  sll         $a0, $a1, 3
    ctx->pc = 0x27d06cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
label_27d070:
    // 0x27d070: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x27d070u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
label_27d074:
    // 0x27d074: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x27d074u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
label_27d078:
    // 0x27d078: 0xc21021  addu        $v0, $a2, $v0
    ctx->pc = 0x27d078u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
label_27d07c:
    // 0x27d07c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x27d07cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_27d080:
    // 0x27d080: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x27d080u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_27d084:
    // 0x27d084: 0xdc88fff8  ld          $t0, -0x8($a0)
    ctx->pc = 0x27d084u;
    SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 4), 4294967288)));
label_27d088:
    // 0x27d088: 0x8383f  dsra32      $a3, $t0, 0
    ctx->pc = 0x27d088u;
    SET_GPR_S64(ctx, 7, GPR_S64(ctx, 8) >> (32 + 0));
label_27d08c:
    // 0x27d08c: 0x10000004  b           . + 4 + (0x4 << 2)
label_27d090:
    if (ctx->pc == 0x27D090u) {
        ctx->pc = 0x27D090u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27D08Cu;
        // 0x27d090: 0x910c0  sll         $v0, $t1, 3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 9), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27D094u;
        goto label_27d094;
    }
    ctx->pc = 0x27D08Cu;
    {
        const bool branch_taken_0x27d08c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27D090u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27D08Cu;
        // 0x27d090: 0x910c0  sll         $v0, $t1, 3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 9), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27d08c) {
            ctx->pc = 0x27D0A0u;
            goto label_27d0a0;
        }
    }
    ctx->pc = 0x27D094u;
label_27d094:
    // 0x27d094: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x27d094u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_27d098:
    // 0x27d098: 0x8c470000  lw          $a3, 0x0($v0)
    ctx->pc = 0x27d098u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_27d09c:
    // 0x27d09c: 0x910c0  sll         $v0, $t1, 3
    ctx->pc = 0x27d09cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 9), 3));
label_27d0a0:
    // 0x27d0a0: 0x3a21821  addu        $v1, $sp, $v0
    ctx->pc = 0x27d0a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 2)));
label_27d0a4:
    // 0x27d0a4: 0x4a00006  bltz        $a1, . + 4 + (0x6 << 2)
label_27d0a8:
    if (ctx->pc == 0x27D0A8u) {
        ctx->pc = 0x27D0A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27D0A4u;
        // 0x27d0a8: 0x84630000  lh          $v1, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27D0ACu;
        goto label_27d0ac;
    }
    ctx->pc = 0x27D0A4u;
    {
        const bool branch_taken_0x27d0a4 = (GPR_S64(ctx, 5) < 0);
        ctx->pc = 0x27D0A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27D0A4u;
        // 0x27d0a8: 0x84630000  lh          $v1, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27d0a4) {
            ctx->pc = 0x27D0C0u;
            goto label_27d0c0;
        }
    }
    ctx->pc = 0x27D0ACu;
label_27d0ac:
    // 0x27d0ac: 0x3102ffff  andi        $v0, $t0, 0xFFFF
    ctx->pc = 0x27d0acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)65535);
label_27d0b0:
    // 0x27d0b0: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x27d0b0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
label_27d0b4:
    // 0x27d0b4: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x27d0b4u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
label_27d0b8:
    // 0x27d0b8: 0x10000002  b           . + 4 + (0x2 << 2)
label_27d0bc:
    if (ctx->pc == 0x27D0BCu) {
        ctx->pc = 0x27D0BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27D0B8u;
        // 0x27d0bc: 0x431021  addu        $v0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27D0C0u;
        goto label_27d0c0;
    }
    ctx->pc = 0x27D0B8u;
    {
        const bool branch_taken_0x27d0b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27D0BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27D0B8u;
        // 0x27d0bc: 0x431021  addu        $v0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27d0b8) {
            ctx->pc = 0x27D0C4u;
            goto label_27d0c4;
        }
    }
    ctx->pc = 0x27D0C0u;
label_27d0c0:
    // 0x27d0c0: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x27d0c0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_27d0c4:
    // 0x27d0c4: 0xe0f809  jalr        $a3
label_27d0c8:
    if (ctx->pc == 0x27D0C8u) {
        ctx->pc = 0x27D0C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27D0C4u;
        // 0x27d0c8: 0xc22021  addu        $a0, $a2, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27D0CCu;
        goto label_27d0cc;
    }
    ctx->pc = 0x27D0C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 7);
        SET_GPR_U32(ctx, 31, 0x27D0CCu);
        ctx->pc = 0x27D0C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27D0C4u;
        // 0x27d0c8: 0xc22021  addu        $a0, $a2, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x27D0C4u, 0x27D0CCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x27D0CCu;
label_27d0cc:
    // 0x27d0cc: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x27d0ccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_27d0d0:
    // 0x27d0d0: 0x3e00008  jr          $ra
label_27d0d4:
    if (ctx->pc == 0x27D0D4u) {
        ctx->pc = 0x27D0D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27D0D0u;
        // 0x27d0d4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27D0D8u;
        goto label_fallthrough_0x27d0d0;
    }
    ctx->pc = 0x27D0D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x27D0D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27D0D0u;
        // 0x27d0d4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x27D0D0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x27d0d0:
    ctx->pc = 0x27D0D8u;
}
