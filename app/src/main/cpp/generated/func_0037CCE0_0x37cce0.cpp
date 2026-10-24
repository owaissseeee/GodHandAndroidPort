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

// Function: func_0037CCE0
// Address: 0x37cce0 - 0x37ce20
void func_0037CCE0_0x37cce0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0037CCE0_0x37cce0");
#endif

    switch (ctx->pc) {
        case 0x37cd1cu: goto label_37cd1c;
        case 0x37cd50u: goto label_37cd50;
        case 0x37cd7cu: goto label_37cd7c;
        case 0x37cd94u: goto label_37cd94;
        case 0x37cd9cu: goto label_37cd9c;
        case 0x37cdb8u: goto label_37cdb8;
        case 0x37cdd0u: goto label_37cdd0;
        case 0x37cde8u: goto label_37cde8;
        case 0x37ce00u: goto label_37ce00;
        default: break;
    }

    ctx->pc = 0x37cce0u;

    // 0x37cce0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x37cce0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x37cce4: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x37cce4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x37cce8: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x37cce8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x37ccec: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x37ccecu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37ccf0: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x37ccf0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x37ccf4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x37ccf4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x37ccf8: 0x92420005  lbu         $v0, 0x5($s2)
    ctx->pc = 0x37ccf8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 5)));
    // 0x37ccfc: 0x30420008  andi        $v0, $v0, 0x8
    ctx->pc = 0x37ccfcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8);
    // 0x37cd00: 0x10400028  beqz        $v0, . + 4 + (0x28 << 2)
    ctx->pc = 0x37CD00u;
    {
        const bool branch_taken_0x37cd00 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x37CD04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37CD00u;
        // 0x37cd04: 0x96420006  lhu         $v0, 0x6($s2) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 6)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37cd00) {
            ctx->pc = 0x37CDA4u;
            goto label_37cda4;
        }
    }
    ctx->pc = 0x37CD08u;
    // 0x37cd08: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x37cd08u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x37cd0c: 0x5040001c  beql        $v0, $zero, . + 4 + (0x1C << 2)
    ctx->pc = 0x37CD0Cu;
    {
        const bool branch_taken_0x37cd0c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x37cd0c) {
            ctx->pc = 0x37CD10u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x37CD0Cu;
            // 0x37cd10: 0x96420006  lhu         $v0, 0x6($s2) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 6)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x37CD80u;
            goto label_37cd80;
        }
    }
    ctx->pc = 0x37CD14u;
    // 0x37cd14: 0xc0df4f2  jal         func_37D3C8
    ctx->pc = 0x37CD14u;
    SET_GPR_U32(ctx, 31, 0x37CD1Cu);
    ctx->pc = 0x37CD18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37CD14u;
    // 0x37cd18: 0x24110084  addiu       $s1, $zero, 0x84 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 132));
    ctx->in_delay_slot = false;
    ctx->pc = 0x37D3C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x37D3C8u, 0x37CD14u, 0x37CD1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37CD1Cu;
label_37cd1c:
    // 0x37cd1c: 0x86440002  lh          $a0, 0x2($s2)
    ctx->pc = 0x37cd1cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 2)));
    // 0x37cd20: 0x3c100077  lui         $s0, 0x77
    ctx->pc = 0x37cd20u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)119 << 16));
    // 0x37cd24: 0x9642003e  lhu         $v0, 0x3E($s2)
    ctx->pc = 0x37cd24u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 62)));
    // 0x37cd28: 0x2610a600  addiu       $s0, $s0, -0x5A00
    ctx->pc = 0x37cd28u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294944256));
    // 0x37cd2c: 0x912018  mult        $a0, $a0, $s1
    ctx->pc = 0x37cd2cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 17); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x37cd30: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x37cd30u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x37cd34: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x37cd34u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x37cd38: 0x21603  sra         $v0, $v0, 24
    ctx->pc = 0x37cd38u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 24));
    // 0x37cd3c: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x37cd3cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x37cd40: 0x0  nop
    ctx->pc = 0x37cd40u;
    // NOP
    // 0x37cd44: 0x46806320  cvt.s.w     $f12, $f12
    ctx->pc = 0x37cd44u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[12], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x37cd48: 0xc0dce28  jal         func_3738A0
    ctx->pc = 0x37CD48u;
    SET_GPR_U32(ctx, 31, 0x37CD50u);
    ctx->pc = 0x37CD4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37CD48u;
    // 0x37cd4c: 0x902021  addu        $a0, $a0, $s0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3738A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3738A0u, 0x37CD48u, 0x37CD50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37CD50u;
