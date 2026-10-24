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

// Function: func_0027EF10
// Address: 0x27ef10 - 0x27f170
void func_0027EF10_0x27ef10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0027EF10_0x27ef10");
#endif

    switch (ctx->pc) {
        case 0x27ef58u: goto label_27ef58;
        case 0x27ef78u: goto label_27ef78;
        case 0x27efc0u: goto label_27efc0;
        case 0x27efc8u: goto label_27efc8;
        case 0x27efd0u: goto label_27efd0;
        case 0x27efdcu: goto label_27efdc;
        case 0x27efe4u: goto label_27efe4;
        case 0x27f01cu: goto label_27f01c;
        case 0x27f028u: goto label_27f028;
        case 0x27f054u: goto label_27f054;
        case 0x27f0b0u: goto label_27f0b0;
        case 0x27f0d4u: goto label_27f0d4;
        case 0x27f10cu: goto label_27f10c;
        case 0x27f130u: goto label_27f130;
        default: break;
    }

    ctx->pc = 0x27ef10u;

    // 0x27ef10: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x27ef10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x27ef14: 0x7fb10090  sq          $s1, 0x90($sp)
    ctx->pc = 0x27ef14u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 17));
    // 0x27ef18: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x27ef18u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27ef1c: 0x7fb000a0  sq          $s0, 0xA0($sp)
    ctx->pc = 0x27ef1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 16));
    // 0x27ef20: 0x7fb20080  sq          $s2, 0x80($sp)
    ctx->pc = 0x27ef20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 18));
    // 0x27ef24: 0x7fb30070  sq          $s3, 0x70($sp)
    ctx->pc = 0x27ef24u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 19));
    // 0x27ef28: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x27ef28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x27ef2c: 0xfba00010  sqc2        $vf0, 0x10($sp)
    ctx->pc = 0x27ef2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x27ef30: 0x2412026b  addiu       $s2, $zero, 0x26B
    ctx->pc = 0x27ef30u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 619));
    // 0x27ef34: 0x240200ff  addiu       $v0, $zero, 0xFF
    ctx->pc = 0x27ef34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x27ef38: 0xae320564  sw          $s2, 0x564($s1)
    ctx->pc = 0x27ef38u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1380), GPR_U32(ctx, 18));
    // 0x27ef3c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x27ef3cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27ef40: 0xa3a20031  sb          $v0, 0x31($sp)
    ctx->pc = 0x27ef40u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 49), (uint8_t)GPR_U32(ctx, 2));
    // 0x27ef44: 0xafa00010  sw          $zero, 0x10($sp)
    ctx->pc = 0x27ef44u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 0));
    // 0x27ef48: 0xafa00014  sw          $zero, 0x14($sp)
    ctx->pc = 0x27ef48u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 0));
    // 0x27ef4c: 0xafa00018  sw          $zero, 0x18($sp)
    ctx->pc = 0x27ef4cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 0));
    // 0x27ef50: 0xc0a02d8  jal         func_280B60
    ctx->pc = 0x27EF50u;
    SET_GPR_U32(ctx, 31, 0x27EF58u);
    ctx->pc = 0x27EF54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27EF50u;
    // 0x27ef54: 0xafa00020  sw          $zero, 0x20($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x280B60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x280B60u, 0x27EF50u, 0x27EF58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27EF58u;
label_27ef58:
    // 0x27ef58: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x27EF58u;
    {
        const bool branch_taken_0x27ef58 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x27EF5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27EF58u;
        // 0x27ef5c: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27ef58) {
            ctx->pc = 0x27EF68u;
            goto label_27ef68;
        }
    }
    ctx->pc = 0x27EF60u;
    // 0x27ef60: 0x1000007c  b           . + 4 + (0x7C << 2)
    ctx->pc = 0x27EF60u;
    {
        const bool branch_taken_0x27ef60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27EF64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27EF60u;
        // 0x27ef64: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27ef60) {
            ctx->pc = 0x27F154u;
            goto label_27f154;
        }
    }
    ctx->pc = 0x27EF68u;
