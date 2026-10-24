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

// Function: func_00299DE0
// Address: 0x299de0 - 0x29ac10
void func_00299DE0_0x299de0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00299DE0_0x299de0");
#endif

    switch (ctx->pc) {
        case 0x299e34u: goto label_299e34;
        case 0x299e44u: goto label_299e44;
        case 0x299e8cu: goto label_299e8c;
        case 0x299ec8u: goto label_299ec8;
        case 0x299edcu: goto label_299edc;
        case 0x299eecu: goto label_299eec;
        case 0x299f08u: goto label_299f08;
        case 0x299f18u: goto label_299f18;
        case 0x299f44u: goto label_299f44;
        case 0x299f8cu: goto label_299f8c;
        case 0x299f9cu: goto label_299f9c;
        case 0x299facu: goto label_299fac;
        case 0x299fe0u: goto label_299fe0;
        case 0x29a008u: goto label_29a008;
        case 0x29a024u: goto label_29a024;
        case 0x29a060u: goto label_29a060;
        case 0x29a08cu: goto label_29a08c;
        case 0x29a0d0u: goto label_29a0d0;
        case 0x29a150u: goto label_29a150;
        case 0x29a188u: goto label_29a188;
        case 0x29a1e4u: goto label_29a1e4;
        case 0x29a220u: goto label_29a220;
        case 0x29a248u: goto label_29a248;
        case 0x29a264u: goto label_29a264;
        case 0x29a2a0u: goto label_29a2a0;
        case 0x29a2ccu: goto label_29a2cc;
        case 0x29a314u: goto label_29a314;
        case 0x29a350u: goto label_29a350;
        case 0x29a390u: goto label_29a390;
        case 0x29a3d8u: goto label_29a3d8;
        case 0x29a420u: goto label_29a420;
        case 0x29a43cu: goto label_29a43c;
        case 0x29a454u: goto label_29a454;
        case 0x29a464u: goto label_29a464;
        case 0x29a47cu: goto label_29a47c;
        case 0x29a4d0u: goto label_29a4d0;
        case 0x29a4e0u: goto label_29a4e0;
        case 0x29a514u: goto label_29a514;
        case 0x29a574u: goto label_29a574;
        case 0x29a5b0u: goto label_29a5b0;
        case 0x29a5d8u: goto label_29a5d8;
        case 0x29a5f4u: goto label_29a5f4;
        case 0x29a630u: goto label_29a630;
        case 0x29a65cu: goto label_29a65c;
        case 0x29a6a0u: goto label_29a6a0;
        case 0x29a6e0u: goto label_29a6e0;
        case 0x29a71cu: goto label_29a71c;
        case 0x29a730u: goto label_29a730;
        case 0x29a740u: goto label_29a740;
        case 0x29a7a4u: goto label_29a7a4;
        case 0x29a7b0u: goto label_29a7b0;
        case 0x29a7f0u: goto label_29a7f0;
        case 0x29a818u: goto label_29a818;
        case 0x29a834u: goto label_29a834;
        case 0x29a870u: goto label_29a870;
        case 0x29a89cu: goto label_29a89c;
        case 0x29a8e0u: goto label_29a8e0;
        case 0x29a964u: goto label_29a964;
        case 0x29a974u: goto label_29a974;
        case 0x29a9d4u: goto label_29a9d4;
        case 0x29aa24u: goto label_29aa24;
        case 0x29aa60u: goto label_29aa60;
        case 0x29aa88u: goto label_29aa88;
        case 0x29aaa4u: goto label_29aaa4;
        case 0x29aaecu: goto label_29aaec;
        case 0x29ab20u: goto label_29ab20;
        case 0x29ab68u: goto label_29ab68;
        case 0x29abdcu: goto label_29abdc;
        default: break;
    }

    ctx->pc = 0x299de0u;

    // 0x299de0: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x299de0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
    // 0x299de4: 0x2405003f  addiu       $a1, $zero, 0x3F
    ctx->pc = 0x299de4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
    // 0x299de8: 0x7fb40070  sq          $s4, 0x70($sp)
    ctx->pc = 0x299de8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 20));
    // 0x299dec: 0x240600ff  addiu       $a2, $zero, 0xFF
    ctx->pc = 0x299decu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x299df0: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x299df0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x299df4: 0x7fb000b0  sq          $s0, 0xB0($sp)
    ctx->pc = 0x299df4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 16));
    // 0x299df8: 0x7fb100a0  sq          $s1, 0xA0($sp)
    ctx->pc = 0x299df8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 17));
    // 0x299dfc: 0x7fb20090  sq          $s2, 0x90($sp)
    ctx->pc = 0x299dfcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 18));
    // 0x299e00: 0x3c11003c  lui         $s1, 0x3C
    ctx->pc = 0x299e00u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)60 << 16));
    // 0x299e04: 0x7fb30080  sq          $s3, 0x80($sp)
    ctx->pc = 0x299e04u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 19));
    // 0x299e08: 0x3c12003c  lui         $s2, 0x3C
    ctx->pc = 0x299e08u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)60 << 16));
    // 0x299e0c: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x299e0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
    // 0x299e10: 0x2410ffff  addiu       $s0, $zero, -0x1
    ctx->pc = 0x299e10u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x299e14: 0x7fb70040  sq          $s7, 0x40($sp)
    ctx->pc = 0x299e14u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 23));
    // 0x299e18: 0x3c13003c  lui         $s3, 0x3C
    ctx->pc = 0x299e18u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)60 << 16));
    // 0x299e1c: 0x7fb60050  sq          $s6, 0x50($sp)
    ctx->pc = 0x299e1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 22));
    // 0x299e20: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x299e20u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x299e24: 0x7fbe0030  sq          $fp, 0x30($sp)
    ctx->pc = 0x299e24u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 30));
    // 0x299e28: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x299e28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x299e2c: 0xc0a661a  jal         func_299868
    ctx->pc = 0x299E2Cu;
    SET_GPR_U32(ctx, 31, 0x299E34u);
    ctx->pc = 0x299E30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x299E2Cu;
    // 0x299e30: 0x3c170045  lui         $s7, 0x45 (Delay Slot)
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)69 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x299868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x299868u, 0x299E2Cu, 0x299E34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x299E34u;
label_299e34:
    // 0x299e34: 0x24050046  addiu       $a1, $zero, 0x46
    ctx->pc = 0x299e34u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 70));
    // 0x299e38: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x299e38u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x299e3c: 0xc0a661a  jal         func_299868
    ctx->pc = 0x299E3Cu;
    SET_GPR_U32(ctx, 31, 0x299E44u);
    ctx->pc = 0x299E40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x299E3Cu;
    // 0x299e40: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x299868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x299868u, 0x299E3Cu, 0x299E44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x299E44u;
label_299e44:
    // 0x299e44: 0x8e46118c  lw          $a2, 0x118C($s2)
    ctx->pc = 0x299e44u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4492)));
    // 0x299e48: 0x24050800  addiu       $a1, $zero, 0x800
    ctx->pc = 0x299e48u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
    // 0x299e4c: 0x8e231180  lw          $v1, 0x1180($s1)
    ctx->pc = 0x299e4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4480)));
    // 0x299e50: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x299e50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x299e54: 0x63fc2  srl         $a3, $a2, 31
    ctx->pc = 0x299e54u;
    SET_GPR_S32(ctx, 7, (int32_t)SRL32(GPR_U32(ctx, 6), 31));
    // 0x299e58: 0xc73021  addu        $a2, $a2, $a3
    ctx->pc = 0x299e58u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
    // 0x299e5c: 0x317c2  srl         $v0, $v1, 31
    ctx->pc = 0x299e5cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 3), 31));
    // 0x299e60: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x299e60u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x299e64: 0x63043  sra         $a2, $a2, 1
    ctx->pc = 0x299e64u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 6), 1));
    // 0x299e68: 0xa63023  subu        $a2, $a1, $a2
    ctx->pc = 0x299e68u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x299e6c: 0x31843  sra         $v1, $v1, 1
    ctx->pc = 0x299e6cu;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 1));
    // 0x299e70: 0xa32823  subu        $a1, $a1, $v1
    ctx->pc = 0x299e70u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x299e74: 0x63100  sll         $a2, $a2, 4
    ctx->pc = 0x299e74u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
    // 0x299e78: 0x52900  sll         $a1, $a1, 4
    ctx->pc = 0x299e78u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
    // 0x299e7c: 0x6303c  dsll32      $a2, $a2, 0
    ctx->pc = 0x299e7cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << (32 + 0));
    // 0x299e80: 0xa63025  or          $a2, $a1, $a2
    ctx->pc = 0x299e80u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 5) | GPR_U64(ctx, 6));
    // 0x299e84: 0xc0a661a  jal         func_299868
    ctx->pc = 0x299E84u;
    SET_GPR_U32(ctx, 31, 0x299E8Cu);
    ctx->pc = 0x299E88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x299E84u;
    // 0x299e88: 0x24050019  addiu       $a1, $zero, 0x19 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
    ctx->in_delay_slot = false;
    ctx->pc = 0x299868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x299868u, 0x299E84u, 0x299E8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x299E8Cu;
label_299e8c:
    // 0x299e8c: 0x8e241180  lw          $a0, 0x1180($s1)
    ctx->pc = 0x299e8cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4480)));
    // 0x299e90: 0x3c03003c  lui         $v1, 0x3C
    ctx->pc = 0x299e90u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)60 << 16));
    // 0x299e94: 0x8c6211ac  lw          $v0, 0x11AC($v1)
    ctx->pc = 0x299e94u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3C11ACu));
    // 0x299e98: 0x2405004d  addiu       $a1, $zero, 0x4D
    ctx->pc = 0x299e98u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 77));
    // 0x299e9c: 0x204182a  slt         $v1, $s0, $a0
    ctx->pc = 0x299e9cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x299ea0: 0x2486003f  addiu       $a2, $a0, 0x3F
    ctx->pc = 0x299ea0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 63));
    // 0x299ea4: 0x83300b  movn        $a2, $a0, $v1
    ctx->pc = 0x299ea4u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 4));
    // 0x299ea8: 0x21142  srl         $v0, $v0, 5
    ctx->pc = 0x299ea8u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 5));
    // 0x299eac: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x299eacu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x299eb0: 0x63183  sra         $a2, $a2, 6
    ctx->pc = 0x299eb0u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 6), 6));
    // 0x299eb4: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x299eb4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x299eb8: 0x63438  dsll        $a2, $a2, 16
    ctx->pc = 0x299eb8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << 16);
    // 0x299ebc: 0x463025  or          $a2, $v0, $a2
    ctx->pc = 0x299ebcu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    // 0x299ec0: 0xc0a661a  jal         func_299868
    ctx->pc = 0x299EC0u;
    SET_GPR_U32(ctx, 31, 0x299EC8u);
    ctx->pc = 0x299EC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x299EC0u;
    // 0x299ec4: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x299868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x299868u, 0x299EC0u, 0x299EC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x299EC8u;
label_299ec8:
    // 0x299ec8: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x299ec8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x299ecc: 0x34068000  ori         $a2, $zero, 0x8000
    ctx->pc = 0x299eccu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x299ed0: 0x63638  dsll        $a2, $a2, 24
    ctx->pc = 0x299ed0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << 24);
    // 0x299ed4: 0xc0a661a  jal         func_299868
    ctx->pc = 0x299ED4u;
    SET_GPR_U32(ctx, 31, 0x299EDCu);
    ctx->pc = 0x299ED8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x299ED4u;
    // 0x299ed8: 0x2405003b  addiu       $a1, $zero, 0x3B (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 59));
    ctx->in_delay_slot = false;
    ctx->pc = 0x299868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x299868u, 0x299ED4u, 0x299EDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x299EDCu;
label_299edc:
    // 0x299edc: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x299edcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x299ee0: 0x24050043  addiu       $a1, $zero, 0x43
    ctx->pc = 0x299ee0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 67));
    // 0x299ee4: 0xc0a661a  jal         func_299868
    ctx->pc = 0x299EE4u;
    SET_GPR_U32(ctx, 31, 0x299EECu);
    ctx->pc = 0x299EE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x299EE4u;
    // 0x299ee8: 0x2406002a  addiu       $a2, $zero, 0x2A (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 42));
    ctx->in_delay_slot = false;
    ctx->pc = 0x299868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x299868u, 0x299EE4u, 0x299EECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x299EECu;
label_299eec:
    // 0x299eec: 0xafa00010  sw          $zero, 0x10($sp)
    ctx->pc = 0x299eecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 0));
    // 0x299ef0: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x299ef0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x299ef4: 0x34068500  ori         $a2, $zero, 0x8500
    ctx->pc = 0x299ef4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)34048);
    // 0x299ef8: 0x63478  dsll        $a2, $a2, 17
    ctx->pc = 0x299ef8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << 17);
    // 0x299efc: 0x34c600f8  ori         $a2, $a2, 0xF8
    ctx->pc = 0x299efcu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)248);
    // 0x299f00: 0xc0a661a  jal         func_299868
    ctx->pc = 0x299F00u;
    SET_GPR_U32(ctx, 31, 0x299F08u);
    ctx->pc = 0x299F04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x299F00u;
    // 0x299f04: 0x2405004f  addiu       $a1, $zero, 0x4F (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 79));
    ctx->in_delay_slot = false;
    ctx->pc = 0x299868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x299868u, 0x299F00u, 0x299F08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x299F08u;
label_299f08:
    // 0x299f08: 0x3c060003  lui         $a2, 0x3
    ctx->pc = 0x299f08u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)3 << 16));
    // 0x299f0c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x299f0cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x299f10: 0xc0a661a  jal         func_299868
    ctx->pc = 0x299F10u;
    SET_GPR_U32(ctx, 31, 0x299F18u);
    ctx->pc = 0x299F14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x299F10u;
    // 0x299f14: 0x24050048  addiu       $a1, $zero, 0x48 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 72));
    ctx->in_delay_slot = false;
    ctx->pc = 0x299868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x299868u, 0x299F10u, 0x299F18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x299F18u;
label_299f18:
    // 0x299f18: 0x8e221180  lw          $v0, 0x1180($s1)
    ctx->pc = 0x299f18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4480)));
    // 0x299f1c: 0x2403000a  addiu       $v1, $zero, 0xA
    ctx->pc = 0x299f1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x299f20: 0x8e46118c  lw          $a2, 0x118C($s2)
    ctx->pc = 0x299f20u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4492)));
    // 0x299f24: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x299f24u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x299f28: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x299f28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x299f2c: 0x24050009  addiu       $a1, $zero, 0x9
    ctx->pc = 0x299f2cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x299f30: 0x630bc  dsll32      $a2, $a2, 2
    ctx->pc = 0x299f30u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << (32 + 2));
    // 0x299f34: 0x213b8  dsll        $v0, $v0, 14
    ctx->pc = 0x299f34u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 14);
    // 0x299f38: 0xc33025  or          $a2, $a2, $v1
    ctx->pc = 0x299f38u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 3));
    // 0x299f3c: 0xc0a661a  jal         func_299868
    ctx->pc = 0x299F3Cu;
    SET_GPR_U32(ctx, 31, 0x299F44u);
    ctx->pc = 0x299F40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x299F3Cu;
    // 0x299f40: 0x463025  or          $a2, $v0, $a2 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x299868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x299868u, 0x299F3Cu, 0x299F44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x299F44u;
