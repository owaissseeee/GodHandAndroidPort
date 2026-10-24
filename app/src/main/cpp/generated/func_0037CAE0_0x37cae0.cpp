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

// Function: func_0037CAE0
// Address: 0x37cae0 - 0x37cc78
void func_0037CAE0_0x37cae0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0037CAE0_0x37cae0");
#endif

    switch (ctx->pc) {
        case 0x37cb30u: goto label_37cb30;
        case 0x37cb70u: goto label_37cb70;
        case 0x37cb94u: goto label_37cb94;
        case 0x37cba4u: goto label_37cba4;
        case 0x37cbacu: goto label_37cbac;
        case 0x37cbb4u: goto label_37cbb4;
        case 0x37cbc4u: goto label_37cbc4;
        case 0x37cbccu: goto label_37cbcc;
        case 0x37cbe0u: goto label_37cbe0;
        case 0x37cbe8u: goto label_37cbe8;
        default: break;
    }

    ctx->pc = 0x37cae0u;

    // 0x37cae0: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x37cae0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x37cae4: 0x3c020077  lui         $v0, 0x77
    ctx->pc = 0x37cae4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)119 << 16));
    // 0x37cae8: 0x7fb30060  sq          $s3, 0x60($sp)
    ctx->pc = 0x37cae8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 19));
    // 0x37caec: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x37caecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
    // 0x37caf0: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x37caf0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37caf4: 0x7fb50040  sq          $s5, 0x40($sp)
    ctx->pc = 0x37caf4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 21));
    // 0x37caf8: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x37caf8u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37cafc: 0x7fb60030  sq          $s6, 0x30($sp)
    ctx->pc = 0x37cafcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 22));
    // 0x37cb00: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x37cb00u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37cb04: 0x7fb70020  sq          $s7, 0x20($sp)
    ctx->pc = 0x37cb04u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 23));
    // 0x37cb08: 0xb02d  daddu       $s6, $zero, $zero
    ctx->pc = 0x37cb08u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37cb0c: 0x7fbe0010  sq          $fp, 0x10($sp)
    ctx->pc = 0x37cb0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 30));
    // 0x37cb10: 0x2457a790  addiu       $s7, $v0, -0x5870
    ctx->pc = 0x37cb10u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 2), 4294944656));
    // 0x37cb14: 0x7fb00090  sq          $s0, 0x90($sp)
    ctx->pc = 0x37cb14u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 16));
    // 0x37cb18: 0x3c1e0077  lui         $fp, 0x77
    ctx->pc = 0x37cb18u;
    SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)119 << 16));
    // 0x37cb1c: 0x7fb10080  sq          $s1, 0x80($sp)
    ctx->pc = 0x37cb1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 17));
    // 0x37cb20: 0x7fb20070  sq          $s2, 0x70($sp)
    ctx->pc = 0x37cb20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 18));
    // 0x37cb24: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x37cb24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x37cb28: 0x24020050  addiu       $v0, $zero, 0x50
    ctx->pc = 0x37cb28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
    // 0x37cb2c: 0x0  nop
    ctx->pc = 0x37cb2cu;
    // NOP