label_27ef68:
    // 0x27ef68: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x27ef68u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27ef6c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x27ef6cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27ef70: 0xc0a3afc  jal         func_28EBF0
    ctx->pc = 0x27EF70u;
    SET_GPR_U32(ctx, 31, 0x27EF78u);
    ctx->pc = 0x27EF74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27EF70u;
    // 0x27ef74: 0x3c100046  lui         $s0, 0x46 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)70 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28EBF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28EBF0u, 0x27EF70u, 0x27EF78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27EF78u;
label_27ef78:
    // 0x27ef78: 0x200982d  daddu       $s3, $s0, $zero
    ctx->pc = 0x27ef78u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27ef7c: 0x8e220304  lw          $v0, 0x304($s1)
    ctx->pc = 0x27ef7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
    // 0x27ef80: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x27ef80u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27ef84: 0xa22002f4  sb          $zero, 0x2F4($s1)
    ctx->pc = 0x27ef84u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 756), (uint8_t)GPR_U32(ctx, 0));
    // 0x27ef88: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x27ef88u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27ef8c: 0xa22002f5  sb          $zero, 0x2F5($s1)
    ctx->pc = 0x27ef8cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 757), (uint8_t)GPR_U32(ctx, 0));
    // 0x27ef90: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x27ef90u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27ef94: 0xa22002f6  sb          $zero, 0x2F6($s1)
    ctx->pc = 0x27ef94u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 758), (uint8_t)GPR_U32(ctx, 0));
    // 0x27ef98: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x27ef98u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27ef9c: 0xa22002f7  sb          $zero, 0x2F7($s1)
    ctx->pc = 0x27ef9cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 759), (uint8_t)GPR_U32(ctx, 0));
    // 0x27efa0: 0xae201580  sw          $zero, 0x1580($s1)
    ctx->pc = 0x27efa0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 5504), GPR_U32(ctx, 0));
    // 0x27efa4: 0xae201584  sw          $zero, 0x1584($s1)
    ctx->pc = 0x27efa4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 5508), GPR_U32(ctx, 0));
    // 0x27efa8: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x27efa8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x27efac: 0x8c45000c  lw          $a1, 0xC($v0)
    ctx->pc = 0x27efacu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x27efb0: 0x8c460010  lw          $a2, 0x10($v0)
    ctx->pc = 0x27efb0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x27efb4: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x27efb4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x27efb8: 0xc0aa15e  jal         func_2A8578
    ctx->pc = 0x27EFB8u;
    SET_GPR_U32(ctx, 31, 0x27EFC0u);
    ctx->pc = 0x27EFBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27EFB8u;
    // 0x27efbc: 0xc23021  addu        $a2, $a2, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A8578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8578u, 0x27EFB8u, 0x27EFC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27EFC0u;
label_27efc0:
    // 0x27efc0: 0xc055f06  jal         func_157C18
    ctx->pc = 0x27EFC0u;
    SET_GPR_U32(ctx, 31, 0x27EFC8u);
    ctx->pc = 0x27EFC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27EFC0u;
    // 0x27efc4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x157C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157C18u, 0x27EFC0u, 0x27EFC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27EFC8u;
label_27efc8:
    // 0x27efc8: 0xc0527ae  jal         func_149EB8
    ctx->pc = 0x27EFC8u;
    SET_GPR_U32(ctx, 31, 0x27EFD0u);
    ctx->pc = 0x27EFCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27EFC8u;
    // 0x27efcc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x149EB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x149EB8u, 0x27EFC8u, 0x27EFD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27EFD0u;
label_27efd0:
    // 0x27efd0: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x27efd0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27efd4: 0xc054a88  jal         func_152A20
    ctx->pc = 0x27EFD4u;
    SET_GPR_U32(ctx, 31, 0x27EFDCu);
    ctx->pc = 0x27EFD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27EFD4u;
    // 0x27efd8: 0x26240448  addiu       $a0, $s1, 0x448 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 1096));
    ctx->in_delay_slot = false;
    ctx->pc = 0x152A20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x152A20u, 0x27EFD4u, 0x27EFDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27EFDCu;
