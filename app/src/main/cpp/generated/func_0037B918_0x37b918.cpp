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

// Function: func_0037B918
// Address: 0x37b918 - 0x37bc90
void func_0037B918_0x37b918(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("func_0037B918_0x37b918");
#endif

    switch (ctx->pc) {
        case 0x37b960u: goto label_37b960;
        case 0x37b9acu: goto label_37b9ac;
        case 0x37b9e0u: goto label_37b9e0;
        case 0x37ba04u: goto label_37ba04;
        case 0x37ba28u: goto label_37ba28;
        case 0x37ba4cu: goto label_37ba4c;
        case 0x37ba88u: goto label_37ba88;
        case 0x37baacu: goto label_37baac;
        case 0x37baecu: goto label_37baec;
        case 0x37bb14u: goto label_37bb14;
        case 0x37bb38u: goto label_37bb38;
        case 0x37bba4u: goto label_37bba4;
        case 0x37bbc8u: goto label_37bbc8;
        case 0x37bc18u: goto label_37bc18;
        case 0x37bc5cu: goto label_37bc5c;
        default: break;
    }

    ctx->pc = 0x37b918u;

    // 0x37b918: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x37b918u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x37b91c: 0x7fb50040  sq          $s5, 0x40($sp)
    ctx->pc = 0x37b91cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 21));
    // 0x37b920: 0x7fb00090  sq          $s0, 0x90($sp)
    ctx->pc = 0x37b920u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 16));
    // 0x37b924: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x37b924u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37b928: 0x7fb30060  sq          $s3, 0x60($sp)
    ctx->pc = 0x37b928u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 19));
    // 0x37b92c: 0x26b0016c  addiu       $s0, $s5, 0x16C
    ctx->pc = 0x37b92cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 21), 364));
    // 0x37b930: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x37b930u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
    // 0x37b934: 0x24130003  addiu       $s3, $zero, 0x3
    ctx->pc = 0x37b934u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x37b938: 0x7fb60030  sq          $s6, 0x30($sp)
    ctx->pc = 0x37b938u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 22));
    // 0x37b93c: 0x2414001d  addiu       $s4, $zero, 0x1D
    ctx->pc = 0x37b93cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 29));
    // 0x37b940: 0x7fb70020  sq          $s7, 0x20($sp)
    ctx->pc = 0x37b940u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 23));
    // 0x37b944: 0xb02d  daddu       $s6, $zero, $zero
    ctx->pc = 0x37b944u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37b948: 0x7fbe0010  sq          $fp, 0x10($sp)
    ctx->pc = 0x37b948u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 30));
    // 0x37b94c: 0x24170008  addiu       $s7, $zero, 0x8
    ctx->pc = 0x37b94cu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x37b950: 0x7fb10080  sq          $s1, 0x80($sp)
    ctx->pc = 0x37b950u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 17));
    // 0x37b954: 0x3c1e003f  lui         $fp, 0x3F
    ctx->pc = 0x37b954u;
    SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)63 << 16));
    // 0x37b958: 0x7fb20070  sq          $s2, 0x70($sp)
    ctx->pc = 0x37b958u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 18));
    // 0x37b95c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x37b95cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_37b960:
    // 0x37b960: 0x86020000  lh          $v0, 0x0($s0)
    ctx->pc = 0x37b960u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x37b964: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x37b964u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x37b968: 0x248427d8  addiu       $a0, $a0, 0x27D8
    ctx->pc = 0x37b968u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 10200));
    // 0x37b96c: 0x82a30027  lb          $v1, 0x27($s5)
    ctx->pc = 0x37b96cu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 21), 39)));
    // 0x37b970: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x37b970u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x37b974: 0x24120008  addiu       $s2, $zero, 0x8
    ctx->pc = 0x37b974u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x37b978: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x37b978u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x37b97c: 0x761826  xor         $v1, $v1, $s6
    ctx->pc = 0x37b97cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ GPR_U64(ctx, 22));
    // 0x37b980: 0x8c490000  lw          $t1, 0x0($v0)
    ctx->pc = 0x37b980u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x37b984: 0x2406000d  addiu       $a2, $zero, 0xD
    ctx->pc = 0x37b984u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x37b988: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x37b988u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
    // 0x37b98c: 0x132c00  sll         $a1, $s3, 16
    ctx->pc = 0x37b98cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 19), 16));
    // 0x37b990: 0x243300b  movn        $a2, $s2, $v1
    ctx->pc = 0x37b990u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 18));
    // 0x37b994: 0x52c03  sra         $a1, $a1, 16
    ctx->pc = 0x37b994u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 5), 16));
    // 0x37b998: 0x2447be90  addiu       $a3, $v0, -0x4170
    ctx->pc = 0x37b998u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 4294950544));
    // 0x37b99c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x37b99cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37b9a0: 0x2c0402d  daddu       $t0, $s6, $zero
    ctx->pc = 0x37b9a0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37b9a4: 0xc0b837a  jal         func_2E0DE8
    ctx->pc = 0x37B9A4u;
    SET_GPR_U32(ctx, 31, 0x37B9ACu);
    ctx->pc = 0x37B9A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37B9A4u;
    // 0x37b9a8: 0x2412000f  addiu       $s2, $zero, 0xF (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E0DE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E0DE8u, 0x37B9A4u, 0x37B9ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37B9ACu;
