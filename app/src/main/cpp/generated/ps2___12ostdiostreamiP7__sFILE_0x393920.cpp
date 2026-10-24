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

// Function: __12ostdiostreamiP7__sFILE
// Address: 0x393920 - 0x393ab8
void ps2___12ostdiostreamiP7__sFILE_0x393920(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2___12ostdiostreamiP7__sFILE_0x393920");
#endif

    switch (ctx->pc) {
        case 0x393a0cu: goto label_393a0c;
        case 0x393a54u: goto label_393a54;
        case 0x393a5cu: goto label_393a5c;
        default: break;
    }

    ctx->pc = 0x393920u;

    // 0x393920: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x393920u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x393924: 0xa0402d  daddu       $t0, $a1, $zero
    ctx->pc = 0x393924u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x393928: 0xffb10030  sd          $s1, 0x30($sp)
    ctx->pc = 0x393928u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 17));
    // 0x39392c: 0xc0482d  daddu       $t1, $a2, $zero
    ctx->pc = 0x39392cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x393930: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x393930u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x393934: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x393934u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x393938: 0xffb20040  sd          $s2, 0x40($sp)
    ctx->pc = 0x393938u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 18));
    // 0x39393c: 0x11000013  beqz        $t0, . + 4 + (0x13 << 2)
    ctx->pc = 0x39393Cu;
    {
        const bool branch_taken_0x39393c = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        ctx->pc = 0x393940u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39393Cu;
        // 0x393940: 0xffb00020  sd          $s0, 0x20($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39393c) {
            ctx->pc = 0x39398Cu;
            goto label_39398c;
        }
    }
    ctx->pc = 0x393944u;
    // 0x393944: 0x26220068  addiu       $v0, $s1, 0x68
    ctx->pc = 0x393944u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 104));
    // 0x393948: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x393948u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x39394c: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x39394cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x393950: 0x3c040046  lui         $a0, 0x46
    ctx->pc = 0x393950u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)70 << 16));
    // 0x393954: 0xa043001a  sb          $v1, 0x1A($v0)
    ctx->pc = 0x393954u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 26), (uint8_t)GPR_U32(ctx, 3));
    // 0x393958: 0x2484d340  addiu       $a0, $a0, -0x2CC0
    ctx->pc = 0x393958u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955840));
    // 0x39395c: 0xa040001b  sb          $zero, 0x1B($v0)
    ctx->pc = 0x39395cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 27), (uint8_t)GPR_U32(ctx, 0));
    // 0x393960: 0x24030020  addiu       $v1, $zero, 0x20
    ctx->pc = 0x393960u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x393964: 0x24050011  addiu       $a1, $zero, 0x11
    ctx->pc = 0x393964u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    // 0x393968: 0x24060006  addiu       $a2, $zero, 0x6
    ctx->pc = 0x393968u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x39396c: 0xac440028  sw          $a0, 0x28($v0)
    ctx->pc = 0x39396cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 40), GPR_U32(ctx, 4));
    // 0x393970: 0xa4430018  sh          $v1, 0x18($v0)
    ctx->pc = 0x393970u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 24), (uint16_t)GPR_U32(ctx, 3));
    // 0x393974: 0xfc450010  sd          $a1, 0x10($v0)
    ctx->pc = 0x393974u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 16), GPR_U64(ctx, 5));
    // 0x393978: 0xac46001c  sw          $a2, 0x1C($v0)
    ctx->pc = 0x393978u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 28), GPR_U32(ctx, 6));
    // 0x39397c: 0xac400020  sw          $zero, 0x20($v0)
    ctx->pc = 0x39397cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 32), GPR_U32(ctx, 0));
    // 0x393980: 0xae200068  sw          $zero, 0x68($s1)
    ctx->pc = 0x393980u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 104), GPR_U32(ctx, 0));
    // 0x393984: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x393984u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x393988: 0xac400008  sw          $zero, 0x8($v0)
    ctx->pc = 0x393988u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 0));