label_37cd50:
    // 0x37cd50: 0x86440002  lh          $a0, 0x2($s2)
    ctx->pc = 0x37cd50u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 2)));
    // 0x37cd54: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x37cd54u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x37cd58: 0x9642003e  lhu         $v0, 0x3E($s2)
    ctx->pc = 0x37cd58u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 62)));
    // 0x37cd5c: 0x911818  mult        $v1, $a0, $s1
    ctx->pc = 0x37cd5cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 17); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x37cd60: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x37cd60u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x37cd64: 0x21603  sra         $v0, $v0, 24
    ctx->pc = 0x37cd64u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 24));
    // 0x37cd68: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x37cd68u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x37cd6c: 0x0  nop
    ctx->pc = 0x37cd6cu;
    // NOP
    // 0x37cd70: 0x46806320  cvt.s.w     $f12, $f12
    ctx->pc = 0x37cd70u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[12], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x37cd74: 0xc0dcd58  jal         func_373560
    ctx->pc = 0x37CD74u;
    SET_GPR_U32(ctx, 31, 0x37CD7Cu);
    ctx->pc = 0x37CD78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37CD74u;
    // 0x37cd78: 0x702021  addu        $a0, $v1, $s0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x373560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x373560u, 0x37CD74u, 0x37CD7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37CD7Cu;
label_37cd7c:
    // 0x37cd7c: 0x96420006  lhu         $v0, 0x6($s2)
    ctx->pc = 0x37cd7cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 6)));
label_37cd80:
    // 0x37cd80: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x37cd80u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x37cd84: 0x5040001f  beql        $v0, $zero, . + 4 + (0x1F << 2)
    ctx->pc = 0x37CD84u;
    {
        const bool branch_taken_0x37cd84 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x37cd84) {
            ctx->pc = 0x37CD88u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x37CD84u;
            // 0x37cd88: 0xa6400006  sh          $zero, 0x6($s2) (Delay Slot)
            WRITE16(ADD32(GPR_U32(ctx, 18), 6), (uint16_t)GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x37CE04u;
            goto label_37ce04;
        }
    }
    ctx->pc = 0x37CD8Cu;
    // 0x37cd8c: 0xc0df5a0  jal         func_37D680
    ctx->pc = 0x37CD8Cu;
    SET_GPR_U32(ctx, 31, 0x37CD94u);
    ctx->pc = 0x37CD90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37CD8Cu;
    // 0x37cd90: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x37D680u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x37D680u, 0x37CD8Cu, 0x37CD94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37CD94u;
label_37cd94:
    // 0x37cd94: 0xc0df1c8  jal         func_37C720
    ctx->pc = 0x37CD94u;
    SET_GPR_U32(ctx, 31, 0x37CD9Cu);
    ctx->pc = 0x37CD98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37CD94u;
    // 0x37cd98: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x37C720u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x37C720u, 0x37CD94u, 0x37CD9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37CD9Cu;
label_37cd9c:
    // 0x37cd9c: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x37CD9Cu;
    {
        const bool branch_taken_0x37cd9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x37CDA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37CD9Cu;
        // 0x37cda0: 0xa6400006  sh          $zero, 0x6($s2) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 18), 6), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37cd9c) {
            ctx->pc = 0x37CE04u;
            goto label_37ce04;
        }
    }
    ctx->pc = 0x37CDA4u;
label_37cda4:
    // 0x37cda4: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x37cda4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x37cda8: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x37CDA8u;
    {
        const bool branch_taken_0x37cda8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x37cda8) {
            ctx->pc = 0x37CDACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x37CDA8u;
            // 0x37cdac: 0x96420006  lhu         $v0, 0x6($s2) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 6)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x37CDBCu;
            goto label_37cdbc;
        }
    }
    ctx->pc = 0x37CDB0u;
    // 0x37cdb0: 0xc0df4f2  jal         func_37D3C8
    ctx->pc = 0x37CDB0u;
    SET_GPR_U32(ctx, 31, 0x37CDB8u);
    ctx->pc = 0x37CDB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37CDB0u;
    // 0x37cdb4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x37D3C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x37D3C8u, 0x37CDB0u, 0x37CDB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37CDB8u;