label_37b9ac:
    // 0x37b9ac: 0x82a20027  lb          $v0, 0x27($s5)
    ctx->pc = 0x37b9acu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 21), 39)));
    // 0x37b9b0: 0x26650002  addiu       $a1, $s3, 0x2
    ctx->pc = 0x37b9b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 2));
    // 0x37b9b4: 0x52c00  sll         $a1, $a1, 16
    ctx->pc = 0x37b9b4u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 16));
    // 0x37b9b8: 0x86080000  lh          $t0, 0x0($s0)
    ctx->pc = 0x37b9b8u;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x37b9bc: 0x561026  xor         $v0, $v0, $s6
    ctx->pc = 0x37b9bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 22));
    // 0x37b9c0: 0x52c03  sra         $a1, $a1, 16
    ctx->pc = 0x37b9c0u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 5), 16));
    // 0x37b9c4: 0x2e2900a  movz        $s2, $s7, $v0
    ctx->pc = 0x37b9c4u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 18, GPR_VEC(ctx, 23));
    // 0x37b9c8: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x37b9c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37b9cc: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x37b9ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
    // 0x37b9d0: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x37b9d0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37b9d4: 0x2447bea0  addiu       $a3, $v0, -0x4160
    ctx->pc = 0x37b9d4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 4294950560));
    // 0x37b9d8: 0xc0b837a  jal         func_2E0DE8
    ctx->pc = 0x37B9D8u;
    SET_GPR_U32(ctx, 31, 0x37B9E0u);
    ctx->pc = 0x37B9DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37B9D8u;
    // 0x37b9dc: 0x240882d  daddu       $s1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E0DE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E0DE8u, 0x37B9D8u, 0x37B9E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37B9E0u;
label_37b9e0:
    // 0x37b9e0: 0x26650003  addiu       $a1, $s3, 0x3
    ctx->pc = 0x37b9e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 3));
    // 0x37b9e4: 0x96080002  lhu         $t0, 0x2($s0)
    ctx->pc = 0x37b9e4u;
    SET_GPR_ZE32(ctx, 8, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 2)));
    // 0x37b9e8: 0x52c00  sll         $a1, $a1, 16
    ctx->pc = 0x37b9e8u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 16));
    // 0x37b9ec: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x37b9ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
    // 0x37b9f0: 0x52c03  sra         $a1, $a1, 16
    ctx->pc = 0x37b9f0u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 5), 16));
    // 0x37b9f4: 0x2447beb0  addiu       $a3, $v0, -0x4150
    ctx->pc = 0x37b9f4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 4294950576));
    // 0x37b9f8: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x37b9f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37b9fc: 0xc0b837a  jal         func_2E0DE8
    ctx->pc = 0x37B9FCu;
    SET_GPR_U32(ctx, 31, 0x37BA04u);
    ctx->pc = 0x37BA00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37B9FCu;
    // 0x37ba00: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E0DE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E0DE8u, 0x37B9FCu, 0x37BA04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37BA04u;