label_27efdc:
    // 0x27efdc: 0xc05280e  jal         func_14A038
    ctx->pc = 0x27EFDCu;
    SET_GPR_U32(ctx, 31, 0x27EFE4u);
    ctx->pc = 0x27EFE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27EFDCu;
    // 0x27efe0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14A038u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14A038u, 0x27EFDCu, 0x27EFE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27EFE4u;
label_27efe4:
    // 0x27efe4: 0x8e220250  lw          $v0, 0x250($s1)
    ctx->pc = 0x27efe4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 592)));
    // 0x27efe8: 0x3c030001  lui         $v1, 0x1
    ctx->pc = 0x27efe8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
    // 0x27efec: 0x24051770  addiu       $a1, $zero, 0x1770
    ctx->pc = 0x27efecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6000));
    // 0x27eff0: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x27eff0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x27eff4: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x27eff4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x27eff8: 0x2407ffff  addiu       $a3, $zero, -0x1
    ctx->pc = 0x27eff8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x27effc: 0xa62502ae  sh          $a1, 0x2AE($s1)
    ctx->pc = 0x27effcu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 686), (uint16_t)GPR_U32(ctx, 5));
    // 0x27f000: 0x26042fc0  addiu       $a0, $s0, 0x2FC0
    ctx->pc = 0x27f000u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 12224));
    // 0x27f004: 0xa2260616  sb          $a2, 0x616($s1)
    ctx->pc = 0x27f004u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1558), (uint8_t)GPR_U32(ctx, 6));
    // 0x27f008: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x27f008u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27f00c: 0xae220250  sw          $v0, 0x250($s1)
    ctx->pc = 0x27f00cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 592), GPR_U32(ctx, 2));
    // 0x27f010: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x27f010u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27f014: 0xc04d476  jal         func_1351D8
    ctx->pc = 0x27F014u;
    SET_GPR_U32(ctx, 31, 0x27F01Cu);
    ctx->pc = 0x27F018u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27F014u;
    // 0x27f018: 0xa2270531  sb          $a3, 0x531($s1) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 17), 1329), (uint8_t)GPR_U32(ctx, 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1351D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1351D8u, 0x27F014u, 0x27F01Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27F01Cu;
label_27f01c:
    // 0x27f01c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x27f01cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27f020: 0xc05404a  jal         func_150128
    ctx->pc = 0x27F020u;
    SET_GPR_U32(ctx, 31, 0x27F028u);
    ctx->pc = 0x27F024u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27F020u;
    // 0x27f024: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x150128u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x150128u, 0x27F020u, 0x27F028u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27F028u;
label_27f028:
    // 0x27f028: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x27f028u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x27f02c: 0x8e230564  lw          $v1, 0x564($s1)
    ctx->pc = 0x27f02cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1380)));
    // 0x27f030: 0xa622054a  sh          $v0, 0x54A($s1)
    ctx->pc = 0x27f030u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1354), (uint16_t)GPR_U32(ctx, 2));
    // 0x27f034: 0xa6220548  sh          $v0, 0x548($s1)
    ctx->pc = 0x27f034u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1352), (uint16_t)GPR_U32(ctx, 2));
    // 0x27f038: 0x1072001e  beq         $v1, $s2, . + 4 + (0x1E << 2)
    ctx->pc = 0x27F038u;
    {
        const bool branch_taken_0x27f038 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 18));
        ctx->pc = 0x27F03Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27F038u;
        // 0x27f03c: 0xae200670  sw          $zero, 0x670($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 1648), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27f038) {
            ctx->pc = 0x27F0B4u;
            goto label_27f0b4;
        }
    }
    ctx->pc = 0x27F040u;
    // 0x27f040: 0x3c040057  lui         $a0, 0x57
    ctx->pc = 0x27f040u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
    // 0x27f044: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x27f044u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27f048: 0x24844380  addiu       $a0, $a0, 0x4380
    ctx->pc = 0x27f048u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17280));
    // 0x27f04c: 0xc07f886  jal         func_1FE218
    ctx->pc = 0x27F04Cu;
    SET_GPR_U32(ctx, 31, 0x27F054u);
    ctx->pc = 0x27F050u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27F04Cu;
    // 0x27f050: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FE218u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FE218u, 0x27F04Cu, 0x27F054u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27F054u;
