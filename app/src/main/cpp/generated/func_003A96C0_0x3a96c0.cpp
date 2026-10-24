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

// Function: func_003A96C0
// Address: 0x3a96c0 - 0x3a9c80
void func_003A96C0_0x3a96c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_003A96C0_0x3a96c0");
#endif

    switch (ctx->pc) {
        case 0x3a97a4u: goto label_3a97a4;
        case 0x3a97e0u: goto label_3a97e0;
        case 0x3a97fcu: goto label_3a97fc;
        case 0x3a980cu: goto label_3a980c;
        case 0x3a981cu: goto label_3a981c;
        case 0x3a9828u: goto label_3a9828;
        case 0x3a9840u: goto label_3a9840;
        case 0x3a9848u: goto label_3a9848;
        case 0x3a9860u: goto label_3a9860;
        case 0x3a9870u: goto label_3a9870;
        case 0x3a9894u: goto label_3a9894;
        case 0x3a98a8u: goto label_3a98a8;
        case 0x3a98c8u: goto label_3a98c8;
        case 0x3a9910u: goto label_3a9910;
        case 0x3a9918u: goto label_3a9918;
        case 0x3a9928u: goto label_3a9928;
        case 0x3a993cu: goto label_3a993c;
        case 0x3a9960u: goto label_3a9960;
        case 0x3a9990u: goto label_3a9990;
        case 0x3a99e8u: goto label_3a99e8;
        case 0x3a99f4u: goto label_3a99f4;
        case 0x3a9a00u: goto label_3a9a00;
        case 0x3a9a0cu: goto label_3a9a0c;
        case 0x3a9a18u: goto label_3a9a18;
        case 0x3a9a28u: goto label_3a9a28;
        case 0x3a9a40u: goto label_3a9a40;
        case 0x3a9a58u: goto label_3a9a58;
        case 0x3a9a64u: goto label_3a9a64;
        case 0x3a9a8cu: goto label_3a9a8c;
        case 0x3a9ab8u: goto label_3a9ab8;
        case 0x3a9adcu: goto label_3a9adc;
        case 0x3a9b28u: goto label_3a9b28;
        case 0x3a9b78u: goto label_3a9b78;
        case 0x3a9c38u: goto label_3a9c38;
        default: break;
    }

    ctx->pc = 0x3a96c0u;

    // 0x3a96c0: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x3a96c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x3a96c4: 0x63600  sll         $a2, $a2, 24
    ctx->pc = 0x3a96c4u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 24));
    // 0x3a96c8: 0x7fb000a0  sq          $s0, 0xA0($sp)
    ctx->pc = 0x3a96c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 16));
    // 0x3a96cc: 0x63603  sra         $a2, $a2, 24
    ctx->pc = 0x3a96ccu;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 6), 24));
    // 0x3a96d0: 0x7fb20080  sq          $s2, 0x80($sp)
    ctx->pc = 0x3a96d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 18));
    // 0x3a96d4: 0xafa50000  sw          $a1, 0x0($sp)
    ctx->pc = 0x3a96d4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 5));
    // 0x3a96d8: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x3a96d8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a96dc: 0xafa70008  sw          $a3, 0x8($sp)
    ctx->pc = 0x3a96dcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 7));
    // 0x3a96e0: 0x7fb10090  sq          $s1, 0x90($sp)
    ctx->pc = 0x3a96e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 17));
    // 0x3a96e4: 0x7fb30070  sq          $s3, 0x70($sp)
    ctx->pc = 0x3a96e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 19));
    // 0x3a96e8: 0x7fb40060  sq          $s4, 0x60($sp)
    ctx->pc = 0x3a96e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 20));
    // 0x3a96ec: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x3a96ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x3a96f0: 0x7fb60040  sq          $s6, 0x40($sp)
    ctx->pc = 0x3a96f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 22));
    // 0x3a96f4: 0x7fb70030  sq          $s7, 0x30($sp)
    ctx->pc = 0x3a96f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 23));
    // 0x3a96f8: 0x7fbe0020  sq          $fp, 0x20($sp)
    ctx->pc = 0x3a96f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 30));
    // 0x3a96fc: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3a96fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x3a9700: 0xafa60004  sw          $a2, 0x4($sp)
    ctx->pc = 0x3a9700u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 6));
    // 0x3a9704: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x3a9704u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a9708: 0x2303c  dsll32      $a2, $v0, 0
    ctx->pc = 0x3a9708u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) << (32 + 0));
    // 0x3a970c: 0x6303f  dsra32      $a2, $a2, 0
    ctx->pc = 0x3a970cu;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 0));
    // 0x3a9710: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x3a9710u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x3a9714: 0x3c03000f  lui         $v1, 0xF
    ctx->pc = 0x3a9714u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15 << 16));
    // 0x3a9718: 0x22502  srl         $a0, $v0, 20
    ctx->pc = 0x3a9718u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 2), 20));
    // 0x3a971c: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x3a971cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x3a9720: 0x30850800  andi        $a1, $a0, 0x800
    ctx->pc = 0x3a9720u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)2048);
    // 0x3a9724: 0x431824  and         $v1, $v0, $v1
    ctx->pc = 0x3a9724u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x3a9728: 0x308407ff  andi        $a0, $a0, 0x7FF
    ctx->pc = 0x3a9728u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)2047);
    // 0x3a972c: 0x240207ff  addiu       $v0, $zero, 0x7FF
    ctx->pc = 0x3a972cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2047));
    // 0x3a9730: 0x14820017  bne         $a0, $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x3A9730u;
    {
        const bool branch_taken_0x3a9730 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x3A9734u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A9730u;
        // 0x3a9734: 0x100802d  daddu       $s0, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a9730) {
            ctx->pc = 0x3A9790u;
            goto label_3a9790;
        }
    }
    ctx->pc = 0x3A9738u;
    // 0x3a9738: 0x14600011  bnez        $v1, . + 4 + (0x11 << 2)
    ctx->pc = 0x3A9738u;
    {
        const bool branch_taken_0x3a9738 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3A973Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A9738u;
        // 0x3a973c: 0x3c020046  lui         $v0, 0x46 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a9738) {
            ctx->pc = 0x3A9780u;
            goto label_3a9780;
        }
    }
    ctx->pc = 0x3A9740u;
    // 0x3a9740: 0x14c00010  bnez        $a2, . + 4 + (0x10 << 2)
    ctx->pc = 0x3A9740u;
    {
        const bool branch_taken_0x3a9740 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x3A9744u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A9740u;
        // 0x3a9744: 0x3c030078  lui         $v1, 0x78 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)120 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a9740) {
            ctx->pc = 0x3A9784u;
            goto label_3a9784;
        }
    }
    ctx->pc = 0x3A9748u;
    // 0x3a9748: 0x10a00009  beqz        $a1, . + 4 + (0x9 << 2)
    ctx->pc = 0x3A9748u;
    {
        const bool branch_taken_0x3a9748 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A974Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A9748u;
        // 0x3a974c: 0x3c030046  lui         $v1, 0x46 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)70 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a9748) {
            ctx->pc = 0x3A9770u;
            goto label_3a9770;
        }
    }
    ctx->pc = 0x3A9750u;
    // 0x3a9750: 0x3c020078  lui         $v0, 0x78
    ctx->pc = 0x3a9750u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)120 << 16));
    // 0x3a9754: 0x8c65f6f0  lw          $a1, -0x910($v1)
    ctx->pc = 0x3a9754u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294964976)));
    // 0x3a9758: 0x2464f6f0  addiu       $a0, $v1, -0x910
    ctx->pc = 0x3a9758u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294964976));
    // 0x3a975c: 0x90860004  lbu         $a2, 0x4($a0)
    ctx->pc = 0x3a975cu;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x3a9760: 0x2443d9e0  addiu       $v1, $v0, -0x2620
    ctx->pc = 0x3a9760u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294957536));
    // 0x3a9764: 0xac45d9e0  sw          $a1, -0x2620($v0)
    ctx->pc = 0x3a9764u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 5)); ps2TraceGuestWrite(rdram, 0x77D9E0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x77D9E0u, _value); } while (0);
    // 0x3a9768: 0x10000136  b           . + 4 + (0x136 << 2)
    ctx->pc = 0x3A9768u;
    {
        const bool branch_taken_0x3a9768 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A976Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A9768u;
        // 0x3a976c: 0xa0660004  sb          $a2, 0x4($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 4), (uint8_t)GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a9768) {
            ctx->pc = 0x3A9C44u;
            goto label_3a9c44;
        }
    }
    ctx->pc = 0x3A9770u;
