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

// Function: func_00331900
// Address: 0x331900 - 0x331ad8
void func_00331900_0x331900(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00331900_0x331900");
#endif

    switch (ctx->pc) {
        case 0x331958u: goto label_331958;
        case 0x331998u: goto label_331998;
        case 0x3319acu: goto label_3319ac;
        case 0x3319b8u: goto label_3319b8;
        case 0x3319d8u: goto label_3319d8;
        case 0x3319e8u: goto label_3319e8;
        case 0x3319f4u: goto label_3319f4;
        case 0x331a54u: goto label_331a54;
        case 0x331a64u: goto label_331a64;
        case 0x331a74u: goto label_331a74;
        case 0x331a90u: goto label_331a90;
        default: break;
    }

    ctx->pc = 0x331900u;

    // 0x331900: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x331900u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x331904: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x331904u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x331908: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x331908u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x33190c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x33190cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x331910: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x331910u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x331914: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x331914u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x331918: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x331918u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x33191c: 0x14430017  bne         $v0, $v1, . + 4 + (0x17 << 2)
    ctx->pc = 0x33191Cu;
    {
        const bool branch_taken_0x33191c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x331920u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33191Cu;
        // 0x331920: 0x92240002  lbu         $a0, 0x2($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33191c) {
            ctx->pc = 0x33197Cu;
            goto label_33197c;
        }
    }
    ctx->pc = 0x331924u;
    // 0x331924: 0x82230002  lb          $v1, 0x2($s1)
    ctx->pc = 0x331924u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 2)));
    // 0x331928: 0x2c62000a  sltiu       $v0, $v1, 0xA
    ctx->pc = 0x331928u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)10) ? 1 : 0);
    // 0x33192c: 0x50400013  beql        $v0, $zero, . + 4 + (0x13 << 2)
    ctx->pc = 0x33192Cu;
    {
        const bool branch_taken_0x33192c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x33192c) {
            ctx->pc = 0x331930u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x33192Cu;
            // 0x331930: 0xae200004  sw          $zero, 0x4($s1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x33197Cu;
            goto label_33197c;
        }
    }
    ctx->pc = 0x331934u;
    // 0x331934: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x331934u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x331938: 0x3c030045  lui         $v1, 0x45
    ctx->pc = 0x331938u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)69 << 16));
    // 0x33193c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x33193cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x331940: 0x8c633f70  lw          $v1, 0x3F70($v1)
    ctx->pc = 0x331940u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16240)));
    // 0x331944: 0x600008  jr          $v1
    ctx->pc = 0x331944u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x331950u: goto label_331950;
            case 0x331970u: goto label_331970;
            case 0x331978u: goto label_331978;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x331944u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x33194Cu;
    // 0x33194c: 0x0  nop
    ctx->pc = 0x33194cu;
    // NOP
label_331950:
    // 0x331950: 0xc0cc4c4  jal         func_331310
    ctx->pc = 0x331950u;
    SET_GPR_U32(ctx, 31, 0x331958u);
    ctx->pc = 0x331954u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x331950u;
    // 0x331954: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x331310u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x331310u, 0x331950u, 0x331958u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x331958u;
label_331958:
    // 0x331958: 0xa2200002  sb          $zero, 0x2($s1)
    ctx->pc = 0x331958u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x33195c: 0x3c03003e  lui         $v1, 0x3E
    ctx->pc = 0x33195cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)62 << 16));
    // 0x331960: 0x2463846c  addiu       $v1, $v1, -0x7B94
    ctx->pc = 0x331960u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294935660));
    // 0x331964: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x331964u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3D846Cu));
    // 0x331968: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x331968u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x33196c: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x33196cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x3D846Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3D846Cu, _value); } while (0);
label_331970:
    // 0x331970: 0xa2200002  sb          $zero, 0x2($s1)
    ctx->pc = 0x331970u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x331974: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x331974u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_331978:
    // 0x331978: 0xae200004  sw          $zero, 0x4($s1)
    ctx->pc = 0x331978u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 0));