label_27f054:
    // 0x27f054: 0x922402b4  lbu         $a0, 0x2B4($s1)
    ctx->pc = 0x27f054u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 692)));
    // 0x27f058: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x27f058u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x27f05c: 0xae220670  sw          $v0, 0x670($s1)
    ctx->pc = 0x27f05cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1648), GPR_U32(ctx, 2));
    // 0x27f060: 0x64182a  slt         $v1, $v1, $a0
    ctx->pc = 0x27f060u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x27f064: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x27F064u;
    {
        const bool branch_taken_0x27f064 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x27F068u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27F064u;
        // 0x27f068: 0xafa40040  sw          $a0, 0x40($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27f064) {
            ctx->pc = 0x27F078u;
            goto label_27f078;
        }
    }
    ctx->pc = 0x27F06Cu;
    // 0x27f06c: 0x8e220278  lw          $v0, 0x278($s1)
    ctx->pc = 0x27f06cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 632)));
    // 0x27f070: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x27F070u;
    {
        const bool branch_taken_0x27f070 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27F074u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27F070u;
        // 0x27f074: 0x8c450004  lw          $a1, 0x4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27f070) {
            ctx->pc = 0x27F07Cu;
            goto label_27f07c;
        }
    }
    ctx->pc = 0x27F078u;
label_27f078:
    // 0x27f078: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x27f078u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_27f07c:
    // 0x27f07c: 0xafa00050  sw          $zero, 0x50($sp)
    ctx->pc = 0x27f07cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 0));
    // 0x27f080: 0x27a20050  addiu       $v0, $sp, 0x50
    ctx->pc = 0x27f080u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x27f084: 0xafa00054  sw          $zero, 0x54($sp)
    ctx->pc = 0x27f084u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 0));
    // 0x27f088: 0x24a50080  addiu       $a1, $a1, 0x80
    ctx->pc = 0x27f088u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 128));
    // 0x27f08c: 0xafa00058  sw          $zero, 0x58($sp)
    ctx->pc = 0x27f08cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 0));
    // 0x27f090: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x27f090u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27f094: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x27f094u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x27f098: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x27f098u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x27f09c: 0x8e240670  lw          $a0, 0x670($s1)
    ctx->pc = 0x27f09cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1648)));
    // 0x27f0a0: 0x3c013e80  lui         $at, 0x3E80
    ctx->pc = 0x27f0a0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16000 << 16));
    // 0x27f0a4: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x27f0a4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x27f0a8: 0xc07f6bc  jal         func_1FDAF0
    ctx->pc = 0x27F0A8u;
    SET_GPR_U32(ctx, 31, 0x27F0B0u);
    ctx->pc = 0x27F0ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27F0A8u;
    // 0x27f0ac: 0xe440000c  swc1        $f0, 0xC($v0) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FDAF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FDAF0u, 0x27F0A8u, 0x27F0B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27F0B0u;
label_27f0b0:
    // 0x27f0b0: 0xae220674  sw          $v0, 0x674($s1)
    ctx->pc = 0x27f0b0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1652), GPR_U32(ctx, 2));
label_27f0b4:
    // 0x27f0b4: 0x26702fc0  addiu       $s0, $s3, 0x2FC0
    ctx->pc = 0x27f0b4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), 12224));
    // 0x27f0b8: 0x3c013e4c  lui         $at, 0x3E4C
    ctx->pc = 0x27f0b8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15948 << 16));
    // 0x27f0bc: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x27f0bcu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x27f0c0: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x27f0c0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x27f0c4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x27f0c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27f0c8: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x27f0c8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27f0cc: 0xc04d1be  jal         func_1346F8
    ctx->pc = 0x27F0CCu;
    SET_GPR_U32(ctx, 31, 0x27F0D4u);
    ctx->pc = 0x27F0D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27F0CCu;
    // 0x27f0d0: 0x24060005  addiu       $a2, $zero, 0x5 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1346F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1346F8u, 0x27F0CCu, 0x27F0D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27F0D4u;