label_3a9770:
    // 0x3a9770: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x3a9770u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
    // 0x3a9774: 0x3c030078  lui         $v1, 0x78
    ctx->pc = 0x3a9774u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)120 << 16));
    // 0x3a9778: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x3A9778u;
    {
        const bool branch_taken_0x3a9778 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A977Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A9778u;
        // 0x3a977c: 0x8c44f6f8  lw          $a0, -0x908($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294964984)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a9778) {
            ctx->pc = 0x3A9788u;
            goto label_3a9788;
        }
    }
    ctx->pc = 0x3A9780u;
label_3a9780:
    // 0x3a9780: 0x3c030078  lui         $v1, 0x78
    ctx->pc = 0x3a9780u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)120 << 16));
label_3a9784:
    // 0x3a9784: 0x8c44f700  lw          $a0, -0x900($v0)
    ctx->pc = 0x3a9784u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294964992)));
label_3a9788:
    // 0x3a9788: 0x1000012e  b           . + 4 + (0x12E << 2)
    ctx->pc = 0x3A9788u;
    {
        const bool branch_taken_0x3a9788 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A978Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A9788u;
        // 0x3a978c: 0xac64d9e0  sw          $a0, -0x2620($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294957536), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a9788) {
            ctx->pc = 0x3A9C44u;
            goto label_3a9c44;
        }
    }
    ctx->pc = 0x3A9790u;
label_3a9790:
    // 0x3a9790: 0x8fb50000  lw          $s5, 0x0($sp)
    ctx->pc = 0x3a9790u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3a9794: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x3a9794u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a9798: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3a9798u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a979c: 0xc0c7a1c  jal         func_31E870
    ctx->pc = 0x3A979Cu;
    SET_GPR_U32(ctx, 31, 0x3A97A4u);
    ctx->pc = 0x3A97A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A979Cu;
    // 0x3a97a0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31E870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31E870u, 0x3A979Cu, 0x3A97A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A97A4u;
label_3a97a4:
    // 0x3a97a4: 0x4410010  bgez        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x3A97A4u;
    {
        const bool branch_taken_0x3a97a4 = (GPR_S64(ctx, 2) >= 0);
        ctx->pc = 0x3A97A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A97A4u;
        // 0x3a97a8: 0x3c020078  lui         $v0, 0x78 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)120 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a97a4) {
            ctx->pc = 0x3A97E8u;
            goto label_3a97e8;
        }
    }
    ctx->pc = 0x3A97ACu;
    // 0x3a97ac: 0x12000005  beqz        $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x3A97ACu;
    {
        const bool branch_taken_0x3a97ac = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A97B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A97ACu;
        // 0x3a97b0: 0x3c030078  lui         $v1, 0x78 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)120 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a97ac) {
            ctx->pc = 0x3A97C4u;
            goto label_3a97c4;
        }
    }
    ctx->pc = 0x3A97B4u;
    // 0x3a97b4: 0x2402002d  addiu       $v0, $zero, 0x2D
    ctx->pc = 0x3a97b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
    // 0x3a97b8: 0xa2020000  sb          $v0, 0x0($s0)
    ctx->pc = 0x3a97b8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x3a97bc: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x3A97BCu;
    {
        const bool branch_taken_0x3a97bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A97C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A97BCu;
        // 0x3a97c0: 0x2476d9e0  addiu       $s6, $v1, -0x2620 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 3), 4294957536));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a97bc) {
            ctx->pc = 0x3A97D4u;
            goto label_3a97d4;
        }
    }
    ctx->pc = 0x3A97C4u;
label_3a97c4:
    // 0x3a97c4: 0x2403002d  addiu       $v1, $zero, 0x2D
    ctx->pc = 0x3a97c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
    // 0x3a97c8: 0x2444d9e0  addiu       $a0, $v0, -0x2620
    ctx->pc = 0x3a97c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294957536));
    // 0x3a97cc: 0xa043d9e0  sb          $v1, -0x2620($v0)
    ctx->pc = 0x3a97ccu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 4294957536), (uint8_t)GPR_U32(ctx, 3));
    // 0x3a97d0: 0x24960001  addiu       $s6, $a0, 0x1
    ctx->pc = 0x3a97d0u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_3a97d4:
    // 0x3a97d4: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x3a97d4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a97d8: 0xc0c78b8  jal         func_31E2E0
    ctx->pc = 0x3A97D8u;
    SET_GPR_U32(ctx, 31, 0x3A97E0u);
    ctx->pc = 0x3A97DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A97D8u;
    // 0x3a97dc: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31E2E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31E2E0u, 0x3A97D8u, 0x3A97E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A97E0u;
label_3a97e0:
    // 0x3a97e0: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x3A97E0u;
    {
        const bool branch_taken_0x3a97e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A97E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A97E0u;
        // 0x3a97e4: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a97e0) {
            ctx->pc = 0x3A97ECu;
            goto label_3a97ec;
        }
    }
    ctx->pc = 0x3A97E8u;
label_3a97e8:
    // 0x3a97e8: 0x2456d9e0  addiu       $s6, $v0, -0x2620
    ctx->pc = 0x3a97e8u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 2), 4294957536));
label_3a97ec:
    // 0x3a97ec: 0x3405ffc0  ori         $a1, $zero, 0xFFC0
    ctx->pc = 0x3a97ecu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65472);
    // 0x3a97f0: 0x52bbc  dsll32      $a1, $a1, 14
    ctx->pc = 0x3a97f0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 14));
    // 0x3a97f4: 0xc0c7a1c  jal         func_31E870
    ctx->pc = 0x3A97F4u;
    SET_GPR_U32(ctx, 31, 0x3A97FCu);
    ctx->pc = 0x3A97F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A97F4u;
    // 0x3a97f8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31E870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31E870u, 0x3A97F4u, 0x3A97FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A97FCu;
label_3a97fc:
    // 0x3a97fc: 0x440003d  bltz        $v0, . + 4 + (0x3D << 2)
    ctx->pc = 0x3A97FCu;
    {
        const bool branch_taken_0x3a97fc = (GPR_S64(ctx, 2) < 0);
        ctx->pc = 0x3A9800u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A97FCu;
        // 0x3a9800: 0x280982d  daddu       $s3, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a97fc) {
            ctx->pc = 0x3A98F4u;
            goto label_3a98f4;
        }
    }
    ctx->pc = 0x3A9804u;
    // 0x3a9804: 0xc0eb456  jal         func_3AD158
    ctx->pc = 0x3A9804u;
    SET_GPR_U32(ctx, 31, 0x3A980Cu);
    ctx->pc = 0x3A9808u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A9804u;
    // 0x3a9808: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3AD158u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3AD158u, 0x3A9804u, 0x3A980Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A980Cu;
