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

// Function: func_0027DE60
// Address: 0x27de60 - 0x27e088
void func_0027DE60_0x27de60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0027DE60_0x27de60");
#endif

    switch (ctx->pc) {
        case 0x27dea8u: goto label_27dea8;
        case 0x27dec8u: goto label_27dec8;
        case 0x27ded4u: goto label_27ded4;
        case 0x27df14u: goto label_27df14;
        case 0x27df1cu: goto label_27df1c;
        case 0x27df24u: goto label_27df24;
        case 0x27df30u: goto label_27df30;
        case 0x27df38u: goto label_27df38;
        case 0x27df58u: goto label_27df58;
        case 0x27df64u: goto label_27df64;
        case 0x27df90u: goto label_27df90;
        case 0x27dfecu: goto label_27dfec;
        case 0x27e010u: goto label_27e010;
        case 0x27e048u: goto label_27e048;
        default: break;
    }

    ctx->pc = 0x27de60u;

    // 0x27de60: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x27de60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x27de64: 0x7fb10090  sq          $s1, 0x90($sp)
    ctx->pc = 0x27de64u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 17));
    // 0x27de68: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x27de68u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27de6c: 0x7fb000a0  sq          $s0, 0xA0($sp)
    ctx->pc = 0x27de6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 16));
    // 0x27de70: 0x7fb20080  sq          $s2, 0x80($sp)
    ctx->pc = 0x27de70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 18));
    // 0x27de74: 0x7fb30070  sq          $s3, 0x70($sp)
    ctx->pc = 0x27de74u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 19));
    // 0x27de78: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x27de78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x27de7c: 0xfba00010  sqc2        $vf0, 0x10($sp)
    ctx->pc = 0x27de7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x27de80: 0x24120266  addiu       $s2, $zero, 0x266
    ctx->pc = 0x27de80u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 614));
    // 0x27de84: 0x240200ff  addiu       $v0, $zero, 0xFF
    ctx->pc = 0x27de84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x27de88: 0xae320564  sw          $s2, 0x564($s1)
    ctx->pc = 0x27de88u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1380), GPR_U32(ctx, 18));
    // 0x27de8c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x27de8cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27de90: 0xa3a20031  sb          $v0, 0x31($sp)
    ctx->pc = 0x27de90u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 49), (uint8_t)GPR_U32(ctx, 2));
    // 0x27de94: 0xafa00010  sw          $zero, 0x10($sp)
    ctx->pc = 0x27de94u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 0));
    // 0x27de98: 0xafa00014  sw          $zero, 0x14($sp)
    ctx->pc = 0x27de98u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 0));
    // 0x27de9c: 0xafa00018  sw          $zero, 0x18($sp)
    ctx->pc = 0x27de9cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 0));
    // 0x27dea0: 0xc09f98e  jal         func_27E638
    ctx->pc = 0x27DEA0u;
    SET_GPR_U32(ctx, 31, 0x27DEA8u);
    ctx->pc = 0x27DEA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27DEA0u;
    // 0x27dea4: 0xafa00020  sw          $zero, 0x20($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x27E638u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27E638u, 0x27DEA0u, 0x27DEA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27DEA8u;
label_27dea8:
    // 0x27dea8: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x27DEA8u;
    {
        const bool branch_taken_0x27dea8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x27DEACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27DEA8u;
        // 0x27deac: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27dea8) {
            ctx->pc = 0x27DEB8u;
            goto label_27deb8;
        }
    }
    ctx->pc = 0x27DEB0u;
    // 0x27deb0: 0x1000006d  b           . + 4 + (0x6D << 2)
    ctx->pc = 0x27DEB0u;
    {
        const bool branch_taken_0x27deb0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27DEB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27DEB0u;
        // 0x27deb4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27deb0) {
            ctx->pc = 0x27E068u;
            goto label_27e068;
        }
    }
    ctx->pc = 0x27DEB8u;
label_27deb8:
    // 0x27deb8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x27deb8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27debc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x27debcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27dec0: 0xc0a3afc  jal         func_28EBF0
    ctx->pc = 0x27DEC0u;
    SET_GPR_U32(ctx, 31, 0x27DEC8u);
    ctx->pc = 0x27DEC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27DEC0u;
    // 0x27dec4: 0x3c100046  lui         $s0, 0x46 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)70 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28EBF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28EBF0u, 0x27DEC0u, 0x27DEC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27DEC8u;
label_27dec8:
    // 0x27dec8: 0x200982d  daddu       $s3, $s0, $zero
    ctx->pc = 0x27dec8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27decc: 0xc09fb72  jal         func_27EDC8
    ctx->pc = 0x27DECCu;
    SET_GPR_U32(ctx, 31, 0x27DED4u);
    ctx->pc = 0x27DED0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27DECCu;
    // 0x27ded0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x27EDC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27EDC8u, 0x27DECCu, 0x27DED4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27DED4u;
