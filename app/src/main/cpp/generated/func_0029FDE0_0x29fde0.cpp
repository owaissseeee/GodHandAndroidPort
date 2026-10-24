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

// Function: func_0029FDE0
// Address: 0x29fde0 - 0x29ffb0
void func_0029FDE0_0x29fde0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0029FDE0_0x29fde0");
#endif

    switch (ctx->pc) {
        case 0x29fe2cu: goto label_29fe2c;
        case 0x29fe3cu: goto label_29fe3c;
        case 0x29fe88u: goto label_29fe88;
        case 0x29fed0u: goto label_29fed0;
        case 0x29fef8u: goto label_29fef8;
        case 0x29ff3cu: goto label_29ff3c;
        case 0x29ff60u: goto label_29ff60;
        default: break;
    }

    ctx->pc = 0x29fde0u;

    // 0x29fde0: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x29fde0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x29fde4: 0x240600ff  addiu       $a2, $zero, 0xFF
    ctx->pc = 0x29fde4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x29fde8: 0x7fb10080  sq          $s1, 0x80($sp)
    ctx->pc = 0x29fde8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 17));
    // 0x29fdec: 0x7fb30060  sq          $s3, 0x60($sp)
    ctx->pc = 0x29fdecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 19));
    // 0x29fdf0: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x29fdf0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29fdf4: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x29fdf4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29fdf8: 0x7fb00090  sq          $s0, 0x90($sp)
    ctx->pc = 0x29fdf8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 16));
    // 0x29fdfc: 0x7fb20070  sq          $s2, 0x70($sp)
    ctx->pc = 0x29fdfcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 18));
    // 0x29fe00: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x29fe00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
    // 0x29fe04: 0x2405003f  addiu       $a1, $zero, 0x3F
    ctx->pc = 0x29fe04u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
    // 0x29fe08: 0x7fb50040  sq          $s5, 0x40($sp)
    ctx->pc = 0x29fe08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 21));
    // 0x29fe0c: 0x3c14003c  lui         $s4, 0x3C
    ctx->pc = 0x29fe0cu;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)60 << 16));
    // 0x29fe10: 0x7fb60030  sq          $s6, 0x30($sp)
    ctx->pc = 0x29fe10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 22));
    // 0x29fe14: 0x2410ffff  addiu       $s0, $zero, -0x1
    ctx->pc = 0x29fe14u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x29fe18: 0x7fb70020  sq          $s7, 0x20($sp)
    ctx->pc = 0x29fe18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 23));
    // 0x29fe1c: 0x7fbe0010  sq          $fp, 0x10($sp)
    ctx->pc = 0x29fe1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 30));
    // 0x29fe20: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x29fe20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x29fe24: 0xc0a661a  jal         func_299868
    ctx->pc = 0x29FE24u;
    SET_GPR_U32(ctx, 31, 0x29FE2Cu);
    ctx->pc = 0x29FE28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29FE24u;
    // 0x29fe28: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x299868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x299868u, 0x29FE24u, 0x29FE2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29FE2Cu;
label_29fe2c:
    // 0x29fe2c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x29fe2cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29fe30: 0x24060306  addiu       $a2, $zero, 0x306
    ctx->pc = 0x29fe30u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 774));
    // 0x29fe34: 0xc0a661a  jal         func_299868
    ctx->pc = 0x29FE34u;
    SET_GPR_U32(ctx, 31, 0x29FE3Cu);
    ctx->pc = 0x29FE38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29FE34u;
    // 0x29fe38: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x299868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x299868u, 0x29FE34u, 0x29FE3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29FE3Cu;