label_3a980c:
    // 0x3a980c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x3a980cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a9810: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3a9810u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a9814: 0xc0c78b8  jal         func_31E2E0
    ctx->pc = 0x3A9814u;
    SET_GPR_U32(ctx, 31, 0x3A981Cu);
    ctx->pc = 0x3A9818u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A9814u;
    // 0x3a9818: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31E2E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31E2E0u, 0x3A9814u, 0x3A981Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A981Cu;
label_3a981c:
    // 0x3a981c: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x3a981cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a9820: 0x2a8200a3  slti        $v0, $s4, 0xA3
    ctx->pc = 0x3a9820u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)(int32_t)163) ? 1 : 0);
    // 0x3a9824: 0x0  nop
    ctx->pc = 0x3a9824u;
    // NOP
label_3a9828:
    // 0x3a9828: 0x10400022  beqz        $v0, . + 4 + (0x22 << 2)
    ctx->pc = 0x3A9828u;
    {
        const bool branch_taken_0x3a9828 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A982Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A9828u;
        // 0x3a982c: 0x2687ffff  addiu       $a3, $s4, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 20), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a9828) {
            ctx->pc = 0x3A98B4u;
            goto label_3a98b4;
        }
    }
    ctx->pc = 0x3A9830u;
    // 0x3a9830: 0x34058048  ori         $a1, $zero, 0x8048
    ctx->pc = 0x3a9830u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32840);
    // 0x3a9834: 0x52bfc  dsll32      $a1, $a1, 15
    ctx->pc = 0x3a9834u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 15));
    // 0x3a9838: 0xc0eb4d2  jal         func_3AD348
    ctx->pc = 0x3A9838u;
    SET_GPR_U32(ctx, 31, 0x3A9840u);
    ctx->pc = 0x3A983Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A9838u;
    // 0x3a983c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3AD348u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3AD348u, 0x3A9838u, 0x3A9840u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A9840u;
label_3a9840:
    // 0x3a9840: 0xc0c7a5e  jal         func_31E978
    ctx->pc = 0x3A9840u;
    SET_GPR_U32(ctx, 31, 0x3A9848u);
    ctx->pc = 0x3A9844u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A9840u;
    // 0x3a9844: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31E978u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31E978u, 0x3A9840u, 0x3A9848u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A9848u;
label_3a9848:
    // 0x3a9848: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x3a9848u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a984c: 0x26030030  addiu       $v1, $s0, 0x30
    ctx->pc = 0x3a984cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
    // 0x3a9850: 0x2d41021  addu        $v0, $s6, $s4
    ctx->pc = 0x3a9850u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 20)));
    // 0x3a9854: 0xa0430000  sb          $v1, 0x0($v0)
    ctx->pc = 0x3a9854u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x3a9858: 0xc0c7a30  jal         func_31E8C0
    ctx->pc = 0x3A9858u;
    SET_GPR_U32(ctx, 31, 0x3A9860u);
    ctx->pc = 0x3A985Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A9858u;
    // 0x3a985c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31E8C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31E8C0u, 0x3A9858u, 0x3A9860u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A9860u;
label_3a9860:
    // 0x3a9860: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x3a9860u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x3a9864: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3a9864u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a9868: 0xc0c78b8  jal         func_31E2E0
    ctx->pc = 0x3A9868u;
    SET_GPR_U32(ctx, 31, 0x3A9870u);
    ctx->pc = 0x3A986Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A9868u;
    // 0x3a986c: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31E2E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31E2E0u, 0x3A9868u, 0x3A9870u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A9870u;
label_3a9870:
    // 0x3a9870: 0x3405fee6  ori         $a1, $zero, 0xFEE6
    ctx->pc = 0x3a9870u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65254);
    // 0x3a9874: 0x52c78  dsll        $a1, $a1, 17
    ctx->pc = 0x3a9874u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 17);
    // 0x3a9878: 0x34a5cccc  ori         $a1, $a1, 0xCCCC
    ctx->pc = 0x3a9878u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)52428);
    // 0x3a987c: 0x52c38  dsll        $a1, $a1, 16
    ctx->pc = 0x3a987cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 16);
    // 0x3a9880: 0x34a5cccc  ori         $a1, $a1, 0xCCCC
    ctx->pc = 0x3a9880u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)52428);
    // 0x3a9884: 0x52b78  dsll        $a1, $a1, 13
    ctx->pc = 0x3a9884u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 13);
    // 0x3a9888: 0x34a5199a  ori         $a1, $a1, 0x199A
    ctx->pc = 0x3a9888u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)6554);
    // 0x3a988c: 0xc0c78d2  jal         func_31E348
    ctx->pc = 0x3A988Cu;
    SET_GPR_U32(ctx, 31, 0x3A9894u);
    ctx->pc = 0x3A9890u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A988Cu;
    // 0x3a9890: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31E348u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31E348u, 0x3A988Cu, 0x3A9894u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A9894u;
label_3a9894:
    // 0x3a9894: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x3a9894u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a9898: 0x3405ffc0  ori         $a1, $zero, 0xFFC0
    ctx->pc = 0x3a9898u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65472);
    // 0x3a989c: 0x52bbc  dsll32      $a1, $a1, 14
    ctx->pc = 0x3a989cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 14));
    // 0x3a98a0: 0xc0c7a1c  jal         func_31E870
    ctx->pc = 0x3A98A0u;
    SET_GPR_U32(ctx, 31, 0x3A98A8u);
    ctx->pc = 0x3A98A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A98A0u;
    // 0x3a98a4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31E870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31E870u, 0x3A98A0u, 0x3A98A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A98A8u;
label_3a98a8:
    // 0x3a98a8: 0x441ffdf  bgez        $v0, . + 4 + (-0x21 << 2)
    ctx->pc = 0x3A98A8u;
    {
        const bool branch_taken_0x3a98a8 = (GPR_S64(ctx, 2) >= 0);
        ctx->pc = 0x3A98ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A98A8u;
        // 0x3a98ac: 0x2a8200a3  slti        $v0, $s4, 0xA3 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)(int32_t)163) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a98a8) {
            ctx->pc = 0x3A9828u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3a9828;
        }
    }
    ctx->pc = 0x3A98B0u;
    // 0x3a98b0: 0x2687ffff  addiu       $a3, $s4, -0x1
    ctx->pc = 0x3a98b0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 20), 4294967295));
label_3a98b4:
    // 0x3a98b4: 0x18e0000e  blez        $a3, . + 4 + (0xE << 2)
    ctx->pc = 0x3A98B4u;
    {
        const bool branch_taken_0x3a98b4 = (GPR_S64(ctx, 7) <= 0);
        ctx->pc = 0x3A98B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A98B4u;
        // 0x3a98b8: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a98b4) {
            ctx->pc = 0x3A98F0u;
            goto label_3a98f0;
        }
    }
    ctx->pc = 0x3A98BCu;
    // 0x3a98bc: 0xf63021  addu        $a2, $a3, $s6
    ctx->pc = 0x3a98bcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 22)));
    // 0x3a98c0: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x3a98c0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a98c4: 0x0  nop
    ctx->pc = 0x3a98c4u;
    // NOP