label_27ded4:
    // 0x27ded4: 0x8e220304  lw          $v0, 0x304($s1)
    ctx->pc = 0x27ded4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 772)));
    // 0x27ded8: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x27ded8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27dedc: 0xa22002f4  sb          $zero, 0x2F4($s1)
    ctx->pc = 0x27dedcu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 756), (uint8_t)GPR_U32(ctx, 0));
    // 0x27dee0: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x27dee0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27dee4: 0xa22002f5  sb          $zero, 0x2F5($s1)
    ctx->pc = 0x27dee4u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 757), (uint8_t)GPR_U32(ctx, 0));
    // 0x27dee8: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x27dee8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27deec: 0xa22002f6  sb          $zero, 0x2F6($s1)
    ctx->pc = 0x27deecu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 758), (uint8_t)GPR_U32(ctx, 0));
    // 0x27def0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x27def0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27def4: 0xa22002f7  sb          $zero, 0x2F7($s1)
    ctx->pc = 0x27def4u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 759), (uint8_t)GPR_U32(ctx, 0));
    // 0x27def8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x27def8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27defc: 0xae201580  sw          $zero, 0x1580($s1)
    ctx->pc = 0x27defcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 5504), GPR_U32(ctx, 0));
    // 0x27df00: 0xae201584  sw          $zero, 0x1584($s1)
    ctx->pc = 0x27df00u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 5508), GPR_U32(ctx, 0));
    // 0x27df04: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x27df04u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x27df08: 0x8c45000c  lw          $a1, 0xC($v0)
    ctx->pc = 0x27df08u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x27df0c: 0xc0aa15e  jal         func_2A8578
    ctx->pc = 0x27DF0Cu;
    SET_GPR_U32(ctx, 31, 0x27DF14u);
    ctx->pc = 0x27DF10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27DF0Cu;
    // 0x27df10: 0xa22821  addu        $a1, $a1, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A8578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A8578u, 0x27DF0Cu, 0x27DF14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27DF14u;
label_27df14:
    // 0x27df14: 0xc055f06  jal         func_157C18
    ctx->pc = 0x27DF14u;
    SET_GPR_U32(ctx, 31, 0x27DF1Cu);
    ctx->pc = 0x27DF18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27DF14u;
    // 0x27df18: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x157C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x157C18u, 0x27DF14u, 0x27DF1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27DF1Cu;
label_27df1c:
    // 0x27df1c: 0xc0527ae  jal         func_149EB8
    ctx->pc = 0x27DF1Cu;
    SET_GPR_U32(ctx, 31, 0x27DF24u);
    ctx->pc = 0x27DF20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27DF1Cu;
    // 0x27df20: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x149EB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x149EB8u, 0x27DF1Cu, 0x27DF24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27DF24u;
label_27df24:
    // 0x27df24: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x27df24u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27df28: 0xc054a88  jal         func_152A20
    ctx->pc = 0x27DF28u;
    SET_GPR_U32(ctx, 31, 0x27DF30u);
    ctx->pc = 0x27DF2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27DF28u;
    // 0x27df2c: 0x26240448  addiu       $a0, $s1, 0x448 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 1096));
    ctx->in_delay_slot = false;
    ctx->pc = 0x152A20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x152A20u, 0x27DF28u, 0x27DF30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27DF30u;
label_27df30:
    // 0x27df30: 0xc05280e  jal         func_14A038
    ctx->pc = 0x27DF30u;
    SET_GPR_U32(ctx, 31, 0x27DF38u);
    ctx->pc = 0x27DF34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27DF30u;
    // 0x27df34: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14A038u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14A038u, 0x27DF30u, 0x27DF38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27DF38u;
label_27df38:
    // 0x27df38: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x27df38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x27df3c: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x27df3cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x27df40: 0xa2220616  sb          $v0, 0x616($s1)
    ctx->pc = 0x27df40u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1558), (uint8_t)GPR_U32(ctx, 2));
    // 0x27df44: 0x26042fc0  addiu       $a0, $s0, 0x2FC0
    ctx->pc = 0x27df44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 12224));
    // 0x27df48: 0xa2230531  sb          $v1, 0x531($s1)
    ctx->pc = 0x27df48u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1329), (uint8_t)GPR_U32(ctx, 3));
    // 0x27df4c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x27df4cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27df50: 0xc04d476  jal         func_1351D8
    ctx->pc = 0x27DF50u;
    SET_GPR_U32(ctx, 31, 0x27DF58u);
    ctx->pc = 0x27DF54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27DF50u;
    // 0x27df54: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1351D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1351D8u, 0x27DF50u, 0x27DF58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27DF58u;
