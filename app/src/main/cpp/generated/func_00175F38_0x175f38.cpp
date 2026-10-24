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

// Function: func_00175F38
// Address: 0x175f38 - 0x176738
void func_00175F38_0x175f38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_00175F38_0x175f38");
#endif

    switch (ctx->pc) {
        case 0x175fc4u: goto label_175fc4;
        case 0x175ff0u: goto label_175ff0;
        case 0x176004u: goto label_176004;
        case 0x176014u: goto label_176014;
        case 0x176028u: goto label_176028;
        case 0x17607cu: goto label_17607c;
        case 0x1760b0u: goto label_1760b0;
        case 0x1760d8u: goto label_1760d8;
        case 0x1760ecu: goto label_1760ec;
        case 0x176108u: goto label_176108;
        case 0x176228u: goto label_176228;
        case 0x176234u: goto label_176234;
        case 0x176240u: goto label_176240;
        case 0x176250u: goto label_176250;
        case 0x17625cu: goto label_17625c;
        case 0x176268u: goto label_176268;
        case 0x176284u: goto label_176284;
        case 0x1763a8u: goto label_1763a8;
        case 0x1763b4u: goto label_1763b4;
        case 0x1763c0u: goto label_1763c0;
        case 0x1763d0u: goto label_1763d0;
        case 0x1763dcu: goto label_1763dc;
        case 0x1763e8u: goto label_1763e8;
        case 0x17640cu: goto label_17640c;
        case 0x176434u: goto label_176434;
        case 0x17645cu: goto label_17645c;
        case 0x176490u: goto label_176490;
        case 0x1764e0u: goto label_1764e0;
        case 0x176524u: goto label_176524;
        case 0x176534u: goto label_176534;
        case 0x1765b0u: goto label_1765b0;
        case 0x176628u: goto label_176628;
        case 0x176644u: goto label_176644;
        case 0x176698u: goto label_176698;
        default: break;
    }

    ctx->pc = 0x175f38u;

    // 0x175f38: 0x27bdfef0  addiu       $sp, $sp, -0x110
    ctx->pc = 0x175f38u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967024));
    // 0x175f3c: 0x7fb200c0  sq          $s2, 0xC0($sp)
    ctx->pc = 0x175f3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 18));
    // 0x175f40: 0x7fb000e0  sq          $s0, 0xE0($sp)
    ctx->pc = 0x175f40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 16));
    // 0x175f44: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x175f44u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x175f48: 0x7fb100d0  sq          $s1, 0xD0($sp)
    ctx->pc = 0x175f48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 17));
    // 0x175f4c: 0x7fb300b0  sq          $s3, 0xB0($sp)
    ctx->pc = 0x175f4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 19));
    // 0x175f50: 0x7fb400a0  sq          $s4, 0xA0($sp)
    ctx->pc = 0x175f50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 20));
    // 0x175f54: 0x7fb50090  sq          $s5, 0x90($sp)
    ctx->pc = 0x175f54u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 21));
    // 0x175f58: 0x7fb60080  sq          $s6, 0x80($sp)
    ctx->pc = 0x175f58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 22));
    // 0x175f5c: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x175f5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x175f60: 0x7fbe0060  sq          $fp, 0x60($sp)
    ctx->pc = 0x175f60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 30));
    // 0x175f64: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x175f64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x175f68: 0xe7b60100  swc1        $f22, 0x100($sp)
    ctx->pc = 0x175f68u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 256), bits); }
    // 0x175f6c: 0xe7b500f8  swc1        $f21, 0xF8($sp)
    ctx->pc = 0x175f6cu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 248), bits); }
    // 0x175f70: 0xe7b400f0  swc1        $f20, 0xF0($sp)
    ctx->pc = 0x175f70u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 240), bits); }
    // 0x175f74: 0x924302f5  lbu         $v1, 0x2F5($s2)
    ctx->pc = 0x175f74u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 757)));
    // 0x175f78: 0x2c620006  sltiu       $v0, $v1, 0x6
    ctx->pc = 0x175f78u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
    // 0x175f7c: 0x104001de  beqz        $v0, . + 4 + (0x1DE << 2)
    ctx->pc = 0x175F7Cu;
    {
        const bool branch_taken_0x175f7c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x175F80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x175F7Cu;
        // 0x175f80: 0x3c020042  lui         $v0, 0x42 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)66 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x175f7c) {
            ctx->pc = 0x1766F8u;
            goto label_1766f8;
        }
    }
    ctx->pc = 0x175F84u;
    // 0x175f84: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x175f84u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x175f88: 0x244211c0  addiu       $v0, $v0, 0x11C0
    ctx->pc = 0x175f88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4544));
    // 0x175f8c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x175f8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x175f90: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x175f90u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x175f94: 0x800008  jr          $a0
    ctx->pc = 0x175F94u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x175F9Cu: goto label_175f9c;
            case 0x1764A0u: goto label_1764a0;
            case 0x1764C4u: goto label_1764c4;
            case 0x17665Cu: goto label_17665c;
            case 0x1766A0u: goto label_1766a0;
            case 0x1766E4u: goto label_1766e4;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x175F94u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x175F9Cu;
label_175f9c:
    // 0x175f9c: 0x3c040060  lui         $a0, 0x60
    ctx->pc = 0x175f9cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
    // 0x175fa0: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x175fa0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x175fa4: 0x2484ee00  addiu       $a0, $a0, -0x1200
    ctx->pc = 0x175fa4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962688));
    // 0x175fa8: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x175fa8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x175fac: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x175facu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x175fb0: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x175fb0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x175fb4: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x175fb4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x175fb8: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x175fb8u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x175fbc: 0xc0b2e92  jal         func_2CBA48
    ctx->pc = 0x175FBCu;
    SET_GPR_U32(ctx, 31, 0x175FC4u);
    ctx->pc = 0x175FC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x175FBCu;
    // 0x175fc0: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CBA48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CBA48u, 0x175FBCu, 0x175FC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x175FC4u;
label_175fc4:
    // 0x175fc4: 0x82430d3c  lb          $v1, 0xD3C($s2)
    ctx->pc = 0x175fc4u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 3388)));
    // 0x175fc8: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x175FC8u;
    {
        const bool branch_taken_0x175fc8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x175FCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x175FC8u;
        // 0x175fcc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x175fc8) {
            ctx->pc = 0x175FE0u;
            goto label_175fe0;
        }
    }
    ctx->pc = 0x175FD0u;
    // 0x175fd0: 0x10620009  beq         $v1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x175FD0u;
    {
        const bool branch_taken_0x175fd0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x175FD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x175FD0u;
        // 0x175fd4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x175fd0) {
            ctx->pc = 0x175FF8u;
            goto label_175ff8;
        }
    }
    ctx->pc = 0x175FD8u;
    // 0x175fd8: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x175FD8u;
    {
        const bool branch_taken_0x175fd8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x175FDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x175FD8u;
        // 0x175fdc: 0x82450d3c  lb          $a1, 0xD3C($s2) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 3388)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x175fd8) {
            ctx->pc = 0x17600Cu;
            goto label_17600c;
        }
    }
    ctx->pc = 0x175FE0u;
label_175fe0:
    // 0x175fe0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x175fe0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x175fe4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x175fe4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x175fe8: 0xc05da94  jal         func_176A50
    ctx->pc = 0x175FE8u;
    SET_GPR_U32(ctx, 31, 0x175FF0u);
    ctx->pc = 0x175FECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x175FE8u;
    // 0x175fec: 0x24060003  addiu       $a2, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x176A50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176A50u, 0x175FE8u, 0x175FF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x175FF0u;
label_175ff0:
    // 0x175ff0: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x175FF0u;
    {
        const bool branch_taken_0x175ff0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x175FF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x175FF0u;
        // 0x175ff4: 0x82450d3c  lb          $a1, 0xD3C($s2) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 3388)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x175ff0) {
            ctx->pc = 0x176008u;
            goto label_176008;
        }
    }
    ctx->pc = 0x175FF8u;
label_175ff8:
    // 0x175ff8: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x175ff8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x175ffc: 0xc05da94  jal         func_176A50
    ctx->pc = 0x175FFCu;
    SET_GPR_U32(ctx, 31, 0x176004u);
    ctx->pc = 0x176000u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x175FFCu;
    // 0x176000: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x176A50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176A50u, 0x175FFCu, 0x176004u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x176004u;