label_3a98c8:
    // 0x3a98c8: 0x90c20000  lbu         $v0, 0x0($a2)
    ctx->pc = 0x3a98c8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x3a98cc: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x3a98ccu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x3a98d0: 0x80a30000  lb          $v1, 0x0($a1)
    ctx->pc = 0x3a98d0u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x3a98d4: 0x24e7ffff  addiu       $a3, $a3, -0x1
    ctx->pc = 0x3a98d4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
    // 0x3a98d8: 0xa0a20000  sb          $v0, 0x0($a1)
    ctx->pc = 0x3a98d8u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x3a98dc: 0x207202a  slt         $a0, $s0, $a3
    ctx->pc = 0x3a98dcu;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 7)) ? 1 : 0);
    // 0x3a98e0: 0xa0c30000  sb          $v1, 0x0($a2)
    ctx->pc = 0x3a98e0u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x3a98e4: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x3a98e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x3a98e8: 0x1480fff7  bnez        $a0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x3A98E8u;
    {
        const bool branch_taken_0x3a98e8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x3A98ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A98E8u;
        // 0x3a98ec: 0x24c6ffff  addiu       $a2, $a2, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a98e8) {
            ctx->pc = 0x3A98C8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3a98c8;
        }
    }
    ctx->pc = 0x3A98F0u;
label_3a98f0:
    // 0x3a98f0: 0x280982d  daddu       $s3, $s4, $zero
    ctx->pc = 0x3a98f0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_3a98f4:
    // 0x3a98f4: 0x1660002b  bnez        $s3, . + 4 + (0x2B << 2)
    ctx->pc = 0x3A98F4u;
    {
        const bool branch_taken_0x3a98f4 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        ctx->pc = 0x3A98F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A98F4u;
        // 0x3a98f8: 0x8fa30004  lw          $v1, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a98f4) {
            ctx->pc = 0x3A99A4u;
            goto label_3a99a4;
        }
    }
    ctx->pc = 0x3A98FCu;
    // 0x3a98fc: 0x24020066  addiu       $v0, $zero, 0x66
    ctx->pc = 0x3a98fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 102));
    // 0x3a9900: 0x10620025  beq         $v1, $v0, . + 4 + (0x25 << 2)
    ctx->pc = 0x3A9900u;
    {
        const bool branch_taken_0x3a9900 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x3A9904u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A9900u;
        // 0x3a9904: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a9900) {
            ctx->pc = 0x3A9998u;
            goto label_3a9998;
        }
    }
    ctx->pc = 0x3A9908u;
    // 0x3a9908: 0xc0c7a1c  jal         func_31E870
    ctx->pc = 0x3A9908u;
    SET_GPR_U32(ctx, 31, 0x3A9910u);
    ctx->pc = 0x3A990Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A9908u;
    // 0x3a990c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31E870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31E870u, 0x3A9908u, 0x3A9910u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A9910u;
label_3a9910:
    // 0x3a9910: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x3A9910u;
    {
        const bool branch_taken_0x3a9910 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3a9910) {
            ctx->pc = 0x3A9950u;
            goto label_3a9950;
        }
    }
    ctx->pc = 0x3A9918u;
label_3a9918:
    // 0x3a9918: 0x34058048  ori         $a1, $zero, 0x8048
    ctx->pc = 0x3a9918u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32840);
    // 0x3a991c: 0x52bfc  dsll32      $a1, $a1, 15
    ctx->pc = 0x3a991cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 15));
    // 0x3a9920: 0xc0c78d2  jal         func_31E348
    ctx->pc = 0x3A9920u;
    SET_GPR_U32(ctx, 31, 0x3A9928u);
    ctx->pc = 0x3A9924u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A9920u;
    // 0x3a9924: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31E348u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31E348u, 0x3A9920u, 0x3A9928u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A9928u;
label_3a9928:
    // 0x3a9928: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x3a9928u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a992c: 0x3405ffc0  ori         $a1, $zero, 0xFFC0
    ctx->pc = 0x3a992cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65472);
    // 0x3a9930: 0x52bbc  dsll32      $a1, $a1, 14
    ctx->pc = 0x3a9930u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 14));
    // 0x3a9934: 0xc0c7a1c  jal         func_31E870
    ctx->pc = 0x3A9934u;
    SET_GPR_U32(ctx, 31, 0x3A993Cu);
    ctx->pc = 0x3A9938u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A9934u;
    // 0x3a9938: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31E870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31E870u, 0x3A9934u, 0x3A993Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A993Cu;
label_3a993c:
    // 0x3a993c: 0x4410003  bgez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3A993Cu;
    {
        const bool branch_taken_0x3a993c = (GPR_S64(ctx, 2) >= 0);
        ctx->pc = 0x3A9940u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A993Cu;
        // 0x3a9940: 0x2a62fc04  slti        $v0, $s3, -0x3FC (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)4294966276) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a993c) {
            ctx->pc = 0x3A994Cu;
            goto label_3a994c;
        }
    }
    ctx->pc = 0x3A9944u;
    // 0x3a9944: 0x5040fff4  beql        $v0, $zero, . + 4 + (-0xC << 2)
    ctx->pc = 0x3A9944u;
    {
        const bool branch_taken_0x3a9944 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3a9944) {
            ctx->pc = 0x3A9948u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3A9944u;
            // 0x3a9948: 0x2673ffff  addiu       $s3, $s3, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3A9918u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3a9918;
        }
    }
    ctx->pc = 0x3A994Cu;
label_3a994c:
    // 0x3a994c: 0x2673ffff  addiu       $s3, $s3, -0x1
    ctx->pc = 0x3a994cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967295));
label_3a9950:
    // 0x3a9950: 0x3405ffc0  ori         $a1, $zero, 0xFFC0
    ctx->pc = 0x3a9950u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65472);
    // 0x3a9954: 0x52bbc  dsll32      $a1, $a1, 14
    ctx->pc = 0x3a9954u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 14));
    // 0x3a9958: 0xc0c7a1c  jal         func_31E870
    ctx->pc = 0x3A9958u;
    SET_GPR_U32(ctx, 31, 0x3A9960u);
    ctx->pc = 0x3A995Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A9958u;
    // 0x3a995c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31E870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31E870u, 0x3A9958u, 0x3A9960u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A9960u;
label_3a9960:
    // 0x3a9960: 0x4400010  bltz        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x3A9960u;
    {
        const bool branch_taken_0x3a9960 = (GPR_S64(ctx, 2) < 0);
        ctx->pc = 0x3A9964u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A9960u;
        // 0x3a9964: 0x8fa20000  lw          $v0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a9960) {
            ctx->pc = 0x3A99A4u;
            goto label_3a99a4;
        }
    }
    ctx->pc = 0x3A9968u;
    // 0x3a9968: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3a9968u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a996c: 0x3405fee6  ori         $a1, $zero, 0xFEE6
    ctx->pc = 0x3a996cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65254);
    // 0x3a9970: 0x52c78  dsll        $a1, $a1, 17
    ctx->pc = 0x3a9970u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 17);
    // 0x3a9974: 0x34a5cccc  ori         $a1, $a1, 0xCCCC
    ctx->pc = 0x3a9974u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)52428);
    // 0x3a9978: 0x52c38  dsll        $a1, $a1, 16
    ctx->pc = 0x3a9978u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 16);
    // 0x3a997c: 0x34a5cccc  ori         $a1, $a1, 0xCCCC
    ctx->pc = 0x3a997cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)52428);
    // 0x3a9980: 0x52b78  dsll        $a1, $a1, 13
    ctx->pc = 0x3a9980u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 13);
    // 0x3a9984: 0x34a5199a  ori         $a1, $a1, 0x199A
    ctx->pc = 0x3a9984u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)6554);
    // 0x3a9988: 0xc0c78d2  jal         func_31E348
    ctx->pc = 0x3A9988u;
    SET_GPR_U32(ctx, 31, 0x3A9990u);
    ctx->pc = 0x3A998Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A9988u;
    // 0x3a998c: 0x24550001  addiu       $s5, $v0, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31E348u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31E348u, 0x3A9988u, 0x3A9990u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A9990u;