label_37cdb8:
    // 0x37cdb8: 0x96420006  lhu         $v0, 0x6($s2)
    ctx->pc = 0x37cdb8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 6)));
label_37cdbc:
    // 0x37cdbc: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x37cdbcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x37cdc0: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x37CDC0u;
    {
        const bool branch_taken_0x37cdc0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x37cdc0) {
            ctx->pc = 0x37CDC4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x37CDC0u;
            // 0x37cdc4: 0x96420006  lhu         $v0, 0x6($s2) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 6)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x37CDD4u;
            goto label_37cdd4;
        }
    }
    ctx->pc = 0x37CDC8u;
    // 0x37cdc8: 0xc0df5a0  jal         func_37D680
    ctx->pc = 0x37CDC8u;
    SET_GPR_U32(ctx, 31, 0x37CDD0u);
    ctx->pc = 0x37CDCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37CDC8u;
    // 0x37cdcc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x37D680u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x37D680u, 0x37CDC8u, 0x37CDD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37CDD0u;
label_37cdd0:
    // 0x37cdd0: 0x96420006  lhu         $v0, 0x6($s2)
    ctx->pc = 0x37cdd0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 6)));
label_37cdd4:
    // 0x37cdd4: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x37cdd4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
    // 0x37cdd8: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x37CDD8u;
    {
        const bool branch_taken_0x37cdd8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x37cdd8) {
            ctx->pc = 0x37CDDCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x37CDD8u;
            // 0x37cddc: 0x96420006  lhu         $v0, 0x6($s2) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 6)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x37CDECu;
            goto label_37cdec;
        }
    }
    ctx->pc = 0x37CDE0u;
    // 0x37cde0: 0xc0df5ca  jal         func_37D728
    ctx->pc = 0x37CDE0u;
    SET_GPR_U32(ctx, 31, 0x37CDE8u);
    ctx->pc = 0x37CDE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37CDE0u;
    // 0x37cde4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x37D728u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x37D728u, 0x37CDE0u, 0x37CDE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37CDE8u;
label_37cde8:
    // 0x37cde8: 0x96420006  lhu         $v0, 0x6($s2)
    ctx->pc = 0x37cde8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 6)));
label_37cdec:
    // 0x37cdec: 0x30420008  andi        $v0, $v0, 0x8
    ctx->pc = 0x37cdecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8);
    // 0x37cdf0: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x37CDF0u;
    {
        const bool branch_taken_0x37cdf0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x37cdf0) {
            ctx->pc = 0x37CDF4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x37CDF0u;
            // 0x37cdf4: 0xa6400006  sh          $zero, 0x6($s2) (Delay Slot)
            WRITE16(ADD32(GPR_U32(ctx, 18), 6), (uint16_t)GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x37CE04u;
            goto label_37ce04;
        }
    }
    ctx->pc = 0x37CDF8u;
    // 0x37cdf8: 0xc0df556  jal         func_37D558
    ctx->pc = 0x37CDF8u;
    SET_GPR_U32(ctx, 31, 0x37CE00u);
    ctx->pc = 0x37CDFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37CDF8u;
    // 0x37cdfc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x37D558u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x37D558u, 0x37CDF8u, 0x37CE00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37CE00u;
label_37ce00:
    // 0x37ce00: 0xa6400006  sh          $zero, 0x6($s2)
    ctx->pc = 0x37ce00u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 6), (uint16_t)GPR_U32(ctx, 0));
label_37ce04:
    // 0x37ce04: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x37ce04u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x37ce08: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x37ce08u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x37ce0c: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x37ce0cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x37ce10: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x37ce10u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x37ce14: 0x3e00008  jr          $ra
    ctx->pc = 0x37CE14u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x37CE18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37CE14u;
        // 0x37ce18: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x37CE14u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x37CE1Cu;
    // 0x37ce1c: 0x0  nop
    ctx->pc = 0x37ce1cu;
    // NOP
    ctx->pc = 0x37ce20u;
}