label_37ba04:
    // 0x37ba04: 0x26650004  addiu       $a1, $s3, 0x4
    ctx->pc = 0x37ba04u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
    // 0x37ba08: 0x86080004  lh          $t0, 0x4($s0)
    ctx->pc = 0x37ba08u;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x37ba0c: 0x52c00  sll         $a1, $a1, 16
    ctx->pc = 0x37ba0cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 16));
    // 0x37ba10: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x37ba10u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
    // 0x37ba14: 0x52c03  sra         $a1, $a1, 16
    ctx->pc = 0x37ba14u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 5), 16));
    // 0x37ba18: 0x2447bec0  addiu       $a3, $v0, -0x4140
    ctx->pc = 0x37ba18u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 4294950592));
    // 0x37ba1c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x37ba1cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37ba20: 0xc0b837a  jal         func_2E0DE8
    ctx->pc = 0x37BA20u;
    SET_GPR_U32(ctx, 31, 0x37BA28u);
    ctx->pc = 0x37BA24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37BA20u;
    // 0x37ba24: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E0DE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E0DE8u, 0x37BA20u, 0x37BA28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37BA28u;
label_37ba28:
    // 0x37ba28: 0x26650005  addiu       $a1, $s3, 0x5
    ctx->pc = 0x37ba28u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 5));
    // 0x37ba2c: 0x86080006  lh          $t0, 0x6($s0)
    ctx->pc = 0x37ba2cu;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 6)));
    // 0x37ba30: 0x52c00  sll         $a1, $a1, 16
    ctx->pc = 0x37ba30u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 16));
    // 0x37ba34: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x37ba34u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
    // 0x37ba38: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x37ba38u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37ba3c: 0x52c03  sra         $a1, $a1, 16
    ctx->pc = 0x37ba3cu;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 5), 16));
    // 0x37ba40: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x37ba40u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37ba44: 0xc0b837a  jal         func_2E0DE8
    ctx->pc = 0x37BA44u;
    SET_GPR_U32(ctx, 31, 0x37BA4Cu);
    ctx->pc = 0x37BA48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37BA44u;
    // 0x37ba48: 0x2447bed0  addiu       $a3, $v0, -0x4130 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 4294950608));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E0DE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E0DE8u, 0x37BA44u, 0x37BA4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37BA4Cu;
label_37ba4c:
    // 0x37ba4c: 0x16570006  bne         $s2, $s7, . + 4 + (0x6 << 2)
    ctx->pc = 0x37BA4Cu;
    {
        const bool branch_taken_0x37ba4c = (GPR_U64(ctx, 18) != GPR_U64(ctx, 23));
        ctx->pc = 0x37BA50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37BA4Cu;
        // 0x37ba50: 0x26650006  addiu       $a1, $s3, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37ba4c) {
            ctx->pc = 0x37BA68u;
            goto label_37ba68;
        }
    }
    ctx->pc = 0x37BA54u;
    // 0x37ba54: 0x96020000  lhu         $v0, 0x0($s0)
    ctx->pc = 0x37ba54u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x37ba58: 0x2411000f  addiu       $s1, $zero, 0xF
    ctx->pc = 0x37ba58u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x37ba5c: 0x2442fff9  addiu       $v0, $v0, -0x7
    ctx->pc = 0x37ba5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967289));
    // 0x37ba60: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x37ba60u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x37ba64: 0x242880b  movn        $s1, $s2, $v0
    ctx->pc = 0x37ba64u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 17, GPR_VEC(ctx, 18));