label_3a9990:
    // 0x3a9990: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x3A9990u;
    {
        const bool branch_taken_0x3a9990 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A9994u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A9990u;
        // 0x3a9994: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a9990) {
            ctx->pc = 0x3A99A4u;
            goto label_3a99a4;
        }
    }
    ctx->pc = 0x3A9998u;
label_3a9998:
    // 0x3a9998: 0x24020030  addiu       $v0, $zero, 0x30
    ctx->pc = 0x3a9998u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x3a999c: 0x24140001  addiu       $s4, $zero, 0x1
    ctx->pc = 0x3a999cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3a99a0: 0xa2c20000  sb          $v0, 0x0($s6)
    ctx->pc = 0x3a99a0u;
    WRITE8(ADD32(GPR_U32(ctx, 22), 0), (uint8_t)GPR_U32(ctx, 2));
label_3a99a4:
    // 0x3a99a4: 0x6610003  bgez        $s3, . + 4 + (0x3 << 2)
    ctx->pc = 0x3A99A4u;
    {
        const bool branch_taken_0x3a99a4 = (GPR_S64(ctx, 19) >= 0);
        ctx->pc = 0x3A99A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A99A4u;
        // 0x3a99a8: 0x8fa30004  lw          $v1, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a99a4) {
            ctx->pc = 0x3A99B4u;
            goto label_3a99b4;
        }
    }
    ctx->pc = 0x3A99ACu;
    // 0x3a99ac: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x3A99ACu;
    {
        const bool branch_taken_0x3a99ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A99B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A99ACu;
        // 0x3a99b0: 0x2a0882d  daddu       $s1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a99ac) {
            ctx->pc = 0x3A99D0u;
            goto label_3a99d0;
        }
    }
    ctx->pc = 0x3A99B4u;
label_3a99b4:
    // 0x3a99b4: 0x24020066  addiu       $v0, $zero, 0x66
    ctx->pc = 0x3a99b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 102));
    // 0x3a99b8: 0x14620005  bne         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x3A99B8u;
    {
        const bool branch_taken_0x3a99b8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x3A99BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A99B8u;
        // 0x3a99bc: 0x26b10001  addiu       $s1, $s5, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a99b8) {
            ctx->pc = 0x3A99D0u;
            goto label_3a99d0;
        }
    }
    ctx->pc = 0x3A99C0u;
    // 0x3a99c0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3a99c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3a99c4: 0x13182a  slt         $v1, $zero, $s3
    ctx->pc = 0x3a99c4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 19)) ? 1 : 0);
    // 0x3a99c8: 0x263100b  movn        $v0, $s3, $v1
    ctx->pc = 0x3a99c8u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 19));
    // 0x3a99cc: 0x2a28821  addu        $s1, $s5, $v0
    ctx->pc = 0x3a99ccu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
label_3a99d0:
    // 0x3a99d0: 0x3415f240  ori         $s5, $zero, 0xF240
    ctx->pc = 0x3a99d0u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)62016);
    // 0x3a99d4: 0x15abbc  dsll32      $s5, $s5, 14
    ctx->pc = 0x3a99d4u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 21) << (32 + 14));
    // 0x3a99d8: 0x263e0001  addiu       $fp, $s1, 0x1
    ctx->pc = 0x3a99d8u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x3a99dc: 0x34178048  ori         $s7, $zero, 0x8048
    ctx->pc = 0x3a99dcu;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32840);
    // 0x3a99e0: 0x17bbfc  dsll32      $s7, $s7, 15
    ctx->pc = 0x3a99e0u;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 23) << (32 + 15));
    // 0x3a99e4: 0x0  nop
    ctx->pc = 0x3a99e4u;
    // NOP
label_3a99e8:
    // 0x3a99e8: 0x2e0282d  daddu       $a1, $s7, $zero
    ctx->pc = 0x3a99e8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a99ec: 0xc0c78d2  jal         func_31E348
    ctx->pc = 0x3A99ECu;
    SET_GPR_U32(ctx, 31, 0x3A99F4u);
    ctx->pc = 0x3A99F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A99ECu;
    // 0x3a99f0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31E348u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31E348u, 0x3A99ECu, 0x3A99F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A99F4u;
label_3a99f4:
    // 0x3a99f4: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x3a99f4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a99f8: 0xc0c7a5e  jal         func_31E978
    ctx->pc = 0x3A99F8u;
    SET_GPR_U32(ctx, 31, 0x3A9A00u);
    ctx->pc = 0x3A99FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A99F8u;
    // 0x3a99fc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31E978u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31E978u, 0x3A99F8u, 0x3A9A00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A9A00u;
label_3a9a00:
    // 0x3a9a00: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x3a9a00u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a9a04: 0xc0c7a30  jal         func_31E8C0
    ctx->pc = 0x3A9A04u;
    SET_GPR_U32(ctx, 31, 0x3A9A0Cu);
    ctx->pc = 0x3A9A08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A9A04u;
    // 0x3a9a08: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31E8C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31E8C0u, 0x3A9A04u, 0x3A9A0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A9A0Cu;
label_3a9a0c:
    // 0x3a9a0c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3a9a0cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a9a10: 0xc0c78b8  jal         func_31E2E0
    ctx->pc = 0x3A9A10u;
    SET_GPR_U32(ctx, 31, 0x3A9A18u);
    ctx->pc = 0x3A9A14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A9A10u;
    // 0x3a9a14: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31E2E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31E2E0u, 0x3A9A10u, 0x3A9A18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A9A18u;
label_3a9a18:
    // 0x3a9a18: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x3a9a18u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a9a1c: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x3a9a1cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a9a20: 0xc0c78d2  jal         func_31E348
    ctx->pc = 0x3A9A20u;
    SET_GPR_U32(ctx, 31, 0x3A9A28u);
    ctx->pc = 0x3A9A24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A9A20u;
    // 0x3a9a24: 0x2e0282d  daddu       $a1, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31E348u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31E348u, 0x3A9A20u, 0x3A9A28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A9A28u;
label_3a9a28:
    // 0x3a9a28: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x3a9a28u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a9a2c: 0x291102a  slt         $v0, $s4, $s1
    ctx->pc = 0x3a9a2cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
    // 0x3a9a30: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x3A9A30u;
    {
        const bool branch_taken_0x3a9a30 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A9A34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A9A30u;
        // 0x3a9a34: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a9a30) {
            ctx->pc = 0x3A9A7Cu;
            goto label_3a9a7c;
        }
    }
    ctx->pc = 0x3A9A38u;
    // 0x3a9a38: 0xc0c7a1c  jal         func_31E870
    ctx->pc = 0x3A9A38u;
    SET_GPR_U32(ctx, 31, 0x3A9A40u);
    ctx->pc = 0x3A9A3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A9A38u;
    // 0x3a9a3c: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31E870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31E870u, 0x3A9A38u, 0x3A9A40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A9A40u;