label_176004:
    // 0x176004: 0x82450d3c  lb          $a1, 0xD3C($s2)
    ctx->pc = 0x176004u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 3388)));
label_176008:
    // 0x176008: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x176008u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_17600c:
    // 0x17600c: 0xc05da78  jal         func_1769E0
    ctx->pc = 0x17600Cu;
    SET_GPR_U32(ctx, 31, 0x176014u);
    ctx->pc = 0x176010u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17600Cu;
    // 0x176010: 0x26560d30  addiu       $s6, $s2, 0xD30 (Delay Slot)
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 18), 3376));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1769E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1769E0u, 0x17600Cu, 0x176014u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x176014u;
label_176014:
    // 0x176014: 0x2c0402d  daddu       $t0, $s6, $zero
    ctx->pc = 0x176014u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x176018: 0x3c098000  lui         $t1, 0x8000
    ctx->pc = 0x176018u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)32768 << 16));
    // 0x17601c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x17601cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x176020: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x176020u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x176024: 0x0  nop
    ctx->pc = 0x176024u;
    // NOP
label_176028:
    // 0x176028: 0x61142  srl         $v0, $a2, 5
    ctx->pc = 0x176028u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 6), 5));
    // 0x17602c: 0x30c4001f  andi        $a0, $a2, 0x1F
    ctx->pc = 0x17602cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)31);
    // 0x176030: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x176030u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x176034: 0x892006  srlv        $a0, $t1, $a0
    ctx->pc = 0x176034u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 9), GPR_U32(ctx, 4) & 0x1F));
    // 0x176038: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x176038u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x17603c: 0x24e50001  addiu       $a1, $a3, 0x1
    ctx->pc = 0x17603cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x176040: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x176040u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x176044: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x176044u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x176048: 0x2cc20002  sltiu       $v0, $a2, 0x2
    ctx->pc = 0x176048u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x17604c: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x17604cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x176050: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
    ctx->pc = 0x176050u;
    {
        const bool branch_taken_0x176050 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x176054u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x176050u;
        // 0x176054: 0xa3380b  movn        $a3, $a1, $v1 (Delay Slot)
        if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 7, GPR_VEC(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x176050) {
            ctx->pc = 0x176028u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_176028;
        }
    }
    ctx->pc = 0x176058u;
    // 0x176058: 0x14e00004  bnez        $a3, . + 4 + (0x4 << 2)
    ctx->pc = 0x176058u;
    {
        const bool branch_taken_0x176058 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        if (branch_taken_0x176058) {
            ctx->pc = 0x17606Cu;
            goto label_17606c;
        }
    }
    ctx->pc = 0x176060u;
    // 0x176060: 0xa24002f7  sb          $zero, 0x2F7($s2)
    ctx->pc = 0x176060u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 759), (uint8_t)GPR_U32(ctx, 0));
    // 0x176064: 0x100001a2  b           . + 4 + (0x1A2 << 2)
    ctx->pc = 0x176064u;
    {
        const bool branch_taken_0x176064 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x176068u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x176064u;
        // 0x176068: 0xa24002f4  sb          $zero, 0x2F4($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 756), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x176064) {
            ctx->pc = 0x1766F0u;
            goto label_1766f0;
        }
    }
    ctx->pc = 0x17606Cu;
label_17606c:
    // 0x17606c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x17606cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x176070: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x176070u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x176074: 0xc06de42  jal         func_1B7908
    ctx->pc = 0x176074u;
    SET_GPR_U32(ctx, 31, 0x17607Cu);
    ctx->pc = 0x176078u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x176074u;
    // 0x176078: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B7908u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7908u, 0x176074u, 0x17607Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17607Cu;
label_17607c:
    // 0x17607c: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x17607cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x176080: 0xafa00004  sw          $zero, 0x4($sp)
    ctx->pc = 0x176080u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
    // 0x176084: 0xafa00008  sw          $zero, 0x8($sp)
    ctx->pc = 0x176084u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
    // 0x176088: 0xe7b4000c  swc1        $f20, 0xC($sp)
    ctx->pc = 0x176088u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x17608c: 0xfba00010  sqc2        $vf0, 0x10($sp)
    ctx->pc = 0x17608cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x176090: 0x264205c0  addiu       $v0, $s2, 0x5C0
    ctx->pc = 0x176090u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 1472));
    // 0x176094: 0x4600a546  mov.s       $f21, $f20
    ctx->pc = 0x176094u;
    ctx->f[21] = FPU_MOV_S(ctx->f[20]);
    // 0x176098: 0xafa20040  sw          $v0, 0x40($sp)
    ctx->pc = 0x176098u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 2));
    // 0x17609c: 0x3c013c23  lui         $at, 0x3C23
    ctx->pc = 0x17609cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15395 << 16));
    // 0x1760a0: 0x3421d70a  ori         $at, $at, 0xD70A
    ctx->pc = 0x1760a0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55050);
    // 0x1760a4: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x1760a4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x1760a8: 0xc0c7408  jal         func_31D020
    ctx->pc = 0x1760A8u;
    SET_GPR_U32(ctx, 31, 0x1760B0u);
    ctx->pc = 0x1760ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1760A8u;
    // 0x1760ac: 0x3c1e0042  lui         $fp, 0x42 (Delay Slot)
    SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)66 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31D020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31D020u, 0x1760A8u, 0x1760B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1760B0u;
label_1760b0:
    // 0x1760b0: 0xc7a10010  lwc1        $f1, 0x10($sp)
    ctx->pc = 0x1760b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1760b4: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x1760b4u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1760b8: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x1760b8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
    // 0x1760bc: 0x3c01bca3  lui         $at, 0xBCA3
    ctx->pc = 0x1760bcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48291 << 16));
    // 0x1760c0: 0x3421d70a  ori         $at, $at, 0xD70A
    ctx->pc = 0x1760c0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55050);
    // 0x1760c4: 0x4481b000  mtc1        $at, $f22
    ctx->pc = 0x1760c4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[22], &bits, sizeof(bits)); }
    // 0x1760c8: 0x27d41290  addiu       $s4, $fp, 0x1290
    ctx->pc = 0x1760c8u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 30), 4752));
    // 0x1760cc: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x1760ccu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1760d0: 0xc0c7408  jal         func_31D020
    ctx->pc = 0x1760D0u;
    SET_GPR_U32(ctx, 31, 0x1760D8u);
    ctx->pc = 0x1760D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1760D0u;
    // 0x1760d4: 0xe7a10010  swc1        $f1, 0x10($sp) (Delay Slot)
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x31D020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31D020u, 0x1760D0u, 0x1760D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1760D8u;
label_1760d8:
    // 0x1760d8: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x1760d8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
    // 0x1760dc: 0xc7a10014  lwc1        $f1, 0x14($sp)
    ctx->pc = 0x1760dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1760e0: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x1760e0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1760e4: 0xc0c7408  jal         func_31D020
    ctx->pc = 0x1760E4u;
    SET_GPR_U32(ctx, 31, 0x1760ECu);
    ctx->pc = 0x1760E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1760E4u;
    // 0x1760e8: 0xe7a10014  swc1        $f1, 0x14($sp) (Delay Slot)
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x31D020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31D020u, 0x1760E4u, 0x1760ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1760ECu;
label_1760ec:
    // 0x1760ec: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x1760ecu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
    // 0x1760f0: 0xc7a10018  lwc1        $f1, 0x18($sp)
    ctx->pc = 0x1760f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1760f4: 0x27b70020  addiu       $s7, $sp, 0x20
    ctx->pc = 0x1760f4u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1760f8: 0x27b30030  addiu       $s3, $sp, 0x30
    ctx->pc = 0x1760f8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1760fc: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x1760fcu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x176100: 0xe7a10018  swc1        $f1, 0x18($sp)
    ctx->pc = 0x176100u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x176104: 0x0  nop
    ctx->pc = 0x176104u;
    // NOP