label_37ba68:
    // 0x37ba68: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x37ba68u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
    // 0x37ba6c: 0x86080008  lh          $t0, 0x8($s0)
    ctx->pc = 0x37ba6cu;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x37ba70: 0x52c00  sll         $a1, $a1, 16
    ctx->pc = 0x37ba70u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 16));
    // 0x37ba74: 0x52c03  sra         $a1, $a1, 16
    ctx->pc = 0x37ba74u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 5), 16));
    // 0x37ba78: 0x2447bee0  addiu       $a3, $v0, -0x4120
    ctx->pc = 0x37ba78u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 4294950624));
    // 0x37ba7c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x37ba7cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37ba80: 0xc0b837a  jal         func_2E0DE8
    ctx->pc = 0x37BA80u;
    SET_GPR_U32(ctx, 31, 0x37BA88u);
    ctx->pc = 0x37BA84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37BA80u;
    // 0x37ba84: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E0DE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E0DE8u, 0x37BA80u, 0x37BA88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37BA88u;
label_37ba88:
    // 0x37ba88: 0x26650007  addiu       $a1, $s3, 0x7
    ctx->pc = 0x37ba88u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 7));
    // 0x37ba8c: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x37ba8cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
    // 0x37ba90: 0x52c00  sll         $a1, $a1, 16
    ctx->pc = 0x37ba90u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 16));
    // 0x37ba94: 0x8608000a  lh          $t0, 0xA($s0)
    ctx->pc = 0x37ba94u;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 10)));
    // 0x37ba98: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x37ba98u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37ba9c: 0x52c03  sra         $a1, $a1, 16
    ctx->pc = 0x37ba9cu;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 5), 16));
    // 0x37baa0: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x37baa0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37baa4: 0xc0b837a  jal         func_2E0DE8
    ctx->pc = 0x37BAA4u;
    SET_GPR_U32(ctx, 31, 0x37BAACu);
    ctx->pc = 0x37BAA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37BAA4u;
    // 0x37baa8: 0x2447bef0  addiu       $a3, $v0, -0x4110 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 4294950640));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E0DE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E0DE8u, 0x37BAA4u, 0x37BAACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37BAACu;
label_37baac:
    // 0x37baac: 0x8e030010  lw          $v1, 0x10($s0)
    ctx->pc = 0x37baacu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x37bab0: 0x54600003  bnel        $v1, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x37BAB0u;
    {
        const bool branch_taken_0x37bab0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x37bab0) {
            ctx->pc = 0x37BAB4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x37BAB0u;
            // 0x37bab4: 0x8e02000c  lw          $v0, 0xC($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x37BAC0u;
            goto label_37bac0;
        }
    }
    ctx->pc = 0x37BAB8u;
    // 0x37bab8: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x37BAB8u;
    {
        const bool branch_taken_0x37bab8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x37BABCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37BAB8u;
        // 0x37babc: 0x8e11000c  lw          $s1, 0xC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37bab8) {
            ctx->pc = 0x37BAC8u;
            goto label_37bac8;
        }
    }
    ctx->pc = 0x37BAC0u;
label_37bac0:
    // 0x37bac0: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x37bac0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x37bac4: 0x24510001  addiu       $s1, $v0, 0x1
    ctx->pc = 0x37bac4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_37bac8:
    // 0x37bac8: 0x26650008  addiu       $a1, $s3, 0x8
    ctx->pc = 0x37bac8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 8));
    // 0x37bacc: 0x8e080010  lw          $t0, 0x10($s0)
    ctx->pc = 0x37baccu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x37bad0: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x37bad0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
    // 0x37bad4: 0x52c00  sll         $a1, $a1, 16
    ctx->pc = 0x37bad4u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 16));
    // 0x37bad8: 0x52c03  sra         $a1, $a1, 16
    ctx->pc = 0x37bad8u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 5), 16));
    // 0x37badc: 0x2447bf00  addiu       $a3, $v0, -0x4100
    ctx->pc = 0x37badcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 4294950656));
    // 0x37bae0: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x37bae0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37bae4: 0xc0b837a  jal         func_2E0DE8
    ctx->pc = 0x37BAE4u;
    SET_GPR_U32(ctx, 31, 0x37BAECu);
    ctx->pc = 0x37BAE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37BAE4u;
    // 0x37bae8: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E0DE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E0DE8u, 0x37BAE4u, 0x37BAECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37BAECu;