label_299f44:
    // 0x299f44: 0x8e231180  lw          $v1, 0x1180($s1)
    ctx->pc = 0x299f44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4480)));
    // 0x299f48: 0x3c0427a0  lui         $a0, 0x27A0
    ctx->pc = 0x299f48u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)10144 << 16));
    // 0x299f4c: 0x34841f00  ori         $a0, $a0, 0x1F00
    ctx->pc = 0x299f4cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)7936);
    // 0x299f50: 0x8e6511b8  lw          $a1, 0x11B8($s3)
    ctx->pc = 0x299f50u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4536)));
    // 0x299f54: 0x3407c000  ori         $a3, $zero, 0xC000
    ctx->pc = 0x299f54u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)49152);
    // 0x299f58: 0x73d38  dsll        $a3, $a3, 20
    ctx->pc = 0x299f58u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) << 20);
    // 0x299f5c: 0x203102a  slt         $v0, $s0, $v1
    ctx->pc = 0x299f5cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x299f60: 0x2466003f  addiu       $a2, $v1, 0x3F
    ctx->pc = 0x299f60u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 63));
    // 0x299f64: 0x62300b  movn        $a2, $v1, $v0
    ctx->pc = 0x299f64u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 3));
    // 0x299f68: 0x52fb8  dsll        $a1, $a1, 30
    ctx->pc = 0x299f68u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 30);
    // 0x299f6c: 0x63183  sra         $a2, $a2, 6
    ctx->pc = 0x299f6cu;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 6), 6));
    // 0x299f70: 0xa42825  or          $a1, $a1, $a0
    ctx->pc = 0x299f70u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 4));
    // 0x299f74: 0x633b8  dsll        $a2, $a2, 14
    ctx->pc = 0x299f74u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << 14);
    // 0x299f78: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x299f78u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x299f7c: 0xc53025  or          $a2, $a2, $a1
    ctx->pc = 0x299f7cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 5));
    // 0x299f80: 0xc73025  or          $a2, $a2, $a3
    ctx->pc = 0x299f80u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 7));
    // 0x299f84: 0xc0a661a  jal         func_299868
    ctx->pc = 0x299F84u;
    SET_GPR_U32(ctx, 31, 0x299F8Cu);
    ctx->pc = 0x299F88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x299F84u;
    // 0x299f88: 0x24050007  addiu       $a1, $zero, 0x7 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x299868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x299868u, 0x299F84u, 0x299F8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x299F8Cu;
label_299f8c:
    // 0x299f8c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x299f8cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x299f90: 0x24050015  addiu       $a1, $zero, 0x15
    ctx->pc = 0x299f90u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
    // 0x299f94: 0xc0a661a  jal         func_299868
    ctx->pc = 0x299F94u;
    SET_GPR_U32(ctx, 31, 0x299F9Cu);
    ctx->pc = 0x299F98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x299F94u;
    // 0x299f98: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x299868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x299868u, 0x299F94u, 0x299F9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x299F9Cu;
label_299f9c:
    // 0x299f9c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x299f9cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x299fa0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x299fa0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x299fa4: 0xc0a661a  jal         func_299868
    ctx->pc = 0x299FA4u;
    SET_GPR_U32(ctx, 31, 0x299FACu);
    ctx->pc = 0x299FA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x299FA4u;
    // 0x299fa8: 0x24060316  addiu       $a2, $zero, 0x316 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 790));
    ctx->in_delay_slot = false;
    ctx->pc = 0x299868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x299868u, 0x299FA4u, 0x299FACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x299FACu;
label_299fac:
    // 0x299fac: 0x8e231180  lw          $v1, 0x1180($s1)
    ctx->pc = 0x299facu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4480)));
    // 0x299fb0: 0x203802a  slt         $s0, $s0, $v1
    ctx->pc = 0x299fb0u;
    SET_GPR_U64(ctx, 16, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x299fb4: 0x2462003f  addiu       $v0, $v1, 0x3F
    ctx->pc = 0x299fb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 63));
    // 0x299fb8: 0x70100b  movn        $v0, $v1, $s0
    ctx->pc = 0x299fb8u;
    if (GPR_U64(ctx, 16) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 3));
    // 0x299fbc: 0x21183  sra         $v0, $v0, 6
    ctx->pc = 0x299fbcu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 6));
    // 0x299fc0: 0x1840004c  blez        $v0, . + 4 + (0x4C << 2)
    ctx->pc = 0x299FC0u;
    {
        const bool branch_taken_0x299fc0 = (GPR_S64(ctx, 2) <= 0);
        ctx->pc = 0x299FC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x299FC0u;
        // 0x299fc4: 0x220802d  daddu       $s0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x299fc0) {
            ctx->pc = 0x29A0F4u;
            goto label_29a0f4;
        }
    }
    ctx->pc = 0x299FC8u;
    // 0x299fc8: 0x3c160058  lui         $s6, 0x58
    ctx->pc = 0x299fc8u;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)88 << 16));
    // 0x299fcc: 0x3413ffff  ori         $s3, $zero, 0xFFFF
    ctx->pc = 0x299fccu;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x299fd0: 0x13983c  dsll32      $s3, $s3, 0
    ctx->pc = 0x299fd0u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) << (32 + 0));
    // 0x299fd4: 0x2411003f  addiu       $s1, $zero, 0x3F
    ctx->pc = 0x299fd4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
    // 0x299fd8: 0x8e42118c  lw          $v0, 0x118C($s2)
    ctx->pc = 0x299fd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4492)));
    // 0x299fdc: 0x0  nop
    ctx->pc = 0x299fdcu;
    // NOP
label_299fe0:
    // 0x299fe0: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x299fe0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x299fe4: 0x151980  sll         $v1, $s5, 6
    ctx->pc = 0x299fe4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 21), 6));
    // 0x299fe8: 0x63438  dsll        $a2, $a2, 16
    ctx->pc = 0x299fe8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << 16);
    // 0x299fec: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x299fecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x299ff0: 0x663025  or          $a2, $v1, $a2
    ctx->pc = 0x299ff0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) | GPR_U64(ctx, 6));
    // 0x299ff4: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x299ff4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x299ff8: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x299ff8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x299ffc: 0xc23025  or          $a2, $a2, $v0
    ctx->pc = 0x299ffcu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 2));
    // 0x29a000: 0xc0a661a  jal         func_299868
    ctx->pc = 0x29A000u;
    SET_GPR_U32(ctx, 31, 0x29A008u);
    ctx->pc = 0x29A004u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29A000u;
    // 0x29a004: 0x24050041  addiu       $a1, $zero, 0x41 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 65));
    ctx->in_delay_slot = false;
    ctx->pc = 0x299868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x299868u, 0x29A000u, 0x29A008u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29A008u;
label_29a008:
    // 0x29a008: 0x26b50001  addiu       $s5, $s5, 0x1
    ctx->pc = 0x29a008u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
    // 0x29a00c: 0x3c060008  lui         $a2, 0x8
    ctx->pc = 0x29a00cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)8 << 16));
    // 0x29a010: 0x34c60008  ori         $a2, $a2, 0x8
    ctx->pc = 0x29a010u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)8);
    // 0x29a014: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x29a014u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29a018: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x29a018u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x29a01c: 0xc0a661a  jal         func_299868
    ctx->pc = 0x29A01Cu;
    SET_GPR_U32(ctx, 31, 0x29A024u);
    ctx->pc = 0x29A020u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29A01Cu;
    // 0x29a020: 0x26310040  addiu       $s1, $s1, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x299868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x299868u, 0x29A01Cu, 0x29A024u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29A024u;
label_29a024:
    // 0x29a024: 0x8e021180  lw          $v0, 0x1180($s0)
    ctx->pc = 0x29a024u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4480)));
    // 0x29a028: 0x24070800  addiu       $a3, $zero, 0x800
    ctx->pc = 0x29a028u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
    // 0x29a02c: 0x8ec66b80  lw          $a2, 0x6B80($s6)
    ctx->pc = 0x29a02cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 27520)));
    // 0x29a030: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x29a030u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29a034: 0x21fc2  srl         $v1, $v0, 31
    ctx->pc = 0x29a034u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 31));
    // 0x29a038: 0x2405000d  addiu       $a1, $zero, 0xD
    ctx->pc = 0x29a038u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x29a03c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x29a03cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x29a040: 0x63100  sll         $a2, $a2, 4
    ctx->pc = 0x29a040u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
    // 0x29a044: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x29a044u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
    // 0x29a048: 0xe23823  subu        $a3, $a3, $v0
    ctx->pc = 0x29a048u;
    SET_GPR_S32(ctx, 7, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x29a04c: 0x63438  dsll        $a2, $a2, 16
    ctx->pc = 0x29a04cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << 16);
    // 0x29a050: 0x73900  sll         $a3, $a3, 4
    ctx->pc = 0x29a050u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 4));
    // 0x29a054: 0xe63025  or          $a2, $a3, $a2
    ctx->pc = 0x29a054u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 7) | GPR_U64(ctx, 6));
    // 0x29a058: 0xc0a661a  jal         func_299868
    ctx->pc = 0x29A058u;
    SET_GPR_U32(ctx, 31, 0x29A060u);
    ctx->pc = 0x29A05Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29A058u;
    // 0x29a05c: 0xd33025  or          $a2, $a2, $s3 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 19));
    ctx->in_delay_slot = false;
    ctx->pc = 0x299868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x299868u, 0x29A058u, 0x29A060u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29A060u;
label_29a060:
    // 0x29a060: 0x8e46118c  lw          $a2, 0x118C($s2)
    ctx->pc = 0x29a060u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4492)));
    // 0x29a064: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x29a064u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29a068: 0x8e021180  lw          $v0, 0x1180($s0)
    ctx->pc = 0x29a068u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4480)));
    // 0x29a06c: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x29a06cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x29a070: 0x63100  sll         $a2, $a2, 4
    ctx->pc = 0x29a070u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
    // 0x29a074: 0x24c60009  addiu       $a2, $a2, 0x9
    ctx->pc = 0x29a074u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 9));
    // 0x29a078: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x29a078u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x29a07c: 0x24420009  addiu       $v0, $v0, 0x9
    ctx->pc = 0x29a07cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 9));
    // 0x29a080: 0x63438  dsll        $a2, $a2, 16
    ctx->pc = 0x29a080u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << 16);
    // 0x29a084: 0xc0a661a  jal         func_299868
    ctx->pc = 0x29A084u;
    SET_GPR_U32(ctx, 31, 0x29A08Cu);
    ctx->pc = 0x29A088u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29A084u;
    // 0x29a088: 0x463025  or          $a2, $v0, $a2 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x299868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x299868u, 0x29A084u, 0x29A08Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29A08Cu;
label_29a08c:
    // 0x29a08c: 0x8e031180  lw          $v1, 0x1180($s0)
    ctx->pc = 0x29a08cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4480)));
    // 0x29a090: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x29a090u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29a094: 0x8ec66b80  lw          $a2, 0x6B80($s6)
    ctx->pc = 0x29a094u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 27520)));
    // 0x29a098: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x29a098u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x29a09c: 0x8e47118c  lw          $a3, 0x118C($s2)
    ctx->pc = 0x29a09cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4492)));
    // 0x29a0a0: 0x317c2  srl         $v0, $v1, 31
    ctx->pc = 0x29a0a0u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 3), 31));
    // 0x29a0a4: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x29a0a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x29a0a8: 0xc73021  addu        $a2, $a2, $a3
    ctx->pc = 0x29a0a8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
    // 0x29a0ac: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x29a0acu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
    // 0x29a0b0: 0x24630800  addiu       $v1, $v1, 0x800
    ctx->pc = 0x29a0b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2048));
    // 0x29a0b4: 0x63100  sll         $a2, $a2, 4
    ctx->pc = 0x29a0b4u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
    // 0x29a0b8: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x29a0b8u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x29a0bc: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x29a0bcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x29a0c0: 0x63438  dsll        $a2, $a2, 16
    ctx->pc = 0x29a0c0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << 16);
    // 0x29a0c4: 0x663025  or          $a2, $v1, $a2
    ctx->pc = 0x29a0c4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) | GPR_U64(ctx, 6));
    // 0x29a0c8: 0xc0a661a  jal         func_299868
    ctx->pc = 0x29A0C8u;
    SET_GPR_U32(ctx, 31, 0x29A0D0u);
    ctx->pc = 0x29A0CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29A0C8u;
    // 0x29a0cc: 0xd33025  or          $a2, $a2, $s3 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 19));
    ctx->in_delay_slot = false;
    ctx->pc = 0x299868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x299868u, 0x29A0C8u, 0x29A0D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29A0D0u;
label_29a0d0:
    // 0x29a0d0: 0x8e041180  lw          $a0, 0x1180($s0)
    ctx->pc = 0x29a0d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4480)));
    // 0x29a0d4: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x29a0d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x29a0d8: 0x64182a  slt         $v1, $v1, $a0
    ctx->pc = 0x29a0d8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x29a0dc: 0x2482003f  addiu       $v0, $a0, 0x3F
    ctx->pc = 0x29a0dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 63));
    // 0x29a0e0: 0x83100b  movn        $v0, $a0, $v1
    ctx->pc = 0x29a0e0u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 4));
    // 0x29a0e4: 0x21183  sra         $v0, $v0, 6
    ctx->pc = 0x29a0e4u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 6));
    // 0x29a0e8: 0x2a2102a  slt         $v0, $s5, $v0
    ctx->pc = 0x29a0e8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 21) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x29a0ec: 0x1440ffbc  bnez        $v0, . + 4 + (-0x44 << 2)
    ctx->pc = 0x29A0ECu;
    {
        const bool branch_taken_0x29a0ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x29A0F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29A0ECu;
        // 0x29a0f0: 0x8e42118c  lw          $v0, 0x118C($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4492)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29a0ec) {
            ctx->pc = 0x299FE0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_299fe0;
        }
    }
    ctx->pc = 0x29A0F4u;