label_27df58:
    // 0x27df58: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x27df58u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27df5c: 0xc05404a  jal         func_150128
    ctx->pc = 0x27DF5Cu;
    SET_GPR_U32(ctx, 31, 0x27DF64u);
    ctx->pc = 0x27DF60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27DF5Cu;
    // 0x27df60: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x150128u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x150128u, 0x27DF5Cu, 0x27DF64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27DF64u;
label_27df64:
    // 0x27df64: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x27df64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x27df68: 0x8e230564  lw          $v1, 0x564($s1)
    ctx->pc = 0x27df68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1380)));
    // 0x27df6c: 0xa622054a  sh          $v0, 0x54A($s1)
    ctx->pc = 0x27df6cu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1354), (uint16_t)GPR_U32(ctx, 2));
    // 0x27df70: 0xa6220548  sh          $v0, 0x548($s1)
    ctx->pc = 0x27df70u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 1352), (uint16_t)GPR_U32(ctx, 2));
    // 0x27df74: 0x1072001e  beq         $v1, $s2, . + 4 + (0x1E << 2)
    ctx->pc = 0x27DF74u;
    {
        const bool branch_taken_0x27df74 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 18));
        ctx->pc = 0x27DF78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27DF74u;
        // 0x27df78: 0xae200670  sw          $zero, 0x670($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 1648), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27df74) {
            ctx->pc = 0x27DFF0u;
            goto label_27dff0;
        }
    }
    ctx->pc = 0x27DF7Cu;
    // 0x27df7c: 0x3c040057  lui         $a0, 0x57
    ctx->pc = 0x27df7cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
    // 0x27df80: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x27df80u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27df84: 0x24844380  addiu       $a0, $a0, 0x4380
    ctx->pc = 0x27df84u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17280));
    // 0x27df88: 0xc07f886  jal         func_1FE218
    ctx->pc = 0x27DF88u;
    SET_GPR_U32(ctx, 31, 0x27DF90u);
    ctx->pc = 0x27DF8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27DF88u;
    // 0x27df8c: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FE218u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FE218u, 0x27DF88u, 0x27DF90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27DF90u;
label_27df90:
    // 0x27df90: 0x922402b4  lbu         $a0, 0x2B4($s1)
    ctx->pc = 0x27df90u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 692)));
    // 0x27df94: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x27df94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x27df98: 0xae220670  sw          $v0, 0x670($s1)
    ctx->pc = 0x27df98u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1648), GPR_U32(ctx, 2));
    // 0x27df9c: 0x64182a  slt         $v1, $v1, $a0
    ctx->pc = 0x27df9cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x27dfa0: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x27DFA0u;
    {
        const bool branch_taken_0x27dfa0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x27DFA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27DFA0u;
        // 0x27dfa4: 0xafa40040  sw          $a0, 0x40($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27dfa0) {
            ctx->pc = 0x27DFB4u;
            goto label_27dfb4;
        }
    }
    ctx->pc = 0x27DFA8u;
    // 0x27dfa8: 0x8e220278  lw          $v0, 0x278($s1)
    ctx->pc = 0x27dfa8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 632)));
    // 0x27dfac: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x27DFACu;
    {
        const bool branch_taken_0x27dfac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27DFB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27DFACu;
        // 0x27dfb0: 0x8c450004  lw          $a1, 0x4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27dfac) {
            ctx->pc = 0x27DFB8u;
            goto label_27dfb8;
        }
    }
    ctx->pc = 0x27DFB4u;
label_27dfb4:
    // 0x27dfb4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x27dfb4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_27dfb8:
    // 0x27dfb8: 0xafa00050  sw          $zero, 0x50($sp)
    ctx->pc = 0x27dfb8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 0));
    // 0x27dfbc: 0x27a20050  addiu       $v0, $sp, 0x50
    ctx->pc = 0x27dfbcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x27dfc0: 0xafa00054  sw          $zero, 0x54($sp)
    ctx->pc = 0x27dfc0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 0));
    // 0x27dfc4: 0x24a50080  addiu       $a1, $a1, 0x80
    ctx->pc = 0x27dfc4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 128));
    // 0x27dfc8: 0xafa00058  sw          $zero, 0x58($sp)
    ctx->pc = 0x27dfc8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 0));
    // 0x27dfcc: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x27dfccu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27dfd0: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x27dfd0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x27dfd4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x27dfd4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x27dfd8: 0x8e240670  lw          $a0, 0x670($s1)
    ctx->pc = 0x27dfd8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1648)));
    // 0x27dfdc: 0x3c013e80  lui         $at, 0x3E80
    ctx->pc = 0x27dfdcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16000 << 16));
    // 0x27dfe0: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x27dfe0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x27dfe4: 0xc07f6bc  jal         func_1FDAF0
    ctx->pc = 0x27DFE4u;
    SET_GPR_U32(ctx, 31, 0x27DFECu);
    ctx->pc = 0x27DFE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27DFE4u;
    // 0x27dfe8: 0xe440000c  swc1        $f0, 0xC($v0) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FDAF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FDAF0u, 0x27DFE4u, 0x27DFECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27DFECu;