label_39398c:
    // 0x39398c: 0x8e270000  lw          $a3, 0x0($s1)
    ctx->pc = 0x39398cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x393990: 0x3c120046  lui         $s2, 0x46
    ctx->pc = 0x393990u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)70 << 16));
    // 0x393994: 0x2642d178  addiu       $v0, $s2, -0x2E88
    ctx->pc = 0x393994u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 4294955384));
    // 0x393998: 0xace20028  sw          $v0, 0x28($a3)
    ctx->pc = 0x393998u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 40), GPR_U32(ctx, 2));
    // 0x39399c: 0x24e3fff8  addiu       $v1, $a3, -0x8
    ctx->pc = 0x39399cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967288));
    // 0x3939a0: 0x94440008  lhu         $a0, 0x8($v0)
    ctx->pc = 0x3939a0u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)FAST_READ16(0x45D180u));
    // 0x3939a4: 0x2231823  subu        $v1, $s1, $v1
    ctx->pc = 0x3939a4u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
    // 0x3939a8: 0xdc450008  ld          $a1, 0x8($v0)
    ctx->pc = 0x3939a8u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x3939ac: 0xde46d178  ld          $a2, -0x2E88($s2)
    ctx->pc = 0x3939acu;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 18), 4294955384)));
    // 0x3939b0: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x3939b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x3939b4: 0xffa50008  sd          $a1, 0x8($sp)
    ctx->pc = 0x3939b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 5));
    // 0x3939b8: 0xffa60000  sd          $a2, 0x0($sp)
    ctx->pc = 0x3939b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 6));
    // 0x3939bc: 0xa7a40008  sh          $a0, 0x8($sp)
    ctx->pc = 0x3939bcu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 8), (uint16_t)GPR_U32(ctx, 4));
    // 0x3939c0: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x3939c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
    // 0x3939c4: 0x2444dac8  addiu       $a0, $v0, -0x2538
    ctx->pc = 0x3939c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294957768));
    // 0x3939c8: 0x1500000c  bnez        $t0, . + 4 + (0xC << 2)
    ctx->pc = 0x3939C8u;
    {
        const bool branch_taken_0x3939c8 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 0));
        ctx->pc = 0x3939CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3939C8u;
        // 0x3939cc: 0xace40028  sw          $a0, 0x28($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 40), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3939c8) {
            ctx->pc = 0x3939FCu;
            goto label_3939fc;
        }
    }
    ctx->pc = 0x3939D0u;
    // 0x3939d0: 0x94830008  lhu         $v1, 0x8($a0)
    ctx->pc = 0x3939d0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x3939d4: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x3939d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x3939d8: 0xdc46dac8  ld          $a2, -0x2538($v0)
    ctx->pc = 0x3939d8u;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 2), 4294957768)));
    // 0x3939dc: 0xdc840008  ld          $a0, 0x8($a0)
    ctx->pc = 0x3939dcu;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x3939e0: 0x24e2ff98  addiu       $v0, $a3, -0x68
    ctx->pc = 0x3939e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967192));
    // 0x3939e4: 0x2221023  subu        $v0, $s1, $v0
    ctx->pc = 0x3939e4u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x3939e8: 0xffa60010  sd          $a2, 0x10($sp)
    ctx->pc = 0x3939e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 6));
    // 0x3939ec: 0xffa40018  sd          $a0, 0x18($sp)
    ctx->pc = 0x3939ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 4));
    // 0x3939f0: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x3939f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x3939f4: 0xace50028  sw          $a1, 0x28($a3)
    ctx->pc = 0x3939f4u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 40), GPR_U32(ctx, 5));
    // 0x3939f8: 0xa7a30018  sh          $v1, 0x18($sp)
    ctx->pc = 0x3939f8u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 24), (uint16_t)GPR_U32(ctx, 3));
label_3939fc:
    // 0x3939fc: 0x26300008  addiu       $s0, $s1, 0x8
    ctx->pc = 0x3939fcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
    // 0x393a00: 0x120282d  daddu       $a1, $t1, $zero
    ctx->pc = 0x393a00u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x393a04: 0xc0e4d50  jal         func_393540
    ctx->pc = 0x393A04u;
    SET_GPR_U32(ctx, 31, 0x393A0Cu);
    ctx->pc = 0x393A08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x393A04u;
    // 0x393a08: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x393540u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x393540u, 0x393A04u, 0x393A0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x393A0Cu;
label_393a0c:
    // 0x393a0c: 0x16000004  bnez        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x393A0Cu;
    {
        const bool branch_taken_0x393a0c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x393A10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x393A0Cu;
        // 0x393a10: 0x8e250000  lw          $a1, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x393a0c) {
            ctx->pc = 0x393A20u;
            goto label_393a20;
        }
    }
    ctx->pc = 0x393A14u;
    // 0x393a14: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x393a14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x393a18: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x393A18u;
    {
        const bool branch_taken_0x393a18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x393A1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x393A18u;
        // 0x393a1c: 0xa0a2001a  sb          $v0, 0x1A($a1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 5), 26), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x393a18) {
            ctx->pc = 0x393A24u;
            goto label_393a24;
        }
    }
    ctx->pc = 0x393A20u;
label_393a20:
    // 0x393a20: 0xa0a0001a  sb          $zero, 0x1A($a1)
    ctx->pc = 0x393a20u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 26), (uint8_t)GPR_U32(ctx, 0));
