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

// Function: Move
// Address: 0x30eee8 - 0x30f090
void Move_0x30eee8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Move_0x30eee8");
#endif

    switch (ctx->pc) {
        case 0x30ef34u: goto label_30ef34;
        case 0x30ef50u: goto label_30ef50;
        case 0x30ef5cu: goto label_30ef5c;
        case 0x30ef68u: goto label_30ef68;
        case 0x30ef70u: goto label_30ef70;
        case 0x30ef80u: goto label_30ef80;
        case 0x30ef8cu: goto label_30ef8c;
        case 0x30ef98u: goto label_30ef98;
        case 0x30efa4u: goto label_30efa4;
        case 0x30efacu: goto label_30efac;
        case 0x30efb8u: goto label_30efb8;
        case 0x30efc4u: goto label_30efc4;
        case 0x30efd0u: goto label_30efd0;
        case 0x30efd8u: goto label_30efd8;
        case 0x30efe4u: goto label_30efe4;
        case 0x30efecu: goto label_30efec;
        case 0x30eff4u: goto label_30eff4;
        case 0x30f018u: goto label_30f018;
        case 0x30f024u: goto label_30f024;
        case 0x30f030u: goto label_30f030;
        case 0x30f03cu: goto label_30f03c;
        case 0x30f048u: goto label_30f048;
        case 0x30f054u: goto label_30f054;
        case 0x30f060u: goto label_30f060;
        default: break;
    }

    ctx->pc = 0x30eee8u;

    // 0x30eee8: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x30eee8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x30eeec: 0x3c020075  lui         $v0, 0x75
    ctx->pc = 0x30eeecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)117 << 16));
    // 0x30eef0: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x30eef0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x30eef4: 0x3c04005f  lui         $a0, 0x5F
    ctx->pc = 0x30eef4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)95 << 16));
    // 0x30eef8: 0x8c432cf0  lw          $v1, 0x2CF0($v0)
    ctx->pc = 0x30eef8u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x752CF0u));
    // 0x30eefc: 0x3c130075  lui         $s3, 0x75
    ctx->pc = 0x30eefcu;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)117 << 16));
    // 0x30ef00: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x30ef00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x30ef04: 0x24848040  addiu       $a0, $a0, -0x7FC0
    ctx->pc = 0x30ef04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294934592));
    // 0x30ef08: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x30ef08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x30ef0c: 0x3c101000  lui         $s0, 0x1000
    ctx->pc = 0x30ef0cu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)4096 << 16));
    // 0x30ef10: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x30ef10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x30ef14: 0x36100800  ori         $s0, $s0, 0x800
    ctx->pc = 0x30ef14u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | (uint64_t)(uint16_t)2048);
    // 0x30ef18: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x30ef18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x30ef1c: 0x3c110075  lui         $s1, 0x75
    ctx->pc = 0x30ef1cu;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)117 << 16));
    // 0x30ef20: 0xae632d44  sw          $v1, 0x2D44($s3)
    ctx->pc = 0x30ef20u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x752D44u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x752D44u, _value); } while (0);
    // 0x30ef24: 0x3c12003c  lui         $s2, 0x3C
    ctx->pc = 0x30ef24u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)60 << 16));
    // 0x30ef28: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x30ef28u;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, 0x10000800u));
    // 0x30ef2c: 0xc0ae756  jal         func_2B9D58
    ctx->pc = 0x30EF2Cu;
    SET_GPR_U32(ctx, 31, 0x30EF34u);
    ctx->pc = 0x30EF30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30EF2Cu;
    // 0x30ef30: 0xae222cfc  sw          $v0, 0x2CFC($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 11516), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B9D58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B9D58u, 0x30EF2Cu, 0x30EF34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30EF34u;
label_30ef34:
    // 0x30ef34: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x30ef34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x30ef38: 0x3c04005d  lui         $a0, 0x5D
    ctx->pc = 0x30ef38u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)93 << 16));
    // 0x30ef3c: 0x8e222cfc  lw          $v0, 0x2CFC($s1)
    ctx->pc = 0x30ef3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 11516)));
    // 0x30ef40: 0x2484ae50  addiu       $a0, $a0, -0x51B0
    ctx->pc = 0x30ef40u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294946384));
    // 0x30ef44: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x30ef44u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x30ef48: 0xc04ba10  jal         func_12E840
    ctx->pc = 0x30EF48u;
    SET_GPR_U32(ctx, 31, 0x30EF50u);
    ctx->pc = 0x30EF4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30EF48u;
    // 0x30ef4c: 0xae222cfc  sw          $v0, 0x2CFC($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 11516), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12E840u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12E840u, 0x30EF48u, 0x30EF50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30EF50u;