label_29a0f4:
    // 0x29a0f4: 0x3c02003c  lui         $v0, 0x3C
    ctx->pc = 0x29a0f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
    // 0x29a0f8: 0x3c03003c  lui         $v1, 0x3C
    ctx->pc = 0x29a0f8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)60 << 16));
    // 0x29a0fc: 0x8c441180  lw          $a0, 0x1180($v0)
    ctx->pc = 0x29a0fcu;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x3C1180u));
    // 0x29a100: 0x2410ffff  addiu       $s0, $zero, -0x1
    ctx->pc = 0x29a100u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x29a104: 0x8c6611ac  lw          $a2, 0x11AC($v1)
    ctx->pc = 0x29a104u;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x3C11ACu));
    // 0x29a108: 0x3405fffc  ori         $a1, $zero, 0xFFFC
    ctx->pc = 0x29a108u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65532);
    // 0x29a10c: 0x52d38  dsll        $a1, $a1, 20
    ctx->pc = 0x29a10cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 20);
    // 0x29a110: 0x34a58000  ori         $a1, $a1, 0x8000
    ctx->pc = 0x29a110u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)32768);
    // 0x29a114: 0x52ab8  dsll        $a1, $a1, 10
    ctx->pc = 0x29a114u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 10);
    // 0x29a118: 0x204182a  slt         $v1, $s0, $a0
    ctx->pc = 0x29a118u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x29a11c: 0x2482003f  addiu       $v0, $a0, 0x3F
    ctx->pc = 0x29a11cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 63));
    // 0x29a120: 0x83100b  movn        $v0, $a0, $v1
    ctx->pc = 0x29a120u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 4));
    // 0x29a124: 0x63142  srl         $a2, $a2, 5
    ctx->pc = 0x29a124u;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 6), 5));
    // 0x29a128: 0x6303c  dsll32      $a2, $a2, 0
    ctx->pc = 0x29a128u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << (32 + 0));
    // 0x29a12c: 0x21183  sra         $v0, $v0, 6
    ctx->pc = 0x29a12cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 6));
    // 0x29a130: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x29a130u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x29a134: 0x6303e  dsrl32      $a2, $a2, 0
    ctx->pc = 0x29a134u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) >> (32 + 0));
    // 0x29a138: 0xc23025  or          $a2, $a2, $v0
    ctx->pc = 0x29a138u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 2));
    // 0x29a13c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x29a13cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29a140: 0xc53025  or          $a2, $a2, $a1
    ctx->pc = 0x29a140u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 5));
    // 0x29a144: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x29a144u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29a148: 0xc0a661a  jal         func_299868
    ctx->pc = 0x29A148u;
    SET_GPR_U32(ctx, 31, 0x29A150u);
    ctx->pc = 0x29A14Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29A148u;
    // 0x29a14c: 0x2405004d  addiu       $a1, $zero, 0x4D (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 77));
    ctx->in_delay_slot = false;
    ctx->pc = 0x299868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x299868u, 0x29A148u, 0x29A150u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29A150u;
label_29a150:
    // 0x29a150: 0x3c04003c  lui         $a0, 0x3C
    ctx->pc = 0x29a150u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)60 << 16));
    // 0x29a154: 0x2403000a  addiu       $v1, $zero, 0xA
    ctx->pc = 0x29a154u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x29a158: 0x8c86118c  lw          $a2, 0x118C($a0)
    ctx->pc = 0x29a158u;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x3C118Cu));
    // 0x29a15c: 0x24050009  addiu       $a1, $zero, 0x9
    ctx->pc = 0x29a15cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x29a160: 0x3c04003c  lui         $a0, 0x3C
    ctx->pc = 0x29a160u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)60 << 16));
    // 0x29a164: 0x8c821180  lw          $v0, 0x1180($a0)
    ctx->pc = 0x29a164u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3C1180u));
    // 0x29a168: 0x63040  sll         $a2, $a2, 1
    ctx->pc = 0x29a168u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 1));
    // 0x29a16c: 0x630bc  dsll32      $a2, $a2, 2
    ctx->pc = 0x29a16cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << (32 + 2));
    // 0x29a170: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x29a170u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29a174: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x29a174u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x29a178: 0xc33025  or          $a2, $a2, $v1
    ctx->pc = 0x29a178u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 3));
    // 0x29a17c: 0x213b8  dsll        $v0, $v0, 14
    ctx->pc = 0x29a17cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 14);
    // 0x29a180: 0xc0a661a  jal         func_299868
    ctx->pc = 0x29A180u;
    SET_GPR_U32(ctx, 31, 0x29A188u);
    ctx->pc = 0x29A184u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29A180u;
    // 0x29a184: 0x463025  or          $a2, $v0, $a2 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x299868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x299868u, 0x29A180u, 0x29A188u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29A188u;
label_29a188:
    // 0x29a188: 0x3c02003c  lui         $v0, 0x3C
    ctx->pc = 0x29a188u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
    // 0x29a18c: 0x3c04003c  lui         $a0, 0x3C
    ctx->pc = 0x29a18cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)60 << 16));
    // 0x29a190: 0x8c451180  lw          $a1, 0x1180($v0)
    ctx->pc = 0x29a190u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x3C1180u));
    // 0x29a194: 0x3c072420  lui         $a3, 0x2420
    ctx->pc = 0x29a194u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)9248 << 16));
    // 0x29a198: 0x8c8311b8  lw          $v1, 0x11B8($a0)
    ctx->pc = 0x29a198u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x3C11B8u));
    // 0x29a19c: 0x3408c000  ori         $t0, $zero, 0xC000
    ctx->pc = 0x29a19cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)49152);
    // 0x29a1a0: 0x84538  dsll        $t0, $t0, 20
    ctx->pc = 0x29a1a0u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) << 20);
    // 0x29a1a4: 0x205202a  slt         $a0, $s0, $a1
    ctx->pc = 0x29a1a4u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x29a1a8: 0x24a2003f  addiu       $v0, $a1, 0x3F
    ctx->pc = 0x29a1a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 63));
    // 0x29a1ac: 0xa4100b  movn        $v0, $a1, $a0
    ctx->pc = 0x29a1acu;
    if (GPR_U64(ctx, 4) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 5));
    // 0x29a1b0: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x29a1b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x29a1b4: 0x3c04003c  lui         $a0, 0x3C
    ctx->pc = 0x29a1b4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)60 << 16));
    // 0x29a1b8: 0x21183  sra         $v0, $v0, 6
    ctx->pc = 0x29a1b8u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 6));
    // 0x29a1bc: 0x9c8611ac  lwu         $a2, 0x11AC($a0)
    ctx->pc = 0x29a1bcu;
    SET_GPR_ZE32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 4), 4524)));
    // 0x29a1c0: 0x213b8  dsll        $v0, $v0, 14
    ctx->pc = 0x29a1c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 14);
    // 0x29a1c4: 0x31fb8  dsll        $v1, $v1, 30
    ctx->pc = 0x29a1c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 30);
    // 0x29a1c8: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x29a1c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29a1cc: 0xc23025  or          $a2, $a2, $v0
    ctx->pc = 0x29a1ccu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 2));
    // 0x29a1d0: 0x671825  or          $v1, $v1, $a3
    ctx->pc = 0x29a1d0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 7));
    // 0x29a1d4: 0xc33025  or          $a2, $a2, $v1
    ctx->pc = 0x29a1d4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 3));
    // 0x29a1d8: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x29a1d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x29a1dc: 0xc0a661a  jal         func_299868
    ctx->pc = 0x29A1DCu;
    SET_GPR_U32(ctx, 31, 0x29A1E4u);
    ctx->pc = 0x29A1E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29A1DCu;
    // 0x29a1e0: 0xc83025  or          $a2, $a2, $t0 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x299868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x299868u, 0x29A1DCu, 0x29A1E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29A1E4u;
label_29a1e4:
    // 0x29a1e4: 0x3c02003c  lui         $v0, 0x3C
    ctx->pc = 0x29a1e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
    // 0x29a1e8: 0x8c431180  lw          $v1, 0x1180($v0)
    ctx->pc = 0x29a1e8u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x3C1180u));
    // 0x29a1ec: 0x203802a  slt         $s0, $s0, $v1
    ctx->pc = 0x29a1ecu;
    SET_GPR_U64(ctx, 16, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x29a1f0: 0x2462003f  addiu       $v0, $v1, 0x3F
    ctx->pc = 0x29a1f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 63));
    // 0x29a1f4: 0x70100b  movn        $v0, $v1, $s0
    ctx->pc = 0x29a1f4u;
    if (GPR_U64(ctx, 16) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 3));
    // 0x29a1f8: 0x21183  sra         $v0, $v0, 6
    ctx->pc = 0x29a1f8u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 6));
    // 0x29a1fc: 0x1840004f  blez        $v0, . + 4 + (0x4F << 2)
    ctx->pc = 0x29A1FCu;
    {
        const bool branch_taken_0x29a1fc = (GPR_S64(ctx, 2) <= 0);
        ctx->pc = 0x29A200u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29A1FCu;
        // 0x29a200: 0x3c02004a  lui         $v0, 0x4A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)74 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29a1fc) {
            ctx->pc = 0x29A33Cu;
            goto label_29a33c;
        }
    }
    ctx->pc = 0x29A204u;
    // 0x29a204: 0x3c13003c  lui         $s3, 0x3C
    ctx->pc = 0x29a204u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)60 << 16));
    // 0x29a208: 0x3c10003c  lui         $s0, 0x3C
    ctx->pc = 0x29a208u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)60 << 16));
    // 0x29a20c: 0x3c160058  lui         $s6, 0x58
    ctx->pc = 0x29a20cu;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)88 << 16));
    // 0x29a210: 0x3415ffff  ori         $s5, $zero, 0xFFFF
    ctx->pc = 0x29a210u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x29a214: 0x15a83c  dsll32      $s5, $s5, 0
    ctx->pc = 0x29a214u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 21) << (32 + 0));
    // 0x29a218: 0x2412003f  addiu       $s2, $zero, 0x3F
    ctx->pc = 0x29a218u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
    // 0x29a21c: 0x8e62118c  lw          $v0, 0x118C($s3)
    ctx->pc = 0x29a21cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4492)));
label_29a220:
    // 0x29a220: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x29a220u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29a224: 0x111980  sll         $v1, $s1, 6
    ctx->pc = 0x29a224u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 6));
    // 0x29a228: 0x63438  dsll        $a2, $a2, 16
    ctx->pc = 0x29a228u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << 16);
    // 0x29a22c: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x29a22cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x29a230: 0x663025  or          $a2, $v1, $a2
    ctx->pc = 0x29a230u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) | GPR_U64(ctx, 6));
    // 0x29a234: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x29a234u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x29a238: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x29a238u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29a23c: 0xc23025  or          $a2, $a2, $v0
    ctx->pc = 0x29a23cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 2));
    // 0x29a240: 0xc0a661a  jal         func_299868
    ctx->pc = 0x29A240u;
    SET_GPR_U32(ctx, 31, 0x29A248u);
    ctx->pc = 0x29A244u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29A240u;
    // 0x29a244: 0x24050041  addiu       $a1, $zero, 0x41 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 65));
    ctx->in_delay_slot = false;
    ctx->pc = 0x299868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x299868u, 0x29A240u, 0x29A248u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29A248u;
label_29a248:
    // 0x29a248: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x29a248u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x29a24c: 0x3c060008  lui         $a2, 0x8
    ctx->pc = 0x29a24cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)8 << 16));
    // 0x29a250: 0x34c60008  ori         $a2, $a2, 0x8
    ctx->pc = 0x29a250u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)8);
    // 0x29a254: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x29a254u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29a258: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x29a258u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x29a25c: 0xc0a661a  jal         func_299868
    ctx->pc = 0x29A25Cu;
    SET_GPR_U32(ctx, 31, 0x29A264u);
    ctx->pc = 0x29A260u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29A25Cu;
    // 0x29a260: 0x26520040  addiu       $s2, $s2, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x299868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x299868u, 0x29A25Cu, 0x29A264u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29A264u;
label_29a264:
    // 0x29a264: 0x8e021180  lw          $v0, 0x1180($s0)
    ctx->pc = 0x29a264u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4480)));
    // 0x29a268: 0x24070808  addiu       $a3, $zero, 0x808
    ctx->pc = 0x29a268u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2056));
    // 0x29a26c: 0x8ec66b80  lw          $a2, 0x6B80($s6)
    ctx->pc = 0x29a26cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 27520)));
    // 0x29a270: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x29a270u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29a274: 0x21fc2  srl         $v1, $v0, 31
    ctx->pc = 0x29a274u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 31));
    // 0x29a278: 0x2405000d  addiu       $a1, $zero, 0xD
    ctx->pc = 0x29a278u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x29a27c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x29a27cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x29a280: 0x63100  sll         $a2, $a2, 4
    ctx->pc = 0x29a280u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
    // 0x29a284: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x29a284u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
    // 0x29a288: 0xe23823  subu        $a3, $a3, $v0
    ctx->pc = 0x29a288u;
    SET_GPR_S32(ctx, 7, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x29a28c: 0x63438  dsll        $a2, $a2, 16
    ctx->pc = 0x29a28cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << 16);
    // 0x29a290: 0x73900  sll         $a3, $a3, 4
    ctx->pc = 0x29a290u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 4));
    // 0x29a294: 0xe63025  or          $a2, $a3, $a2
    ctx->pc = 0x29a294u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 7) | GPR_U64(ctx, 6));
    // 0x29a298: 0xc0a661a  jal         func_299868
    ctx->pc = 0x29A298u;
    SET_GPR_U32(ctx, 31, 0x29A2A0u);
    ctx->pc = 0x29A29Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29A298u;
    // 0x29a29c: 0xd53025  or          $a2, $a2, $s5 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 21));
    ctx->in_delay_slot = false;
    ctx->pc = 0x299868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x299868u, 0x29A298u, 0x29A2A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29A2A0u;
label_29a2a0:
    // 0x29a2a0: 0x8e66118c  lw          $a2, 0x118C($s3)
    ctx->pc = 0x29a2a0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4492)));
    // 0x29a2a4: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x29a2a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29a2a8: 0x8e021180  lw          $v0, 0x1180($s0)
    ctx->pc = 0x29a2a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4480)));
    // 0x29a2ac: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x29a2acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x29a2b0: 0x63140  sll         $a2, $a2, 5
    ctx->pc = 0x29a2b0u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 5));
    // 0x29a2b4: 0x24c60009  addiu       $a2, $a2, 0x9
    ctx->pc = 0x29a2b4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 9));
    // 0x29a2b8: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x29a2b8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x29a2bc: 0x24420009  addiu       $v0, $v0, 0x9
    ctx->pc = 0x29a2bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 9));
    // 0x29a2c0: 0x63438  dsll        $a2, $a2, 16
    ctx->pc = 0x29a2c0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << 16);
    // 0x29a2c4: 0xc0a661a  jal         func_299868
    ctx->pc = 0x29A2C4u;
    SET_GPR_U32(ctx, 31, 0x29A2CCu);
    ctx->pc = 0x29A2C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29A2C4u;
    // 0x29a2c8: 0x463025  or          $a2, $v0, $a2 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x299868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x299868u, 0x29A2C4u, 0x29A2CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29A2CCu;
label_29a2cc:
    // 0x29a2cc: 0x8e031180  lw          $v1, 0x1180($s0)
    ctx->pc = 0x29a2ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4480)));
    // 0x29a2d0: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x29a2d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29a2d4: 0x8e67118c  lw          $a3, 0x118C($s3)
    ctx->pc = 0x29a2d4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4492)));
    // 0x29a2d8: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x29a2d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x29a2dc: 0x8ec66b80  lw          $a2, 0x6B80($s6)
    ctx->pc = 0x29a2dcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 27520)));
    // 0x29a2e0: 0x317c2  srl         $v0, $v1, 31
    ctx->pc = 0x29a2e0u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 3), 31));
    // 0x29a2e4: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x29a2e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x29a2e8: 0xc73021  addu        $a2, $a2, $a3
    ctx->pc = 0x29a2e8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
    // 0x29a2ec: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x29a2ecu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
    // 0x29a2f0: 0xc73021  addu        $a2, $a2, $a3
    ctx->pc = 0x29a2f0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
    // 0x29a2f4: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x29a2f4u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x29a2f8: 0x63100  sll         $a2, $a2, 4
    ctx->pc = 0x29a2f8u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
    // 0x29a2fc: 0x24630808  addiu       $v1, $v1, 0x808
    ctx->pc = 0x29a2fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2056));
    // 0x29a300: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x29a300u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x29a304: 0x63438  dsll        $a2, $a2, 16
    ctx->pc = 0x29a304u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << 16);
    // 0x29a308: 0x663025  or          $a2, $v1, $a2
    ctx->pc = 0x29a308u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) | GPR_U64(ctx, 6));
    // 0x29a30c: 0xc0a661a  jal         func_299868
    ctx->pc = 0x29A30Cu;
    SET_GPR_U32(ctx, 31, 0x29A314u);
    ctx->pc = 0x29A310u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29A30Cu;
    // 0x29a310: 0xd53025  or          $a2, $a2, $s5 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 21));
    ctx->in_delay_slot = false;
    ctx->pc = 0x299868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x299868u, 0x29A30Cu, 0x29A314u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29A314u;