label_29fe3c:
    // 0x29fe3c: 0x3c02003c  lui         $v0, 0x3C
    ctx->pc = 0x29fe3cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
    // 0x29fe40: 0x3c05003c  lui         $a1, 0x3C
    ctx->pc = 0x29fe40u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)60 << 16));
    // 0x29fe44: 0x8c4811c8  lw          $t0, 0x11C8($v0)
    ctx->pc = 0x29fe44u;
    SET_GPR_S32(ctx, 8, (int32_t)FAST_READ32(0x3C11C8u));
    // 0x29fe48: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x29fe48u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29fe4c: 0x8e821180  lw          $v0, 0x1180($s4)
    ctx->pc = 0x29fe4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4480)));
    // 0x29fe50: 0x1114018  mult        $t0, $t0, $s1
    ctx->pc = 0x29fe50u;
    { int64_t result = (int64_t)GPR_S32(ctx, 8) * (int64_t)GPR_S32(ctx, 17); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 8, (int32_t)result); }
    // 0x29fe54: 0x8ca311ac  lw          $v1, 0x11AC($a1)
    ctx->pc = 0x29fe54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4524)));
    // 0x29fe58: 0x202382a  slt         $a3, $s0, $v0
    ctx->pc = 0x29fe58u;
    SET_GPR_U64(ctx, 7, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x29fe5c: 0x2446007f  addiu       $a2, $v0, 0x7F
    ctx->pc = 0x29fe5cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 127));
    // 0x29fe60: 0x47300b  movn        $a2, $v0, $a3
    ctx->pc = 0x29fe60u;
    if (GPR_U64(ctx, 7) != 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 2));
    // 0x29fe64: 0x2405004d  addiu       $a1, $zero, 0x4D
    ctx->pc = 0x29fe64u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 77));
    // 0x29fe68: 0x631c3  sra         $a2, $a2, 7
    ctx->pc = 0x29fe68u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 6), 7));
    // 0x29fe6c: 0x681821  addu        $v1, $v1, $t0
    ctx->pc = 0x29fe6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
    // 0x29fe70: 0x63438  dsll        $a2, $a2, 16
    ctx->pc = 0x29fe70u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << 16);
    // 0x29fe74: 0x31942  srl         $v1, $v1, 5
    ctx->pc = 0x29fe74u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 5));
    // 0x29fe78: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x29fe78u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x29fe7c: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x29fe7cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x29fe80: 0xc0a661a  jal         func_299868
    ctx->pc = 0x29FE80u;
    SET_GPR_U32(ctx, 31, 0x29FE88u);
    ctx->pc = 0x29FE84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29FE80u;
    // 0x29fe84: 0x663025  or          $a2, $v1, $a2 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) | GPR_U64(ctx, 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x299868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x299868u, 0x29FE80u, 0x29FE88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29FE88u;
label_29fe88:
    // 0x29fe88: 0x8e831180  lw          $v1, 0x1180($s4)
    ctx->pc = 0x29fe88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4480)));
    // 0x29fe8c: 0x203802a  slt         $s0, $s0, $v1
    ctx->pc = 0x29fe8cu;
    SET_GPR_U64(ctx, 16, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x29fe90: 0x2462003f  addiu       $v0, $v1, 0x3F
    ctx->pc = 0x29fe90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 63));
    // 0x29fe94: 0x70100b  movn        $v0, $v1, $s0
    ctx->pc = 0x29fe94u;
    if (GPR_U64(ctx, 16) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 3));
    // 0x29fe98: 0x21183  sra         $v0, $v0, 6
    ctx->pc = 0x29fe98u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 6));
    // 0x29fe9c: 0x18400038  blez        $v0, . + 4 + (0x38 << 2)
    ctx->pc = 0x29FE9Cu;
    {
        const bool branch_taken_0x29fe9c = (GPR_S64(ctx, 2) <= 0);
        ctx->pc = 0x29FEA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29FE9Cu;
        // 0x29fea0: 0x280a82d  daddu       $s5, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29fe9c) {
            ctx->pc = 0x29FF80u;
            goto label_29ff80;
        }
    }
    ctx->pc = 0x29FEA4u;
    // 0x29fea4: 0x3c110058  lui         $s1, 0x58
    ctx->pc = 0x29fea4u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)88 << 16));
    // 0x29fea8: 0x3c14003c  lui         $s4, 0x3C
    ctx->pc = 0x29fea8u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)60 << 16));
    // 0x29feac: 0x341effff  ori         $fp, $zero, 0xFFFF
    ctx->pc = 0x29feacu;
    SET_GPR_U64(ctx, 30, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x29feb0: 0x1ef03c  dsll32      $fp, $fp, 0
    ctx->pc = 0x29feb0u;
    SET_GPR_U64(ctx, 30, GPR_U64(ctx, 30) << (32 + 0));
    // 0x29feb4: 0x3417ffff  ori         $s7, $zero, 0xFFFF
    ctx->pc = 0x29feb4u;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x29feb8: 0x17b83c  dsll32      $s7, $s7, 0
    ctx->pc = 0x29feb8u;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 23) << (32 + 0));
    // 0x29febc: 0x36f78000  ori         $s7, $s7, 0x8000
    ctx->pc = 0x29febcu;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 23) | (uint64_t)(uint16_t)32768);
    // 0x29fec0: 0x2416ffff  addiu       $s6, $zero, -0x1
    ctx->pc = 0x29fec0u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x29fec4: 0x2410001f  addiu       $s0, $zero, 0x1F
    ctx->pc = 0x29fec4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
    // 0x29fec8: 0x8e8211b4  lw          $v0, 0x11B4($s4)
    ctx->pc = 0x29fec8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4532)));
    // 0x29fecc: 0x0  nop
    ctx->pc = 0x29feccu;
    // NOP