label_393a24:
    // 0x393a24: 0x24020020  addiu       $v0, $zero, 0x20
    ctx->pc = 0x393a24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x393a28: 0x24030011  addiu       $v1, $zero, 0x11
    ctx->pc = 0x393a28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    // 0x393a2c: 0x24040006  addiu       $a0, $zero, 0x6
    ctx->pc = 0x393a2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x393a30: 0xacb00000  sw          $s0, 0x0($a1)
    ctx->pc = 0x393a30u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 16));
    // 0x393a34: 0xa4a20018  sh          $v0, 0x18($a1)
    ctx->pc = 0x393a34u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 24), (uint16_t)GPR_U32(ctx, 2));
    // 0x393a38: 0xfca30010  sd          $v1, 0x10($a1)
    ctx->pc = 0x393a38u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 16), GPR_U64(ctx, 3));
    // 0x393a3c: 0xaca4001c  sw          $a0, 0x1C($a1)
    ctx->pc = 0x393a3cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 28), GPR_U32(ctx, 4));
    // 0x393a40: 0xaca00020  sw          $zero, 0x20($a1)
    ctx->pc = 0x393a40u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 32), GPR_U32(ctx, 0));
    // 0x393a44: 0xa0a0001b  sb          $zero, 0x1B($a1)
    ctx->pc = 0x393a44u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 27), (uint8_t)GPR_U32(ctx, 0));
    // 0x393a48: 0xaca00004  sw          $zero, 0x4($a1)
    ctx->pc = 0x393a48u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 0));
    // 0x393a4c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x393A4Cu;
    {
        const bool branch_taken_0x393a4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x393A50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x393A4Cu;
        // 0x393a50: 0xaca00008  sw          $zero, 0x8($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x393a4c) {
            ctx->pc = 0x393A5Cu;
            goto label_393a5c;
        }
    }
    ctx->pc = 0x393A54u;
label_393a54:
    // 0x393a54: 0xc0c8386  jal         func_320E18
    ctx->pc = 0x393A54u;
    SET_GPR_U32(ctx, 31, 0x393A5Cu);
    ctx->pc = 0x320E18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x320E18u, 0x393A54u, 0x393A5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x393A5Cu;
label_393a5c:
    // 0x393a5c: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x393A5Cu;
    {
        const bool branch_taken_0x393a5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x393A60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x393A5Cu;
        // 0x393a60: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x393a5c) {
            ctx->pc = 0x393A9Cu;
            goto label_393a9c;
        }
    }
    ctx->pc = 0x393A64u;
    // 0x393a64: 0x8e260000  lw          $a2, 0x0($s1)
    ctx->pc = 0x393a64u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x393a68: 0x2643d178  addiu       $v1, $s2, -0x2E88
    ctx->pc = 0x393a68u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 4294955384));
    // 0x393a6c: 0x94650008  lhu         $a1, 0x8($v1)
    ctx->pc = 0x393a6cu;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x393a70: 0xacc30028  sw          $v1, 0x28($a2)
    ctx->pc = 0x393a70u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 40), GPR_U32(ctx, 3));
    // 0x393a74: 0x24c2fff8  addiu       $v0, $a2, -0x8
    ctx->pc = 0x393a74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967288));
    // 0x393a78: 0x2221023  subu        $v0, $s1, $v0
    ctx->pc = 0x393a78u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x393a7c: 0xdc640008  ld          $a0, 0x8($v1)
    ctx->pc = 0x393a7cu;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x393a80: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x393a80u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x393a84: 0xde47d178  ld          $a3, -0x2E88($s2)
    ctx->pc = 0x393a84u;
    SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 18), 4294955384)));
    // 0x393a88: 0xffa40008  sd          $a0, 0x8($sp)
    ctx->pc = 0x393a88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 4));
    // 0x393a8c: 0xffa70000  sd          $a3, 0x0($sp)
    ctx->pc = 0x393a8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 7));
    // 0x393a90: 0xa7a50008  sh          $a1, 0x8($sp)
    ctx->pc = 0x393a90u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 8), (uint16_t)GPR_U32(ctx, 5));
    // 0x393a94: 0x1000ffef  b           . + 4 + (-0x11 << 2)
    ctx->pc = 0x393A94u;
    {
        const bool branch_taken_0x393a94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x393A98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x393A94u;
        // 0x393a98: 0xacdd0028  sw          $sp, 0x28($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 40), GPR_U32(ctx, 29));
        ctx->in_delay_slot = false;
        if (branch_taken_0x393a94) {
            ctx->pc = 0x393A54u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_393a54;
        }
    }
    ctx->pc = 0x393A9Cu;
label_393a9c:
    // 0x393a9c: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x393a9cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x393aa0: 0xdfb20040  ld          $s2, 0x40($sp)
    ctx->pc = 0x393aa0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x393aa4: 0xdfb10030  ld          $s1, 0x30($sp)
    ctx->pc = 0x393aa4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x393aa8: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x393aa8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x393aac: 0x3e00008  jr          $ra
    ctx->pc = 0x393AACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x393AB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x393AACu;
        // 0x393ab0: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x393AACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x393AB4u;
    // 0x393ab4: 0x0  nop
    ctx->pc = 0x393ab4u;
    // NOP
    ctx->pc = 0x393ab8u;
}
