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

// Function: __12istdiostreamiP7__sFILE
// Address: 0x393c38 - 0x393dd0
void ps2___12istdiostreamiP7__sFILE_0x393c38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2___12istdiostreamiP7__sFILE_0x393c38");
#endif

    switch (ctx->pc) {
        case 0x393d28u: goto label_393d28;
        case 0x393d70u: goto label_393d70;
        case 0x393d78u: goto label_393d78;
        default: break;
    }

    ctx->pc = 0x393c38u;

    // 0x393c38: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x393c38u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x393c3c: 0xa0402d  daddu       $t0, $a1, $zero
    ctx->pc = 0x393c3cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x393c40: 0xffb10030  sd          $s1, 0x30($sp)
    ctx->pc = 0x393c40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 17));
    // 0x393c44: 0xc0482d  daddu       $t1, $a2, $zero
    ctx->pc = 0x393c44u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x393c48: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x393c48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x393c4c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x393c4cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x393c50: 0xffb20040  sd          $s2, 0x40($sp)
    ctx->pc = 0x393c50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 18));
    // 0x393c54: 0x11000013  beqz        $t0, . + 4 + (0x13 << 2)
    ctx->pc = 0x393C54u;
    {
        const bool branch_taken_0x393c54 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        ctx->pc = 0x393C58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x393C54u;
        // 0x393c58: 0xffb00020  sd          $s0, 0x20($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x393c54) {
            ctx->pc = 0x393CA4u;
            goto label_393ca4;
        }
    }
    ctx->pc = 0x393C5Cu;
    // 0x393c5c: 0x26220068  addiu       $v0, $s1, 0x68
    ctx->pc = 0x393c5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 104));
    // 0x393c60: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x393c60u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x393c64: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x393c64u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x393c68: 0x3c040046  lui         $a0, 0x46
    ctx->pc = 0x393c68u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)70 << 16));
    // 0x393c6c: 0xa043001a  sb          $v1, 0x1A($v0)
    ctx->pc = 0x393c6cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 26), (uint8_t)GPR_U32(ctx, 3));
    // 0x393c70: 0x2484d340  addiu       $a0, $a0, -0x2CC0
    ctx->pc = 0x393c70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955840));
    // 0x393c74: 0xa040001b  sb          $zero, 0x1B($v0)
    ctx->pc = 0x393c74u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 27), (uint8_t)GPR_U32(ctx, 0));
    // 0x393c78: 0x24030020  addiu       $v1, $zero, 0x20
    ctx->pc = 0x393c78u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x393c7c: 0x24050011  addiu       $a1, $zero, 0x11
    ctx->pc = 0x393c7cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    // 0x393c80: 0x24060006  addiu       $a2, $zero, 0x6
    ctx->pc = 0x393c80u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x393c84: 0xac440028  sw          $a0, 0x28($v0)
    ctx->pc = 0x393c84u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 40), GPR_U32(ctx, 4));
    // 0x393c88: 0xa4430018  sh          $v1, 0x18($v0)
    ctx->pc = 0x393c88u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 24), (uint16_t)GPR_U32(ctx, 3));
    // 0x393c8c: 0xfc450010  sd          $a1, 0x10($v0)
    ctx->pc = 0x393c8cu;
    WRITE64(ADD32(GPR_U32(ctx, 2), 16), GPR_U64(ctx, 5));
    // 0x393c90: 0xac46001c  sw          $a2, 0x1C($v0)
    ctx->pc = 0x393c90u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 28), GPR_U32(ctx, 6));
    // 0x393c94: 0xac400020  sw          $zero, 0x20($v0)
    ctx->pc = 0x393c94u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 32), GPR_U32(ctx, 0));
    // 0x393c98: 0xae200068  sw          $zero, 0x68($s1)
    ctx->pc = 0x393c98u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 104), GPR_U32(ctx, 0));
    // 0x393c9c: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x393c9cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x393ca0: 0xac400008  sw          $zero, 0x8($v0)
    ctx->pc = 0x393ca0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 0));