label_37cb30:
    // 0x37cb30: 0x27c4cf20  addiu       $a0, $fp, -0x30E0
    ctx->pc = 0x37cb30u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 30), 4294954784));
    // 0x37cb34: 0x2821018  mult        $v0, $s4, $v0
    ctx->pc = 0x37cb34u;
    { int64_t result = (int64_t)GPR_S32(ctx, 20) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x37cb38: 0x448021  addu        $s0, $v0, $a0
    ctx->pc = 0x37cb38u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x37cb3c: 0x96030000  lhu         $v1, 0x0($s0)
    ctx->pc = 0x37cb3cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x37cb40: 0x50600037  beql        $v1, $zero, . + 4 + (0x37 << 2)
    ctx->pc = 0x37CB40u;
    {
        const bool branch_taken_0x37cb40 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x37cb40) {
            ctx->pc = 0x37CB44u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x37CB40u;
            // 0x37cb44: 0x26940001  addiu       $s4, $s4, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x37CC20u;
            goto label_37cc20;
        }
    }
    ctx->pc = 0x37CB48u;
    // 0x37cb48: 0x92020005  lbu         $v0, 0x5($s0)
    ctx->pc = 0x37cb48u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 5)));
    // 0x37cb4c: 0x30420008  andi        $v0, $v0, 0x8
    ctx->pc = 0x37cb4cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8);
    // 0x37cb50: 0x10400021  beqz        $v0, . + 4 + (0x21 << 2)
    ctx->pc = 0x37CB50u;
    {
        const bool branch_taken_0x37cb50 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x37CB54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37CB50u;
        // 0x37cb54: 0x24120084  addiu       $s2, $zero, 0x84 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 132));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37cb50) {
            ctx->pc = 0x37CBD8u;
            goto label_37cbd8;
        }
    }
    ctx->pc = 0x37CB58u;
    // 0x37cb58: 0x86040002  lh          $a0, 0x2($s0)
    ctx->pc = 0x37cb58u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 2)));
    // 0x37cb5c: 0x3c020077  lui         $v0, 0x77
    ctx->pc = 0x37cb5cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)119 << 16));
    // 0x37cb60: 0x922018  mult        $a0, $a0, $s2
    ctx->pc = 0x37cb60u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 18); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x37cb64: 0x2451a600  addiu       $s1, $v0, -0x5A00
    ctx->pc = 0x37cb64u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 4294944256));
    // 0x37cb68: 0xc0dcddc  jal         func_373770
    ctx->pc = 0x37CB68u;
    SET_GPR_U32(ctx, 31, 0x37CB70u);
    ctx->pc = 0x37CB6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37CB68u;
    // 0x37cb6c: 0x912021  addu        $a0, $a0, $s1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 17)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x373770u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x373770u, 0x37CB68u, 0x37CB70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37CB70u;
label_37cb70:
    // 0x37cb70: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x37cb70u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37cb74: 0x1060000b  beqz        $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x37CB74u;
    {
        const bool branch_taken_0x37cb74 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x37CB78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37CB74u;
        // 0x37cb78: 0x24020006  addiu       $v0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37cb74) {
            ctx->pc = 0x37CBA4u;
            goto label_37cba4;
        }
    }
    ctx->pc = 0x37CB7Cu;
    // 0x37cb7c: 0x1462000f  bne         $v1, $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x37CB7Cu;
    {
        const bool branch_taken_0x37cb7c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x37cb7c) {
            ctx->pc = 0x37CBBCu;
            goto label_37cbbc;
        }
    }
    ctx->pc = 0x37CB84u;
    // 0x37cb84: 0x86040002  lh          $a0, 0x2($s0)
    ctx->pc = 0x37cb84u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 2)));
    // 0x37cb88: 0x921018  mult        $v0, $a0, $s2
    ctx->pc = 0x37cb88u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 18); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x37cb8c: 0xc0dcd0c  jal         func_373430
    ctx->pc = 0x37CB8Cu;
    SET_GPR_U32(ctx, 31, 0x37CB94u);
    ctx->pc = 0x37CB90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37CB8Cu;
    // 0x37cb90: 0x512021  addu        $a0, $v0, $s1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x373430u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x373430u, 0x37CB8Cu, 0x37CB94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37CB94u;
label_37cb94:
    // 0x37cb94: 0x86040002  lh          $a0, 0x2($s0)
    ctx->pc = 0x37cb94u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 2)));
    // 0x37cb98: 0x921018  mult        $v0, $a0, $s2
    ctx->pc = 0x37cb98u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 18); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x37cb9c: 0xc0dccf2  jal         func_3733C8
    ctx->pc = 0x37CB9Cu;
    SET_GPR_U32(ctx, 31, 0x37CBA4u);
    ctx->pc = 0x37CBA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37CB9Cu;
    // 0x37cba0: 0x512021  addu        $a0, $v0, $s1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3733C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3733C8u, 0x37CB9Cu, 0x37CBA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37CBA4u;
label_37cba4:
    // 0x37cba4: 0xc0df452  jal         func_37D148
    ctx->pc = 0x37CBA4u;
    SET_GPR_U32(ctx, 31, 0x37CBACu);
    ctx->pc = 0x37CBA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37CBA4u;
    // 0x37cba8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x37D148u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x37D148u, 0x37CBA4u, 0x37CBACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37CBACu;