label_3a9a40:
    // 0x3a9a40: 0x440000e  bltz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x3A9A40u;
    {
        const bool branch_taken_0x3a9a40 = (GPR_S64(ctx, 2) < 0);
        if (branch_taken_0x3a9a40) {
            ctx->pc = 0x3A9A7Cu;
            goto label_3a9a7c;
        }
    }
    ctx->pc = 0x3A9A48u;
    // 0x3a9a48: 0x3404ffc0  ori         $a0, $zero, 0xFFC0
    ctx->pc = 0x3a9a48u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65472);
    // 0x3a9a4c: 0x423bc  dsll32      $a0, $a0, 14
    ctx->pc = 0x3a9a4cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 14));
    // 0x3a9a50: 0xc0c78b8  jal         func_31E2E0
    ctx->pc = 0x3A9A50u;
    SET_GPR_U32(ctx, 31, 0x3A9A58u);
    ctx->pc = 0x3A9A54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A9A50u;
    // 0x3a9a54: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31E2E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31E2E0u, 0x3A9A50u, 0x3A9A58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A9A58u;
label_3a9a58:
    // 0x3a9a58: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x3a9a58u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a9a5c: 0xc0c7a1c  jal         func_31E870
    ctx->pc = 0x3A9A5Cu;
    SET_GPR_U32(ctx, 31, 0x3A9A64u);
    ctx->pc = 0x3A9A60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A9A5Cu;
    // 0x3a9a60: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31E870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31E870u, 0x3A9A5Cu, 0x3A9A64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A9A64u;
label_3a9a64:
    // 0x3a9a64: 0x1c400005  bgtz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x3A9A64u;
    {
        const bool branch_taken_0x3a9a64 = (GPR_S64(ctx, 2) > 0);
        ctx->pc = 0x3A9A68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A9A64u;
        // 0x3a9a68: 0x2d41021  addu        $v0, $s6, $s4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a9a64) {
            ctx->pc = 0x3A9A7Cu;
            goto label_3a9a7c;
        }
    }
    ctx->pc = 0x3A9A6Cu;
    // 0x3a9a6c: 0x26030030  addiu       $v1, $s0, 0x30
    ctx->pc = 0x3a9a6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
    // 0x3a9a70: 0xa0430000  sb          $v1, 0x0($v0)
    ctx->pc = 0x3a9a70u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x3a9a74: 0x1000ffdc  b           . + 4 + (-0x24 << 2)
    ctx->pc = 0x3A9A74u;
    {
        const bool branch_taken_0x3a9a74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A9A78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A9A74u;
        // 0x3a9a78: 0x26940001  addiu       $s4, $s4, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a9a74) {
            ctx->pc = 0x3A99E8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3a99e8;
        }
    }
    ctx->pc = 0x3A9A7Cu;
label_3a9a7c:
    // 0x3a9a7c: 0x3405ff80  ori         $a1, $zero, 0xFF80
    ctx->pc = 0x3a9a7cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65408);
    // 0x3a9a80: 0x52bbc  dsll32      $a1, $a1, 14
    ctx->pc = 0x3a9a80u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 14));
    // 0x3a9a84: 0xc0c7a1c  jal         func_31E870
    ctx->pc = 0x3A9A84u;
    SET_GPR_U32(ctx, 31, 0x3A9A8Cu);
    ctx->pc = 0x3A9A88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A9A84u;
    // 0x3a9a88: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31E870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31E870u, 0x3A9A84u, 0x3A9A8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A9A8Cu;
label_3a9a8c:
    // 0x3a9a8c: 0x28420000  slti        $v0, $v0, 0x0
    ctx->pc = 0x3a9a8cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x3a9a90: 0x26030001  addiu       $v1, $s0, 0x1
    ctx->pc = 0x3a9a90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x3a9a94: 0x62800a  movz        $s0, $v1, $v0
    ctx->pc = 0x3a9a94u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 3));
    // 0x3a9a98: 0x2d42021  addu        $a0, $s6, $s4
    ctx->pc = 0x3a9a98u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 20)));
    // 0x3a9a9c: 0x26030030  addiu       $v1, $s0, 0x30
    ctx->pc = 0x3a9a9cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
    // 0x3a9aa0: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x3a9aa0u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x3a9aa4: 0x234102a  slt         $v0, $s1, $s4
    ctx->pc = 0x3a9aa4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 20)) ? 1 : 0);
    // 0x3a9aa8: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x3A9AA8u;
    {
        const bool branch_taken_0x3a9aa8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3A9AACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A9AA8u;
        // 0x3a9aac: 0xa0830000  sb          $v1, 0x0($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a9aa8) {
            ctx->pc = 0x3A9AD0u;
            goto label_3a9ad0;
        }
    }
    ctx->pc = 0x3A9AB0u;
    // 0x3a9ab0: 0x24040030  addiu       $a0, $zero, 0x30
    ctx->pc = 0x3a9ab0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x3a9ab4: 0x0  nop
    ctx->pc = 0x3a9ab4u;
    // NOP
label_3a9ab8:
    // 0x3a9ab8: 0x2d41821  addu        $v1, $s6, $s4
    ctx->pc = 0x3a9ab8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 20)));
    // 0x3a9abc: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x3a9abcu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x3a9ac0: 0x234102a  slt         $v0, $s1, $s4
    ctx->pc = 0x3a9ac0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 20)) ? 1 : 0);
    // 0x3a9ac4: 0x0  nop
    ctx->pc = 0x3a9ac4u;
    // NOP
    // 0x3a9ac8: 0x1040fffb  beqz        $v0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x3A9AC8u;
    {
        const bool branch_taken_0x3a9ac8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A9ACCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A9AC8u;
        // 0x3a9acc: 0xa0640000  sb          $a0, 0x0($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a9ac8) {
            ctx->pc = 0x3A9AB8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3a9ab8;
        }
    }
    ctx->pc = 0x3A9AD0u;
label_3a9ad0:
    // 0x3a9ad0: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x3a9ad0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a9ad4: 0xc0ea54e  jal         func_3A9538
    ctx->pc = 0x3A9AD4u;
    SET_GPR_U32(ctx, 31, 0x3A9ADCu);
    ctx->pc = 0x3A9AD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A9AD4u;
    // 0x3a9ad8: 0x3c0282d  daddu       $a1, $fp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A9538u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A9538u, 0x3A9AD4u, 0x3A9ADCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A9ADCu;
label_3a9adc:
    // 0x3a9adc: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x3A9ADCu;
    {
        const bool branch_taken_0x3a9adc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3A9AE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A9ADCu;
        // 0x3a9ae0: 0x8fa20000  lw          $v0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a9adc) {
            ctx->pc = 0x3A9AF8u;
            goto label_3a9af8;
        }
    }
    ctx->pc = 0x3A9AE4u;
    // 0x3a9ae4: 0x24020031  addiu       $v0, $zero, 0x31
    ctx->pc = 0x3a9ae4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 49));
    // 0x3a9ae8: 0x3c0882d  daddu       $s1, $fp, $zero
    ctx->pc = 0x3a9ae8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a9aec: 0xa2c20000  sb          $v0, 0x0($s6)
    ctx->pc = 0x3a9aecu;
    WRITE8(ADD32(GPR_U32(ctx, 22), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x3a9af0: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x3a9af0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x3a9af4: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x3a9af4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_3a9af8:
    // 0x3a9af8: 0x10400014  beqz        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x3A9AF8u;
    {
        const bool branch_taken_0x3a9af8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A9AFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A9AF8u;
        // 0x3a9afc: 0x8fa30004  lw          $v1, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a9af8) {
            ctx->pc = 0x3A9B4Cu;
            goto label_3a9b4c;
        }
    }
    ctx->pc = 0x3A9B00u;
    // 0x3a9b00: 0x24020066  addiu       $v0, $zero, 0x66
    ctx->pc = 0x3a9b00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 102));
    // 0x3a9b04: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3A9B04u;
    {
        const bool branch_taken_0x3a9b04 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x3A9B08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A9B04u;
        // 0x3a9b08: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a9b04) {
            ctx->pc = 0x3A9B14u;
            goto label_3a9b14;
        }
    }
    ctx->pc = 0x3A9B0Cu;
    // 0x3a9b0c: 0x2a620001  slti        $v0, $s3, 0x1
    ctx->pc = 0x3a9b0cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)1) ? 1 : 0);
    // 0x3a9b10: 0x262280a  movz        $a1, $s3, $v0
    ctx->pc = 0x3a9b10u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 19));