label_27f0d4:
    // 0x27f0d4: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x27f0d4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x27f0d8: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x27f0d8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x27f0dc: 0x27a20040  addiu       $v0, $sp, 0x40
    ctx->pc = 0x27f0dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x27f0e0: 0xafa00040  sw          $zero, 0x40($sp)
    ctx->pc = 0x27f0e0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 0));
    // 0x27f0e4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x27f0e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27f0e8: 0xe44c0004  swc1        $f12, 0x4($v0)
    ctx->pc = 0x27f0e8u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x27f0ec: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x27f0ecu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27f0f0: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x27f0f0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x27f0f4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x27f0f4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x27f0f8: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x27f0f8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27f0fc: 0xafa00048  sw          $zero, 0x48($sp)
    ctx->pc = 0x27f0fcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 0));
    // 0x27f100: 0x26260080  addiu       $a2, $s1, 0x80
    ctx->pc = 0x27f100u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 128));
    // 0x27f104: 0xc04d220  jal         func_134880
    ctx->pc = 0x27F104u;
    SET_GPR_U32(ctx, 31, 0x27F10Cu);
    ctx->pc = 0x27F108u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27F104u;
    // 0x27f108: 0xe440000c  swc1        $f0, 0xC($v0) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x134880u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x134880u, 0x27F104u, 0x27F10Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27F10Cu;
label_27f10c:
    // 0x27f10c: 0x8e2302d0  lw          $v1, 0x2D0($s1)
    ctx->pc = 0x27f10cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 720)));
    // 0x27f110: 0x3c02bfff  lui         $v0, 0xBFFF
    ctx->pc = 0x27f110u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49151 << 16));
    // 0x27f114: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x27f114u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x27f118: 0x3c040060  lui         $a0, 0x60
    ctx->pc = 0x27f118u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
    // 0x27f11c: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x27f11cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x27f120: 0x24844700  addiu       $a0, $a0, 0x4700
    ctx->pc = 0x27f120u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 18176));
    // 0x27f124: 0xae2302d0  sw          $v1, 0x2D0($s1)
    ctx->pc = 0x27f124u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 720), GPR_U32(ctx, 3));
    // 0x27f128: 0xc0b6630  jal         func_2D98C0
    ctx->pc = 0x27F128u;
    SET_GPR_U32(ctx, 31, 0x27F130u);
    ctx->pc = 0x27F12Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27F128u;
    // 0x27f12c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D98C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D98C0u, 0x27F128u, 0x27F130u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27F130u;
label_27f130:
    // 0x27f130: 0x3c013ca3  lui         $at, 0x3CA3
    ctx->pc = 0x27f130u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15523 << 16));
    // 0x27f134: 0x3421d70a  ori         $at, $at, 0xD70A
    ctx->pc = 0x27f134u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55050);
    // 0x27f138: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x27f138u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x27f13c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x27f13cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x27f140: 0xa2220617  sb          $v0, 0x617($s1)
    ctx->pc = 0x27f140u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1559), (uint8_t)GPR_U32(ctx, 2));
    // 0x27f144: 0xe6201564  swc1        $f0, 0x1564($s1)
    ctx->pc = 0x27f144u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 5476), bits); }
    // 0x27f148: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x27f148u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x27f14c: 0xae2015b0  sw          $zero, 0x15B0($s1)
    ctx->pc = 0x27f14cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 5552), GPR_U32(ctx, 0));
    // 0x27f150: 0xae201568  sw          $zero, 0x1568($s1)
    ctx->pc = 0x27f150u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 5480), GPR_U32(ctx, 0));
label_27f154:
    // 0x27f154: 0x7bb000a0  lq          $s0, 0xA0($sp)
    ctx->pc = 0x27f154u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x27f158: 0x7bb10090  lq          $s1, 0x90($sp)
    ctx->pc = 0x27f158u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x27f15c: 0x7bb20080  lq          $s2, 0x80($sp)
    ctx->pc = 0x27f15cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x27f160: 0x7bb30070  lq          $s3, 0x70($sp)
    ctx->pc = 0x27f160u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x27f164: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x27f164u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x27f168: 0x3e00008  jr          $ra
    ctx->pc = 0x27F168u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x27F16Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27F168u;
        // 0x27f16c: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x27F168u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x27F170u;
}