label_37baec:
    // 0x37baec: 0x26d60001  addiu       $s6, $s6, 0x1
    ctx->pc = 0x37baecu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
    // 0x37baf0: 0x26650009  addiu       $a1, $s3, 0x9
    ctx->pc = 0x37baf0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 9));
    // 0x37baf4: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x37baf4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
    // 0x37baf8: 0x52c00  sll         $a1, $a1, 16
    ctx->pc = 0x37baf8u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 16));
    // 0x37bafc: 0x2447bf18  addiu       $a3, $v0, -0x40E8
    ctx->pc = 0x37bafcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 4294950680));
    // 0x37bb00: 0x52c03  sra         $a1, $a1, 16
    ctx->pc = 0x37bb00u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 5), 16));
    // 0x37bb04: 0x220402d  daddu       $t0, $s1, $zero
    ctx->pc = 0x37bb04u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37bb08: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x37bb08u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37bb0c: 0xc0b837a  jal         func_2E0DE8
    ctx->pc = 0x37BB0Cu;
    SET_GPR_U32(ctx, 31, 0x37BB14u);
    ctx->pc = 0x37BB10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37BB0Cu;
    // 0x37bb10: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E0DE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E0DE8u, 0x37BB0Cu, 0x37BB14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37BB14u;
label_37bb14:
    // 0x37bb14: 0x2665000a  addiu       $a1, $s3, 0xA
    ctx->pc = 0x37bb14u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 10));
    // 0x37bb18: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x37bb18u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
    // 0x37bb1c: 0x8e08000c  lw          $t0, 0xC($s0)
    ctx->pc = 0x37bb1cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x37bb20: 0x52c00  sll         $a1, $a1, 16
    ctx->pc = 0x37bb20u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 16));
    // 0x37bb24: 0x2447bf30  addiu       $a3, $v0, -0x40D0
    ctx->pc = 0x37bb24u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 4294950704));
    // 0x37bb28: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x37bb28u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37bb2c: 0x52c03  sra         $a1, $a1, 16
    ctx->pc = 0x37bb2cu;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 5), 16));
    // 0x37bb30: 0xc0b837a  jal         func_2E0DE8
    ctx->pc = 0x37BB30u;
    SET_GPR_U32(ctx, 31, 0x37BB38u);
    ctx->pc = 0x37BB34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37BB30u;
    // 0x37bb34: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E0DE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E0DE8u, 0x37BB30u, 0x37BB38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37BB38u;