label_30ef50:
    // 0x30ef50: 0x3c040062  lui         $a0, 0x62
    ctx->pc = 0x30ef50u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)98 << 16));
    // 0x30ef54: 0xc0b66f8  jal         func_2D9BE0
    ctx->pc = 0x30EF54u;
    SET_GPR_U32(ctx, 31, 0x30EF5Cu);
    ctx->pc = 0x30EF58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30EF54u;
    // 0x30ef58: 0x2484a990  addiu       $a0, $a0, -0x5670 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294945168));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D9BE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D9BE0u, 0x30EF54u, 0x30EF5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30EF5Cu;
label_30ef5c:
    // 0x30ef5c: 0x3c040058  lui         $a0, 0x58
    ctx->pc = 0x30ef5cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)88 << 16));
    // 0x30ef60: 0xc0a594c  jal         func_296530
    ctx->pc = 0x30EF60u;
    SET_GPR_U32(ctx, 31, 0x30EF68u);
    ctx->pc = 0x30EF64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30EF60u;
    // 0x30ef64: 0x24846af0  addiu       $a0, $a0, 0x6AF0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 27376));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296530u, 0x30EF60u, 0x30EF68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30EF68u;
label_30ef68:
    // 0x30ef68: 0xc0b0d40  jal         func_2C3500
    ctx->pc = 0x30EF68u;
    SET_GPR_U32(ctx, 31, 0x30EF70u);
    ctx->pc = 0x30EF6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30EF68u;
    // 0x30ef6c: 0x8e442f84  lw          $a0, 0x2F84($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12164)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C3500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C3500u, 0x30EF68u, 0x30EF70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30EF70u;
label_30ef70:
    // 0x30ef70: 0x3c100046  lui         $s0, 0x46
    ctx->pc = 0x30ef70u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)70 << 16));
    // 0x30ef74: 0x26103050  addiu       $s0, $s0, 0x3050
    ctx->pc = 0x30ef74u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 12368));
    // 0x30ef78: 0xc04e3e6  jal         func_138F98
    ctx->pc = 0x30EF78u;
    SET_GPR_U32(ctx, 31, 0x30EF80u);
    ctx->pc = 0x30EF7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30EF78u;
    // 0x30ef7c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x138F98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x138F98u, 0x30EF78u, 0x30EF80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30EF80u;
label_30ef80:
    // 0x30ef80: 0x3c040058  lui         $a0, 0x58
    ctx->pc = 0x30ef80u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)88 << 16));
    // 0x30ef84: 0xc0a4094  jal         func_290250
    ctx->pc = 0x30EF84u;
    SET_GPR_U32(ctx, 31, 0x30EF8Cu);
    ctx->pc = 0x30EF88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30EF84u;
    // 0x30ef88: 0x248464f0  addiu       $a0, $a0, 0x64F0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 25840));
    ctx->in_delay_slot = false;
    ctx->pc = 0x290250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x290250u, 0x30EF84u, 0x30EF8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30EF8Cu;
label_30ef8c:
    // 0x30ef8c: 0x3c040060  lui         $a0, 0x60
    ctx->pc = 0x30ef8cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
    // 0x30ef90: 0xc0b5d58  jal         func_2D7560
    ctx->pc = 0x30EF90u;
    SET_GPR_U32(ctx, 31, 0x30EF98u);
    ctx->pc = 0x30EF94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30EF90u;
    // 0x30ef94: 0x24844700  addiu       $a0, $a0, 0x4700 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 18176));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D7560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D7560u, 0x30EF90u, 0x30EF98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30EF98u;
label_30ef98:
    // 0x30ef98: 0x3c040057  lui         $a0, 0x57
    ctx->pc = 0x30ef98u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
    // 0x30ef9c: 0xc07f7f6  jal         func_1FDFD8
    ctx->pc = 0x30EF9Cu;
    SET_GPR_U32(ctx, 31, 0x30EFA4u);
    ctx->pc = 0x30EFA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30EF9Cu;
    // 0x30efa0: 0x24844380  addiu       $a0, $a0, 0x4380 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17280));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FDFD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FDFD8u, 0x30EF9Cu, 0x30EFA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30EFA4u;
label_30efa4:
    // 0x30efa4: 0xc0c3c24  jal         func_30F090
    ctx->pc = 0x30EFA4u;
    SET_GPR_U32(ctx, 31, 0x30EFACu);
    ctx->pc = 0x30F090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30F090u, 0x30EFA4u, 0x30EFACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30EFACu;