label_29a314:
    // 0x29a314: 0x8e041180  lw          $a0, 0x1180($s0)
    ctx->pc = 0x29a314u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4480)));
    // 0x29a318: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x29a318u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x29a31c: 0x64182a  slt         $v1, $v1, $a0
    ctx->pc = 0x29a31cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x29a320: 0x2482003f  addiu       $v0, $a0, 0x3F
    ctx->pc = 0x29a320u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 63));
    // 0x29a324: 0x83100b  movn        $v0, $a0, $v1
    ctx->pc = 0x29a324u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 4));
    // 0x29a328: 0x21183  sra         $v0, $v0, 6
    ctx->pc = 0x29a328u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 6));
    // 0x29a32c: 0x222102a  slt         $v0, $s1, $v0
    ctx->pc = 0x29a32cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x29a330: 0x1440ffbb  bnez        $v0, . + 4 + (-0x45 << 2)
    ctx->pc = 0x29A330u;
    {
        const bool branch_taken_0x29a330 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x29A334u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29A330u;
        // 0x29a334: 0x8e62118c  lw          $v0, 0x118C($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4492)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29a330) {
            ctx->pc = 0x29A220u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_29a220;
        }
    }
    ctx->pc = 0x29A338u;
    // 0x29a338: 0x3c02004a  lui         $v0, 0x4A
    ctx->pc = 0x29a338u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)74 << 16));
label_29a33c:
    // 0x29a33c: 0x3c03004a  lui         $v1, 0x4A
    ctx->pc = 0x29a33cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)74 << 16));
    // 0x29a340: 0x24495f00  addiu       $t1, $v0, 0x5F00
    ctx->pc = 0x29a340u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 2), 24320));
    // 0x29a344: 0x24686000  addiu       $t0, $v1, 0x6000
    ctx->pc = 0x29a344u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 3), 24576));
    // 0x29a348: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x29a348u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29a34c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x29a34cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_29a350:
    // 0x29a350: 0xe91021  addu        $v0, $a3, $t1
    ctx->pc = 0x29a350u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 9)));
    // 0x29a354: 0xc82021  addu        $a0, $a2, $t0
    ctx->pc = 0x29a354u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 8)));
    // 0x29a358: 0xa0460000  sb          $a2, 0x0($v0)
    ctx->pc = 0x29a358u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 6));
    // 0x29a35c: 0x30c50007  andi        $a1, $a2, 0x7
    ctx->pc = 0x29a35cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)7);
    // 0x29a360: 0xa0870000  sb          $a3, 0x0($a0)
    ctx->pc = 0x29a360u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 7));
    // 0x29a364: 0x24e30001  addiu       $v1, $a3, 0x1
    ctx->pc = 0x29a364u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x29a368: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x29a368u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x29a36c: 0x2cc20100  sltiu       $v0, $a2, 0x100
    ctx->pc = 0x29a36cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)256) ? 1 : 0);
    // 0x29a370: 0x1440fff7  bnez        $v0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x29A370u;
    {
        const bool branch_taken_0x29a370 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x29A374u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29A370u;
        // 0x29a374: 0x65380b  movn        $a3, $v1, $a1 (Delay Slot)
        if (GPR_U64(ctx, 5) != 0) SET_GPR_VEC(ctx, 7, GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29a370) {
            ctx->pc = 0x29A350u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_29a350;
        }
    }
    ctx->pc = 0x29A378u;
    // 0x29a378: 0x3c03004a  lui         $v1, 0x4A
    ctx->pc = 0x29a378u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)74 << 16));
    // 0x29a37c: 0x3c02004a  lui         $v0, 0x4A
    ctx->pc = 0x29a37cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)74 << 16));
    // 0x29a380: 0x24475f00  addiu       $a3, $v0, 0x5F00
    ctx->pc = 0x29a380u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 24320));
    // 0x29a384: 0x24666100  addiu       $a2, $v1, 0x6100
    ctx->pc = 0x29a384u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 24832));
    // 0x29a388: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x29a388u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29a38c: 0x0  nop
    ctx->pc = 0x29a38cu;
    // NOP
label_29a390:
    // 0x29a390: 0x51027  nor         $v0, $zero, $a1
    ctx->pc = 0x29a390u;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 5)));
    // 0x29a394: 0x210c2  srl         $v0, $v0, 3
    ctx->pc = 0x29a394u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 3));
    // 0x29a398: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x29a398u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x29a39c: 0x3042001f  andi        $v0, $v0, 0x1F
    ctx->pc = 0x29a39cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)31);
    // 0x29a3a0: 0x2ca40100  sltiu       $a0, $a1, 0x100
    ctx->pc = 0x29a3a0u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)256) ? 1 : 0);
    // 0x29a3a4: 0x471021  addu        $v0, $v0, $a3
    ctx->pc = 0x29a3a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x29a3a8: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x29a3a8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x29a3ac: 0x31e00  sll         $v1, $v1, 24
    ctx->pc = 0x29a3acu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 24));
    // 0x29a3b0: 0xacc30000  sw          $v1, 0x0($a2)
    ctx->pc = 0x29a3b0u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 3));
    // 0x29a3b4: 0x1480fff6  bnez        $a0, . + 4 + (-0xA << 2)
    ctx->pc = 0x29A3B4u;
    {
        const bool branch_taken_0x29a3b4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x29A3B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29A3B4u;
        // 0x29a3b8: 0x24c60004  addiu       $a2, $a2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29a3b4) {
            ctx->pc = 0x29A390u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_29a390;
        }
    }
    ctx->pc = 0x29A3BCu;
    // 0x29a3bc: 0x3c02004a  lui         $v0, 0x4A
    ctx->pc = 0x29a3bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)74 << 16));
    // 0x29a3c0: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x29a3c0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29a3c4: 0x24536100  addiu       $s3, $v0, 0x6100
    ctx->pc = 0x29a3c4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 24832));
    // 0x29a3c8: 0x2412ffff  addiu       $s2, $zero, -0x1
    ctx->pc = 0x29a3c8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x29a3cc: 0x24110070  addiu       $s1, $zero, 0x70
    ctx->pc = 0x29a3ccu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 112));
    // 0x29a3d0: 0x250102a  slt         $v0, $s2, $s0
    ctx->pc = 0x29a3d0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x29a3d4: 0x0  nop
    ctx->pc = 0x29a3d4u;
    // NOP
label_29a3d8:
    // 0x29a3d8: 0x2607001f  addiu       $a3, $s0, 0x1F
    ctx->pc = 0x29a3d8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 31));
    // 0x29a3dc: 0x202380b  movn        $a3, $s0, $v0
    ctx->pc = 0x29a3dcu;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 7, GPR_VEC(ctx, 16));
    // 0x29a3e0: 0x3c0980ff  lui         $t1, 0x80FF
    ctx->pc = 0x29a3e0u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)33023 << 16));
    // 0x29a3e4: 0x73943  sra         $a3, $a3, 5
    ctx->pc = 0x29a3e4u;
    SET_GPR_S32(ctx, 7, SRA32(GPR_S32(ctx, 7), 5));
    // 0x29a3e8: 0x200582d  daddu       $t3, $s0, $zero
    ctx->pc = 0x29a3e8u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29a3ec: 0xf13018  mult        $a2, $a3, $s1
    ctx->pc = 0x29a3ecu;
    { int64_t result = (int64_t)GPR_S32(ctx, 7) * (int64_t)GPR_S32(ctx, 17); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
    // 0x29a3f0: 0xafb30000  sw          $s3, 0x0($sp)
    ctx->pc = 0x29a3f0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 19));
    // 0x29a3f4: 0x73940  sll         $a3, $a3, 5
    ctx->pc = 0x29a3f4u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 5));
    // 0x29a3f8: 0x24040008  addiu       $a0, $zero, 0x8
    ctx->pc = 0x29a3f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x29a3fc: 0x2073823  subu        $a3, $s0, $a3
    ctx->pc = 0x29a3fcu;
    SET_GPR_S32(ctx, 7, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 7)));
    // 0x29a400: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x29a400u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x29a404: 0x24e70005  addiu       $a3, $a3, 0x5
    ctx->pc = 0x29a404u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 5));
    // 0x29a408: 0x24080002  addiu       $t0, $zero, 0x2
    ctx->pc = 0x29a408u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x29a40c: 0x738c0  sll         $a3, $a3, 3
    ctx->pc = 0x29a40cu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
    // 0x29a410: 0x24c60020  addiu       $a2, $a2, 0x20
    ctx->pc = 0x29a410u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 32));
    // 0x29a414: 0x3529ffff  ori         $t1, $t1, 0xFFFF
    ctx->pc = 0x29a414u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)65535);
    // 0x29a418: 0xc0b8358  jal         func_2E0D60
    ctx->pc = 0x29A418u;
    SET_GPR_U32(ctx, 31, 0x29A420u);
    ctx->pc = 0x29A41Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29A418u;
    // 0x29a41c: 0x26eaac88  addiu       $t2, $s7, -0x5378 (Delay Slot)
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 23), 4294945928));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E0D60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E0D60u, 0x29A418u, 0x29A420u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29A420u;
label_29a420:
    // 0x29a420: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x29a420u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x29a424: 0x2a020100  slti        $v0, $s0, 0x100
    ctx->pc = 0x29a424u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)256) ? 1 : 0);
    // 0x29a428: 0x1440ffeb  bnez        $v0, . + 4 + (-0x15 << 2)
    ctx->pc = 0x29A428u;
    {
        const bool branch_taken_0x29a428 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x29A42Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29A428u;
        // 0x29a42c: 0x250102a  slt         $v0, $s2, $s0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x29a428) {
            ctx->pc = 0x29A3D8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_29a3d8;
        }
    }
    ctx->pc = 0x29A430u;
    // 0x29a430: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x29a430u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29a434: 0xc0a6642  jal         func_299908
    ctx->pc = 0x29A434u;
    SET_GPR_U32(ctx, 31, 0x29A43Cu);
    ctx->pc = 0x29A438u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29A434u;
    // 0x29a438: 0x2410ffff  addiu       $s0, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x299908u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x299908u, 0x29A434u, 0x29A43Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29A43Cu;
label_29a43c:
    // 0x29a43c: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x29a43cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29a440: 0x3c06004a  lui         $a2, 0x4A
    ctx->pc = 0x29a440u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)74 << 16));
    // 0x29a444: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x29a444u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29a448: 0x24c66100  addiu       $a2, $a2, 0x6100
    ctx->pc = 0x29a448u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 24832));
    // 0x29a44c: 0xc0a668a  jal         func_299A28
    ctx->pc = 0x29A44Cu;
    SET_GPR_U32(ctx, 31, 0x29A454u);
    ctx->pc = 0x29A450u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29A44Cu;
    // 0x29a450: 0x24051c04  addiu       $a1, $zero, 0x1C04 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7172));
    ctx->in_delay_slot = false;
    ctx->pc = 0x299A28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x299A28u, 0x29A44Cu, 0x29A454u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29A454u;
label_29a454:
    // 0x29a454: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x29a454u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29a458: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x29a458u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29a45c: 0xc0a6636  jal         func_2998D8
    ctx->pc = 0x29A45Cu;
    SET_GPR_U32(ctx, 31, 0x29A464u);
    ctx->pc = 0x29A460u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29A45Cu;
    // 0x29a460: 0x2406000e  addiu       $a2, $zero, 0xE (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2998D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2998D8u, 0x29A45Cu, 0x29A464u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29A464u;
label_29a464:
    // 0x29a464: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x29a464u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29a468: 0x34068500  ori         $a2, $zero, 0x8500
    ctx->pc = 0x29a468u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)34048);
    // 0x29a46c: 0x63478  dsll        $a2, $a2, 17
    ctx->pc = 0x29a46cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << 17);
    // 0x29a470: 0x34c600f8  ori         $a2, $a2, 0xF8
    ctx->pc = 0x29a470u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)248);
    // 0x29a474: 0xc0a661a  jal         func_299868
    ctx->pc = 0x29A474u;
    SET_GPR_U32(ctx, 31, 0x29A47Cu);
    ctx->pc = 0x29A478u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29A474u;
    // 0x29a478: 0x2405004f  addiu       $a1, $zero, 0x4F (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 79));
    ctx->in_delay_slot = false;
    ctx->pc = 0x299868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x299868u, 0x29A474u, 0x29A47Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29A47Cu;
label_29a47c:
    // 0x29a47c: 0x3c03003c  lui         $v1, 0x3C
    ctx->pc = 0x29a47cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)60 << 16));
    // 0x29a480: 0x3c04003c  lui         $a0, 0x3C
    ctx->pc = 0x29a480u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)60 << 16));
    // 0x29a484: 0x8c651180  lw          $a1, 0x1180($v1)
    ctx->pc = 0x29a484u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x3C1180u));
    // 0x29a488: 0x3407ffff  ori         $a3, $zero, 0xFFFF
    ctx->pc = 0x29a488u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x29a48c: 0x73c38  dsll        $a3, $a3, 16
    ctx->pc = 0x29a48cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) << 16);
    // 0x29a490: 0x34e7ff00  ori         $a3, $a3, 0xFF00
    ctx->pc = 0x29a490u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)65280);
    // 0x29a494: 0x73e38  dsll        $a3, $a3, 24
    ctx->pc = 0x29a494u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) << 24);
    // 0x29a498: 0x8c8611ac  lw          $a2, 0x11AC($a0)
    ctx->pc = 0x29a498u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4524)));
    // 0x29a49c: 0x205182a  slt         $v1, $s0, $a1
    ctx->pc = 0x29a49cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x29a4a0: 0x24a2003f  addiu       $v0, $a1, 0x3F
    ctx->pc = 0x29a4a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 63));
    // 0x29a4a4: 0xa3100b  movn        $v0, $a1, $v1
    ctx->pc = 0x29a4a4u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 5));
    // 0x29a4a8: 0x63142  srl         $a2, $a2, 5
    ctx->pc = 0x29a4a8u;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 6), 5));
    // 0x29a4ac: 0x6303c  dsll32      $a2, $a2, 0
    ctx->pc = 0x29a4acu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << (32 + 0));
    // 0x29a4b0: 0x21183  sra         $v0, $v0, 6
    ctx->pc = 0x29a4b0u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 6));
    // 0x29a4b4: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x29a4b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x29a4b8: 0x6303e  dsrl32      $a2, $a2, 0
    ctx->pc = 0x29a4b8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) >> (32 + 0));
    // 0x29a4bc: 0xc23025  or          $a2, $a2, $v0
    ctx->pc = 0x29a4bcu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 2));
    // 0x29a4c0: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x29a4c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29a4c4: 0xc73025  or          $a2, $a2, $a3
    ctx->pc = 0x29a4c4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 7));
    // 0x29a4c8: 0xc0a661a  jal         func_299868
    ctx->pc = 0x29A4C8u;
    SET_GPR_U32(ctx, 31, 0x29A4D0u);
    ctx->pc = 0x29A4CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29A4C8u;
    // 0x29a4cc: 0x2405004d  addiu       $a1, $zero, 0x4D (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 77));
    ctx->in_delay_slot = false;
    ctx->pc = 0x299868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x299868u, 0x29A4C8u, 0x29A4D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29A4D0u;