label_37bb38:
    // 0x37bb38: 0x2673000c  addiu       $s3, $s3, 0xC
    ctx->pc = 0x37bb38u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 12));
    // 0x37bb3c: 0x2ac20002  slti        $v0, $s6, 0x2
    ctx->pc = 0x37bb3cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 22) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x37bb40: 0x1440ff87  bnez        $v0, . + 4 + (-0x79 << 2)
    ctx->pc = 0x37BB40u;
    {
        const bool branch_taken_0x37bb40 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x37BB44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37BB40u;
        // 0x37bb44: 0x26100020  addiu       $s0, $s0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37bb40) {
            ctx->pc = 0x37B960u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_37b960;
        }
    }
    ctx->pc = 0x37BB48u;
    // 0x37bb48: 0x82a30028  lb          $v1, 0x28($s5)
    ctx->pc = 0x37bb48u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 21), 40)));
    // 0x37bb4c: 0x24020014  addiu       $v0, $zero, 0x14
    ctx->pc = 0x37bb4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x37bb50: 0x82b20027  lb          $s2, 0x27($s5)
    ctx->pc = 0x37bb50u;
    SET_GPR_S32(ctx, 18, (int8_t)READ8(ADD32(GPR_U32(ctx, 21), 39)));
    // 0x37bb54: 0x24110078  addiu       $s1, $zero, 0x78
    ctx->pc = 0x37bb54u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 120));
    // 0x37bb58: 0x621818  mult        $v1, $v1, $v0
    ctx->pc = 0x37bb58u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x37bb5c: 0x2404000c  addiu       $a0, $zero, 0xC
    ctx->pc = 0x37bb5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x37bb60: 0x2518818  mult        $s1, $s2, $s1
    ctx->pc = 0x37bb60u;
    { int64_t result = (int64_t)GPR_S32(ctx, 18) * (int64_t)GPR_S32(ctx, 17); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 17, (int32_t)result); }
    // 0x37bb64: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x37bb64u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x37bb68: 0x244226e8  addiu       $v0, $v0, 0x26E8
    ctx->pc = 0x37bb68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 9960));
    // 0x37bb6c: 0x2449018  mult        $s2, $s2, $a0
    ctx->pc = 0x37bb6cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 18) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 18, (int32_t)result); }
    // 0x37bb70: 0x3c070046  lui         $a3, 0x46
    ctx->pc = 0x37bb70u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)70 << 16));
    // 0x37bb74: 0x2404001b  addiu       $a0, $zero, 0x1B
    ctx->pc = 0x37bb74u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 27));
    // 0x37bb78: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x37bb78u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x37bb7c: 0x24e7bf48  addiu       $a3, $a3, -0x40B8
    ctx->pc = 0x37bb7cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294950728));
    // 0x37bb80: 0x2238821  addu        $s1, $s1, $v1
    ctx->pc = 0x37bb80u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
    // 0x37bb84: 0x2406000c  addiu       $a2, $zero, 0xC
    ctx->pc = 0x37bb84u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x37bb88: 0x96250006  lhu         $a1, 0x6($s1)
    ctx->pc = 0x37bb88u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 6)));
    // 0x37bb8c: 0x26520003  addiu       $s2, $s2, 0x3
    ctx->pc = 0x37bb8cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 3));
    // 0x37bb90: 0x27d02800  addiu       $s0, $fp, 0x2800
    ctx->pc = 0x37bb90u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 30), 10240));
    // 0x37bb94: 0xb22821  addu        $a1, $a1, $s2
    ctx->pc = 0x37bb94u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 18)));
    // 0x37bb98: 0x52c00  sll         $a1, $a1, 16
    ctx->pc = 0x37bb98u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 16));
    // 0x37bb9c: 0xc0b837a  jal         func_2E0DE8
    ctx->pc = 0x37BB9Cu;
    SET_GPR_U32(ctx, 31, 0x37BBA4u);
    ctx->pc = 0x37BBA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37BB9Cu;
    // 0x37bba0: 0x52c03  sra         $a1, $a1, 16 (Delay Slot)
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 5), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E0DE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E0DE8u, 0x37BB9Cu, 0x37BBA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37BBA4u;
label_37bba4:
    // 0x37bba4: 0x96250006  lhu         $a1, 0x6($s1)
    ctx->pc = 0x37bba4u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 6)));
    // 0x37bba8: 0x3c070046  lui         $a3, 0x46
    ctx->pc = 0x37bba8u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)70 << 16));
    // 0x37bbac: 0x24e7bf50  addiu       $a3, $a3, -0x40B0
    ctx->pc = 0x37bbacu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294950736));
    // 0x37bbb0: 0x2404002c  addiu       $a0, $zero, 0x2C
    ctx->pc = 0x37bbb0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 44));
    // 0x37bbb4: 0xb22821  addu        $a1, $a1, $s2
    ctx->pc = 0x37bbb4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 18)));
    // 0x37bbb8: 0x2406000c  addiu       $a2, $zero, 0xC
    ctx->pc = 0x37bbb8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x37bbbc: 0x52c00  sll         $a1, $a1, 16
    ctx->pc = 0x37bbbcu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 16));
    // 0x37bbc0: 0xc0b837a  jal         func_2E0DE8
    ctx->pc = 0x37BBC0u;
    SET_GPR_U32(ctx, 31, 0x37BBC8u);
    ctx->pc = 0x37BBC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37BBC0u;
    // 0x37bbc4: 0x52c03  sra         $a1, $a1, 16 (Delay Slot)
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 5), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E0DE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E0DE8u, 0x37BBC0u, 0x37BBC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37BBC8u;
label_37bbc8:
    // 0x37bbc8: 0x86220006  lh          $v0, 0x6($s1)
    ctx->pc = 0x37bbc8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 6)));
    // 0x37bbcc: 0x240300e0  addiu       $v1, $zero, 0xE0
    ctx->pc = 0x37bbccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 224));
    // 0x37bbd0: 0x24070160  addiu       $a3, $zero, 0x160
    ctx->pc = 0x37bbd0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 352));
    // 0x37bbd4: 0xa6030008  sh          $v1, 0x8($s0)
    ctx->pc = 0x37bbd4u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 8), (uint16_t)GPR_U32(ctx, 3));
    // 0x37bbd8: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x37bbd8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x37bbdc: 0xa607000c  sh          $a3, 0xC($s0)
    ctx->pc = 0x37bbdcu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 12), (uint16_t)GPR_U32(ctx, 7));
    // 0x37bbe0: 0x298c0  sll         $s3, $v0, 3
    ctx->pc = 0x37bbe0u;
    SET_GPR_S32(ctx, 19, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x37bbe4: 0x3c058000  lui         $a1, 0x8000
    ctx->pc = 0x37bbe4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)32768 << 16));
    // 0x37bbe8: 0x26620008  addiu       $v0, $s3, 0x8
    ctx->pc = 0x37bbe8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 8));
    // 0x37bbec: 0xa6130002  sh          $s3, 0x2($s0)
    ctx->pc = 0x37bbecu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 2), (uint16_t)GPR_U32(ctx, 19));
    // 0x37bbf0: 0xa602000e  sh          $v0, 0xE($s0)
    ctx->pc = 0x37bbf0u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 14), (uint16_t)GPR_U32(ctx, 2));
    // 0x37bbf4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x37bbf4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37bbf8: 0xa6130006  sh          $s3, 0x6($s0)
    ctx->pc = 0x37bbf8u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 6), (uint16_t)GPR_U32(ctx, 19));
    // 0x37bbfc: 0x34a56060  ori         $a1, $a1, 0x6060
    ctx->pc = 0x37bbfcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)24672);
    // 0x37bc00: 0xa7c32800  sh          $v1, 0x2800($fp)
    ctx->pc = 0x37bc00u;
    WRITE16(ADD32(GPR_U32(ctx, 30), 10240), (uint16_t)GPR_U32(ctx, 3));
    // 0x37bc04: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x37bc04u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37bc08: 0xa6070004  sh          $a3, 0x4($s0)
    ctx->pc = 0x37bc08u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 4), (uint16_t)GPR_U32(ctx, 7));
    // 0x37bc0c: 0x1298c0  sll         $s3, $s2, 3
    ctx->pc = 0x37bc0cu;
    SET_GPR_S32(ctx, 19, (int32_t)SLL32(GPR_U32(ctx, 18), 3));
    // 0x37bc10: 0xc0c72e0  jal         func_31CB80
    ctx->pc = 0x37BC10u;
    SET_GPR_U32(ctx, 31, 0x37BC18u);
    ctx->pc = 0x37BC14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37BC10u;
    // 0x37bc14: 0xa602000a  sh          $v0, 0xA($s0) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 16), 10), (uint16_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31CB80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31CB80u, 0x37BC10u, 0x37BC18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37BC18u;