label_176108:
    // 0x176108: 0x151942  srl         $v1, $s5, 5
    ctx->pc = 0x176108u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 21), 5));
    // 0x17610c: 0x32a5001f  andi        $a1, $s5, 0x1F
    ctx->pc = 0x17610cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)31);
    // 0x176110: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x176110u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x176114: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x176114u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x176118: 0x761821  addu        $v1, $v1, $s6
    ctx->pc = 0x176118u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 22)));
    // 0x17611c: 0xa42006  srlv        $a0, $a0, $a1
    ctx->pc = 0x17611cu;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 4), GPR_U32(ctx, 5) & 0x1F));
    // 0x176120: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x176120u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x176124: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x176124u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x176128: 0x54400058  bnel        $v0, $zero, . + 4 + (0x58 << 2)
    ctx->pc = 0x176128u;
    {
        const bool branch_taken_0x176128 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x176128) {
            ctx->pc = 0x17612Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x176128u;
            // 0x17612c: 0x26b50001  addiu       $s5, $s5, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x17628Cu;
            goto label_17628c;
        }
    }
    ctx->pc = 0x176130u;
    // 0x176130: 0x92840000  lbu         $a0, 0x0($s4)
    ctx->pc = 0x176130u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x176134: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x176134u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x176138: 0x924302b4  lbu         $v1, 0x2B4($s2)
    ctx->pc = 0x176138u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 692)));
    // 0x17613c: 0x28820000  slti        $v0, $a0, 0x0
    ctx->pc = 0x17613cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x176140: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x176140u;
    {
        const bool branch_taken_0x176140 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x176144u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x176140u;
        // 0x176144: 0xafa30020  sw          $v1, 0x20($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x176140) {
            ctx->pc = 0x176150u;
            goto label_176150;
        }
    }
    ctx->pc = 0x176148u;
    // 0x176148: 0x83102a  slt         $v0, $a0, $v1
    ctx->pc = 0x176148u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x17614c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x17614cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_176150:
    // 0x176150: 0x30a200ff  andi        $v0, $a1, 0xFF
    ctx->pc = 0x176150u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x176154: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x176154u;
    {
        const bool branch_taken_0x176154 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x176158u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x176154u;
        // 0x176158: 0x41080  sll         $v0, $a0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x176154) {
            ctx->pc = 0x17616Cu;
            goto label_17616c;
        }
    }
    ctx->pc = 0x17615Cu;
    // 0x17615c: 0x8e430278  lw          $v1, 0x278($s2)
    ctx->pc = 0x17615cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 632)));
    // 0x176160: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x176160u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x176164: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x176164u;
    {
        const bool branch_taken_0x176164 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x176168u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x176164u;
        // 0x176168: 0x8c430000  lw          $v1, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x176164) {
            ctx->pc = 0x176170u;
            goto label_176170;
        }
    }
    ctx->pc = 0x17616Cu;
label_17616c:
    // 0x17616c: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x17616cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_176170:
    // 0x176170: 0x8c620154  lw          $v0, 0x154($v1)
    ctx->pc = 0x176170u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 340)));
    // 0x176174: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x176174u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x176178: 0x92840000  lbu         $a0, 0x0($s4)
    ctx->pc = 0x176178u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x17617c: 0x34420008  ori         $v0, $v0, 0x8
    ctx->pc = 0x17617cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8);
    // 0x176180: 0xac620154  sw          $v0, 0x154($v1)
    ctx->pc = 0x176180u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 340), GPR_U32(ctx, 2));
    // 0x176184: 0x28830000  slti        $v1, $a0, 0x0
    ctx->pc = 0x176184u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x176188: 0x924202b4  lbu         $v0, 0x2B4($s2)
    ctx->pc = 0x176188u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 692)));
    // 0x17618c: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x17618Cu;
    {
        const bool branch_taken_0x17618c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x176190u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17618Cu;
        // 0x176190: 0xafa20020  sw          $v0, 0x20($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17618c) {
            ctx->pc = 0x17619Cu;
            goto label_17619c;
        }
    }
    ctx->pc = 0x176194u;
    // 0x176194: 0x82102a  slt         $v0, $a0, $v0
    ctx->pc = 0x176194u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x176198: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x176198u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_17619c:
    // 0x17619c: 0x30a200ff  andi        $v0, $a1, 0xFF
    ctx->pc = 0x17619cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x1761a0: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1761A0u;
    {
        const bool branch_taken_0x1761a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1761A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1761A0u;
        // 0x1761a4: 0x41080  sll         $v0, $a0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1761a0) {
            ctx->pc = 0x1761B8u;
            goto label_1761b8;
        }
    }
    ctx->pc = 0x1761A8u;
    // 0x1761a8: 0x8e430278  lw          $v1, 0x278($s2)
    ctx->pc = 0x1761a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 632)));
    // 0x1761ac: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1761acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1761b0: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1761B0u;
    {
        const bool branch_taken_0x1761b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1761B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1761B0u;
        // 0x1761b4: 0x8c430000  lw          $v1, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1761b0) {
            ctx->pc = 0x1761BCu;
            goto label_1761bc;
        }
    }
    ctx->pc = 0x1761B8u;
label_1761b8:
    // 0x1761b8: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x1761b8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1761bc:
    // 0x1761bc: 0x8c620154  lw          $v0, 0x154($v1)
    ctx->pc = 0x1761bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 340)));
    // 0x1761c0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1761c0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1761c4: 0x92840000  lbu         $a0, 0x0($s4)
    ctx->pc = 0x1761c4u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x1761c8: 0x34420010  ori         $v0, $v0, 0x10
    ctx->pc = 0x1761c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16);
    // 0x1761cc: 0xac620154  sw          $v0, 0x154($v1)
    ctx->pc = 0x1761ccu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 340), GPR_U32(ctx, 2));
    // 0x1761d0: 0x28830000  slti        $v1, $a0, 0x0
    ctx->pc = 0x1761d0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x1761d4: 0x924202b4  lbu         $v0, 0x2B4($s2)
    ctx->pc = 0x1761d4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 692)));
    // 0x1761d8: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1761D8u;
    {
        const bool branch_taken_0x1761d8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1761DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1761D8u;
        // 0x1761dc: 0xafa20020  sw          $v0, 0x20($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1761d8) {
            ctx->pc = 0x1761E8u;
            goto label_1761e8;
        }
    }
    ctx->pc = 0x1761E0u;
    // 0x1761e0: 0x82102a  slt         $v0, $a0, $v0
    ctx->pc = 0x1761e0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1761e4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1761e4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1761e8:
    // 0x1761e8: 0x30a200ff  andi        $v0, $a1, 0xFF
    ctx->pc = 0x1761e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x1761ec: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1761ECu;
    {
        const bool branch_taken_0x1761ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1761F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1761ECu;
        // 0x1761f0: 0x41080  sll         $v0, $a0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1761ec) {
            ctx->pc = 0x176204u;
            goto label_176204;
        }
    }
    ctx->pc = 0x1761F4u;
    // 0x1761f4: 0x8e430278  lw          $v1, 0x278($s2)
    ctx->pc = 0x1761f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 632)));
    // 0x1761f8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1761f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1761fc: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1761FCu;
    {
        const bool branch_taken_0x1761fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x176200u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1761FCu;
        // 0x176200: 0x8c420000  lw          $v0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1761fc) {
            ctx->pc = 0x176208u;
            goto label_176208;
        }
    }
    ctx->pc = 0x176204u;
label_176204:
    // 0x176204: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x176204u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_176208:
    // 0x176208: 0x24510080  addiu       $s1, $v0, 0x80
    ctx->pc = 0x176208u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 128));
    // 0x17620c: 0x24100060  addiu       $s0, $zero, 0x60
    ctx->pc = 0x17620cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
    // 0x176210: 0x901018  mult        $v0, $a0, $s0
    ctx->pc = 0x176210u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 16); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x176214: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x176214u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x176218: 0x528021  addu        $s0, $v0, $s2
    ctx->pc = 0x176218u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x17621c: 0x26100610  addiu       $s0, $s0, 0x610
    ctx->pc = 0x17621cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1552));
    // 0x176220: 0xc05bd90  jal         func_16F640
    ctx->pc = 0x176220u;
    SET_GPR_U32(ctx, 31, 0x176228u);
    ctx->pc = 0x176224u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x176220u;
    // 0x176224: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16F640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16F640u, 0x176220u, 0x176228u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x176228u;
label_176228:
    // 0x176228: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x176228u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17622c: 0xc05ce66  jal         func_173998
    ctx->pc = 0x17622Cu;
    SET_GPR_U32(ctx, 31, 0x176234u);
    ctx->pc = 0x176230u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17622Cu;
    // 0x176230: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x173998u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173998u, 0x17622Cu, 0x176234u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x176234u;