label_30efac:
    // 0x30efac: 0x3c040046  lui         $a0, 0x46
    ctx->pc = 0x30efacu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)70 << 16));
    // 0x30efb0: 0xc04d4bc  jal         func_1352F0
    ctx->pc = 0x30EFB0u;
    SET_GPR_U32(ctx, 31, 0x30EFB8u);
    ctx->pc = 0x30EFB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30EFB0u;
    // 0x30efb4: 0x24842fc0  addiu       $a0, $a0, 0x2FC0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 12224));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1352F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1352F0u, 0x30EFB0u, 0x30EFB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30EFB8u;
label_30efb8:
    // 0x30efb8: 0x3c02003c  lui         $v0, 0x3C
    ctx->pc = 0x30efb8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
    // 0x30efbc: 0xc0afcb4  jal         func_2BF2D0
    ctx->pc = 0x30EFBCu;
    SET_GPR_U32(ctx, 31, 0x30EFC4u);
    ctx->pc = 0x30EFC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30EFBCu;
    // 0x30efc0: 0x8c442648  lw          $a0, 0x2648($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 9800)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BF2D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BF2D0u, 0x30EFBCu, 0x30EFC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30EFC4u;
label_30efc4:
    // 0x30efc4: 0x3c02003c  lui         $v0, 0x3C
    ctx->pc = 0x30efc4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
    // 0x30efc8: 0xc058076  jal         func_1601D8
    ctx->pc = 0x30EFC8u;
    SET_GPR_U32(ctx, 31, 0x30EFD0u);
    ctx->pc = 0x30EFCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30EFC8u;
    // 0x30efcc: 0x8c44d930  lw          $a0, -0x26D0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294957360)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1601D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1601D8u, 0x30EFC8u, 0x30EFD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30EFD0u;
label_30efd0:
    // 0x30efd0: 0xc0c3c8a  jal         func_30F228
    ctx->pc = 0x30EFD0u;
    SET_GPR_U32(ctx, 31, 0x30EFD8u);
    ctx->pc = 0x30F228u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30F228u, 0x30EFD0u, 0x30EFD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30EFD8u;
label_30efd8:
    // 0x30efd8: 0x3c040058  lui         $a0, 0x58
    ctx->pc = 0x30efd8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)88 << 16));
    // 0x30efdc: 0xc07ff84  jal         func_1FFE10
    ctx->pc = 0x30EFDCu;
    SET_GPR_U32(ctx, 31, 0x30EFE4u);
    ctx->pc = 0x30EFE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30EFDCu;
    // 0x30efe0: 0x24843ec0  addiu       $a0, $a0, 0x3EC0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16064));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FFE10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FFE10u, 0x30EFDCu, 0x30EFE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30EFE4u;
label_30efe4:
    // 0x30efe4: 0xc0b0d9e  jal         func_2C3678
    ctx->pc = 0x30EFE4u;
    SET_GPR_U32(ctx, 31, 0x30EFECu);
    ctx->pc = 0x30EFE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30EFE4u;
    // 0x30efe8: 0x8e442f84  lw          $a0, 0x2F84($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12164)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C3678u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C3678u, 0x30EFE4u, 0x30EFECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30EFECu;
label_30efec:
    // 0x30efec: 0xc04e3f2  jal         func_138FC8
    ctx->pc = 0x30EFECu;
    SET_GPR_U32(ctx, 31, 0x30EFF4u);
    ctx->pc = 0x30EFF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30EFECu;
    // 0x30eff0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x138FC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x138FC8u, 0x30EFECu, 0x30EFF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30EFF4u;
label_30eff4:
    // 0x30eff4: 0x3c030074  lui         $v1, 0x74
    ctx->pc = 0x30eff4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)116 << 16));
    // 0x30eff8: 0x3c040002  lui         $a0, 0x2
    ctx->pc = 0x30eff8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)2 << 16));
    // 0x30effc: 0x8c627a78  lw          $v0, 0x7A78($v1)
    ctx->pc = 0x30effcu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x747A78u));
    // 0x30f000: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x30f000u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x30f004: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x30F004u;
    {
        const bool branch_taken_0x30f004 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x30f004) {
            ctx->pc = 0x30F008u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x30F004u;
            // 0x30f008: 0x3c040074  lui         $a0, 0x74 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)116 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x30F01Cu;
            goto label_30f01c;
        }
    }
    ctx->pc = 0x30F00Cu;
    // 0x30f00c: 0x3c040075  lui         $a0, 0x75
    ctx->pc = 0x30f00cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)117 << 16));
    // 0x30f010: 0xc0b151c  jal         func_2C5470
    ctx->pc = 0x30F010u;
    SET_GPR_U32(ctx, 31, 0x30F018u);
    ctx->pc = 0x30F014u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30F010u;
    // 0x30f014: 0x24844c50  addiu       $a0, $a0, 0x4C50 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 19536));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C5470u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C5470u, 0x30F010u, 0x30F018u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30F018u;