label_29fed0:
    // 0x29fed0: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x29fed0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29fed4: 0x121940  sll         $v1, $s2, 5
    ctx->pc = 0x29fed4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 18), 5));
    // 0x29fed8: 0x63438  dsll        $a2, $a2, 16
    ctx->pc = 0x29fed8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << 16);
    // 0x29fedc: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x29fedcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x29fee0: 0x663025  or          $a2, $v1, $a2
    ctx->pc = 0x29fee0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) | GPR_U64(ctx, 6));
    // 0x29fee4: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x29fee4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x29fee8: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x29fee8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29feec: 0xc23025  or          $a2, $a2, $v0
    ctx->pc = 0x29feecu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 2));
    // 0x29fef0: 0xc0a661a  jal         func_299868
    ctx->pc = 0x29FEF0u;
    SET_GPR_U32(ctx, 31, 0x29FEF8u);
    ctx->pc = 0x29FEF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29FEF0u;
    // 0x29fef4: 0x24050041  addiu       $a1, $zero, 0x41 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 65));
    ctx->in_delay_slot = false;
    ctx->pc = 0x299868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x299868u, 0x29FEF0u, 0x29FEF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29FEF8u;
label_29fef8:
    // 0x29fef8: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x29fef8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x29fefc: 0x8ea21180  lw          $v0, 0x1180($s5)
    ctx->pc = 0x29fefcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4480)));
    // 0x29ff00: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x29ff00u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29ff04: 0x8e266b80  lw          $a2, 0x6B80($s1)
    ctx->pc = 0x29ff04u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 27520)));
    // 0x29ff08: 0x2405000d  addiu       $a1, $zero, 0xD
    ctx->pc = 0x29ff08u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x29ff0c: 0x21fc2  srl         $v1, $v0, 31
    ctx->pc = 0x29ff0cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 31));
    // 0x29ff10: 0x26100020  addiu       $s0, $s0, 0x20
    ctx->pc = 0x29ff10u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x29ff14: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x29ff14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x29ff18: 0x63100  sll         $a2, $a2, 4
    ctx->pc = 0x29ff18u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
    // 0x29ff1c: 0x24030800  addiu       $v1, $zero, 0x800
    ctx->pc = 0x29ff1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
    // 0x29ff20: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x29ff20u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
    // 0x29ff24: 0x621023  subu        $v0, $v1, $v0
    ctx->pc = 0x29ff24u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x29ff28: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x29ff28u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x29ff2c: 0x63438  dsll        $a2, $a2, 16
    ctx->pc = 0x29ff2cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << 16);
    // 0x29ff30: 0x463025  or          $a2, $v0, $a2
    ctx->pc = 0x29ff30u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    // 0x29ff34: 0xc0a661a  jal         func_299868
    ctx->pc = 0x29FF34u;
    SET_GPR_U32(ctx, 31, 0x29FF3Cu);
    ctx->pc = 0x29FF38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29FF34u;
    // 0x29ff38: 0xde3025  or          $a2, $a2, $fp (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 30));
    ctx->in_delay_slot = false;
    ctx->pc = 0x299868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x299868u, 0x29FF34u, 0x29FF3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29FF3Cu;