label_176234:
    // 0x176234: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x176234u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x176238: 0xc051f18  jal         func_147C60
    ctx->pc = 0x176238u;
    SET_GPR_U32(ctx, 31, 0x176240u);
    ctx->pc = 0x17623Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x176238u;
    // 0x17623c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x147C60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x147C60u, 0x176238u, 0x176240u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x176240u;
label_176240:
    // 0x176240: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x176240u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x176244: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x176244u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x176248: 0xc051f22  jal         func_147C88
    ctx->pc = 0x176248u;
    SET_GPR_U32(ctx, 31, 0x176250u);
    ctx->pc = 0x17624Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x176248u;
    // 0x17624c: 0x26040010  addiu       $a0, $s0, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x147C88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x147C88u, 0x176248u, 0x176250u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x176250u;
label_176250:
    // 0x176250: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x176250u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x176254: 0xc05ce42  jal         func_173908
    ctx->pc = 0x176254u;
    SET_GPR_U32(ctx, 31, 0x17625Cu);
    ctx->pc = 0x176258u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x176254u;
    // 0x176258: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x173908u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173908u, 0x176254u, 0x17625Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17625Cu;
label_17625c:
    // 0x17625c: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x17625cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x176260: 0xc05ce4e  jal         func_173938
    ctx->pc = 0x176260u;
    SET_GPR_U32(ctx, 31, 0x176268u);
    ctx->pc = 0x176264u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x176260u;
    // 0x176264: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x173938u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173938u, 0x176260u, 0x176268u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x176268u;
label_176268:
    // 0x176268: 0xe7b50030  swc1        $f21, 0x30($sp)
    ctx->pc = 0x176268u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x17626c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x17626cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x176270: 0xe6750004  swc1        $f21, 0x4($s3)
    ctx->pc = 0x176270u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 4), bits); }
    // 0x176274: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x176274u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x176278: 0xe6750008  swc1        $f21, 0x8($s3)
    ctx->pc = 0x176278u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 8), bits); }
    // 0x17627c: 0xc05ce5a  jal         func_173968
    ctx->pc = 0x17627Cu;
    SET_GPR_U32(ctx, 31, 0x176284u);
    ctx->pc = 0x176280u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17627Cu;
    // 0x176280: 0xe675000c  swc1        $f21, 0xC($s3) (Delay Slot)
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 12), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x173968u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173968u, 0x17627Cu, 0x176284u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x176284u;
label_176284:
    // 0x176284: 0xe6160058  swc1        $f22, 0x58($s0)
    ctx->pc = 0x176284u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 88), bits); }
    // 0x176288: 0x26b50001  addiu       $s5, $s5, 0x1
    ctx->pc = 0x176288u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
label_17628c:
    // 0x17628c: 0x2ea20002  sltiu       $v0, $s5, 0x2
    ctx->pc = 0x17628cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 21) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x176290: 0x1440ff9d  bnez        $v0, . + 4 + (-0x63 << 2)
    ctx->pc = 0x176290u;
    {
        const bool branch_taken_0x176290 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x176294u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x176290u;
        // 0x176294: 0x26940002  addiu       $s4, $s4, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x176290) {
            ctx->pc = 0x176108u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_176108;
        }
    }
    ctx->pc = 0x176298u;
    // 0x176298: 0x27c21290  addiu       $v0, $fp, 0x1290
    ctx->pc = 0x176298u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 30), 4752));
    // 0x17629c: 0x924302b4  lbu         $v1, 0x2B4($s2)
    ctx->pc = 0x17629cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 692)));
    // 0x1762a0: 0x90440004  lbu         $a0, 0x4($v0)
    ctx->pc = 0x1762a0u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x1762a4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1762a4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1762a8: 0x28820000  slti        $v0, $a0, 0x0
    ctx->pc = 0x1762a8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x1762ac: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1762ACu;
    {
        const bool branch_taken_0x1762ac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1762B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1762ACu;
        // 0x1762b0: 0xafa30020  sw          $v1, 0x20($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1762ac) {
            ctx->pc = 0x1762BCu;
            goto label_1762bc;
        }
    }
    ctx->pc = 0x1762B4u;
    // 0x1762b4: 0x83102a  slt         $v0, $a0, $v1
    ctx->pc = 0x1762b4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x1762b8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1762b8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1762bc:
    // 0x1762bc: 0x30a200ff  andi        $v0, $a1, 0xFF
    ctx->pc = 0x1762bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x1762c0: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1762C0u;
    {
        const bool branch_taken_0x1762c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1762C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1762C0u;
        // 0x1762c4: 0x41080  sll         $v0, $a0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1762c0) {
            ctx->pc = 0x1762D8u;
            goto label_1762d8;
        }
    }
    ctx->pc = 0x1762C8u;
    // 0x1762c8: 0x8e430278  lw          $v1, 0x278($s2)
    ctx->pc = 0x1762c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 632)));
    // 0x1762cc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1762ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1762d0: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1762D0u;
    {
        const bool branch_taken_0x1762d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1762D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1762D0u;
        // 0x1762d4: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1762d0) {
            ctx->pc = 0x1762DCu;
            goto label_1762dc;
        }
    }
    ctx->pc = 0x1762D8u;
label_1762d8:
    // 0x1762d8: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1762d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1762dc:
    // 0x1762dc: 0x8c820154  lw          $v0, 0x154($a0)
    ctx->pc = 0x1762dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 340)));
    // 0x1762e0: 0x27c31290  addiu       $v1, $fp, 0x1290
    ctx->pc = 0x1762e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 30), 4752));
    // 0x1762e4: 0x90650004  lbu         $a1, 0x4($v1)
    ctx->pc = 0x1762e4u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x1762e8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1762e8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1762ec: 0x34420008  ori         $v0, $v0, 0x8
    ctx->pc = 0x1762ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8);
    // 0x1762f0: 0xac820154  sw          $v0, 0x154($a0)
    ctx->pc = 0x1762f0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 340), GPR_U32(ctx, 2));
    // 0x1762f4: 0x28a30000  slti        $v1, $a1, 0x0
    ctx->pc = 0x1762f4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x1762f8: 0x924202b4  lbu         $v0, 0x2B4($s2)
    ctx->pc = 0x1762f8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 692)));
    // 0x1762fc: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1762FCu;
    {
        const bool branch_taken_0x1762fc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x176300u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1762FCu;
        // 0x176300: 0xafa20020  sw          $v0, 0x20($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1762fc) {
            ctx->pc = 0x17630Cu;
            goto label_17630c;
        }
    }
    ctx->pc = 0x176304u;
    // 0x176304: 0xa2102a  slt         $v0, $a1, $v0
    ctx->pc = 0x176304u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x176308: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x176308u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_17630c:
    // 0x17630c: 0x30c200ff  andi        $v0, $a2, 0xFF
    ctx->pc = 0x17630cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
    // 0x176310: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x176310u;
    {
        const bool branch_taken_0x176310 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x176314u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x176310u;
        // 0x176314: 0x51080  sll         $v0, $a1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x176310) {
            ctx->pc = 0x176328u;
            goto label_176328;
        }
    }
    ctx->pc = 0x176318u;
    // 0x176318: 0x8e430278  lw          $v1, 0x278($s2)
    ctx->pc = 0x176318u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 632)));
    // 0x17631c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x17631cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x176320: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x176320u;
    {
        const bool branch_taken_0x176320 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x176324u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x176320u;
        // 0x176324: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x176320) {
            ctx->pc = 0x17632Cu;
            goto label_17632c;
        }
    }
    ctx->pc = 0x176328u;