label_29a4d0:
    // 0x29a4d0: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x29a4d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29a4d4: 0x3c060005  lui         $a2, 0x5
    ctx->pc = 0x29a4d4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)5 << 16));
    // 0x29a4d8: 0xc0a661a  jal         func_299868
    ctx->pc = 0x29A4D8u;
    SET_GPR_U32(ctx, 31, 0x29A4E0u);
    ctx->pc = 0x29A4DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29A4D8u;
    // 0x29a4dc: 0x24050048  addiu       $a1, $zero, 0x48 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 72));
    ctx->in_delay_slot = false;
    ctx->pc = 0x299868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x299868u, 0x29A4D8u, 0x29A4E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29A4E0u;
label_29a4e0:
    // 0x29a4e0: 0x3c03003c  lui         $v1, 0x3C
    ctx->pc = 0x29a4e0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)60 << 16));
    // 0x29a4e4: 0x3c04003c  lui         $a0, 0x3C
    ctx->pc = 0x29a4e4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)60 << 16));
    // 0x29a4e8: 0x8c621180  lw          $v0, 0x1180($v1)
    ctx->pc = 0x29a4e8u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3C1180u));
    // 0x29a4ec: 0x24050009  addiu       $a1, $zero, 0x9
    ctx->pc = 0x29a4ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x29a4f0: 0x8c86118c  lw          $a2, 0x118C($a0)
    ctx->pc = 0x29a4f0u;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x3C118Cu));
    // 0x29a4f4: 0x2403000a  addiu       $v1, $zero, 0xA
    ctx->pc = 0x29a4f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x29a4f8: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x29a4f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x29a4fc: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x29a4fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29a500: 0x630bc  dsll32      $a2, $a2, 2
    ctx->pc = 0x29a500u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << (32 + 2));
    // 0x29a504: 0x213b8  dsll        $v0, $v0, 14
    ctx->pc = 0x29a504u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 14);
    // 0x29a508: 0xc33025  or          $a2, $a2, $v1
    ctx->pc = 0x29a508u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 3));
    // 0x29a50c: 0xc0a661a  jal         func_299868
    ctx->pc = 0x29A50Cu;
    SET_GPR_U32(ctx, 31, 0x29A514u);
    ctx->pc = 0x29A510u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29A50Cu;
    // 0x29a510: 0x463025  or          $a2, $v0, $a2 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x299868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x299868u, 0x29A50Cu, 0x29A514u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29A514u;
label_29a514:
    // 0x29a514: 0x3c02003c  lui         $v0, 0x3C
    ctx->pc = 0x29a514u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
    // 0x29a518: 0x3c03003c  lui         $v1, 0x3C
    ctx->pc = 0x29a518u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)60 << 16));
    // 0x29a51c: 0x8c441180  lw          $a0, 0x1180($v0)
    ctx->pc = 0x29a51cu;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x3C1180u));
    // 0x29a520: 0x3c0725b0  lui         $a3, 0x25B0
    ctx->pc = 0x29a520u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)9648 << 16));
    // 0x29a524: 0x8c6511b8  lw          $a1, 0x11B8($v1)
    ctx->pc = 0x29a524u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x3C11B8u));
    // 0x29a528: 0x3408800e  ori         $t0, $zero, 0x800E
    ctx->pc = 0x29a528u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32782);
    // 0x29a52c: 0x845b8  dsll        $t0, $t0, 22
    ctx->pc = 0x29a52cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) << 22);
    // 0x29a530: 0x35088c00  ori         $t0, $t0, 0x8C00
    ctx->pc = 0x29a530u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)35840);
    // 0x29a534: 0x84638  dsll        $t0, $t0, 24
    ctx->pc = 0x29a534u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) << 24);
    // 0x29a538: 0x204182a  slt         $v1, $s0, $a0
    ctx->pc = 0x29a538u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x29a53c: 0x2482003f  addiu       $v0, $a0, 0x3F
    ctx->pc = 0x29a53cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 63));
    // 0x29a540: 0x83100b  movn        $v0, $a0, $v1
    ctx->pc = 0x29a540u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 4));
    // 0x29a544: 0x52fb8  dsll        $a1, $a1, 30
    ctx->pc = 0x29a544u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 30);
    // 0x29a548: 0x3c04003c  lui         $a0, 0x3C
    ctx->pc = 0x29a548u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)60 << 16));
    // 0x29a54c: 0x21183  sra         $v0, $v0, 6
    ctx->pc = 0x29a54cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 6));
    // 0x29a550: 0x9c8611ac  lwu         $a2, 0x11AC($a0)
    ctx->pc = 0x29a550u;
    SET_GPR_ZE32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 4), 4524)));
    // 0x29a554: 0x213b8  dsll        $v0, $v0, 14
    ctx->pc = 0x29a554u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 14);
    // 0x29a558: 0xa72825  or          $a1, $a1, $a3
    ctx->pc = 0x29a558u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 7));
    // 0x29a55c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x29a55cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29a560: 0xc23025  or          $a2, $a2, $v0
    ctx->pc = 0x29a560u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 2));
    // 0x29a564: 0xc53025  or          $a2, $a2, $a1
    ctx->pc = 0x29a564u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 5));
    // 0x29a568: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x29a568u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x29a56c: 0xc0a661a  jal         func_299868
    ctx->pc = 0x29A56Cu;
    SET_GPR_U32(ctx, 31, 0x29A574u);
    ctx->pc = 0x29A570u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29A56Cu;
    // 0x29a570: 0xc83025  or          $a2, $a2, $t0 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x299868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x299868u, 0x29A56Cu, 0x29A574u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29A574u;
label_29a574:
    // 0x29a574: 0x3c02003c  lui         $v0, 0x3C
    ctx->pc = 0x29a574u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
    // 0x29a578: 0x8c431180  lw          $v1, 0x1180($v0)
    ctx->pc = 0x29a578u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x3C1180u));
    // 0x29a57c: 0x203802a  slt         $s0, $s0, $v1
    ctx->pc = 0x29a57cu;
    SET_GPR_U64(ctx, 16, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x29a580: 0x2462003f  addiu       $v0, $v1, 0x3F
    ctx->pc = 0x29a580u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 63));
    // 0x29a584: 0x70100b  movn        $v0, $v1, $s0
    ctx->pc = 0x29a584u;
    if (GPR_U64(ctx, 16) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 3));
    // 0x29a588: 0x21183  sra         $v0, $v0, 6
    ctx->pc = 0x29a588u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 6));
    // 0x29a58c: 0x1840004e  blez        $v0, . + 4 + (0x4E << 2)
    ctx->pc = 0x29A58Cu;
    {
        const bool branch_taken_0x29a58c = (GPR_S64(ctx, 2) <= 0);
        ctx->pc = 0x29A590u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29A58Cu;
        // 0x29a590: 0x3c02004a  lui         $v0, 0x4A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)74 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29a58c) {
            ctx->pc = 0x29A6C8u;
            goto label_29a6c8;
        }
    }
    ctx->pc = 0x29A594u;
    // 0x29a594: 0x3c13003c  lui         $s3, 0x3C
    ctx->pc = 0x29a594u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)60 << 16));
    // 0x29a598: 0x3c10003c  lui         $s0, 0x3C
    ctx->pc = 0x29a598u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)60 << 16));
    // 0x29a59c: 0x3c160058  lui         $s6, 0x58
    ctx->pc = 0x29a59cu;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)88 << 16));
    // 0x29a5a0: 0x3415dff8  ori         $s5, $zero, 0xDFF8
    ctx->pc = 0x29a5a0u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)57336);
    // 0x29a5a4: 0x15af78  dsll        $s5, $s5, 29
    ctx->pc = 0x29a5a4u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 21) << 29);
    // 0x29a5a8: 0x2412003f  addiu       $s2, $zero, 0x3F
    ctx->pc = 0x29a5a8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
    // 0x29a5ac: 0x8e62118c  lw          $v0, 0x118C($s3)
    ctx->pc = 0x29a5acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4492)));
label_29a5b0:
    // 0x29a5b0: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x29a5b0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29a5b4: 0x111980  sll         $v1, $s1, 6
    ctx->pc = 0x29a5b4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 6));
    // 0x29a5b8: 0x63438  dsll        $a2, $a2, 16
    ctx->pc = 0x29a5b8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << 16);
    // 0x29a5bc: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x29a5bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x29a5c0: 0x663025  or          $a2, $v1, $a2
    ctx->pc = 0x29a5c0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) | GPR_U64(ctx, 6));
    // 0x29a5c4: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x29a5c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x29a5c8: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x29a5c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29a5cc: 0xc23025  or          $a2, $a2, $v0
    ctx->pc = 0x29a5ccu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 2));
    // 0x29a5d0: 0xc0a661a  jal         func_299868
    ctx->pc = 0x29A5D0u;
    SET_GPR_U32(ctx, 31, 0x29A5D8u);
    ctx->pc = 0x29A5D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29A5D0u;
    // 0x29a5d4: 0x24050041  addiu       $a1, $zero, 0x41 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 65));
    ctx->in_delay_slot = false;
    ctx->pc = 0x299868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x299868u, 0x29A5D0u, 0x29A5D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29A5D8u;
label_29a5d8:
    // 0x29a5d8: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x29a5d8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x29a5dc: 0x3c060008  lui         $a2, 0x8
    ctx->pc = 0x29a5dcu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)8 << 16));
    // 0x29a5e0: 0x34c60008  ori         $a2, $a2, 0x8
    ctx->pc = 0x29a5e0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)8);
    // 0x29a5e4: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x29a5e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29a5e8: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x29a5e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x29a5ec: 0xc0a661a  jal         func_299868
    ctx->pc = 0x29A5ECu;
    SET_GPR_U32(ctx, 31, 0x29A5F4u);
    ctx->pc = 0x29A5F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29A5ECu;
    // 0x29a5f0: 0x26520040  addiu       $s2, $s2, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x299868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x299868u, 0x29A5ECu, 0x29A5F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29A5F4u;
label_29a5f4:
    // 0x29a5f4: 0x8e021180  lw          $v0, 0x1180($s0)
    ctx->pc = 0x29a5f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4480)));
    // 0x29a5f8: 0x24070800  addiu       $a3, $zero, 0x800
    ctx->pc = 0x29a5f8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
    // 0x29a5fc: 0x8ec66b80  lw          $a2, 0x6B80($s6)
    ctx->pc = 0x29a5fcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 27520)));
    // 0x29a600: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x29a600u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29a604: 0x21fc2  srl         $v1, $v0, 31
    ctx->pc = 0x29a604u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 31));
    // 0x29a608: 0x2405000d  addiu       $a1, $zero, 0xD
    ctx->pc = 0x29a608u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x29a60c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x29a60cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x29a610: 0x63100  sll         $a2, $a2, 4
    ctx->pc = 0x29a610u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
    // 0x29a614: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x29a614u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
    // 0x29a618: 0xe23823  subu        $a3, $a3, $v0
    ctx->pc = 0x29a618u;
    SET_GPR_S32(ctx, 7, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x29a61c: 0x63438  dsll        $a2, $a2, 16
    ctx->pc = 0x29a61cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << 16);
    // 0x29a620: 0x73900  sll         $a3, $a3, 4
    ctx->pc = 0x29a620u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 4));
    // 0x29a624: 0xe63025  or          $a2, $a3, $a2
    ctx->pc = 0x29a624u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 7) | GPR_U64(ctx, 6));
    // 0x29a628: 0xc0a661a  jal         func_299868
    ctx->pc = 0x29A628u;
    SET_GPR_U32(ctx, 31, 0x29A630u);
    ctx->pc = 0x29A62Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29A628u;
    // 0x29a62c: 0xd53025  or          $a2, $a2, $s5 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 21));
    ctx->in_delay_slot = false;
    ctx->pc = 0x299868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x299868u, 0x29A628u, 0x29A630u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29A630u;
label_29a630:
    // 0x29a630: 0x8e66118c  lw          $a2, 0x118C($s3)
    ctx->pc = 0x29a630u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4492)));
    // 0x29a634: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x29a634u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29a638: 0x8e021180  lw          $v0, 0x1180($s0)
    ctx->pc = 0x29a638u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4480)));
    // 0x29a63c: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x29a63cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x29a640: 0x63100  sll         $a2, $a2, 4
    ctx->pc = 0x29a640u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
    // 0x29a644: 0x24c60009  addiu       $a2, $a2, 0x9
    ctx->pc = 0x29a644u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 9));
    // 0x29a648: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x29a648u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x29a64c: 0x24420009  addiu       $v0, $v0, 0x9
    ctx->pc = 0x29a64cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 9));
    // 0x29a650: 0x63438  dsll        $a2, $a2, 16
    ctx->pc = 0x29a650u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << 16);
    // 0x29a654: 0xc0a661a  jal         func_299868
    ctx->pc = 0x29A654u;
    SET_GPR_U32(ctx, 31, 0x29A65Cu);
    ctx->pc = 0x29A658u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29A654u;
    // 0x29a658: 0x463025  or          $a2, $v0, $a2 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x299868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x299868u, 0x29A654u, 0x29A65Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29A65Cu;
label_29a65c:
    // 0x29a65c: 0x8e031180  lw          $v1, 0x1180($s0)
    ctx->pc = 0x29a65cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4480)));
    // 0x29a660: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x29a660u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29a664: 0x8ec66b80  lw          $a2, 0x6B80($s6)
    ctx->pc = 0x29a664u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 27520)));
    // 0x29a668: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x29a668u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x29a66c: 0x8e67118c  lw          $a3, 0x118C($s3)
    ctx->pc = 0x29a66cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4492)));
    // 0x29a670: 0x317c2  srl         $v0, $v1, 31
    ctx->pc = 0x29a670u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 3), 31));
    // 0x29a674: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x29a674u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x29a678: 0xc73021  addu        $a2, $a2, $a3
    ctx->pc = 0x29a678u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
    // 0x29a67c: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x29a67cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
    // 0x29a680: 0x24630800  addiu       $v1, $v1, 0x800
    ctx->pc = 0x29a680u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2048));
    // 0x29a684: 0x63100  sll         $a2, $a2, 4
    ctx->pc = 0x29a684u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
    // 0x29a688: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x29a688u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x29a68c: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x29a68cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x29a690: 0x63438  dsll        $a2, $a2, 16
    ctx->pc = 0x29a690u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << 16);
    // 0x29a694: 0x663025  or          $a2, $v1, $a2
    ctx->pc = 0x29a694u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) | GPR_U64(ctx, 6));
    // 0x29a698: 0xc0a661a  jal         func_299868
    ctx->pc = 0x29A698u;
    SET_GPR_U32(ctx, 31, 0x29A6A0u);
    ctx->pc = 0x29A69Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29A698u;
    // 0x29a69c: 0xd53025  or          $a2, $a2, $s5 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 21));
    ctx->in_delay_slot = false;
    ctx->pc = 0x299868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x299868u, 0x29A698u, 0x29A6A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29A6A0u;