label_37bc18:
    // 0x37bc18: 0x240200d4  addiu       $v0, $zero, 0xD4
    ctx->pc = 0x37bc18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 212));
    // 0x37bc1c: 0x2668005c  addiu       $t0, $s3, 0x5C
    ctx->pc = 0x37bc1cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 19), 92));
    // 0x37bc20: 0xa7c22800  sh          $v0, 0x2800($fp)
    ctx->pc = 0x37bc20u;
    WRITE16(ADD32(GPR_U32(ctx, 30), 10240), (uint16_t)GPR_U32(ctx, 2));
    // 0x37bc24: 0x2663fffc  addiu       $v1, $s3, -0x4
    ctx->pc = 0x37bc24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967292));
    // 0x37bc28: 0x24070194  addiu       $a3, $zero, 0x194
    ctx->pc = 0x37bc28u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 404));
    // 0x37bc2c: 0x3c058000  lui         $a1, 0x8000
    ctx->pc = 0x37bc2cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)32768 << 16));
    // 0x37bc30: 0xa6030006  sh          $v1, 0x6($s0)
    ctx->pc = 0x37bc30u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 6), (uint16_t)GPR_U32(ctx, 3));
    // 0x37bc34: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x37bc34u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37bc38: 0xa6020008  sh          $v0, 0x8($s0)
    ctx->pc = 0x37bc38u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 8), (uint16_t)GPR_U32(ctx, 2));
    // 0x37bc3c: 0x34a56000  ori         $a1, $a1, 0x6000
    ctx->pc = 0x37bc3cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)24576);
    // 0x37bc40: 0xa607000c  sh          $a3, 0xC($s0)
    ctx->pc = 0x37bc40u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 12), (uint16_t)GPR_U32(ctx, 7));
    // 0x37bc44: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x37bc44u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37bc48: 0xa608000e  sh          $t0, 0xE($s0)
    ctx->pc = 0x37bc48u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 14), (uint16_t)GPR_U32(ctx, 8));
    // 0x37bc4c: 0xa6030002  sh          $v1, 0x2($s0)
    ctx->pc = 0x37bc4cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 2), (uint16_t)GPR_U32(ctx, 3));
    // 0x37bc50: 0xa6070004  sh          $a3, 0x4($s0)
    ctx->pc = 0x37bc50u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 4), (uint16_t)GPR_U32(ctx, 7));
    // 0x37bc54: 0xc0c72e0  jal         func_31CB80
    ctx->pc = 0x37BC54u;
    SET_GPR_U32(ctx, 31, 0x37BC5Cu);
    ctx->pc = 0x37BC58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37BC54u;
    // 0x37bc58: 0xa608000a  sh          $t0, 0xA($s0) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 16), 10), (uint16_t)GPR_U32(ctx, 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31CB80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31CB80u, 0x37BC54u, 0x37BC5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37BC5Cu;