label_176328:
    // 0x176328: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x176328u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_17632c:
    // 0x17632c: 0x8c820154  lw          $v0, 0x154($a0)
    ctx->pc = 0x17632cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 340)));
    // 0x176330: 0x27c31290  addiu       $v1, $fp, 0x1290
    ctx->pc = 0x176330u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 30), 4752));
    // 0x176334: 0x90650004  lbu         $a1, 0x4($v1)
    ctx->pc = 0x176334u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x176338: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x176338u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17633c: 0x34420010  ori         $v0, $v0, 0x10
    ctx->pc = 0x17633cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16);
    // 0x176340: 0xac820154  sw          $v0, 0x154($a0)
    ctx->pc = 0x176340u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 340), GPR_U32(ctx, 2));
    // 0x176344: 0x28a30000  slti        $v1, $a1, 0x0
    ctx->pc = 0x176344u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x176348: 0x924202b4  lbu         $v0, 0x2B4($s2)
    ctx->pc = 0x176348u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 692)));
    // 0x17634c: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x17634Cu;
    {
        const bool branch_taken_0x17634c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x176350u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17634Cu;
        // 0x176350: 0xafa20020  sw          $v0, 0x20($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17634c) {
            ctx->pc = 0x17635Cu;
            goto label_17635c;
        }
    }
    ctx->pc = 0x176354u;
    // 0x176354: 0xa2102a  slt         $v0, $a1, $v0
    ctx->pc = 0x176354u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x176358: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x176358u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_17635c:
    // 0x17635c: 0x30c200ff  andi        $v0, $a2, 0xFF
    ctx->pc = 0x17635cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
    // 0x176360: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x176360u;
    {
        const bool branch_taken_0x176360 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x176364u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x176360u;
        // 0x176364: 0x51080  sll         $v0, $a1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x176360) {
            ctx->pc = 0x176378u;
            goto label_176378;
        }
    }
    ctx->pc = 0x176368u;
    // 0x176368: 0x8e430278  lw          $v1, 0x278($s2)
    ctx->pc = 0x176368u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 632)));
    // 0x17636c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x17636cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x176370: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x176370u;
    {
        const bool branch_taken_0x176370 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x176374u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x176370u;
        // 0x176374: 0x8c420000  lw          $v0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x176370) {
            ctx->pc = 0x17637Cu;
            goto label_17637c;
        }
    }
    ctx->pc = 0x176378u;
label_176378:
    // 0x176378: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x176378u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_17637c:
    // 0x17637c: 0x24510080  addiu       $s1, $v0, 0x80
    ctx->pc = 0x17637cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 128));
    // 0x176380: 0x24100060  addiu       $s0, $zero, 0x60
    ctx->pc = 0x176380u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
    // 0x176384: 0xb01018  mult        $v0, $a1, $s0
    ctx->pc = 0x176384u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 16); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x176388: 0x3c01bca3  lui         $at, 0xBCA3
    ctx->pc = 0x176388u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48291 << 16));
    // 0x17638c: 0x3421d70a  ori         $at, $at, 0xD70A
    ctx->pc = 0x17638cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55050);
    // 0x176390: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x176390u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x176394: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x176394u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x176398: 0x528021  addu        $s0, $v0, $s2
    ctx->pc = 0x176398u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x17639c: 0x26100610  addiu       $s0, $s0, 0x610
    ctx->pc = 0x17639cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1552));
    // 0x1763a0: 0xc05bd90  jal         func_16F640
    ctx->pc = 0x1763A0u;
    SET_GPR_U32(ctx, 31, 0x1763A8u);
    ctx->pc = 0x1763A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1763A0u;
    // 0x1763a4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16F640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16F640u, 0x1763A0u, 0x1763A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1763A8u;
label_1763a8:
    // 0x1763a8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1763a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1763ac: 0xc05ce66  jal         func_173998
    ctx->pc = 0x1763ACu;
    SET_GPR_U32(ctx, 31, 0x1763B4u);
    ctx->pc = 0x1763B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1763ACu;
    // 0x1763b0: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x173998u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173998u, 0x1763ACu, 0x1763B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1763B4u;
label_1763b4:
    // 0x1763b4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1763b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1763b8: 0xc051f18  jal         func_147C60
    ctx->pc = 0x1763B8u;
    SET_GPR_U32(ctx, 31, 0x1763C0u);
    ctx->pc = 0x1763BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1763B8u;
    // 0x1763bc: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x147C60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x147C60u, 0x1763B8u, 0x1763C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1763C0u;
label_1763c0:
    // 0x1763c0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1763c0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1763c4: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1763c4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1763c8: 0xc051f22  jal         func_147C88
    ctx->pc = 0x1763C8u;
    SET_GPR_U32(ctx, 31, 0x1763D0u);
    ctx->pc = 0x1763CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1763C8u;
    // 0x1763cc: 0x26040010  addiu       $a0, $s0, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x147C88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x147C88u, 0x1763C8u, 0x1763D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1763D0u;
label_1763d0:
    // 0x1763d0: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x1763d0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1763d4: 0xc05ce42  jal         func_173908
    ctx->pc = 0x1763D4u;
    SET_GPR_U32(ctx, 31, 0x1763DCu);
    ctx->pc = 0x1763D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1763D4u;
    // 0x1763d8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x173908u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173908u, 0x1763D4u, 0x1763DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1763DCu;
label_1763dc:
    // 0x1763dc: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x1763dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1763e0: 0xc05ce4e  jal         func_173938
    ctx->pc = 0x1763E0u;
    SET_GPR_U32(ctx, 31, 0x1763E8u);
    ctx->pc = 0x1763E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1763E0u;
    // 0x1763e4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x173938u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173938u, 0x1763E0u, 0x1763E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1763E8u;
label_1763e8:
    // 0x1763e8: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1763e8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1763ec: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1763ecu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1763f0: 0x2e0282d  daddu       $a1, $s7, $zero
    ctx->pc = 0x1763f0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1763f4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1763f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1763f8: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x1763f8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x1763fc: 0xe6e0000c  swc1        $f0, 0xC($s7)
    ctx->pc = 0x1763fcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 23), 12), bits); }
    // 0x176400: 0xe6e00004  swc1        $f0, 0x4($s7)
    ctx->pc = 0x176400u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 23), 4), bits); }
    // 0x176404: 0xc05ce5a  jal         func_173968
    ctx->pc = 0x176404u;
    SET_GPR_U32(ctx, 31, 0x17640Cu);
    ctx->pc = 0x176408u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x176404u;
    // 0x176408: 0xe6e00008  swc1        $f0, 0x8($s7) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 23), 8), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x173968u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173968u, 0x176404u, 0x17640Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17640Cu;
label_17640c:
    // 0x17640c: 0xe6140058  swc1        $f20, 0x58($s0)
    ctx->pc = 0x17640cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 88), bits); }
    // 0x176410: 0x8e4505ec  lw          $a1, 0x5EC($s2)
    ctx->pc = 0x176410u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1516)));
    // 0x176414: 0x10a00007  beqz        $a1, . + 4 + (0x7 << 2)
    ctx->pc = 0x176414u;
    {
        const bool branch_taken_0x176414 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x176418u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x176414u;
        // 0x176418: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x176414) {
            ctx->pc = 0x176434u;
            goto label_176434;
        }
    }
    ctx->pc = 0x17641Cu;
    // 0x17641c: 0x3c09ffff  lui         $t1, 0xFFFF
    ctx->pc = 0x17641cu;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)65535 << 16));
    // 0x176420: 0x8e4405f0  lw          $a0, 0x5F0($s2)
    ctx->pc = 0x176420u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1520)));
    // 0x176424: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x176424u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x176428: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x176428u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x17642c: 0xc0c194a  jal         func_306528
    ctx->pc = 0x17642Cu;
    SET_GPR_U32(ctx, 31, 0x176434u);
    ctx->pc = 0x176430u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17642Cu;
    // 0x176430: 0x3529ffff  ori         $t1, $t1, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x306528u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x306528u, 0x17642Cu, 0x176434u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x176434u;
label_176434:
    // 0x176434: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x176434u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
    // 0x176438: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x176438u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x17643c: 0x2464ee00  addiu       $a0, $v1, -0x1200
    ctx->pc = 0x17643cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294962688));
    // 0x176440: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x176440u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x176444: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x176444u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x176448: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x176448u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17644c: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x17644cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x176450: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x176450u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x176454: 0xc0b2e92  jal         func_2CBA48
    ctx->pc = 0x176454u;
    SET_GPR_U32(ctx, 31, 0x17645Cu);
    ctx->pc = 0x176458u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x176454u;
    // 0x176458: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CBA48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CBA48u, 0x176454u, 0x17645Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17645Cu;