label_29a6a0:
    // 0x29a6a0: 0x8e041180  lw          $a0, 0x1180($s0)
    ctx->pc = 0x29a6a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4480)));
    // 0x29a6a4: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x29a6a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x29a6a8: 0x64182a  slt         $v1, $v1, $a0
    ctx->pc = 0x29a6a8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x29a6ac: 0x2482003f  addiu       $v0, $a0, 0x3F
    ctx->pc = 0x29a6acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 63));
    // 0x29a6b0: 0x83100b  movn        $v0, $a0, $v1
    ctx->pc = 0x29a6b0u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 4));
    // 0x29a6b4: 0x21183  sra         $v0, $v0, 6
    ctx->pc = 0x29a6b4u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 6));
    // 0x29a6b8: 0x222102a  slt         $v0, $s1, $v0
    ctx->pc = 0x29a6b8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x29a6bc: 0x1440ffbc  bnez        $v0, . + 4 + (-0x44 << 2)
    ctx->pc = 0x29A6BCu;
    {
        const bool branch_taken_0x29a6bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x29A6C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29A6BCu;
        // 0x29a6c0: 0x8e62118c  lw          $v0, 0x118C($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4492)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29a6bc) {
            ctx->pc = 0x29A5B0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_29a5b0;
        }
    }
    ctx->pc = 0x29A6C4u;
    // 0x29a6c4: 0x3c02004a  lui         $v0, 0x4A
    ctx->pc = 0x29a6c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)74 << 16));
label_29a6c8:
    // 0x29a6c8: 0x3c03004a  lui         $v1, 0x4A
    ctx->pc = 0x29a6c8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)74 << 16));
    // 0x29a6cc: 0x3c04004a  lui         $a0, 0x4A
    ctx->pc = 0x29a6ccu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)74 << 16));
    // 0x29a6d0: 0x24685f00  addiu       $t0, $v1, 0x5F00
    ctx->pc = 0x29a6d0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 3), 24320));
    // 0x29a6d4: 0x24876000  addiu       $a3, $a0, 0x6000
    ctx->pc = 0x29a6d4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 4), 24576));
    // 0x29a6d8: 0x24466500  addiu       $a2, $v0, 0x6500
    ctx->pc = 0x29a6d8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 25856));
    // 0x29a6dc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x29a6dcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_29a6e0:
    // 0x29a6e0: 0xa71021  addu        $v0, $a1, $a3
    ctx->pc = 0x29a6e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 7)));
    // 0x29a6e4: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x29a6e4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x29a6e8: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x29a6e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x29a6ec: 0x2ca40100  sltiu       $a0, $a1, 0x100
    ctx->pc = 0x29a6ecu;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)256) ? 1 : 0);
    // 0x29a6f0: 0x24630020  addiu       $v1, $v1, 0x20
    ctx->pc = 0x29a6f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
    // 0x29a6f4: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x29a6f4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x29a6f8: 0x681821  addu        $v1, $v1, $t0
    ctx->pc = 0x29a6f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
    // 0x29a6fc: 0x90620000  lbu         $v0, 0x0($v1)
    ctx->pc = 0x29a6fcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x29a700: 0x21600  sll         $v0, $v0, 24
    ctx->pc = 0x29a700u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 24));
    // 0x29a704: 0xacc20000  sw          $v0, 0x0($a2)
    ctx->pc = 0x29a704u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
    // 0x29a708: 0x1480fff5  bnez        $a0, . + 4 + (-0xB << 2)
    ctx->pc = 0x29A708u;
    {
        const bool branch_taken_0x29a708 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x29A70Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29A708u;
        // 0x29a70c: 0x24c60004  addiu       $a2, $a2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29a708) {
            ctx->pc = 0x29A6E0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_29a6e0;
        }
    }
    ctx->pc = 0x29A710u;
    // 0x29a710: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x29a710u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29a714: 0xc0a6642  jal         func_299908
    ctx->pc = 0x29A714u;
    SET_GPR_U32(ctx, 31, 0x29A71Cu);
    ctx->pc = 0x29A718u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29A714u;
    // 0x29a718: 0x241effff  addiu       $fp, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x299908u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x299908u, 0x29A714u, 0x29A71Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29A71Cu;
label_29a71c:
    // 0x29a71c: 0x3c06004a  lui         $a2, 0x4A
    ctx->pc = 0x29a71cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)74 << 16));
    // 0x29a720: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x29a720u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29a724: 0x24c66500  addiu       $a2, $a2, 0x6500
    ctx->pc = 0x29a724u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 25856));
    // 0x29a728: 0xc0a668a  jal         func_299A28
    ctx->pc = 0x29A728u;
    SET_GPR_U32(ctx, 31, 0x29A730u);
    ctx->pc = 0x29A72Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29A728u;
    // 0x29a72c: 0x24051c04  addiu       $a1, $zero, 0x1C04 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7172));
    ctx->in_delay_slot = false;
    ctx->pc = 0x299A28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x299A28u, 0x29A728u, 0x29A730u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29A730u;
label_29a730:
    // 0x29a730: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x29a730u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29a734: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x29a734u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29a738: 0xc0a6636  jal         func_2998D8
    ctx->pc = 0x29A738u;
    SET_GPR_U32(ctx, 31, 0x29A740u);
    ctx->pc = 0x29A73Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29A738u;
    // 0x29a73c: 0x2406000e  addiu       $a2, $zero, 0xE (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2998D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2998D8u, 0x29A738u, 0x29A740u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29A740u;
label_29a740:
    // 0x29a740: 0x3c03003c  lui         $v1, 0x3C
    ctx->pc = 0x29a740u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)60 << 16));
    // 0x29a744: 0x3c02003c  lui         $v0, 0x3C
    ctx->pc = 0x29a744u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
    // 0x29a748: 0x8c641180  lw          $a0, 0x1180($v1)
    ctx->pc = 0x29a748u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x3C1180u));
    // 0x29a74c: 0x3c0725b0  lui         $a3, 0x25B0
    ctx->pc = 0x29a74cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)9648 << 16));
    // 0x29a750: 0x8c4511b8  lw          $a1, 0x11B8($v0)
    ctx->pc = 0x29a750u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x3C11B8u));
    // 0x29a754: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x29a754u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x29a758: 0x64182a  slt         $v1, $v1, $a0
    ctx->pc = 0x29a758u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x29a75c: 0x2482003f  addiu       $v0, $a0, 0x3F
    ctx->pc = 0x29a75cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 63));
    // 0x29a760: 0x83100b  movn        $v0, $a0, $v1
    ctx->pc = 0x29a760u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 4));
    // 0x29a764: 0x52fb8  dsll        $a1, $a1, 30
    ctx->pc = 0x29a764u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 30);
    // 0x29a768: 0x3c03003c  lui         $v1, 0x3C
    ctx->pc = 0x29a768u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)60 << 16));
    // 0x29a76c: 0x21183  sra         $v0, $v0, 6
    ctx->pc = 0x29a76cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 6));
    // 0x29a770: 0x9c6611ac  lwu         $a2, 0x11AC($v1)
    ctx->pc = 0x29a770u;
    SET_GPR_ZE32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 3), 4524)));
    // 0x29a774: 0x213b8  dsll        $v0, $v0, 14
    ctx->pc = 0x29a774u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 14);
    // 0x29a778: 0xa72825  or          $a1, $a1, $a3
    ctx->pc = 0x29a778u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 7));
    // 0x29a77c: 0x3403800e  ori         $v1, $zero, 0x800E
    ctx->pc = 0x29a77cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32782);
    // 0x29a780: 0x31db8  dsll        $v1, $v1, 22
    ctx->pc = 0x29a780u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 22);
    // 0x29a784: 0x34638c00  ori         $v1, $v1, 0x8C00
    ctx->pc = 0x29a784u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)35840);
    // 0x29a788: 0x31e38  dsll        $v1, $v1, 24
    ctx->pc = 0x29a788u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 24);
    // 0x29a78c: 0xc23025  or          $a2, $a2, $v0
    ctx->pc = 0x29a78cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 2));
    // 0x29a790: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x29a790u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29a794: 0xc53025  or          $a2, $a2, $a1
    ctx->pc = 0x29a794u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 5));
    // 0x29a798: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x29a798u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x29a79c: 0xc0a661a  jal         func_299868
    ctx->pc = 0x29A79Cu;
    SET_GPR_U32(ctx, 31, 0x29A7A4u);
    ctx->pc = 0x29A7A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29A79Cu;
    // 0x29a7a0: 0xc33025  or          $a2, $a2, $v1 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x299868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x299868u, 0x29A79Cu, 0x29A7A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29A7A4u;
label_29a7a4:
    // 0x29a7a4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x29a7a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x29a7a8: 0x3c04003c  lui         $a0, 0x3C
    ctx->pc = 0x29a7a8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)60 << 16));
    // 0x29a7ac: 0x0  nop
    ctx->pc = 0x29a7acu;
    // NOP
label_29a7b0:
    // 0x29a7b0: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x29a7b0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29a7b4: 0x8c821180  lw          $v0, 0x1180($a0)
    ctx->pc = 0x29a7b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4480)));
    // 0x29a7b8: 0x2443003f  addiu       $v1, $v0, 0x3F
    ctx->pc = 0x29a7b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 63));
    // 0x29a7bc: 0x3c2202a  slt         $a0, $fp, $v0
    ctx->pc = 0x29a7bcu;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 30) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x29a7c0: 0x44180b  movn        $v1, $v0, $a0
    ctx->pc = 0x29a7c0u;
    if (GPR_U64(ctx, 4) != 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 2));
    // 0x29a7c4: 0x31983  sra         $v1, $v1, 6
    ctx->pc = 0x29a7c4u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 6));
    // 0x29a7c8: 0x1860004d  blez        $v1, . + 4 + (0x4D << 2)
    ctx->pc = 0x29A7C8u;
    {
        const bool branch_taken_0x29a7c8 = (GPR_S64(ctx, 3) <= 0);
        ctx->pc = 0x29A7CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29A7C8u;
        // 0x29a7cc: 0x24b70001  addiu       $s7, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29a7c8) {
            ctx->pc = 0x29A900u;
            goto label_29a900;
        }
    }
    ctx->pc = 0x29A7D0u;
    // 0x29a7d0: 0x51280  sll         $v0, $a1, 10
    ctx->pc = 0x29a7d0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 10));
    // 0x29a7d4: 0x3c15003c  lui         $s5, 0x3C
    ctx->pc = 0x29a7d4u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)60 << 16));
    // 0x29a7d8: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x29a7d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x29a7dc: 0x3c12003c  lui         $s2, 0x3C
    ctx->pc = 0x29a7dcu;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)60 << 16));
    // 0x29a7e0: 0x2883c  dsll32      $s1, $v0, 0
    ctx->pc = 0x29a7e0u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) << (32 + 0));
    // 0x29a7e4: 0x3c160058  lui         $s6, 0x58
    ctx->pc = 0x29a7e4u;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)88 << 16));
    // 0x29a7e8: 0x2413003f  addiu       $s3, $zero, 0x3F
    ctx->pc = 0x29a7e8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
    // 0x29a7ec: 0x8ea2118c  lw          $v0, 0x118C($s5)
    ctx->pc = 0x29a7ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4492)));
label_29a7f0:
    // 0x29a7f0: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x29a7f0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29a7f4: 0x101980  sll         $v1, $s0, 6
    ctx->pc = 0x29a7f4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 6));
    // 0x29a7f8: 0x63438  dsll        $a2, $a2, 16
    ctx->pc = 0x29a7f8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << 16);
    // 0x29a7fc: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x29a7fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x29a800: 0x663025  or          $a2, $v1, $a2
    ctx->pc = 0x29a800u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) | GPR_U64(ctx, 6));
    // 0x29a804: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x29a804u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x29a808: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x29a808u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29a80c: 0xc23025  or          $a2, $a2, $v0
    ctx->pc = 0x29a80cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 2));
    // 0x29a810: 0xc0a661a  jal         func_299868
    ctx->pc = 0x29A810u;
    SET_GPR_U32(ctx, 31, 0x29A818u);
    ctx->pc = 0x29A814u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29A810u;
    // 0x29a814: 0x24050041  addiu       $a1, $zero, 0x41 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 65));
    ctx->in_delay_slot = false;
    ctx->pc = 0x299868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x299868u, 0x29A810u, 0x29A818u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29A818u;
label_29a818:
    // 0x29a818: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x29a818u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x29a81c: 0x3c060008  lui         $a2, 0x8
    ctx->pc = 0x29a81cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)8 << 16));
    // 0x29a820: 0x34c60008  ori         $a2, $a2, 0x8
    ctx->pc = 0x29a820u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)8);
    // 0x29a824: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x29a824u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29a828: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x29a828u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x29a82c: 0xc0a661a  jal         func_299868
    ctx->pc = 0x29A82Cu;
    SET_GPR_U32(ctx, 31, 0x29A834u);
    ctx->pc = 0x29A830u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29A82Cu;
    // 0x29a830: 0x26730040  addiu       $s3, $s3, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x299868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x299868u, 0x29A82Cu, 0x29A834u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29A834u;
label_29a834:
    // 0x29a834: 0x8e421180  lw          $v0, 0x1180($s2)
    ctx->pc = 0x29a834u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4480)));
    // 0x29a838: 0x24030800  addiu       $v1, $zero, 0x800
    ctx->pc = 0x29a838u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
    // 0x29a83c: 0x8ec66b80  lw          $a2, 0x6B80($s6)
    ctx->pc = 0x29a83cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 27520)));
    // 0x29a840: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x29a840u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29a844: 0x23fc2  srl         $a3, $v0, 31
    ctx->pc = 0x29a844u;
    SET_GPR_S32(ctx, 7, (int32_t)SRL32(GPR_U32(ctx, 2), 31));
    // 0x29a848: 0x2405000d  addiu       $a1, $zero, 0xD
    ctx->pc = 0x29a848u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x29a84c: 0x471021  addu        $v0, $v0, $a3
    ctx->pc = 0x29a84cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x29a850: 0x63100  sll         $a2, $a2, 4
    ctx->pc = 0x29a850u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
    // 0x29a854: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x29a854u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
    // 0x29a858: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x29a858u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x29a85c: 0x63438  dsll        $a2, $a2, 16
    ctx->pc = 0x29a85cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << 16);
    // 0x29a860: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x29a860u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x29a864: 0x663025  or          $a2, $v1, $a2
    ctx->pc = 0x29a864u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) | GPR_U64(ctx, 6));
    // 0x29a868: 0xc0a661a  jal         func_299868
    ctx->pc = 0x29A868u;
    SET_GPR_U32(ctx, 31, 0x29A870u);
    ctx->pc = 0x29A86Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29A868u;
    // 0x29a86c: 0xd13025  or          $a2, $a2, $s1 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 17));
    ctx->in_delay_slot = false;
    ctx->pc = 0x299868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x299868u, 0x29A868u, 0x29A870u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29A870u;