label_3a9b14:
    // 0x3a9b14: 0x220a02d  daddu       $s4, $s1, $zero
    ctx->pc = 0x3a9b14u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a9b18: 0xb1102a  slt         $v0, $a1, $s1
    ctx->pc = 0x3a9b18u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
    // 0x3a9b1c: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x3A9B1Cu;
    {
        const bool branch_taken_0x3a9b1c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A9B20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A9B1Cu;
        // 0x3a9b20: 0x2c53021  addu        $a2, $s6, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a9b1c) {
            ctx->pc = 0x3A9B40u;
            goto label_3a9b40;
        }
    }
    ctx->pc = 0x3A9B24u;
    // 0x3a9b24: 0x2362021  addu        $a0, $s1, $s6
    ctx->pc = 0x3a9b24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 22)));
label_3a9b28:
    // 0x3a9b28: 0x9082ffff  lbu         $v0, -0x1($a0)
    ctx->pc = 0x3a9b28u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 4294967295)));
    // 0x3a9b2c: 0x2694ffff  addiu       $s4, $s4, -0x1
    ctx->pc = 0x3a9b2cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4294967295));
    // 0x3a9b30: 0xb4182a  slt         $v1, $a1, $s4
    ctx->pc = 0x3a9b30u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 20)) ? 1 : 0);
    // 0x3a9b34: 0xa0820000  sb          $v0, 0x0($a0)
    ctx->pc = 0x3a9b34u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x3a9b38: 0x1460fffb  bnez        $v1, . + 4 + (-0x5 << 2)
    ctx->pc = 0x3A9B38u;
    {
        const bool branch_taken_0x3a9b38 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3A9B3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A9B38u;
        // 0x3a9b3c: 0x2484ffff  addiu       $a0, $a0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a9b38) {
            ctx->pc = 0x3A9B28u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3a9b28;
        }
    }
    ctx->pc = 0x3A9B40u;
label_3a9b40:
    // 0x3a9b40: 0x2402002e  addiu       $v0, $zero, 0x2E
    ctx->pc = 0x3a9b40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 46));
    // 0x3a9b44: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x3A9B44u;
    {
        const bool branch_taken_0x3a9b44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A9B48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A9B44u;
        // 0x3a9b48: 0xa0c20000  sb          $v0, 0x0($a2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 6), 0), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a9b44) {
            ctx->pc = 0x3A9B50u;
            goto label_3a9b50;
        }
    }
    ctx->pc = 0x3A9B4Cu;
label_3a9b4c:
    // 0x3a9b4c: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x3a9b4cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
label_3a9b50:
    // 0x3a9b50: 0x8fa20008  lw          $v0, 0x8($sp)
    ctx->pc = 0x3a9b50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x3a9b54: 0x10400014  beqz        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x3A9B54u;
    {
        const bool branch_taken_0x3a9b54 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A9B58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A9B54u;
        // 0x3a9b58: 0x8fa30004  lw          $v1, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a9b54) {
            ctx->pc = 0x3A9BA8u;
            goto label_3a9ba8;
        }
    }
    ctx->pc = 0x3A9B5Cu;
    // 0x3a9b5c: 0x1220000c  beqz        $s1, . + 4 + (0xC << 2)
    ctx->pc = 0x3A9B5Cu;
    {
        const bool branch_taken_0x3a9b5c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A9B60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A9B5Cu;
        // 0x3a9b60: 0x2d11021  addu        $v0, $s6, $s1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 17)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a9b5c) {
            ctx->pc = 0x3A9B90u;
            goto label_3a9b90;
        }
    }
    ctx->pc = 0x3A9B64u;
    // 0x3a9b64: 0x24040030  addiu       $a0, $zero, 0x30
    ctx->pc = 0x3a9b64u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x3a9b68: 0x80430000  lb          $v1, 0x0($v0)
    ctx->pc = 0x3a9b68u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3a9b6c: 0x5464000b  bnel        $v1, $a0, . + 4 + (0xB << 2)
    ctx->pc = 0x3A9B6Cu;
    {
        const bool branch_taken_0x3a9b6c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        if (branch_taken_0x3a9b6c) {
            ctx->pc = 0x3A9B70u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3A9B6Cu;
            // 0x3a9b70: 0x2624ffff  addiu       $a0, $s1, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3A9B9Cu;
            goto label_3a9b9c;
        }
    }
    ctx->pc = 0x3A9B74u;
    // 0x3a9b74: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x3a9b74u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
label_3a9b78:
    // 0x3a9b78: 0x12200005  beqz        $s1, . + 4 + (0x5 << 2)
    ctx->pc = 0x3A9B78u;
    {
        const bool branch_taken_0x3a9b78 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A9B7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A9B78u;
        // 0x3a9b7c: 0x2d11021  addu        $v0, $s6, $s1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 17)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a9b78) {
            ctx->pc = 0x3A9B90u;
            goto label_3a9b90;
        }
    }
    ctx->pc = 0x3A9B80u;
    // 0x3a9b80: 0x80430000  lb          $v1, 0x0($v0)
    ctx->pc = 0x3a9b80u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3a9b84: 0x0  nop
    ctx->pc = 0x3a9b84u;
    // NOP
    // 0x3a9b88: 0x5064fffb  beql        $v1, $a0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x3A9B88u;
    {
        const bool branch_taken_0x3a9b88 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        if (branch_taken_0x3a9b88) {
            ctx->pc = 0x3A9B8Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3A9B88u;
            // 0x3a9b8c: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3A9B78u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3a9b78;
        }
    }
    ctx->pc = 0x3A9B90u;