label_27dfec:
    // 0x27dfec: 0xae220674  sw          $v0, 0x674($s1)
    ctx->pc = 0x27dfecu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1652), GPR_U32(ctx, 2));
label_27dff0:
    // 0x27dff0: 0x26702fc0  addiu       $s0, $s3, 0x2FC0
    ctx->pc = 0x27dff0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), 12224));
    // 0x27dff4: 0x3c013e4c  lui         $at, 0x3E4C
    ctx->pc = 0x27dff4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15948 << 16));
    // 0x27dff8: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x27dff8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x27dffc: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x27dffcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x27e000: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x27e000u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27e004: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x27e004u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27e008: 0xc04d1be  jal         func_1346F8
    ctx->pc = 0x27E008u;
    SET_GPR_U32(ctx, 31, 0x27E010u);
    ctx->pc = 0x27E00Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27E008u;
    // 0x27e00c: 0x24060005  addiu       $a2, $zero, 0x5 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1346F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1346F8u, 0x27E008u, 0x27E010u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27E010u;
label_27e010:
    // 0x27e010: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x27e010u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x27e014: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x27e014u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x27e018: 0x27a20040  addiu       $v0, $sp, 0x40
    ctx->pc = 0x27e018u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x27e01c: 0xafa00040  sw          $zero, 0x40($sp)
    ctx->pc = 0x27e01cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 0));
    // 0x27e020: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x27e020u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27e024: 0xe44c0004  swc1        $f12, 0x4($v0)
    ctx->pc = 0x27e024u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x27e028: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x27e028u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27e02c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x27e02cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x27e030: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x27e030u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x27e034: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x27e034u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27e038: 0xafa00048  sw          $zero, 0x48($sp)
    ctx->pc = 0x27e038u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 0));
    // 0x27e03c: 0x26260080  addiu       $a2, $s1, 0x80
    ctx->pc = 0x27e03cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 128));
    // 0x27e040: 0xc04d220  jal         func_134880
    ctx->pc = 0x27E040u;
    SET_GPR_U32(ctx, 31, 0x27E048u);
    ctx->pc = 0x27E044u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27E040u;
    // 0x27e044: 0xe440000c  swc1        $f0, 0xC($v0) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x134880u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x134880u, 0x27E040u, 0x27E048u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27E048u;
label_27e048:
    // 0x27e048: 0x3c013ca3  lui         $at, 0x3CA3
    ctx->pc = 0x27e048u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15523 << 16));
    // 0x27e04c: 0x3421d70a  ori         $at, $at, 0xD70A
    ctx->pc = 0x27e04cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55050);
    // 0x27e050: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x27e050u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x27e054: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x27e054u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x27e058: 0xa2220617  sb          $v0, 0x617($s1)
    ctx->pc = 0x27e058u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1559), (uint8_t)GPR_U32(ctx, 2));
    // 0x27e05c: 0xe6201564  swc1        $f0, 0x1564($s1)
    ctx->pc = 0x27e05cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 5476), bits); }
    // 0x27e060: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x27e060u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x27e064: 0xae201568  sw          $zero, 0x1568($s1)
    ctx->pc = 0x27e064u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 5480), GPR_U32(ctx, 0));
label_27e068:
    // 0x27e068: 0x7bb000a0  lq          $s0, 0xA0($sp)
    ctx->pc = 0x27e068u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x27e06c: 0x7bb10090  lq          $s1, 0x90($sp)
    ctx->pc = 0x27e06cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x27e070: 0x7bb20080  lq          $s2, 0x80($sp)
    ctx->pc = 0x27e070u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x27e074: 0x7bb30070  lq          $s3, 0x70($sp)
    ctx->pc = 0x27e074u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x27e078: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x27e078u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x27e07c: 0x3e00008  jr          $ra
    ctx->pc = 0x27E07Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x27E080u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27E07Cu;
        // 0x27e080: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x27E07Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x27E084u;
    // 0x27e084: 0x0  nop
    ctx->pc = 0x27e084u;
    // NOP
    ctx->pc = 0x27e088u;
}