label_29a870:
    // 0x29a870: 0x8ea6118c  lw          $a2, 0x118C($s5)
    ctx->pc = 0x29a870u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4492)));
    // 0x29a874: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x29a874u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29a878: 0x8e421180  lw          $v0, 0x1180($s2)
    ctx->pc = 0x29a878u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4480)));
    // 0x29a87c: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x29a87cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x29a880: 0x63100  sll         $a2, $a2, 4
    ctx->pc = 0x29a880u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
    // 0x29a884: 0x24c60009  addiu       $a2, $a2, 0x9
    ctx->pc = 0x29a884u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 9));
    // 0x29a888: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x29a888u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x29a88c: 0x24420009  addiu       $v0, $v0, 0x9
    ctx->pc = 0x29a88cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 9));
    // 0x29a890: 0x63438  dsll        $a2, $a2, 16
    ctx->pc = 0x29a890u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << 16);
    // 0x29a894: 0xc0a661a  jal         func_299868
    ctx->pc = 0x29A894u;
    SET_GPR_U32(ctx, 31, 0x29A89Cu);
    ctx->pc = 0x29A898u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29A894u;
    // 0x29a898: 0x463025  or          $a2, $v0, $a2 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x299868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x299868u, 0x29A894u, 0x29A89Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29A89Cu;
label_29a89c:
    // 0x29a89c: 0x8e431180  lw          $v1, 0x1180($s2)
    ctx->pc = 0x29a89cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4480)));
    // 0x29a8a0: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x29a8a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29a8a4: 0x8ec66b80  lw          $a2, 0x6B80($s6)
    ctx->pc = 0x29a8a4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 27520)));
    // 0x29a8a8: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x29a8a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x29a8ac: 0x8ea7118c  lw          $a3, 0x118C($s5)
    ctx->pc = 0x29a8acu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4492)));
    // 0x29a8b0: 0x317c2  srl         $v0, $v1, 31
    ctx->pc = 0x29a8b0u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 3), 31));
    // 0x29a8b4: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x29a8b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x29a8b8: 0xc73021  addu        $a2, $a2, $a3
    ctx->pc = 0x29a8b8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
    // 0x29a8bc: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x29a8bcu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
    // 0x29a8c0: 0x24630800  addiu       $v1, $v1, 0x800
    ctx->pc = 0x29a8c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2048));
    // 0x29a8c4: 0x63100  sll         $a2, $a2, 4
    ctx->pc = 0x29a8c4u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
    // 0x29a8c8: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x29a8c8u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x29a8cc: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x29a8ccu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x29a8d0: 0x63438  dsll        $a2, $a2, 16
    ctx->pc = 0x29a8d0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << 16);
    // 0x29a8d4: 0x663025  or          $a2, $v1, $a2
    ctx->pc = 0x29a8d4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) | GPR_U64(ctx, 6));
    // 0x29a8d8: 0xc0a661a  jal         func_299868
    ctx->pc = 0x29A8D8u;
    SET_GPR_U32(ctx, 31, 0x29A8E0u);
    ctx->pc = 0x29A8DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29A8D8u;
    // 0x29a8dc: 0xd13025  or          $a2, $a2, $s1 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 17));
    ctx->in_delay_slot = false;
    ctx->pc = 0x299868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x299868u, 0x29A8D8u, 0x29A8E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29A8E0u;
label_29a8e0:
    // 0x29a8e0: 0x8e431180  lw          $v1, 0x1180($s2)
    ctx->pc = 0x29a8e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4480)));
    // 0x29a8e4: 0x2462003f  addiu       $v0, $v1, 0x3F
    ctx->pc = 0x29a8e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 63));
    // 0x29a8e8: 0x3c3202a  slt         $a0, $fp, $v1
    ctx->pc = 0x29a8e8u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 30) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x29a8ec: 0x64100b  movn        $v0, $v1, $a0
    ctx->pc = 0x29a8ecu;
    if (GPR_U64(ctx, 4) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 3));
    // 0x29a8f0: 0x21183  sra         $v0, $v0, 6
    ctx->pc = 0x29a8f0u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 6));
    // 0x29a8f4: 0x202102a  slt         $v0, $s0, $v0
    ctx->pc = 0x29a8f4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x29a8f8: 0x1440ffbd  bnez        $v0, . + 4 + (-0x43 << 2)
    ctx->pc = 0x29A8F8u;
    {
        const bool branch_taken_0x29a8f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x29A8FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29A8F8u;
        // 0x29a8fc: 0x8ea2118c  lw          $v0, 0x118C($s5) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4492)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29a8f8) {
            ctx->pc = 0x29A7F0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_29a7f0;
        }
    }
    ctx->pc = 0x29A900u;
label_29a900:
    // 0x29a900: 0x2e0282d  daddu       $a1, $s7, $zero
    ctx->pc = 0x29a900u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29a904: 0x28a20007  slti        $v0, $a1, 0x7
    ctx->pc = 0x29a904u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)7) ? 1 : 0);
    // 0x29a908: 0x1440ffa9  bnez        $v0, . + 4 + (-0x57 << 2)
    ctx->pc = 0x29A908u;
    {
        const bool branch_taken_0x29a908 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x29A90Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29A908u;
        // 0x29a90c: 0x3c04003c  lui         $a0, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)60 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29a908) {
            ctx->pc = 0x29A7B0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_29a7b0;
        }
    }
    ctx->pc = 0x29A910u;
    // 0x29a910: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x29a910u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x29a914: 0x3c02003c  lui         $v0, 0x3C
    ctx->pc = 0x29a914u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
    // 0x29a918: 0x8c441188  lw          $a0, 0x1188($v0)
    ctx->pc = 0x29a918u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x3C1188u));
    // 0x29a91c: 0x2410ffff  addiu       $s0, $zero, -0x1
    ctx->pc = 0x29a91cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x29a920: 0x3303c  dsll32      $a2, $v1, 0
    ctx->pc = 0x29a920u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) << (32 + 0));
    // 0x29a924: 0x3407ffff  ori         $a3, $zero, 0xFFFF
    ctx->pc = 0x29a924u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x29a928: 0x73c38  dsll        $a3, $a3, 16
    ctx->pc = 0x29a928u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) << 16);
    // 0x29a92c: 0x34e7ff00  ori         $a3, $a3, 0xFF00
    ctx->pc = 0x29a92cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)65280);
    // 0x29a930: 0x73e38  dsll        $a3, $a3, 24
    ctx->pc = 0x29a930u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) << 24);
    // 0x29a934: 0x204182a  slt         $v1, $s0, $a0
    ctx->pc = 0x29a934u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x29a938: 0x2482003f  addiu       $v0, $a0, 0x3F
    ctx->pc = 0x29a938u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 63));
    // 0x29a93c: 0x83100b  movn        $v0, $a0, $v1
    ctx->pc = 0x29a93cu;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 4));
    // 0x29a940: 0x6303e  dsrl32      $a2, $a2, 0
    ctx->pc = 0x29a940u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) >> (32 + 0));
    // 0x29a944: 0x21183  sra         $v0, $v0, 6
    ctx->pc = 0x29a944u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 6));
    // 0x29a948: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x29a948u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29a94c: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x29a94cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x29a950: 0x2405004d  addiu       $a1, $zero, 0x4D
    ctx->pc = 0x29a950u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 77));
    // 0x29a954: 0xc23025  or          $a2, $a2, $v0
    ctx->pc = 0x29a954u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 2));
    // 0x29a958: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x29a958u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29a95c: 0xc0a661a  jal         func_299868
    ctx->pc = 0x29A95Cu;
    SET_GPR_U32(ctx, 31, 0x29A964u);
    ctx->pc = 0x29A960u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29A95Cu;
    // 0x29a960: 0xc73025  or          $a2, $a2, $a3 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x299868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x299868u, 0x29A95Cu, 0x29A964u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29A964u;
label_29a964:
    // 0x29a964: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x29a964u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29a968: 0x24050048  addiu       $a1, $zero, 0x48
    ctx->pc = 0x29a968u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 72));
    // 0x29a96c: 0xc0a661a  jal         func_299868
    ctx->pc = 0x29A96Cu;
    SET_GPR_U32(ctx, 31, 0x29A974u);
    ctx->pc = 0x29A970u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29A96Cu;
    // 0x29a970: 0x3c060003  lui         $a2, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)3 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x299868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x299868u, 0x29A96Cu, 0x29A974u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29A974u;
label_29a974:
    // 0x29a974: 0x3c02003c  lui         $v0, 0x3C
    ctx->pc = 0x29a974u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
    // 0x29a978: 0x3c03003c  lui         $v1, 0x3C
    ctx->pc = 0x29a978u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)60 << 16));
    // 0x29a97c: 0x8c441180  lw          $a0, 0x1180($v0)
    ctx->pc = 0x29a97cu;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x3C1180u));
    // 0x29a980: 0x3c072400  lui         $a3, 0x2400
    ctx->pc = 0x29a980u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)9216 << 16));
    // 0x29a984: 0x8c6511b8  lw          $a1, 0x11B8($v1)
    ctx->pc = 0x29a984u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x3C11B8u));
    // 0x29a988: 0x34088000  ori         $t0, $zero, 0x8000
    ctx->pc = 0x29a988u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x29a98c: 0x846b8  dsll        $t0, $t0, 26
    ctx->pc = 0x29a98cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) << 26);
    // 0x29a990: 0x3508c000  ori         $t0, $t0, 0xC000
    ctx->pc = 0x29a990u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)49152);
    // 0x29a994: 0x84538  dsll        $t0, $t0, 20
    ctx->pc = 0x29a994u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) << 20);
    // 0x29a998: 0x204182a  slt         $v1, $s0, $a0
    ctx->pc = 0x29a998u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x29a99c: 0x2482003f  addiu       $v0, $a0, 0x3F
    ctx->pc = 0x29a99cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 63));
    // 0x29a9a0: 0x83100b  movn        $v0, $a0, $v1
    ctx->pc = 0x29a9a0u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 4));
    // 0x29a9a4: 0x52fb8  dsll        $a1, $a1, 30
    ctx->pc = 0x29a9a4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 30);
    // 0x29a9a8: 0x3c04003c  lui         $a0, 0x3C
    ctx->pc = 0x29a9a8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)60 << 16));
    // 0x29a9ac: 0x21183  sra         $v0, $v0, 6
    ctx->pc = 0x29a9acu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 6));
    // 0x29a9b0: 0x9c8611ac  lwu         $a2, 0x11AC($a0)
    ctx->pc = 0x29a9b0u;
    SET_GPR_ZE32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 4), 4524)));
    // 0x29a9b4: 0x213b8  dsll        $v0, $v0, 14
    ctx->pc = 0x29a9b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 14);
    // 0x29a9b8: 0xa72825  or          $a1, $a1, $a3
    ctx->pc = 0x29a9b8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 7));
    // 0x29a9bc: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x29a9bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29a9c0: 0xc23025  or          $a2, $a2, $v0
    ctx->pc = 0x29a9c0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 2));
    // 0x29a9c4: 0xc53025  or          $a2, $a2, $a1
    ctx->pc = 0x29a9c4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 5));
    // 0x29a9c8: 0xc83025  or          $a2, $a2, $t0
    ctx->pc = 0x29a9c8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 8));
    // 0x29a9cc: 0xc0a661a  jal         func_299868
    ctx->pc = 0x29A9CCu;
    SET_GPR_U32(ctx, 31, 0x29A9D4u);
    ctx->pc = 0x29A9D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29A9CCu;
    // 0x29a9d0: 0x24050007  addiu       $a1, $zero, 0x7 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x299868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x299868u, 0x29A9CCu, 0x29A9D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29A9D4u;
label_29a9d4:
    // 0x29a9d4: 0x3c02003c  lui         $v0, 0x3C
    ctx->pc = 0x29a9d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
    // 0x29a9d8: 0x3c04003c  lui         $a0, 0x3C
    ctx->pc = 0x29a9d8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)60 << 16));
    // 0x29a9dc: 0x8c461194  lw          $a2, 0x1194($v0)
    ctx->pc = 0x29a9dcu;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x3C1194u));
    // 0x29a9e0: 0x24080800  addiu       $t0, $zero, 0x800
    ctx->pc = 0x29a9e0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
    // 0x29a9e4: 0x8c831188  lw          $v1, 0x1188($a0)
    ctx->pc = 0x29a9e4u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x3C1188u));
    // 0x29a9e8: 0x24050019  addiu       $a1, $zero, 0x19
    ctx->pc = 0x29a9e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
    // 0x29a9ec: 0x63fc2  srl         $a3, $a2, 31
    ctx->pc = 0x29a9ecu;
    SET_GPR_S32(ctx, 7, (int32_t)SRL32(GPR_U32(ctx, 6), 31));
    // 0x29a9f0: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x29a9f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29a9f4: 0x317c2  srl         $v0, $v1, 31
    ctx->pc = 0x29a9f4u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 3), 31));
    // 0x29a9f8: 0xc73021  addu        $a2, $a2, $a3
    ctx->pc = 0x29a9f8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
    // 0x29a9fc: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x29a9fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x29aa00: 0x63043  sra         $a2, $a2, 1
    ctx->pc = 0x29aa00u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 6), 1));
    // 0x29aa04: 0x1063023  subu        $a2, $t0, $a2
    ctx->pc = 0x29aa04u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 8), GPR_U32(ctx, 6)));
    // 0x29aa08: 0x31843  sra         $v1, $v1, 1
    ctx->pc = 0x29aa08u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 1));
    // 0x29aa0c: 0x1034023  subu        $t0, $t0, $v1
    ctx->pc = 0x29aa0cu;
    SET_GPR_S32(ctx, 8, (int32_t)SUB32(GPR_U32(ctx, 8), GPR_U32(ctx, 3)));
    // 0x29aa10: 0x63100  sll         $a2, $a2, 4
    ctx->pc = 0x29aa10u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
    // 0x29aa14: 0x84100  sll         $t0, $t0, 4
    ctx->pc = 0x29aa14u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 4));
    // 0x29aa18: 0x6303c  dsll32      $a2, $a2, 0
    ctx->pc = 0x29aa18u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << (32 + 0));
    // 0x29aa1c: 0xc0a661a  jal         func_299868
    ctx->pc = 0x29AA1Cu;
    SET_GPR_U32(ctx, 31, 0x29AA24u);
    ctx->pc = 0x29AA20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29AA1Cu;
    // 0x29aa20: 0x1063025  or          $a2, $t0, $a2 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 8) | GPR_U64(ctx, 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x299868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x299868u, 0x29AA1Cu, 0x29AA24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29AA24u;