label_29ff3c:
    // 0x29ff3c: 0x8e8211b4  lw          $v0, 0x11B4($s4)
    ctx->pc = 0x29ff3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4532)));
    // 0x29ff40: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x29ff40u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29ff44: 0x8e266b80  lw          $a2, 0x6B80($s1)
    ctx->pc = 0x29ff44u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 27520)));
    // 0x29ff48: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x29ff48u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x29ff4c: 0xc23021  addu        $a2, $a2, $v0
    ctx->pc = 0x29ff4cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x29ff50: 0x63100  sll         $a2, $a2, 4
    ctx->pc = 0x29ff50u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
    // 0x29ff54: 0x63438  dsll        $a2, $a2, 16
    ctx->pc = 0x29ff54u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << 16);
    // 0x29ff58: 0xc0a661a  jal         func_299868
    ctx->pc = 0x29FF58u;
    SET_GPR_U32(ctx, 31, 0x29FF60u);
    ctx->pc = 0x29FF5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29FF58u;
    // 0x29ff5c: 0xd73025  or          $a2, $a2, $s7 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 23));
    ctx->in_delay_slot = false;
    ctx->pc = 0x299868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x299868u, 0x29FF58u, 0x29FF60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29FF60u;
label_29ff60:
    // 0x29ff60: 0x8ea31180  lw          $v1, 0x1180($s5)
    ctx->pc = 0x29ff60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4480)));
    // 0x29ff64: 0x2462003f  addiu       $v0, $v1, 0x3F
    ctx->pc = 0x29ff64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 63));
    // 0x29ff68: 0x2c3202a  slt         $a0, $s6, $v1
    ctx->pc = 0x29ff68u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 22) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x29ff6c: 0x64100b  movn        $v0, $v1, $a0
    ctx->pc = 0x29ff6cu;
    if (GPR_U64(ctx, 4) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 3));
    // 0x29ff70: 0x21183  sra         $v0, $v0, 6
    ctx->pc = 0x29ff70u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 6));
    // 0x29ff74: 0x242102a  slt         $v0, $s2, $v0
    ctx->pc = 0x29ff74u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x29ff78: 0x1440ffd5  bnez        $v0, . + 4 + (-0x2B << 2)
    ctx->pc = 0x29FF78u;
    {
        const bool branch_taken_0x29ff78 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x29FF7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29FF78u;
        // 0x29ff7c: 0x8e8211b4  lw          $v0, 0x11B4($s4) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4532)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29ff78) {
            ctx->pc = 0x29FED0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_29fed0;
        }
    }
    ctx->pc = 0x29FF80u;
label_29ff80:
    // 0x29ff80: 0x7bb00090  lq          $s0, 0x90($sp)
    ctx->pc = 0x29ff80u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x29ff84: 0x7bb10080  lq          $s1, 0x80($sp)
    ctx->pc = 0x29ff84u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x29ff88: 0x7bb20070  lq          $s2, 0x70($sp)
    ctx->pc = 0x29ff88u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x29ff8c: 0x7bb30060  lq          $s3, 0x60($sp)
    ctx->pc = 0x29ff8cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x29ff90: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x29ff90u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x29ff94: 0x7bb50040  lq          $s5, 0x40($sp)
    ctx->pc = 0x29ff94u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x29ff98: 0x7bb60030  lq          $s6, 0x30($sp)
    ctx->pc = 0x29ff98u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x29ff9c: 0x7bb70020  lq          $s7, 0x20($sp)
    ctx->pc = 0x29ff9cu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x29ffa0: 0x7bbe0010  lq          $fp, 0x10($sp)
    ctx->pc = 0x29ffa0u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x29ffa4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x29ffa4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x29ffa8: 0x3e00008  jr          $ra
    ctx->pc = 0x29FFA8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29FFACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29FFA8u;
        // 0x29ffac: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29FFA8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x29FFB0u;
}