label_17645c:
    // 0x17645c: 0xae4005c0  sw          $zero, 0x5C0($s2)
    ctx->pc = 0x17645cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 1472), GPR_U32(ctx, 0));
    // 0x176460: 0x24020014  addiu       $v0, $zero, 0x14
    ctx->pc = 0x176460u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x176464: 0x3c014140  lui         $at, 0x4140
    ctx->pc = 0x176464u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16704 << 16));
    // 0x176468: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x176468u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x17646c: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x17646cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x176470: 0xe4600004  swc1        $f0, 0x4($v1)
    ctx->pc = 0x176470u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x176474: 0xac600008  sw          $zero, 0x8($v1)
    ctx->pc = 0x176474u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 0));
    // 0x176478: 0xa6420d34  sh          $v0, 0xD34($s2)
    ctx->pc = 0x176478u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 3380), (uint16_t)GPR_U32(ctx, 2));
    // 0x17647c: 0x8e440608  lw          $a0, 0x608($s2)
    ctx->pc = 0x17647cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1544)));
    // 0x176480: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x176480u;
    {
        const bool branch_taken_0x176480 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x176484u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x176480u;
        // 0x176484: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x176480) {
            ctx->pc = 0x176494u;
            goto label_176494;
        }
    }
    ctx->pc = 0x176488u;
    // 0x176488: 0xc07f59a  jal         func_1FD668
    ctx->pc = 0x176488u;
    SET_GPR_U32(ctx, 31, 0x176490u);
    ctx->pc = 0x17648Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x176488u;
    // 0x17648c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD668u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD668u, 0x176488u, 0x176490u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x176490u;
label_176490:
    // 0x176490: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x176490u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_176494:
    // 0x176494: 0xa24002f6  sb          $zero, 0x2F6($s2)
    ctx->pc = 0x176494u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 758), (uint8_t)GPR_U32(ctx, 0));
    // 0x176498: 0xa24202f5  sb          $v0, 0x2F5($s2)
    ctx->pc = 0x176498u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 757), (uint8_t)GPR_U32(ctx, 2));
    // 0x17649c: 0xa24002f7  sb          $zero, 0x2F7($s2)
    ctx->pc = 0x17649cu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 759), (uint8_t)GPR_U32(ctx, 0));
label_1764a0:
    // 0x1764a0: 0x96420d34  lhu         $v0, 0xD34($s2)
    ctx->pc = 0x1764a0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 3380)));
    // 0x1764a4: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1764a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1764a8: 0x21c00  sll         $v1, $v0, 16
    ctx->pc = 0x1764a8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x1764ac: 0x1c600092  bgtz        $v1, . + 4 + (0x92 << 2)
    ctx->pc = 0x1764ACu;
    {
        const bool branch_taken_0x1764ac = (GPR_S64(ctx, 3) > 0);
        ctx->pc = 0x1764B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1764ACu;
        // 0x1764b0: 0xa6420d34  sh          $v0, 0xD34($s2) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 18), 3380), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1764ac) {
            ctx->pc = 0x1766F8u;
            goto label_1766f8;
        }
    }
    ctx->pc = 0x1764B4u;
    // 0x1764b4: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1764b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1764b8: 0xa24002f7  sb          $zero, 0x2F7($s2)
    ctx->pc = 0x1764b8u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 759), (uint8_t)GPR_U32(ctx, 0));
    // 0x1764bc: 0x1000008d  b           . + 4 + (0x8D << 2)
    ctx->pc = 0x1764BCu;
    {
        const bool branch_taken_0x1764bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1764C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1764BCu;
        // 0x1764c0: 0xa24202f5  sb          $v0, 0x2F5($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 757), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1764bc) {
            ctx->pc = 0x1766F4u;
            goto label_1766f4;
        }
    }
    ctx->pc = 0x1764C4u;
label_1764c4:
    // 0x1764c4: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1764c4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1764c8: 0x26560d30  addiu       $s6, $s2, 0xD30
    ctx->pc = 0x1764c8u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 18), 3376));
    // 0x1764cc: 0x3c1e0042  lui         $fp, 0x42
    ctx->pc = 0x1764ccu;
    SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)66 << 16));
    // 0x1764d0: 0x3c138000  lui         $s3, 0x8000
    ctx->pc = 0x1764d0u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)32768 << 16));
    // 0x1764d4: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x1764d4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1764d8: 0x101142  srl         $v0, $s0, 5
    ctx->pc = 0x1764d8u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 16), 5));
    // 0x1764dc: 0x0  nop
    ctx->pc = 0x1764dcu;
    // NOP
label_1764e0:
    // 0x1764e0: 0x3204001f  andi        $a0, $s0, 0x1F
    ctx->pc = 0x1764e0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)31);
    // 0x1764e4: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1764e4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1764e8: 0x932006  srlv        $a0, $s3, $a0
    ctx->pc = 0x1764e8u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 19), GPR_U32(ctx, 4) & 0x1F));
    // 0x1764ec: 0x561021  addu        $v0, $v0, $s6
    ctx->pc = 0x1764ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 22)));
    // 0x1764f0: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1764f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1764f4: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x1764f4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x1764f8: 0x5460000f  bnel        $v1, $zero, . + 4 + (0xF << 2)
    ctx->pc = 0x1764F8u;
    {
        const bool branch_taken_0x1764f8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1764f8) {
            ctx->pc = 0x1764FCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1764F8u;
            // 0x1764fc: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x176538u;
            goto label_176538;
        }
    }
    ctx->pc = 0x176500u;
    // 0x176500: 0x12000005  beqz        $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x176500u;
    {
        const bool branch_taken_0x176500 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x176504u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x176500u;
        // 0x176504: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x176500) {
            ctx->pc = 0x176518u;
            goto label_176518;
        }
    }
    ctx->pc = 0x176508u;
    // 0x176508: 0x12110008  beq         $s0, $s1, . + 4 + (0x8 << 2)
    ctx->pc = 0x176508u;
    {
        const bool branch_taken_0x176508 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 17));
        ctx->pc = 0x17650Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x176508u;
        // 0x17650c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x176508) {
            ctx->pc = 0x17652Cu;
            goto label_17652c;
        }
    }
    ctx->pc = 0x176510u;
    // 0x176510: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x176510u;
    {
        const bool branch_taken_0x176510 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x176514u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x176510u;
        // 0x176514: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x176510) {
            ctx->pc = 0x176538u;
            goto label_176538;
        }
    }
    ctx->pc = 0x176518u;
label_176518:
    // 0x176518: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x176518u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17651c: 0xc05da94  jal         func_176A50
    ctx->pc = 0x17651Cu;
    SET_GPR_U32(ctx, 31, 0x176524u);
    ctx->pc = 0x176520u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17651Cu;
    // 0x176520: 0x24060003  addiu       $a2, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x176A50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176A50u, 0x17651Cu, 0x176524u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x176524u;
label_176524:
    // 0x176524: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x176524u;
    {
        const bool branch_taken_0x176524 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x176528u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x176524u;
        // 0x176528: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x176524) {
            ctx->pc = 0x176538u;
            goto label_176538;
        }
    }
    ctx->pc = 0x17652Cu;
label_17652c:
    // 0x17652c: 0xc05da94  jal         func_176A50
    ctx->pc = 0x17652Cu;
    SET_GPR_U32(ctx, 31, 0x176534u);
    ctx->pc = 0x176530u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17652Cu;
    // 0x176530: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x176A50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176A50u, 0x17652Cu, 0x176534u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x176534u;