label_29aa24:
    // 0x29aa24: 0x3c02003c  lui         $v0, 0x3C
    ctx->pc = 0x29aa24u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
    // 0x29aa28: 0x8c431188  lw          $v1, 0x1188($v0)
    ctx->pc = 0x29aa28u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x3C1188u));
    // 0x29aa2c: 0x203802a  slt         $s0, $s0, $v1
    ctx->pc = 0x29aa2cu;
    SET_GPR_U64(ctx, 16, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x29aa30: 0x2462003f  addiu       $v0, $v1, 0x3F
    ctx->pc = 0x29aa30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 63));
    // 0x29aa34: 0x70100b  movn        $v0, $v1, $s0
    ctx->pc = 0x29aa34u;
    if (GPR_U64(ctx, 16) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 3));
    // 0x29aa38: 0x21183  sra         $v0, $v0, 6
    ctx->pc = 0x29aa38u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 6));
    // 0x29aa3c: 0x18400053  blez        $v0, . + 4 + (0x53 << 2)
    ctx->pc = 0x29AA3Cu;
    {
        const bool branch_taken_0x29aa3c = (GPR_S64(ctx, 2) <= 0);
        ctx->pc = 0x29AA40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29AA3Cu;
        // 0x29aa40: 0x24160800  addiu       $s6, $zero, 0x800 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29aa3c) {
            ctx->pc = 0x29AB8Cu;
            goto label_29ab8c;
        }
    }
    ctx->pc = 0x29AA44u;
    // 0x29aa44: 0x3c13003c  lui         $s3, 0x3C
    ctx->pc = 0x29aa44u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)60 << 16));
    // 0x29aa48: 0x3c12003c  lui         $s2, 0x3C
    ctx->pc = 0x29aa48u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)60 << 16));
    // 0x29aa4c: 0x3415dff8  ori         $s5, $zero, 0xDFF8
    ctx->pc = 0x29aa4cu;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)57336);
    // 0x29aa50: 0x15af78  dsll        $s5, $s5, 29
    ctx->pc = 0x29aa50u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 21) << 29);
    // 0x29aa54: 0x2410003f  addiu       $s0, $zero, 0x3F
    ctx->pc = 0x29aa54u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
    // 0x29aa58: 0x8e621194  lw          $v0, 0x1194($s3)
    ctx->pc = 0x29aa58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4500)));
    // 0x29aa5c: 0x0  nop
    ctx->pc = 0x29aa5cu;
    // NOP
label_29aa60:
    // 0x29aa60: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x29aa60u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29aa64: 0x111980  sll         $v1, $s1, 6
    ctx->pc = 0x29aa64u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 6));
    // 0x29aa68: 0x63438  dsll        $a2, $a2, 16
    ctx->pc = 0x29aa68u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << 16);
    // 0x29aa6c: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x29aa6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x29aa70: 0x663025  or          $a2, $v1, $a2
    ctx->pc = 0x29aa70u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) | GPR_U64(ctx, 6));
    // 0x29aa74: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x29aa74u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x29aa78: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x29aa78u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29aa7c: 0xc23025  or          $a2, $a2, $v0
    ctx->pc = 0x29aa7cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 2));
    // 0x29aa80: 0xc0a661a  jal         func_299868
    ctx->pc = 0x29AA80u;
    SET_GPR_U32(ctx, 31, 0x29AA88u);
    ctx->pc = 0x29AA84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29AA80u;
    // 0x29aa84: 0x24050041  addiu       $a1, $zero, 0x41 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 65));
    ctx->in_delay_slot = false;
    ctx->pc = 0x299868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x299868u, 0x29AA80u, 0x29AA88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29AA88u;
label_29aa88:
    // 0x29aa88: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x29aa88u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x29aa8c: 0x3c060008  lui         $a2, 0x8
    ctx->pc = 0x29aa8cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)8 << 16));
    // 0x29aa90: 0x34c60008  ori         $a2, $a2, 0x8
    ctx->pc = 0x29aa90u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)8);
    // 0x29aa94: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x29aa94u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29aa98: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x29aa98u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x29aa9c: 0xc0a661a  jal         func_299868
    ctx->pc = 0x29AA9Cu;
    SET_GPR_U32(ctx, 31, 0x29AAA4u);
    ctx->pc = 0x29AAA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29AA9Cu;
    // 0x29aaa0: 0x26100040  addiu       $s0, $s0, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x299868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x299868u, 0x29AA9Cu, 0x29AAA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29AAA4u;
label_29aaa4:
    // 0x29aaa4: 0x8e661194  lw          $a2, 0x1194($s3)
    ctx->pc = 0x29aaa4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4500)));
    // 0x29aaa8: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x29aaa8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29aaac: 0x8e431188  lw          $v1, 0x1188($s2)
    ctx->pc = 0x29aaacu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4488)));
    // 0x29aab0: 0x2405000d  addiu       $a1, $zero, 0xD
    ctx->pc = 0x29aab0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x29aab4: 0x617c2  srl         $v0, $a2, 31
    ctx->pc = 0x29aab4u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 6), 31));
    // 0x29aab8: 0xc23021  addu        $a2, $a2, $v0
    ctx->pc = 0x29aab8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x29aabc: 0x33fc2  srl         $a3, $v1, 31
    ctx->pc = 0x29aabcu;
    SET_GPR_S32(ctx, 7, (int32_t)SRL32(GPR_U32(ctx, 3), 31));
    // 0x29aac0: 0x63043  sra         $a2, $a2, 1
    ctx->pc = 0x29aac0u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 6), 1));
    // 0x29aac4: 0x671821  addu        $v1, $v1, $a3
    ctx->pc = 0x29aac4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x29aac8: 0x2c63023  subu        $a2, $s6, $a2
    ctx->pc = 0x29aac8u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 22), GPR_U32(ctx, 6)));
    // 0x29aacc: 0x31843  sra         $v1, $v1, 1
    ctx->pc = 0x29aaccu;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 1));
    // 0x29aad0: 0x63100  sll         $a2, $a2, 4
    ctx->pc = 0x29aad0u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
    // 0x29aad4: 0x2c31823  subu        $v1, $s6, $v1
    ctx->pc = 0x29aad4u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 22), GPR_U32(ctx, 3)));
    // 0x29aad8: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x29aad8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x29aadc: 0x63438  dsll        $a2, $a2, 16
    ctx->pc = 0x29aadcu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << 16);
    // 0x29aae0: 0x663025  or          $a2, $v1, $a2
    ctx->pc = 0x29aae0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) | GPR_U64(ctx, 6));
    // 0x29aae4: 0xc0a661a  jal         func_299868
    ctx->pc = 0x29AAE4u;
    SET_GPR_U32(ctx, 31, 0x29AAECu);
    ctx->pc = 0x29AAE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29AAE4u;
    // 0x29aae8: 0xd53025  or          $a2, $a2, $s5 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 21));
    ctx->in_delay_slot = false;
    ctx->pc = 0x299868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x299868u, 0x29AAE4u, 0x29AAECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29AAECu;
label_29aaec:
    // 0x29aaec: 0x3c03003c  lui         $v1, 0x3C
    ctx->pc = 0x29aaecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)60 << 16));
    // 0x29aaf0: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x29aaf0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29aaf4: 0x8c66118c  lw          $a2, 0x118C($v1)
    ctx->pc = 0x29aaf4u;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x3C118Cu));
    // 0x29aaf8: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x29aaf8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x29aafc: 0x3c03003c  lui         $v1, 0x3C
    ctx->pc = 0x29aafcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)60 << 16));
    // 0x29ab00: 0x8c621180  lw          $v0, 0x1180($v1)
    ctx->pc = 0x29ab00u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3C1180u));
    // 0x29ab04: 0x63100  sll         $a2, $a2, 4
    ctx->pc = 0x29ab04u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
    // 0x29ab08: 0x24c60009  addiu       $a2, $a2, 0x9
    ctx->pc = 0x29ab08u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 9));
    // 0x29ab0c: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x29ab0cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x29ab10: 0x24420009  addiu       $v0, $v0, 0x9
    ctx->pc = 0x29ab10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 9));
    // 0x29ab14: 0x63438  dsll        $a2, $a2, 16
    ctx->pc = 0x29ab14u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << 16);
    // 0x29ab18: 0xc0a661a  jal         func_299868
    ctx->pc = 0x29AB18u;
    SET_GPR_U32(ctx, 31, 0x29AB20u);
    ctx->pc = 0x29AB1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29AB18u;
    // 0x29ab1c: 0x463025  or          $a2, $v0, $a2 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x299868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x299868u, 0x29AB18u, 0x29AB20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29AB20u;
label_29ab20:
    // 0x29ab20: 0x8e661194  lw          $a2, 0x1194($s3)
    ctx->pc = 0x29ab20u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4500)));
    // 0x29ab24: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x29ab24u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29ab28: 0x8e431188  lw          $v1, 0x1188($s2)
    ctx->pc = 0x29ab28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4488)));
    // 0x29ab2c: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x29ab2cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x29ab30: 0x617c2  srl         $v0, $a2, 31
    ctx->pc = 0x29ab30u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 6), 31));
    // 0x29ab34: 0xc23021  addu        $a2, $a2, $v0
    ctx->pc = 0x29ab34u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x29ab38: 0x33fc2  srl         $a3, $v1, 31
    ctx->pc = 0x29ab38u;
    SET_GPR_S32(ctx, 7, (int32_t)SRL32(GPR_U32(ctx, 3), 31));
    // 0x29ab3c: 0x63043  sra         $a2, $a2, 1
    ctx->pc = 0x29ab3cu;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 6), 1));
    // 0x29ab40: 0x671821  addu        $v1, $v1, $a3
    ctx->pc = 0x29ab40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x29ab44: 0x24c60800  addiu       $a2, $a2, 0x800
    ctx->pc = 0x29ab44u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 2048));
    // 0x29ab48: 0x31843  sra         $v1, $v1, 1
    ctx->pc = 0x29ab48u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 1));
    // 0x29ab4c: 0x63100  sll         $a2, $a2, 4
    ctx->pc = 0x29ab4cu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
    // 0x29ab50: 0x24630800  addiu       $v1, $v1, 0x800
    ctx->pc = 0x29ab50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2048));
    // 0x29ab54: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x29ab54u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x29ab58: 0x63438  dsll        $a2, $a2, 16
    ctx->pc = 0x29ab58u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << 16);
    // 0x29ab5c: 0x663025  or          $a2, $v1, $a2
    ctx->pc = 0x29ab5cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) | GPR_U64(ctx, 6));
    // 0x29ab60: 0xc0a661a  jal         func_299868
    ctx->pc = 0x29AB60u;
    SET_GPR_U32(ctx, 31, 0x29AB68u);
    ctx->pc = 0x29AB64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29AB60u;
    // 0x29ab64: 0xd53025  or          $a2, $a2, $s5 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 21));
    ctx->in_delay_slot = false;
    ctx->pc = 0x299868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x299868u, 0x29AB60u, 0x29AB68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29AB68u;
label_29ab68:
    // 0x29ab68: 0x8e441188  lw          $a0, 0x1188($s2)
    ctx->pc = 0x29ab68u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4488)));
    // 0x29ab6c: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x29ab6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x29ab70: 0x64182a  slt         $v1, $v1, $a0
    ctx->pc = 0x29ab70u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x29ab74: 0x2482003f  addiu       $v0, $a0, 0x3F
    ctx->pc = 0x29ab74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 63));
    // 0x29ab78: 0x83100b  movn        $v0, $a0, $v1
    ctx->pc = 0x29ab78u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 4));
    // 0x29ab7c: 0x21183  sra         $v0, $v0, 6
    ctx->pc = 0x29ab7cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 6));
    // 0x29ab80: 0x222102a  slt         $v0, $s1, $v0
    ctx->pc = 0x29ab80u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x29ab84: 0x1440ffb6  bnez        $v0, . + 4 + (-0x4A << 2)
    ctx->pc = 0x29AB84u;
    {
        const bool branch_taken_0x29ab84 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x29AB88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29AB84u;
        // 0x29ab88: 0x8e621194  lw          $v0, 0x1194($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4500)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29ab84) {
            ctx->pc = 0x29AA60u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_29aa60;
        }
    }
    ctx->pc = 0x29AB8Cu;
label_29ab8c:
    // 0x29ab8c: 0x3c04003c  lui         $a0, 0x3C
    ctx->pc = 0x29ab8cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)60 << 16));
    // 0x29ab90: 0x3c02003c  lui         $v0, 0x3C
    ctx->pc = 0x29ab90u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
    // 0x29ab94: 0x8c86118c  lw          $a2, 0x118C($a0)
    ctx->pc = 0x29ab94u;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x3C118Cu));
    // 0x29ab98: 0x24080800  addiu       $t0, $zero, 0x800
    ctx->pc = 0x29ab98u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
    // 0x29ab9c: 0x8c431180  lw          $v1, 0x1180($v0)
    ctx->pc = 0x29ab9cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x3C1180u));
    // 0x29aba0: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x29aba0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29aba4: 0x63fc2  srl         $a3, $a2, 31
    ctx->pc = 0x29aba4u;
    SET_GPR_S32(ctx, 7, (int32_t)SRL32(GPR_U32(ctx, 6), 31));
    // 0x29aba8: 0x24050019  addiu       $a1, $zero, 0x19
    ctx->pc = 0x29aba8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
    // 0x29abac: 0xc73021  addu        $a2, $a2, $a3
    ctx->pc = 0x29abacu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
    // 0x29abb0: 0x317c2  srl         $v0, $v1, 31
    ctx->pc = 0x29abb0u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 3), 31));
    // 0x29abb4: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x29abb4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x29abb8: 0x63043  sra         $a2, $a2, 1
    ctx->pc = 0x29abb8u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 6), 1));
    // 0x29abbc: 0x1063023  subu        $a2, $t0, $a2
    ctx->pc = 0x29abbcu;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 8), GPR_U32(ctx, 6)));
    // 0x29abc0: 0x31843  sra         $v1, $v1, 1
    ctx->pc = 0x29abc0u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 1));
    // 0x29abc4: 0x1034023  subu        $t0, $t0, $v1
    ctx->pc = 0x29abc4u;
    SET_GPR_S32(ctx, 8, (int32_t)SUB32(GPR_U32(ctx, 8), GPR_U32(ctx, 3)));
    // 0x29abc8: 0x63100  sll         $a2, $a2, 4
    ctx->pc = 0x29abc8u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
    // 0x29abcc: 0x84100  sll         $t0, $t0, 4
    ctx->pc = 0x29abccu;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 4));
    // 0x29abd0: 0x6303c  dsll32      $a2, $a2, 0
    ctx->pc = 0x29abd0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << (32 + 0));
    // 0x29abd4: 0xc0a661a  jal         func_299868
    ctx->pc = 0x29ABD4u;
    SET_GPR_U32(ctx, 31, 0x29ABDCu);
    ctx->pc = 0x29ABD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29ABD4u;
    // 0x29abd8: 0x1063025  or          $a2, $t0, $a2 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 8) | GPR_U64(ctx, 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x299868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x299868u, 0x29ABD4u, 0x29ABDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29ABDCu;
label_29abdc:
    // 0x29abdc: 0x7bb000b0  lq          $s0, 0xB0($sp)
    ctx->pc = 0x29abdcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x29abe0: 0x7bb100a0  lq          $s1, 0xA0($sp)
    ctx->pc = 0x29abe0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x29abe4: 0x7bb20090  lq          $s2, 0x90($sp)
    ctx->pc = 0x29abe4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x29abe8: 0x7bb30080  lq          $s3, 0x80($sp)
    ctx->pc = 0x29abe8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x29abec: 0x7bb40070  lq          $s4, 0x70($sp)
    ctx->pc = 0x29abecu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x29abf0: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x29abf0u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x29abf4: 0x7bb60050  lq          $s6, 0x50($sp)
    ctx->pc = 0x29abf4u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x29abf8: 0x7bb70040  lq          $s7, 0x40($sp)
    ctx->pc = 0x29abf8u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x29abfc: 0x7bbe0030  lq          $fp, 0x30($sp)
    ctx->pc = 0x29abfcu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x29ac00: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x29ac00u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x29ac04: 0x3e00008  jr          $ra
    ctx->pc = 0x29AC04u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29AC08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29AC04u;
        // 0x29ac08: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29AC04u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x29AC0Cu;
    // 0x29ac0c: 0x0  nop
    ctx->pc = 0x29ac0cu;
    // NOP
    ctx->pc = 0x29ac10u;
}