label_33197c:
    // 0x33197c: 0x41600  sll         $v0, $a0, 24
    ctx->pc = 0x33197cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 24));
    // 0x331980: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x331980u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x331984: 0x21603  sra         $v0, $v0, 24
    ctx->pc = 0x331984u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 24));
    // 0x331988: 0x5443002c  bnel        $v0, $v1, . + 4 + (0x2C << 2)
    ctx->pc = 0x331988u;
    {
        const bool branch_taken_0x331988 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x331988) {
            ctx->pc = 0x33198Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x331988u;
            // 0x33198c: 0x41600  sll         $v0, $a0, 24 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 24));
            ctx->in_delay_slot = false;
            ctx->pc = 0x331A3Cu;
            goto label_331a3c;
        }
    }
    ctx->pc = 0x331990u;
    // 0x331990: 0xc0cc71e  jal         func_331C78
    ctx->pc = 0x331990u;
    SET_GPR_U32(ctx, 31, 0x331998u);
    ctx->pc = 0x331994u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x331990u;
    // 0x331994: 0x24042000  addiu       $a0, $zero, 0x2000 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8192));
    ctx->in_delay_slot = false;
    ctx->pc = 0x331C78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x331C78u, 0x331990u, 0x331998u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x331998u;
label_331998:
    // 0x331998: 0xde250028  ld          $a1, 0x28($s1)
    ctx->pc = 0x331998u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 17), 40)));
    // 0x33199c: 0x8e240030  lw          $a0, 0x30($s1)
    ctx->pc = 0x33199cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 48)));
    // 0x3319a0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x3319a0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3319a4: 0xc0cc76e  jal         func_331DB8
    ctx->pc = 0x3319A4u;
    SET_GPR_U32(ctx, 31, 0x3319ACu);
    ctx->pc = 0x3319A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3319A4u;
    // 0x3319a8: 0x52af8  dsll        $a1, $a1, 11 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 11);
    ctx->in_delay_slot = false;
    ctx->pc = 0x331DB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x331DB8u, 0x3319A4u, 0x3319ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3319ACu;
label_3319ac:
    // 0x3319ac: 0x24042001  addiu       $a0, $zero, 0x2001
    ctx->pc = 0x3319acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8193));
    // 0x3319b0: 0xc0cc71e  jal         func_331C78
    ctx->pc = 0x3319B0u;
    SET_GPR_U32(ctx, 31, 0x3319B8u);
    ctx->pc = 0x3319B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3319B0u;
    // 0x3319b4: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x331C78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x331C78u, 0x3319B0u, 0x3319B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3319B8u;
label_3319b8:
    // 0x3319b8: 0x6010005  bgez        $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x3319B8u;
    {
        const bool branch_taken_0x3319b8 = (GPR_S64(ctx, 16) >= 0);
        ctx->pc = 0x3319BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3319B8u;
        // 0x3319bc: 0x24020009  addiu       $v0, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3319b8) {
            ctx->pc = 0x3319D0u;
            goto label_3319d0;
        }
    }
    ctx->pc = 0x3319C0u;
    // 0x3319c0: 0x10183c  dsll32      $v1, $s0, 0
    ctx->pc = 0x3319c0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) << (32 + 0));
    // 0x3319c4: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x3319c4u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x3319c8: 0xa2220002  sb          $v0, 0x2($s1)
    ctx->pc = 0x3319c8u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 2), (uint8_t)GPR_U32(ctx, 2));
    // 0x3319cc: 0xae230034  sw          $v1, 0x34($s1)
    ctx->pc = 0x3319ccu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 52), GPR_U32(ctx, 3));
label_3319d0:
    // 0x3319d0: 0xc0cc71e  jal         func_331C78
    ctx->pc = 0x3319D0u;
    SET_GPR_U32(ctx, 31, 0x3319D8u);
    ctx->pc = 0x3319D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3319D0u;
    // 0x3319d4: 0x24042100  addiu       $a0, $zero, 0x2100 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8448));
    ctx->in_delay_slot = false;
    ctx->pc = 0x331C78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x331C78u, 0x3319D0u, 0x3319D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3319D8u;
label_3319d8:
    // 0x3319d8: 0x8e240030  lw          $a0, 0x30($s1)
    ctx->pc = 0x3319d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 48)));
    // 0x3319dc: 0x8e250018  lw          $a1, 0x18($s1)
    ctx->pc = 0x3319dcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
    // 0x3319e0: 0xc0cc7ea  jal         func_331FA8
    ctx->pc = 0x3319E0u;
    SET_GPR_U32(ctx, 31, 0x3319E8u);
    ctx->pc = 0x3319E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3319E0u;
    // 0x3319e4: 0x8e260020  lw          $a2, 0x20($s1) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x331FA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x331FA8u, 0x3319E0u, 0x3319E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3319E8u;