label_30f018:
    // 0x30f018: 0x3c040074  lui         $a0, 0x74
    ctx->pc = 0x30f018u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)116 << 16));
label_30f01c:
    // 0x30f01c: 0xc0c1eca  jal         func_307B28
    ctx->pc = 0x30F01Cu;
    SET_GPR_U32(ctx, 31, 0x30F024u);
    ctx->pc = 0x30F020u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30F01Cu;
    // 0x30f020: 0x24847b20  addiu       $a0, $a0, 0x7B20 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 31520));
    ctx->in_delay_slot = false;
    ctx->pc = 0x307B28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x307B28u, 0x30F01Cu, 0x30F024u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30F024u;
label_30f024:
    // 0x30f024: 0x3c02003c  lui         $v0, 0x3C
    ctx->pc = 0x30f024u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
    // 0x30f028: 0xc0abbea  jal         func_2AEFA8
    ctx->pc = 0x30F028u;
    SET_GPR_U32(ctx, 31, 0x30F030u);
    ctx->pc = 0x30F02Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30F028u;
    // 0x30f02c: 0x8c4423a4  lw          $a0, 0x23A4($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 9124)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AEFA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AEFA8u, 0x30F028u, 0x30F030u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30F030u;
label_30f030:
    // 0x30f030: 0x3c02003c  lui         $v0, 0x3C
    ctx->pc = 0x30f030u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
    // 0x30f034: 0xc050396  jal         func_140E58
    ctx->pc = 0x30F034u;
    SET_GPR_U32(ctx, 31, 0x30F03Cu);
    ctx->pc = 0x30F038u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30F034u;
    // 0x30f038: 0x8c44d6e8  lw          $a0, -0x2918($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294956776)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x140E58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x140E58u, 0x30F034u, 0x30F03Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30F03Cu;
label_30f03c:
    // 0x30f03c: 0x3c040058  lui         $a0, 0x58
    ctx->pc = 0x30f03cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)88 << 16));
    // 0x30f040: 0xc07f9d2  jal         func_1FE748
    ctx->pc = 0x30F040u;
    SET_GPR_U32(ctx, 31, 0x30F048u);
    ctx->pc = 0x30F044u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30F040u;
    // 0x30f044: 0x24840d20  addiu       $a0, $a0, 0xD20 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 3360));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FE748u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FE748u, 0x30F040u, 0x30F048u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30F048u;
label_30f048:
    // 0x30f048: 0x3c040058  lui         $a0, 0x58
    ctx->pc = 0x30f048u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)88 << 16));
    // 0x30f04c: 0xc07f9d2  jal         func_1FE748
    ctx->pc = 0x30F04Cu;
    SET_GPR_U32(ctx, 31, 0x30F054u);
    ctx->pc = 0x30F050u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30F04Cu;
    // 0x30f050: 0x248464e0  addiu       $a0, $a0, 0x64E0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 25824));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FE748u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FE748u, 0x30F04Cu, 0x30F054u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30F054u;
label_30f054:
    // 0x30f054: 0x3c040060  lui         $a0, 0x60
    ctx->pc = 0x30f054u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
    // 0x30f058: 0xc0b2946  jal         func_2CA518
    ctx->pc = 0x30F058u;
    SET_GPR_U32(ctx, 31, 0x30F060u);
    ctx->pc = 0x30F05Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30F058u;
    // 0x30f05c: 0x2484ee00  addiu       $a0, $a0, -0x1200 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962688));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CA518u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CA518u, 0x30F058u, 0x30F060u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30F060u;
label_30f060:
    // 0x30f060: 0x8e622d44  lw          $v0, 0x2D44($s3)
    ctx->pc = 0x30f060u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 11588)));
    // 0x30f064: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x30f064u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x30f068: 0x8c630800  lw          $v1, 0x800($v1)
    ctx->pc = 0x30f068u;
    SET_GPR_S32(ctx, 3, (int32_t)runtime->Load32(rdram, ctx, 0x10000800u));
    // 0x30f06c: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x30f06cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x30f070: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x30f070u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x30f074: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x30f074u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x30f078: 0xae622d44  sw          $v0, 0x2D44($s3)
    ctx->pc = 0x30f078u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 11588), GPR_U32(ctx, 2));
    // 0x30f07c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x30f07cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x30f080: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x30f080u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x30f084: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x30f084u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x30f088: 0x3e00008  jr          $ra
    ctx->pc = 0x30F088u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x30F08Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30F088u;
        // 0x30f08c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x30F088u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x30F090u;
}