label_176534:
    // 0x176534: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x176534u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_176538:
    // 0x176538: 0x2e020002  sltiu       $v0, $s0, 0x2
    ctx->pc = 0x176538u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x17653c: 0x1440ffe8  bnez        $v0, . + 4 + (-0x18 << 2)
    ctx->pc = 0x17653Cu;
    {
        const bool branch_taken_0x17653c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x176540u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17653Cu;
        // 0x176540: 0x101142  srl         $v0, $s0, 5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 16), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17653c) {
            ctx->pc = 0x1764E0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1764e0;
        }
    }
    ctx->pc = 0x176544u;
    // 0x176544: 0x27c21290  addiu       $v0, $fp, 0x1290
    ctx->pc = 0x176544u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 30), 4752));
    // 0x176548: 0x924302b4  lbu         $v1, 0x2B4($s2)
    ctx->pc = 0x176548u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 692)));
    // 0x17654c: 0x90440004  lbu         $a0, 0x4($v0)
    ctx->pc = 0x17654cu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x176550: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x176550u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x176554: 0x28820000  slti        $v0, $a0, 0x0
    ctx->pc = 0x176554u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x176558: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x176558u;
    {
        const bool branch_taken_0x176558 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x17655Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x176558u;
        // 0x17655c: 0xafa30000  sw          $v1, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x176558) {
            ctx->pc = 0x176568u;
            goto label_176568;
        }
    }
    ctx->pc = 0x176560u;
    // 0x176560: 0x83102a  slt         $v0, $a0, $v1
    ctx->pc = 0x176560u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x176564: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x176564u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_176568:
    // 0x176568: 0x30a200ff  andi        $v0, $a1, 0xFF
    ctx->pc = 0x176568u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x17656c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x17656Cu;
    {
        const bool branch_taken_0x17656c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x176570u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17656Cu;
        // 0x176570: 0x41080  sll         $v0, $a0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17656c) {
            ctx->pc = 0x176584u;
            goto label_176584;
        }
    }
    ctx->pc = 0x176574u;
    // 0x176574: 0x8e430278  lw          $v1, 0x278($s2)
    ctx->pc = 0x176574u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 632)));
    // 0x176578: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x176578u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x17657c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x17657Cu;
    {
        const bool branch_taken_0x17657c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x176580u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17657Cu;
        // 0x176580: 0x8c450000  lw          $a1, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17657c) {
            ctx->pc = 0x176588u;
            goto label_176588;
        }
    }
    ctx->pc = 0x176584u;
label_176584:
    // 0x176584: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x176584u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_176588:
    // 0x176588: 0x27c21290  addiu       $v0, $fp, 0x1290
    ctx->pc = 0x176588u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 30), 4752));
    // 0x17658c: 0x9043000b  lbu         $v1, 0xB($v0)
    ctx->pc = 0x17658cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 11)));
    // 0x176590: 0x9050000a  lbu         $s0, 0xA($v0)
    ctx->pc = 0x176590u;
    SET_GPR_ZE32(ctx, 16, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 10)));
    // 0x176594: 0x2031821  addu        $v1, $s0, $v1
    ctx->pc = 0x176594u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x176598: 0x203102b  sltu        $v0, $s0, $v1
    ctx->pc = 0x176598u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x17659c: 0x10400025  beqz        $v0, . + 4 + (0x25 << 2)
    ctx->pc = 0x17659Cu;
    {
        const bool branch_taken_0x17659c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1765A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17659Cu;
        // 0x1765a0: 0x24b40080  addiu       $s4, $a1, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 5), 128));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17659c) {
            ctx->pc = 0x176634u;
            goto label_176634;
        }
    }
    ctx->pc = 0x1765A4u;
    // 0x1765a4: 0x60982d  daddu       $s3, $v1, $zero
    ctx->pc = 0x1765a4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1765a8: 0x200882d  daddu       $s1, $s0, $zero
    ctx->pc = 0x1765a8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1765ac: 0x0  nop
    ctx->pc = 0x1765acu;
    // NOP
label_1765b0:
    // 0x1765b0: 0x924302b4  lbu         $v1, 0x2B4($s2)
    ctx->pc = 0x1765b0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 692)));
    // 0x1765b4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1765b4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1765b8: 0x6200002  bltz        $s1, . + 4 + (0x2 << 2)
    ctx->pc = 0x1765B8u;
    {
        const bool branch_taken_0x1765b8 = (GPR_S64(ctx, 17) < 0);
        ctx->pc = 0x1765BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1765B8u;
        // 0x1765bc: 0xafa30000  sw          $v1, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1765b8) {
            ctx->pc = 0x1765C4u;
            goto label_1765c4;
        }
    }
    ctx->pc = 0x1765C0u;
    // 0x1765c0: 0x203102a  slt         $v0, $s0, $v1
    ctx->pc = 0x1765c0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_1765c4:
    // 0x1765c4: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1765c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1765c8: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1765C8u;
    {
        const bool branch_taken_0x1765c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1765CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1765C8u;
        // 0x1765cc: 0x101080  sll         $v0, $s0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1765c8) {
            ctx->pc = 0x1765E0u;
            goto label_1765e0;
        }
    }
    ctx->pc = 0x1765D0u;
    // 0x1765d0: 0x8e430278  lw          $v1, 0x278($s2)
    ctx->pc = 0x1765d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 632)));
    // 0x1765d4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1765d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1765d8: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1765D8u;
    {
        const bool branch_taken_0x1765d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1765DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1765D8u;
        // 0x1765dc: 0x8c420000  lw          $v0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1765d8) {
            ctx->pc = 0x1765E4u;
            goto label_1765e4;
        }
    }
    ctx->pc = 0x1765E0u;
label_1765e0:
    // 0x1765e0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1765e0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1765e4:
    // 0x1765e4: 0x924302b4  lbu         $v1, 0x2B4($s2)
    ctx->pc = 0x1765e4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 692)));
    // 0x1765e8: 0x24440080  addiu       $a0, $v0, 0x80
    ctx->pc = 0x1765e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 128));
    // 0x1765ec: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1765ecu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1765f0: 0x6200002  bltz        $s1, . + 4 + (0x2 << 2)
    ctx->pc = 0x1765F0u;
    {
        const bool branch_taken_0x1765f0 = (GPR_S64(ctx, 17) < 0);
        ctx->pc = 0x1765F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1765F0u;
        // 0x1765f4: 0xafa30000  sw          $v1, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1765f0) {
            ctx->pc = 0x1765FCu;
            goto label_1765fc;
        }
    }
    ctx->pc = 0x1765F8u;
    // 0x1765f8: 0x203102a  slt         $v0, $s0, $v1
    ctx->pc = 0x1765f8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_1765fc:
    // 0x1765fc: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1765fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x176600: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x176600u;
    {
        const bool branch_taken_0x176600 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x176604u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x176600u;
        // 0x176604: 0x101080  sll         $v0, $s0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x176600) {
            ctx->pc = 0x176618u;
            goto label_176618;
        }
    }
    ctx->pc = 0x176608u;
    // 0x176608: 0x8e430278  lw          $v1, 0x278($s2)
    ctx->pc = 0x176608u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 632)));
    // 0x17660c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x17660cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x176610: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x176610u;
    {
        const bool branch_taken_0x176610 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x176614u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x176610u;
        // 0x176614: 0x8c460000  lw          $a2, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x176610) {
            ctx->pc = 0x17661Cu;
            goto label_17661c;
        }
    }
    ctx->pc = 0x176618u;
label_176618:
    // 0x176618: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x176618u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_17661c:
    // 0x17661c: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x17661cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x176620: 0xc051d52  jal         func_147548
    ctx->pc = 0x176620u;
    SET_GPR_U32(ctx, 31, 0x176628u);
    ctx->pc = 0x176624u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x176620u;
    // 0x176624: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x147548u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x147548u, 0x176620u, 0x176628u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x176628u;
label_176628:
    // 0x176628: 0x213102b  sltu        $v0, $s0, $s3
    ctx->pc = 0x176628u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 19)) ? 1 : 0);
    // 0x17662c: 0x1440ffe0  bnez        $v0, . + 4 + (-0x20 << 2)
    ctx->pc = 0x17662Cu;
    {
        const bool branch_taken_0x17662c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x176630u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17662Cu;
        // 0x176630: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17662c) {
            ctx->pc = 0x1765B0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1765b0;
        }
    }
    ctx->pc = 0x176634u;
label_176634:
    // 0x176634: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x176634u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x176638: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x176638u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x17663c: 0xc05da94  jal         func_176A50
    ctx->pc = 0x17663Cu;
    SET_GPR_U32(ctx, 31, 0x176644u);
    ctx->pc = 0x176640u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17663Cu;
    // 0x176640: 0x24060005  addiu       $a2, $zero, 0x5 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x176A50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x176A50u, 0x17663Cu, 0x176644u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x176644u;