label_3319e8:
    // 0x3319e8: 0x24042101  addiu       $a0, $zero, 0x2101
    ctx->pc = 0x3319e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8449));
    // 0x3319ec: 0xc0cc71e  jal         func_331C78
    ctx->pc = 0x3319ECu;
    SET_GPR_U32(ctx, 31, 0x3319F4u);
    ctx->pc = 0x3319F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3319ECu;
    // 0x3319f0: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x331C78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x331C78u, 0x3319ECu, 0x3319F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3319F4u;
label_3319f4:
    // 0x3319f4: 0x600000a  bltz        $s0, . + 4 + (0xA << 2)
    ctx->pc = 0x3319F4u;
    {
        const bool branch_taken_0x3319f4 = (GPR_S64(ctx, 16) < 0);
        ctx->pc = 0x3319F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3319F4u;
        // 0x3319f8: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3319f4) {
            ctx->pc = 0x331A20u;
            goto label_331a20;
        }
    }
    ctx->pc = 0x3319FCu;
    // 0x3319fc: 0x3c03003e  lui         $v1, 0x3E
    ctx->pc = 0x3319fcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)62 << 16));
    // 0x331a00: 0xa2220002  sb          $v0, 0x2($s1)
    ctx->pc = 0x331a00u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 2), (uint8_t)GPR_U32(ctx, 2));
    // 0x331a04: 0x24638468  addiu       $v1, $v1, -0x7B98
    ctx->pc = 0x331a04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294935656));
    // 0x331a08: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x331a08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x331a0c: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x331a0cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3D8468u));
    // 0x331a10: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x331a10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x331a14: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x331a14u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x3D8468u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3D8468u, _value); } while (0);
    // 0x331a18: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x331A18u;
    {
        const bool branch_taken_0x331a18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x331A1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x331A18u;
        // 0x331a1c: 0x41600  sll         $v0, $a0, 24 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x331a18) {
            ctx->pc = 0x331A3Cu;
            goto label_331a3c;
        }
    }
    ctx->pc = 0x331A20u;
label_331a20:
    // 0x331a20: 0x10183c  dsll32      $v1, $s0, 0
    ctx->pc = 0x331a20u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) << (32 + 0));
    // 0x331a24: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x331a24u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x331a28: 0x24020009  addiu       $v0, $zero, 0x9
    ctx->pc = 0x331a28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x331a2c: 0xa2220002  sb          $v0, 0x2($s1)
    ctx->pc = 0x331a2cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 2), (uint8_t)GPR_U32(ctx, 2));
    // 0x331a30: 0x24040009  addiu       $a0, $zero, 0x9
    ctx->pc = 0x331a30u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x331a34: 0xae230034  sw          $v1, 0x34($s1)
    ctx->pc = 0x331a34u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 52), GPR_U32(ctx, 3));
    // 0x331a38: 0x41600  sll         $v0, $a0, 24
    ctx->pc = 0x331a38u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 24));
label_331a3c:
    // 0x331a3c: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x331a3cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x331a40: 0x21603  sra         $v0, $v0, 24
    ctx->pc = 0x331a40u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 24));
    // 0x331a44: 0x1443001d  bne         $v0, $v1, . + 4 + (0x1D << 2)
    ctx->pc = 0x331A44u;
    {
        const bool branch_taken_0x331a44 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x331A48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x331A44u;
        // 0x331a48: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x331a44) {
            ctx->pc = 0x331ABCu;
            goto label_331abc;
        }
    }
    ctx->pc = 0x331A4Cu;
    // 0x331a4c: 0xc0cc71e  jal         func_331C78
    ctx->pc = 0x331A4Cu;
    SET_GPR_U32(ctx, 31, 0x331A54u);
    ctx->pc = 0x331A50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x331A4Cu;
    // 0x331a50: 0x24042200  addiu       $a0, $zero, 0x2200 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8704));
    ctx->in_delay_slot = false;
    ctx->pc = 0x331C78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x331C78u, 0x331A4Cu, 0x331A54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x331A54u;