label_393ca4:
    // 0x393ca4: 0x8e270000  lw          $a3, 0x0($s1)
    ctx->pc = 0x393ca4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x393ca8: 0x3c120046  lui         $s2, 0x46
    ctx->pc = 0x393ca8u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)70 << 16));
    // 0x393cac: 0x2642d168  addiu       $v0, $s2, -0x2E98
    ctx->pc = 0x393cacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 4294955368));
    // 0x393cb0: 0xace20028  sw          $v0, 0x28($a3)
    ctx->pc = 0x393cb0u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 40), GPR_U32(ctx, 2));
    // 0x393cb4: 0x24e3fff8  addiu       $v1, $a3, -0x8
    ctx->pc = 0x393cb4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967288));
    // 0x393cb8: 0x94440008  lhu         $a0, 0x8($v0)
    ctx->pc = 0x393cb8u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)FAST_READ16(0x45D170u));
    // 0x393cbc: 0x2231823  subu        $v1, $s1, $v1
    ctx->pc = 0x393cbcu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
    // 0x393cc0: 0xdc450008  ld          $a1, 0x8($v0)
    ctx->pc = 0x393cc0u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x393cc4: 0xde46d168  ld          $a2, -0x2E98($s2)
    ctx->pc = 0x393cc4u;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 18), 4294955368)));
    // 0x393cc8: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x393cc8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x393ccc: 0xffa50008  sd          $a1, 0x8($sp)
    ctx->pc = 0x393cccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 5));
    // 0x393cd0: 0xffa60000  sd          $a2, 0x0($sp)
    ctx->pc = 0x393cd0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 6));
    // 0x393cd4: 0xa7a40008  sh          $a0, 0x8($sp)
    ctx->pc = 0x393cd4u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 8), (uint16_t)GPR_U32(ctx, 4));
    // 0x393cd8: 0xae200004  sw          $zero, 0x4($s1)
    ctx->pc = 0x393cd8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 0));
    // 0x393cdc: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x393cdcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
    // 0x393ce0: 0x2444dad8  addiu       $a0, $v0, -0x2528
    ctx->pc = 0x393ce0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294957784));
    // 0x393ce4: 0x1500000c  bnez        $t0, . + 4 + (0xC << 2)
    ctx->pc = 0x393CE4u;
    {
        const bool branch_taken_0x393ce4 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 0));
        ctx->pc = 0x393CE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x393CE4u;
        // 0x393ce8: 0xace40028  sw          $a0, 0x28($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 40), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x393ce4) {
            ctx->pc = 0x393D18u;
            goto label_393d18;
        }
    }
    ctx->pc = 0x393CECu;
    // 0x393cec: 0x94830008  lhu         $v1, 0x8($a0)
    ctx->pc = 0x393cecu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x393cf0: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x393cf0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x393cf4: 0xdc46dad8  ld          $a2, -0x2528($v0)
    ctx->pc = 0x393cf4u;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 2), 4294957784)));
    // 0x393cf8: 0xdc840008  ld          $a0, 0x8($a0)
    ctx->pc = 0x393cf8u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x393cfc: 0x24e2ff98  addiu       $v0, $a3, -0x68
    ctx->pc = 0x393cfcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967192));
    // 0x393d00: 0x2221023  subu        $v0, $s1, $v0
    ctx->pc = 0x393d00u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x393d04: 0xffa60010  sd          $a2, 0x10($sp)
    ctx->pc = 0x393d04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 6));
    // 0x393d08: 0xffa40018  sd          $a0, 0x18($sp)
    ctx->pc = 0x393d08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 4));
    // 0x393d0c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x393d0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x393d10: 0xace50028  sw          $a1, 0x28($a3)
    ctx->pc = 0x393d10u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 40), GPR_U32(ctx, 5));
    // 0x393d14: 0xa7a30018  sh          $v1, 0x18($sp)
    ctx->pc = 0x393d14u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 24), (uint16_t)GPR_U32(ctx, 3));
label_393d18:
    // 0x393d18: 0x26300008  addiu       $s0, $s1, 0x8
    ctx->pc = 0x393d18u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
    // 0x393d1c: 0x120282d  daddu       $a1, $t1, $zero
    ctx->pc = 0x393d1cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x393d20: 0xc0e4d50  jal         func_393540
    ctx->pc = 0x393D20u;
    SET_GPR_U32(ctx, 31, 0x393D28u);
    ctx->pc = 0x393D24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x393D20u;
    // 0x393d24: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x393540u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x393540u, 0x393D20u, 0x393D28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x393D28u;
label_393d28:
    // 0x393d28: 0x16000004  bnez        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x393D28u;
    {
        const bool branch_taken_0x393d28 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x393D2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x393D28u;
        // 0x393d2c: 0x8e250000  lw          $a1, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x393d28) {
            ctx->pc = 0x393D3Cu;
            goto label_393d3c;
        }
    }
    ctx->pc = 0x393D30u;
    // 0x393d30: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x393d30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x393d34: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x393D34u;
    {
        const bool branch_taken_0x393d34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x393D38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x393D34u;
        // 0x393d38: 0xa0a2001a  sb          $v0, 0x1A($a1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 5), 26), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x393d34) {
            ctx->pc = 0x393D40u;
            goto label_393d40;
        }
    }
    ctx->pc = 0x393D3Cu;
label_393d3c:
    // 0x393d3c: 0xa0a0001a  sb          $zero, 0x1A($a1)
    ctx->pc = 0x393d3cu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 26), (uint8_t)GPR_U32(ctx, 0));