label_3a9b90:
    // 0x3a9b90: 0x2d11021  addu        $v0, $s6, $s1
    ctx->pc = 0x3a9b90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 17)));
    // 0x3a9b94: 0x2624ffff  addiu       $a0, $s1, -0x1
    ctx->pc = 0x3a9b94u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    // 0x3a9b98: 0x80430000  lb          $v1, 0x0($v0)
    ctx->pc = 0x3a9b98u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_3a9b9c:
    // 0x3a9b9c: 0x3863002e  xori        $v1, $v1, 0x2E
    ctx->pc = 0x3a9b9cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)46);
    // 0x3a9ba0: 0x83880a  movz        $s1, $a0, $v1
    ctx->pc = 0x3a9ba0u;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 17, GPR_VEC(ctx, 4));
    // 0x3a9ba4: 0x8fa30004  lw          $v1, 0x4($sp)
    ctx->pc = 0x3a9ba4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_3a9ba8:
    // 0x3a9ba8: 0x24020066  addiu       $v0, $zero, 0x66
    ctx->pc = 0x3a9ba8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 102));
    // 0x3a9bac: 0x10620024  beq         $v1, $v0, . + 4 + (0x24 << 2)
    ctx->pc = 0x3A9BACu;
    {
        const bool branch_taken_0x3a9bac = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x3A9BB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A9BACu;
        // 0x3a9bb0: 0x2361021  addu        $v0, $s1, $s6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 22)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a9bac) {
            ctx->pc = 0x3A9C40u;
            goto label_3a9c40;
        }
    }
    ctx->pc = 0x3A9BB4u;
    // 0x3a9bb4: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x3a9bb4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x3a9bb8: 0x2d11021  addu        $v0, $s6, $s1
    ctx->pc = 0x3a9bb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 17)));
    // 0x3a9bbc: 0x660000e  bltz        $s3, . + 4 + (0xE << 2)
    ctx->pc = 0x3A9BBCu;
    {
        const bool branch_taken_0x3a9bbc = (GPR_S64(ctx, 19) < 0);
        ctx->pc = 0x3A9BC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A9BBCu;
        // 0x3a9bc0: 0xa0430000  sb          $v1, 0x0($v0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a9bbc) {
            ctx->pc = 0x3A9BF8u;
            goto label_3a9bf8;
        }
    }
    ctx->pc = 0x3A9BC4u;
    // 0x3a9bc4: 0x2662ffff  addiu       $v0, $s3, -0x1
    ctx->pc = 0x3a9bc4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967295));
    // 0x3a9bc8: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x3a9bc8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x3a9bcc: 0x53980b  movn        $s3, $v0, $s3
    ctx->pc = 0x3a9bccu;
    if (GPR_U64(ctx, 19) != 0) SET_GPR_VEC(ctx, 19, GPR_VEC(ctx, 2));
    // 0x3a9bd0: 0x2d12021  addu        $a0, $s6, $s1
    ctx->pc = 0x3a9bd0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 17)));
    // 0x3a9bd4: 0x2402002b  addiu       $v0, $zero, 0x2B
    ctx->pc = 0x3a9bd4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 43));
    // 0x3a9bd8: 0x2a63000a  slti        $v1, $s3, 0xA
    ctx->pc = 0x3a9bd8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)10) ? 1 : 0);
    // 0x3a9bdc: 0x10600011  beqz        $v1, . + 4 + (0x11 << 2)
    ctx->pc = 0x3A9BDCu;
    {
        const bool branch_taken_0x3a9bdc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A9BE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A9BDCu;
        // 0x3a9be0: 0xa0820000  sb          $v0, 0x0($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a9bdc) {
            ctx->pc = 0x3A9C24u;
            goto label_3a9c24;
        }
    }
    ctx->pc = 0x3A9BE4u;
    // 0x3a9be4: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x3a9be4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x3a9be8: 0x24030030  addiu       $v1, $zero, 0x30
    ctx->pc = 0x3a9be8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x3a9bec: 0x2d11021  addu        $v0, $s6, $s1
    ctx->pc = 0x3a9becu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 17)));
    // 0x3a9bf0: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x3A9BF0u;
    {
        const bool branch_taken_0x3a9bf0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A9BF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A9BF0u;
        // 0x3a9bf4: 0xa0430000  sb          $v1, 0x0($v0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a9bf0) {
            ctx->pc = 0x3A9C24u;
            goto label_3a9c24;
        }
    }
    ctx->pc = 0x3A9BF8u;
label_3a9bf8:
    // 0x3a9bf8: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x3a9bf8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x3a9bfc: 0x2402002d  addiu       $v0, $zero, 0x2D
    ctx->pc = 0x3a9bfcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
    // 0x3a9c00: 0x2d11821  addu        $v1, $s6, $s1
    ctx->pc = 0x3a9c00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 17)));
    // 0x3a9c04: 0x2a64fff7  slti        $a0, $s3, -0x9
    ctx->pc = 0x3a9c04u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)4294967287) ? 1 : 0);
    // 0x3a9c08: 0x14800005  bnez        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x3A9C08u;
    {
        const bool branch_taken_0x3a9c08 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x3A9C0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A9C08u;
        // 0x3a9c0c: 0xa0620000  sb          $v0, 0x0($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a9c08) {
            ctx->pc = 0x3A9C20u;
            goto label_3a9c20;
        }
    }
    ctx->pc = 0x3A9C10u;
    // 0x3a9c10: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x3a9c10u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x3a9c14: 0x24030030  addiu       $v1, $zero, 0x30
    ctx->pc = 0x3a9c14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x3a9c18: 0x2d11021  addu        $v0, $s6, $s1
    ctx->pc = 0x3a9c18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 17)));
    // 0x3a9c1c: 0xa0430000  sb          $v1, 0x0($v0)
    ctx->pc = 0x3a9c1cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 3));
label_3a9c20:
    // 0x3a9c20: 0x139823  negu        $s3, $s3
    ctx->pc = 0x3a9c20u;
    SET_GPR_S32(ctx, 19, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 19)));
label_3a9c24:
    // 0x3a9c24: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x3a9c24u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x3a9c28: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x3a9c28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a9c2c: 0x2d12821  addu        $a1, $s6, $s1
    ctx->pc = 0x3a9c2cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 17)));
    // 0x3a9c30: 0xc0ea588  jal         func_3A9620
    ctx->pc = 0x3A9C30u;
    SET_GPR_U32(ctx, 31, 0x3A9C38u);
    ctx->pc = 0x3A9C34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A9C30u;
    // 0x3a9c34: 0x2406000a  addiu       $a2, $zero, 0xA (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A9620u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A9620u, 0x3A9C30u, 0x3A9C38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A9C38u;
label_3a9c38:
    // 0x3a9c38: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x3A9C38u;
    {
        const bool branch_taken_0x3a9c38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A9C3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A9C38u;
        // 0x3a9c3c: 0x3c030078  lui         $v1, 0x78 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)120 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a9c38) {
            ctx->pc = 0x3A9C48u;
            goto label_3a9c48;
        }
    }
    ctx->pc = 0x3A9C40u;
label_3a9c40:
    // 0x3a9c40: 0xa0400001  sb          $zero, 0x1($v0)
    ctx->pc = 0x3a9c40u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 1), (uint8_t)GPR_U32(ctx, 0));
label_3a9c44:
    // 0x3a9c44: 0x3c030078  lui         $v1, 0x78
    ctx->pc = 0x3a9c44u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)120 << 16));
label_3a9c48:
    // 0x3a9c48: 0x2462d9e0  addiu       $v0, $v1, -0x2620
    ctx->pc = 0x3a9c48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294957536));
    // 0x3a9c4c: 0x7bb000a0  lq          $s0, 0xA0($sp)
    ctx->pc = 0x3a9c4cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x3a9c50: 0x7bb10090  lq          $s1, 0x90($sp)
    ctx->pc = 0x3a9c50u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x3a9c54: 0x7bb20080  lq          $s2, 0x80($sp)
    ctx->pc = 0x3a9c54u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x3a9c58: 0x7bb30070  lq          $s3, 0x70($sp)
    ctx->pc = 0x3a9c58u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x3a9c5c: 0x7bb40060  lq          $s4, 0x60($sp)
    ctx->pc = 0x3a9c5cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x3a9c60: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x3a9c60u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x3a9c64: 0x7bb60040  lq          $s6, 0x40($sp)
    ctx->pc = 0x3a9c64u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x3a9c68: 0x7bb70030  lq          $s7, 0x30($sp)
    ctx->pc = 0x3a9c68u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3a9c6c: 0x7bbe0020  lq          $fp, 0x20($sp)
    ctx->pc = 0x3a9c6cu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3a9c70: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3a9c70u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3a9c74: 0x3e00008  jr          $ra
    ctx->pc = 0x3A9C74u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3A9C78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A9C74u;
        // 0x3a9c78: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3A9C74u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3A9C7Cu;
    // 0x3a9c7c: 0x0  nop
    ctx->pc = 0x3a9c7cu;
    // NOP
    ctx->pc = 0x3a9c80u;
}