label_176644:
    // 0x176644: 0x24020019  addiu       $v0, $zero, 0x19
    ctx->pc = 0x176644u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
    // 0x176648: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x176648u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x17664c: 0xa6420d34  sh          $v0, 0xD34($s2)
    ctx->pc = 0x17664cu;
    WRITE16(ADD32(GPR_U32(ctx, 18), 3380), (uint16_t)GPR_U32(ctx, 2));
    // 0x176650: 0xa24302f5  sb          $v1, 0x2F5($s2)
    ctx->pc = 0x176650u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 757), (uint8_t)GPR_U32(ctx, 3));
    // 0x176654: 0x10000027  b           . + 4 + (0x27 << 2)
    ctx->pc = 0x176654u;
    {
        const bool branch_taken_0x176654 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x176658u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x176654u;
        // 0x176658: 0xa24002f7  sb          $zero, 0x2F7($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 759), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x176654) {
            ctx->pc = 0x1766F4u;
            goto label_1766f4;
        }
    }
    ctx->pc = 0x17665Cu;
label_17665c:
    // 0x17665c: 0x96420d34  lhu         $v0, 0xD34($s2)
    ctx->pc = 0x17665cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 3380)));
    // 0x176660: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x176660u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x176664: 0x21c00  sll         $v1, $v0, 16
    ctx->pc = 0x176664u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x176668: 0x1c600023  bgtz        $v1, . + 4 + (0x23 << 2)
    ctx->pc = 0x176668u;
    {
        const bool branch_taken_0x176668 = (GPR_S64(ctx, 3) > 0);
        ctx->pc = 0x17666Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x176668u;
        // 0x17666c: 0xa6420d34  sh          $v0, 0xD34($s2) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 18), 3380), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x176668) {
            ctx->pc = 0x1766F8u;
            goto label_1766f8;
        }
    }
    ctx->pc = 0x176670u;
    // 0x176670: 0x2402000f  addiu       $v0, $zero, 0xF
    ctx->pc = 0x176670u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x176674: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x176674u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x176678: 0x8e440608  lw          $a0, 0x608($s2)
    ctx->pc = 0x176678u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1544)));
    // 0x17667c: 0xa6420d34  sh          $v0, 0xD34($s2)
    ctx->pc = 0x17667cu;
    WRITE16(ADD32(GPR_U32(ctx, 18), 3380), (uint16_t)GPR_U32(ctx, 2));
    // 0x176680: 0xa24302f5  sb          $v1, 0x2F5($s2)
    ctx->pc = 0x176680u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 757), (uint8_t)GPR_U32(ctx, 3));
    // 0x176684: 0xa24002f6  sb          $zero, 0x2F6($s2)
    ctx->pc = 0x176684u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 758), (uint8_t)GPR_U32(ctx, 0));
    // 0x176688: 0x1080001b  beqz        $a0, . + 4 + (0x1B << 2)
    ctx->pc = 0x176688u;
    {
        const bool branch_taken_0x176688 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x17668Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x176688u;
        // 0x17668c: 0xa24002f7  sb          $zero, 0x2F7($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 759), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x176688) {
            ctx->pc = 0x1766F8u;
            goto label_1766f8;
        }
    }
    ctx->pc = 0x176690u;
    // 0x176690: 0xc07f59a  jal         func_1FD668
    ctx->pc = 0x176690u;
    SET_GPR_U32(ctx, 31, 0x176698u);
    ctx->pc = 0x176694u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x176690u;
    // 0x176694: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD668u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD668u, 0x176690u, 0x176698u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x176698u;
label_176698:
    // 0x176698: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x176698u;
    {
        const bool branch_taken_0x176698 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17669Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x176698u;
        // 0x17669c: 0x7bb000e0  lq          $s0, 0xE0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 224)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x176698) {
            ctx->pc = 0x1766FCu;
            goto label_1766fc;
        }
    }
    ctx->pc = 0x1766A0u;
label_1766a0:
    // 0x1766a0: 0x96420d34  lhu         $v0, 0xD34($s2)
    ctx->pc = 0x1766a0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 3380)));
    // 0x1766a4: 0x3c014170  lui         $at, 0x4170
    ctx->pc = 0x1766a4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16752 << 16));
    // 0x1766a8: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1766a8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1766ac: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1766acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1766b0: 0x21c00  sll         $v1, $v0, 16
    ctx->pc = 0x1766b0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x1766b4: 0xa6420d34  sh          $v0, 0xD34($s2)
    ctx->pc = 0x1766b4u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 3380), (uint16_t)GPR_U32(ctx, 2));
    // 0x1766b8: 0x31c03  sra         $v1, $v1, 16
    ctx->pc = 0x1766b8u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 16));
    // 0x1766bc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1766bcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1766c0: 0x0  nop
    ctx->pc = 0x1766c0u;
    // NOP
    // 0x1766c4: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1766c4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1766c8: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x1766c8u;
    ctx->f[0] = ps2FpuDivide(ctx->fcr31, ctx->f[0], ctx->f[1]);
    // 0x1766cc: 0x1c60000a  bgtz        $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x1766CCu;
    {
        const bool branch_taken_0x1766cc = (GPR_S64(ctx, 3) > 0);
        ctx->pc = 0x1766D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1766CCu;
        // 0x1766d0: 0xe640024c  swc1        $f0, 0x24C($s2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 588), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1766cc) {
            ctx->pc = 0x1766F8u;
            goto label_1766f8;
        }
    }
    ctx->pc = 0x1766D4u;
    // 0x1766d4: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x1766d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1766d8: 0xa24002f7  sb          $zero, 0x2F7($s2)
    ctx->pc = 0x1766d8u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 759), (uint8_t)GPR_U32(ctx, 0));
    // 0x1766dc: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1766DCu;
    {
        const bool branch_taken_0x1766dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1766E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1766DCu;
        // 0x1766e0: 0xa24202f5  sb          $v0, 0x2F5($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 757), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1766dc) {
            ctx->pc = 0x1766F4u;
            goto label_1766f4;
        }
    }
    ctx->pc = 0x1766E4u;
label_1766e4:
    // 0x1766e4: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x1766e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1766e8: 0xa24002f7  sb          $zero, 0x2F7($s2)
    ctx->pc = 0x1766e8u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 759), (uint8_t)GPR_U32(ctx, 0));
    // 0x1766ec: 0xa24202f4  sb          $v0, 0x2F4($s2)
    ctx->pc = 0x1766ecu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 756), (uint8_t)GPR_U32(ctx, 2));
label_1766f0:
    // 0x1766f0: 0xa24002f5  sb          $zero, 0x2F5($s2)
    ctx->pc = 0x1766f0u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 757), (uint8_t)GPR_U32(ctx, 0));
label_1766f4:
    // 0x1766f4: 0xa24002f6  sb          $zero, 0x2F6($s2)
    ctx->pc = 0x1766f4u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 758), (uint8_t)GPR_U32(ctx, 0));
label_1766f8:
    // 0x1766f8: 0x7bb000e0  lq          $s0, 0xE0($sp)
    ctx->pc = 0x1766f8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 224)));
label_1766fc:
    // 0x1766fc: 0x7bb100d0  lq          $s1, 0xD0($sp)
    ctx->pc = 0x1766fcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x176700: 0x7bb200c0  lq          $s2, 0xC0($sp)
    ctx->pc = 0x176700u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x176704: 0x7bb300b0  lq          $s3, 0xB0($sp)
    ctx->pc = 0x176704u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x176708: 0x7bb400a0  lq          $s4, 0xA0($sp)
    ctx->pc = 0x176708u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x17670c: 0x7bb50090  lq          $s5, 0x90($sp)
    ctx->pc = 0x17670cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x176710: 0x7bb60080  lq          $s6, 0x80($sp)
    ctx->pc = 0x176710u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x176714: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x176714u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x176718: 0x7bbe0060  lq          $fp, 0x60($sp)
    ctx->pc = 0x176718u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x17671c: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x17671cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x176720: 0xc7b60100  lwc1        $f22, 0x100($sp)
    ctx->pc = 0x176720u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 256)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x176724: 0xc7b500f8  lwc1        $f21, 0xF8($sp)
    ctx->pc = 0x176724u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 248)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x176728: 0xc7b400f0  lwc1        $f20, 0xF0($sp)
    ctx->pc = 0x176728u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 240)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x17672c: 0x3e00008  jr          $ra
    ctx->pc = 0x17672Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x176730u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17672Cu;
        // 0x176730: 0x27bd0110  addiu       $sp, $sp, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17672Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x176734u;
    // 0x176734: 0x0  nop
    ctx->pc = 0x176734u;
    // NOP
    ctx->pc = 0x176738u;
}