label_37cbac:
    // 0x37cbac: 0xc0df4ec  jal         func_37D3B0
    ctx->pc = 0x37CBACu;
    SET_GPR_U32(ctx, 31, 0x37CBB4u);
    ctx->pc = 0x37CBB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37CBACu;
    // 0x37cbb0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x37D3B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x37D3B0u, 0x37CBACu, 0x37CBB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37CBB4u;
label_37cbb4:
    // 0x37cbb4: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x37CBB4u;
    {
        const bool branch_taken_0x37cbb4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x37CBB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37CBB4u;
        // 0x37cbb8: 0x26940001  addiu       $s4, $s4, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37cbb4) {
            ctx->pc = 0x37CC20u;
            goto label_37cc20;
        }
    }
    ctx->pc = 0x37CBBCu;
label_37cbbc:
    // 0x37cbbc: 0xc0df31e  jal         func_37CC78
    ctx->pc = 0x37CBBCu;
    SET_GPR_U32(ctx, 31, 0x37CBC4u);
    ctx->pc = 0x37CBC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37CBBCu;
    // 0x37cbc0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x37CC78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x37CC78u, 0x37CBBCu, 0x37CBC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37CBC4u;
label_37cbc4:
    // 0x37cbc4: 0xc0df338  jal         func_37CCE0
    ctx->pc = 0x37CBC4u;
    SET_GPR_U32(ctx, 31, 0x37CBCCu);
    ctx->pc = 0x37CBC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37CBC4u;
    // 0x37cbc8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x37CCE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x37CCE0u, 0x37CBC4u, 0x37CBCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37CBCCu;
label_37cbcc:
    // 0x37cbcc: 0x26620001  addiu       $v0, $s3, 0x1
    ctx->pc = 0x37cbccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x37cbd0: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x37CBD0u;
    {
        const bool branch_taken_0x37cbd0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x37CBD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37CBD0u;
        // 0x37cbd4: 0x305300ff  andi        $s3, $v0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 19, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x37cbd0) {
            ctx->pc = 0x37CC1Cu;
            goto label_37cc1c;
        }
    }
    ctx->pc = 0x37CBD8u;
label_37cbd8:
    // 0x37cbd8: 0xc0df31e  jal         func_37CC78
    ctx->pc = 0x37CBD8u;
    SET_GPR_U32(ctx, 31, 0x37CBE0u);
    ctx->pc = 0x37CBDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37CBD8u;
    // 0x37cbdc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x37CC78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x37CC78u, 0x37CBD8u, 0x37CBE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37CBE0u;
label_37cbe0:
    // 0x37cbe0: 0xc0df338  jal         func_37CCE0
    ctx->pc = 0x37CBE0u;
    SET_GPR_U32(ctx, 31, 0x37CBE8u);
    ctx->pc = 0x37CBE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37CBE0u;
    // 0x37cbe4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x37CCE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x37CCE0u, 0x37CBE0u, 0x37CBE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37CBE8u;
label_37cbe8:
    // 0x37cbe8: 0x92040005  lbu         $a0, 0x5($s0)
    ctx->pc = 0x37cbe8u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 5)));
    // 0x37cbec: 0x30820001  andi        $v0, $a0, 0x1
    ctx->pc = 0x37cbecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
    // 0x37cbf0: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x37CBF0u;
    {
        const bool branch_taken_0x37cbf0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x37CBF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37CBF0u;
        // 0x37cbf4: 0x26620001  addiu       $v0, $s3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37cbf0) {
            ctx->pc = 0x37CBFCu;
            goto label_37cbfc;
        }
    }
    ctx->pc = 0x37CBF8u;
    // 0x37cbf8: 0x305300ff  andi        $s3, $v0, 0xFF
    ctx->pc = 0x37cbf8u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_37cbfc:
    // 0x37cbfc: 0x30820002  andi        $v0, $a0, 0x2
    ctx->pc = 0x37cbfcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)2);
    // 0x37cc00: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x37CC00u;
    {
        const bool branch_taken_0x37cc00 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x37CC04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37CC00u;
        // 0x37cc04: 0x26a20001  addiu       $v0, $s5, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37cc00) {
            ctx->pc = 0x37CC0Cu;
            goto label_37cc0c;
        }
    }
    ctx->pc = 0x37CC08u;
    // 0x37cc08: 0x305500ff  andi        $s5, $v0, 0xFF
    ctx->pc = 0x37cc08u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_37cc0c:
    // 0x37cc0c: 0x30820004  andi        $v0, $a0, 0x4
    ctx->pc = 0x37cc0cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)4);
    // 0x37cc10: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x37CC10u;
    {
        const bool branch_taken_0x37cc10 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x37CC14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37CC10u;
        // 0x37cc14: 0x26c20001  addiu       $v0, $s6, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37cc10) {
            ctx->pc = 0x37CC1Cu;
            goto label_37cc1c;
        }
    }
    ctx->pc = 0x37CC18u;
    // 0x37cc18: 0x305600ff  andi        $s6, $v0, 0xFF
    ctx->pc = 0x37cc18u;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_37cc1c:
    // 0x37cc1c: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x37cc1cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