label_331a54:
    // 0x331a54: 0x8e240030  lw          $a0, 0x30($s1)
    ctx->pc = 0x331a54u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 48)));
    // 0x331a58: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x331a58u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x331a5c: 0xc0cc79c  jal         func_331E70
    ctx->pc = 0x331A5Cu;
    SET_GPR_U32(ctx, 31, 0x331A64u);
    ctx->pc = 0x331A60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x331A5Cu;
    // 0x331a60: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x331E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x331E70u, 0x331A5Cu, 0x331A64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x331A64u;
label_331a64:
    // 0x331a64: 0x4410008  bgez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x331A64u;
    {
        const bool branch_taken_0x331a64 = (GPR_S64(ctx, 2) >= 0);
        if (branch_taken_0x331a64) {
            ctx->pc = 0x331A88u;
            goto label_331a88;
        }
    }
    ctx->pc = 0x331A6Cu;
    // 0x331a6c: 0xc0cc71e  jal         func_331C78
    ctx->pc = 0x331A6Cu;
    SET_GPR_U32(ctx, 31, 0x331A74u);
    ctx->pc = 0x331A70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x331A6Cu;
    // 0x331a70: 0x24042201  addiu       $a0, $zero, 0x2201 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8705));
    ctx->in_delay_slot = false;
    ctx->pc = 0x331C78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x331C78u, 0x331A6Cu, 0x331A74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x331A74u;
label_331a74:
    // 0x331a74: 0x24020009  addiu       $v0, $zero, 0x9
    ctx->pc = 0x331a74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x331a78: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x331a78u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x331a7c: 0xa2220002  sb          $v0, 0x2($s1)
    ctx->pc = 0x331a7cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 2), (uint8_t)GPR_U32(ctx, 2));
    // 0x331a80: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x331A80u;
    {
        const bool branch_taken_0x331a80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x331A84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x331A80u;
        // 0x331a84: 0xae230034  sw          $v1, 0x34($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 52), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x331a80) {
            ctx->pc = 0x331AB8u;
            goto label_331ab8;
        }
    }
    ctx->pc = 0x331A88u;
label_331a88:
    // 0x331a88: 0xc0cc71e  jal         func_331C78
    ctx->pc = 0x331A88u;
    SET_GPR_U32(ctx, 31, 0x331A90u);
    ctx->pc = 0x331A8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x331A88u;
    // 0x331a8c: 0x24042202  addiu       $a0, $zero, 0x2202 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8706));
    ctx->in_delay_slot = false;
    ctx->pc = 0x331C78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x331C78u, 0x331A88u, 0x331A90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x331A90u;
label_331a90:
    // 0x331a90: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x331a90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x331a94: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x331A94u;
    {
        const bool branch_taken_0x331a94 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x331A98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x331A94u;
        // 0x331a98: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x331a94) {
            ctx->pc = 0x331ABCu;
            goto label_331abc;
        }
    }
    ctx->pc = 0x331A9Cu;
    // 0x331a9c: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x331a9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x331aa0: 0x3c03003e  lui         $v1, 0x3E
    ctx->pc = 0x331aa0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)62 << 16));
    // 0x331aa4: 0xa2220002  sb          $v0, 0x2($s1)
    ctx->pc = 0x331aa4u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 2), (uint8_t)GPR_U32(ctx, 2));
    // 0x331aa8: 0x2463846c  addiu       $v1, $v1, -0x7B94
    ctx->pc = 0x331aa8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294935660));
    // 0x331aac: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x331aacu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3D846Cu));
    // 0x331ab0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x331ab0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x331ab4: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x331ab4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x3D846Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3D846Cu, _value); } while (0);
label_331ab8:
    // 0x331ab8: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x331ab8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_331abc:
    // 0x331abc: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x331abcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x331ac0: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x331ac0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x331ac4: 0x3e00008  jr          $ra
    ctx->pc = 0x331AC4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x331AC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x331AC4u;
        // 0x331ac8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x331AC4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x331ACCu;
    // 0x331acc: 0x0  nop
    ctx->pc = 0x331accu;
    // NOP
    // 0x331ad0: 0x8c62003c  lw          $v0, 0x3C($v1)
    ctx->pc = 0x331ad0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 60)));
    // 0x331ad4: 0x0  nop
    ctx->pc = 0x331ad4u;
    // NOP
    ctx->pc = 0x331ad8u;
}