label_37bc5c:
    // 0x37bc5c: 0x7bb00090  lq          $s0, 0x90($sp)
    ctx->pc = 0x37bc5cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x37bc60: 0x7bb10080  lq          $s1, 0x80($sp)
    ctx->pc = 0x37bc60u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x37bc64: 0x7bb20070  lq          $s2, 0x70($sp)
    ctx->pc = 0x37bc64u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x37bc68: 0x7bb30060  lq          $s3, 0x60($sp)
    ctx->pc = 0x37bc68u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x37bc6c: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x37bc6cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x37bc70: 0x7bb50040  lq          $s5, 0x40($sp)
    ctx->pc = 0x37bc70u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x37bc74: 0x7bb60030  lq          $s6, 0x30($sp)
    ctx->pc = 0x37bc74u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x37bc78: 0x7bb70020  lq          $s7, 0x20($sp)
    ctx->pc = 0x37bc78u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x37bc7c: 0x7bbe0010  lq          $fp, 0x10($sp)
    ctx->pc = 0x37bc7cu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x37bc80: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x37bc80u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x37bc84: 0x3e00008  jr          $ra
    ctx->pc = 0x37BC84u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x37BC88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37BC84u;
        // 0x37bc88: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x37BC84u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x37BC8Cu;
    // 0x37bc8c: 0x0  nop
    ctx->pc = 0x37bc8cu;
    // NOP
    ctx->pc = 0x37bc90u;
}