label_37cc20:
    // 0x37cc20: 0x2a820033  slti        $v0, $s4, 0x33
    ctx->pc = 0x37cc20u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)(int32_t)51) ? 1 : 0);
    // 0x37cc24: 0x1440ffc2  bnez        $v0, . + 4 + (-0x3E << 2)
    ctx->pc = 0x37CC24u;
    {
        const bool branch_taken_0x37cc24 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x37CC28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37CC24u;
        // 0x37cc28: 0x24020050  addiu       $v0, $zero, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37cc24) {
            ctx->pc = 0x37CB30u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_37cb30;
        }
    }
    ctx->pc = 0x37CC2Cu;
    // 0x37cc2c: 0x2751021  addu        $v0, $s3, $s5
    ctx->pc = 0x37cc2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 21)));
    // 0x37cc30: 0xa2f30024  sb          $s3, 0x24($s7)
    ctx->pc = 0x37cc30u;
    WRITE8(ADD32(GPR_U32(ctx, 23), 36), (uint8_t)GPR_U32(ctx, 19));
    // 0x37cc34: 0x2c21021  addu        $v0, $s6, $v0
    ctx->pc = 0x37cc34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 2)));
    // 0x37cc38: 0xa2f50025  sb          $s5, 0x25($s7)
    ctx->pc = 0x37cc38u;
    WRITE8(ADD32(GPR_U32(ctx, 23), 37), (uint8_t)GPR_U32(ctx, 21));
    // 0x37cc3c: 0xa2f60026  sb          $s6, 0x26($s7)
    ctx->pc = 0x37cc3cu;
    WRITE8(ADD32(GPR_U32(ctx, 23), 38), (uint8_t)GPR_U32(ctx, 22));
    // 0x37cc40: 0xa2e20027  sb          $v0, 0x27($s7)
    ctx->pc = 0x37cc40u;
    WRITE8(ADD32(GPR_U32(ctx, 23), 39), (uint8_t)GPR_U32(ctx, 2));
    // 0x37cc44: 0x7bb00090  lq          $s0, 0x90($sp)
    ctx->pc = 0x37cc44u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x37cc48: 0x7bb10080  lq          $s1, 0x80($sp)
    ctx->pc = 0x37cc48u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x37cc4c: 0x7bb20070  lq          $s2, 0x70($sp)
    ctx->pc = 0x37cc4cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x37cc50: 0x7bb30060  lq          $s3, 0x60($sp)
    ctx->pc = 0x37cc50u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x37cc54: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x37cc54u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x37cc58: 0x7bb50040  lq          $s5, 0x40($sp)
    ctx->pc = 0x37cc58u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x37cc5c: 0x7bb60030  lq          $s6, 0x30($sp)
    ctx->pc = 0x37cc5cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x37cc60: 0x7bb70020  lq          $s7, 0x20($sp)
    ctx->pc = 0x37cc60u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x37cc64: 0x7bbe0010  lq          $fp, 0x10($sp)
    ctx->pc = 0x37cc64u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x37cc68: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x37cc68u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x37cc6c: 0x3e00008  jr          $ra
    ctx->pc = 0x37CC6Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x37CC70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37CC6Cu;
        // 0x37cc70: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x37CC6Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x37CC74u;
    // 0x37cc74: 0x0  nop
    ctx->pc = 0x37cc74u;
    // NOP
    ctx->pc = 0x37cc78u;
}