label_393d40:
    // 0x393d40: 0x24020020  addiu       $v0, $zero, 0x20
    ctx->pc = 0x393d40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x393d44: 0x24030011  addiu       $v1, $zero, 0x11
    ctx->pc = 0x393d44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    // 0x393d48: 0x24040006  addiu       $a0, $zero, 0x6
    ctx->pc = 0x393d48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x393d4c: 0xacb00000  sw          $s0, 0x0($a1)
    ctx->pc = 0x393d4cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 16));
    // 0x393d50: 0xa4a20018  sh          $v0, 0x18($a1)
    ctx->pc = 0x393d50u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 24), (uint16_t)GPR_U32(ctx, 2));
    // 0x393d54: 0xfca30010  sd          $v1, 0x10($a1)
    ctx->pc = 0x393d54u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 16), GPR_U64(ctx, 3));
    // 0x393d58: 0xaca4001c  sw          $a0, 0x1C($a1)
    ctx->pc = 0x393d58u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 28), GPR_U32(ctx, 4));
    // 0x393d5c: 0xaca00020  sw          $zero, 0x20($a1)
    ctx->pc = 0x393d5cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 32), GPR_U32(ctx, 0));
    // 0x393d60: 0xa0a0001b  sb          $zero, 0x1B($a1)
    ctx->pc = 0x393d60u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 27), (uint8_t)GPR_U32(ctx, 0));
    // 0x393d64: 0xaca00004  sw          $zero, 0x4($a1)
    ctx->pc = 0x393d64u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 0));
    // 0x393d68: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x393D68u;
    {
        const bool branch_taken_0x393d68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x393D6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x393D68u;
        // 0x393d6c: 0xaca00008  sw          $zero, 0x8($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x393d68) {
            ctx->pc = 0x393D78u;
            goto label_393d78;
        }
    }
    ctx->pc = 0x393D70u;
label_393d70:
    // 0x393d70: 0xc0c8386  jal         func_320E18
    ctx->pc = 0x393D70u;
    SET_GPR_U32(ctx, 31, 0x393D78u);
    ctx->pc = 0x320E18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x320E18u, 0x393D70u, 0x393D78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x393D78u;
label_393d78:
    // 0x393d78: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x393D78u;
    {
        const bool branch_taken_0x393d78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x393D7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x393D78u;
        // 0x393d7c: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x393d78) {
            ctx->pc = 0x393DB8u;
            goto label_393db8;
        }
    }
    ctx->pc = 0x393D80u;
    // 0x393d80: 0x8e260000  lw          $a2, 0x0($s1)
    ctx->pc = 0x393d80u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x393d84: 0x2643d168  addiu       $v1, $s2, -0x2E98
    ctx->pc = 0x393d84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 4294955368));
    // 0x393d88: 0x94650008  lhu         $a1, 0x8($v1)
    ctx->pc = 0x393d88u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x393d8c: 0xacc30028  sw          $v1, 0x28($a2)
    ctx->pc = 0x393d8cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 40), GPR_U32(ctx, 3));
    // 0x393d90: 0x24c2fff8  addiu       $v0, $a2, -0x8
    ctx->pc = 0x393d90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967288));
    // 0x393d94: 0x2221023  subu        $v0, $s1, $v0
    ctx->pc = 0x393d94u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x393d98: 0xdc640008  ld          $a0, 0x8($v1)
    ctx->pc = 0x393d98u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x393d9c: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x393d9cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x393da0: 0xde47d168  ld          $a3, -0x2E98($s2)
    ctx->pc = 0x393da0u;
    SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 18), 4294955368)));
    // 0x393da4: 0xffa40008  sd          $a0, 0x8($sp)
    ctx->pc = 0x393da4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 4));
    // 0x393da8: 0xffa70000  sd          $a3, 0x0($sp)
    ctx->pc = 0x393da8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 7));
    // 0x393dac: 0xa7a50008  sh          $a1, 0x8($sp)
    ctx->pc = 0x393dacu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 8), (uint16_t)GPR_U32(ctx, 5));
    // 0x393db0: 0x1000ffef  b           . + 4 + (-0x11 << 2)
    ctx->pc = 0x393DB0u;
    {
        const bool branch_taken_0x393db0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x393DB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x393DB0u;
        // 0x393db4: 0xacdd0028  sw          $sp, 0x28($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 40), GPR_U32(ctx, 29));
        ctx->in_delay_slot = false;
        if (branch_taken_0x393db0) {
            ctx->pc = 0x393D70u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_393d70;
        }
    }
    ctx->pc = 0x393DB8u;
label_393db8:
    // 0x393db8: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x393db8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x393dbc: 0xdfb20040  ld          $s2, 0x40($sp)
    ctx->pc = 0x393dbcu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x393dc0: 0xdfb10030  ld          $s1, 0x30($sp)
    ctx->pc = 0x393dc0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x393dc4: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x393dc4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x393dc8: 0x3e00008  jr          $ra
    ctx->pc = 0x393DC8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x393DCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x393DC8u;
        // 0x393dcc: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x393DC8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x393DD0u;
}
